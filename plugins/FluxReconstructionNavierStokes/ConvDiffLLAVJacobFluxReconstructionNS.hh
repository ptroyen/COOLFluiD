// Copyright (C) 2016 KU Leuven, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#ifndef COOLFluiD_FluxReconstructionMethod_ConvDiffLLAVJacobFluxReconstructionNS_hh
#define COOLFluiD_FluxReconstructionMethod_ConvDiffLLAVJacobFluxReconstructionNS_hh

//////////////////////////////////////////////////////////////////////////////

#include "FluxReconstructionMethod/ConvDiffLLAVJacobFluxReconstruction.hh"
#include "NavierStokes/NavierStokesVarSet.hh"

#include "Framework/MultiScalarTerm.hh"

#include "NavierStokes/MultiScalarVarSet.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {
    
    namespace Physics {
    namespace NavierStokes {
      class EulerVarSet;
      class EulerTerm;
      class Euler2DVarSet;
    }
  }
    
  namespace FluxReconstructionMethod {

//////////////////////////////////////////////////////////////////////////////

/**
 * This class represents a command that computes the contribution of the 
 * convective, diffusive and LLAV tems to the RHS for a Flux Reconstruction scheme for implicit 
 * time marching for NS
 * 
 * @author Ray Vandenhoeck
 */
class ConvDiffLLAVJacobFluxReconstructionNS : public ConvDiffLLAVJacobFluxReconstruction {

public: // functions

  /// Constructor
  explicit ConvDiffLLAVJacobFluxReconstructionNS(const std::string& name);

  /// Destructor
  virtual ~ConvDiffLLAVJacobFluxReconstructionNS() {}
  
  /**
   * Configures the command.
   */
  virtual void configure ( Config::ConfigArgs& args );
  
  /**
   * Set up private data and data of the aggregated classes
   * in this command before processing phase
   */
  virtual void setup();

protected: //functions

  /**
   * compute the wave speed updates for this face
   * @pre reconstructFluxPntsStates(), reconstructFaceAvgState(),
   *      setFaceTermData() and set the geometrical data of the face
   */
  void computeWaveSpeedUpdates(std::vector< CFreal >& waveSpeedUpd);
  
  /**
   * compute the terms for the gradient computation for a bnd face
   */
  virtual void computeBndGradTerms(RealMatrix& gradTerm, RealMatrix& ghostGradTerm);
  
  /**
   * compute the term for the gradient computation for the cell
   */
  virtual void computeCellGradTerm(RealMatrix& gradTerm);
  
  /**
   * compute the terms for the gradient computation for a face
   */
  virtual void computeFaceGradTerms(RealMatrix& gradTermL, RealMatrix& gradTermR);
  
  /// prepare the computation of the diffusive flux
  void prepareFluxComputation();
  
  /// compute the interface flux
  virtual void computeInterfaceFlxCorrection();
  
  /**
   * Compute the discontinuous contribution to the corrected gradients
   */
  virtual void computeGradients();
  
  /**
   * Compute the correction part of the corrected gradient
   */
  virtual void computeGradientFaceCorrections();
  
  /**
   * Compute the smoothness indicator
   */
  virtual void computeSmoothness();
  
  /**
   * Compute the smoothness indicator
   */
  virtual void computeSmoothness(const CFuint side);
  
  /**
   * Compute the reference artificial viscosity
   */
  virtual void computeEpsilon0();
  
  /**
   * Compute the reference artificial viscosity
   */
  virtual void computeEpsilon0(const CFuint side);
  
  /// compute the Riemann flux jacobian numerically
  virtual void computeRiemannFluxJacobianNum(const CFreal resFactor);
  
  /// compute the Riemann flux to gradient jacobian numerically
  virtual void computeRiemannFluxToGradJacobianNum(const CFreal resFactor);
  
  /// compute the gradient variables to state jacobians numerically
  virtual void computeGradVarsToStateJacobianNum();
  
  /// compute the AV to state Jacobian
  virtual void computeEpsToStateJacobianAna();
  
protected: // data
    
  /// matrix to store the state terms needed for the gradients (p, u, v, T) inside element
  RealMatrix m_tempGradTerm;
    
  /// matrix to store the state terms needed for the gradients (p, u, v, T) for left neighbor
  RealMatrix m_tempGradTermL;
  
  /// matrix to store the state terms needed for the gradients (p, u, v, T) for right neighbor
  RealMatrix m_tempGradTermR;
  
  /// diffusive variable set
  Common::SafePtr< Physics::NavierStokes::NavierStokesVarSet > m_diffusiveVarSetNS;
    
  /// element states of the left neighbor in the correct format
  std::vector< RealVector* > m_tempStatesL;
  
  /// element states of the right neighbor in the correct format
  std::vector< RealVector* > m_tempStatesR;
  
  /// extra element states of the left neighbor in the correct format
  std::vector< RealVector* > m_tempStatesL2;
  
  /// extra element states of the right neighbor in the correct format
  std::vector< RealVector* > m_tempStatesR2;
  
  /// extra element states of the cell in the correct format
  std::vector< RealVector* > m_tempStatesCell;
  
  /// physical model
  Common::SafePtr<Physics::NavierStokes::EulerVarSet> m_eulerVarSet;
  
  /// physical model MS
  Common::SafePtr< Framework::MultiScalarTerm< Physics::NavierStokes::EulerTerm > > m_msEulerTerm;
  
  /// number of species
  CFuint m_nbrSpecies;
  
  /// physical model (in conservative variables)
  Common::SafePtr< Physics::NavierStokes::MultiScalarVarSet< Physics::NavierStokes::Euler2DVarSet > > m_eulerVarSet2;
  
  /// matrix to store the state terms needed for the gradients (p, u, v, T) inside element for the jacobian computation
  RealMatrix m_tempGradTermJacob;
  
  /// element states of the left neighbor in the correct format for the jacobian computation
  std::vector< RealVector* > m_tempStatesJacob;
  
  /// matrix to store the state terms needed for the gradients (p, u, v, T) inside element for the jacobian computation
  RealMatrix m_tempGradTermJacob2;
  
  /// element states of the left neighbor in the correct format for the jacobian computation
  std::vector< RealVector* > m_tempStatesJacob2;
  
  /// unperturbed grad vars
  RealVector m_unpertGradVars;
  
  /// perturbed grad vars
  RealVector m_pertGradVars;
  
  private:

  /// Physical data temporary vector
  RealVector m_pData;
  /// Physical data temporary vector
  RealVector m_pData2;
    
}; // class Solve

//////////////////////////////////////////////////////////////////////////////

  }  // namespace FluxReconstructionMethod
}  // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFluiD_FluxReconstructionMethod_ConvDiffLLAVJacobFluxReconstructionNS_hh
