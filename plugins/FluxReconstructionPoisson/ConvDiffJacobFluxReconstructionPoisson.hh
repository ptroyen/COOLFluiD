// Copyright (C) 2022 KU Leuven CmPA, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#ifndef COOLFluiD_FluxReconstructionMethod_ConvDiffJacobFluxReconstructionPoisson_hh
#define COOLFluiD_FluxReconstructionMethod_ConvDiffJacobFluxReconstructionPoisson_hh

//////////////////////////////////////////////////////////////////////////////

#include "FluxReconstructionNavierStokes/ConvDiffJacobFluxReconstructionNS.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {
    
    namespace Physics {
    namespace Poisson {
      class PoissonDiffVarSet;
      class PoissonConvVarSet;
    }
  }

    
  namespace FluxReconstructionMethod {

//////////////////////////////////////////////////////////////////////////////

/**
 * This class represents a command that computes the contribution of the 
 * convective, diffusive to the RHS for a Flux Reconstruction scheme for implicit 
 * time marching for Poisson
 * 
 * @author Ray Vandenhoeck
 */
class ConvDiffJacobFluxReconstructionPoisson : public ConvDiffJacobFluxReconstructionNS {

public: // functions

  /// Constructor
  explicit ConvDiffJacobFluxReconstructionPoisson(const std::string& name);

  /// Destructor
  virtual ~ConvDiffJacobFluxReconstructionPoisson() {}
  
  /**
   * Configures the command.
   */
  virtual void configure ( Config::ConfigArgs& args );
  
  /**
   * Set up private data and data of the aggregated classes
   * in this command before processing phase
   */
  virtual void setup();
  
  /// Returns the DataSocket's that this command provides as sources
  /// @return a vector of SafePtr with the DataSockets
  virtual std::vector< Common::SafePtr< Framework::BaseDataSocketSource > >
    providesSockets();
  
  /// Execute processing actions
  virtual void execute();
  
protected: //functions
  
  /// compute the interface flux
  virtual void computeInterfaceFlxCorrection();
  
  /// compute the Riemann flux to gradient jacobian numerically
  virtual void computeRiemannFluxToGradJacobianNum(const CFreal resFactor);
  
  /**
   * compute the wave speed updates for this face
   * @pre reconstructFluxPntsStates(), reconstructFaceAvgState(),
   *      setFaceTermData() and set the geometrical data of the face
   */
  void computeWaveSpeedUpdates(std::vector< CFreal >& waveSpeedUpd);
  
  /**
   * Compute the discontinuous contribution to the corrected gradients
   */
  virtual void computeGradients();
  
  /**
   * Compute the correction part of the corrected gradient
   */
  virtual void computeGradientFaceCorrections();
  
  /// compute the Riemann flux jacobian numerically
  virtual void computeRiemannFluxJacobianNum(const CFreal resFactor);
  
  /// compute the gradient variables to state jacobians numerically
  virtual void computeGradVarsToStateJacobianNum();
  
  /// prepare the computation of the diffusive flux
  void prepareFluxComputation();
  
  /**
   * compute the unperturbed cell diffusive residuals
   * @pre m_faceTermComputers->computeDiffFaceTermAndUpdateCoefContributions
   * @pre setCellsData()
   */
  virtual void computeUnpertCellDiffResiduals(const CFuint side);
  
  /**
   * compute the contribution of the diffusive face term to both Jacobians
   */
  void computeBothJacobsDiffFaceTerm();

  /**
   * compute the contribution of the diffusive face term to one Jacobians
   */
  void computeOneJacobDiffFaceTerm(const CFuint side);
  
  /// compute the cell flux jacobian numerically
  virtual void computeCellFluxJacobianNum(const CFreal resFactor);
  
protected: // data
  
  Common::SafePtr<Physics::Poisson::PoissonDiffVarSet> m_diffVarSetPoisson;
  Common::SafePtr<Physics::Poisson::PoissonConvVarSet> m_convVarSetPoisson;
  
  /// storage for Bx
  Framework::DataSocketSource<CFreal> socket_Bx;
  
  /// storage for By
  Framework::DataSocketSource<CFreal> socket_By;
  
  /// storage for Bz
  Framework::DataSocketSource<CFreal> socket_Bz;
  
  /// storage for Br
  Framework::DataSocketSource<CFreal> socket_Br;
  
  /// storage for Btheta
  Framework::DataSocketSource<CFreal> socket_Btheta;
  
  /// storage for Bphi
  Framework::DataSocketSource<CFreal> socket_Bphi;
  
  
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

#endif // COOLFluiD_FluxReconstructionMethod_ConvDiffJacobFluxReconstructionPoisson_hh
