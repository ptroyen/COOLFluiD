// Copyright (C) 2016 KU Leuven, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#include "Framework/MethodStrategyProvider.hh"

#include "FluxReconstructionMethod/FluxReconstruction.hh"
#include "FluxReconstructionMethod/BasePointDistribution.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace FluxReconstructionMethod {

//////////////////////////////////////////////////////////////////////////////

BasePointDistribution::BasePointDistribution(const std::string& name) :
  FluxReconstructionSolverStrategy(name)
{
  CFAUTOTRACE;
}

//////////////////////////////////////////////////////////////////////////////

BasePointDistribution::~BasePointDistribution()
{
  CFAUTOTRACE;
}

//////////////////////////////////////////////////////////////////////////////

void BasePointDistribution::setup()
{
  CFAUTOTRACE;
  
  // setup parent class
  FluxReconstructionSolverStrategy::setup();
}

//////////////////////////////////////////////////////////////////////////////

void BasePointDistribution::unsetup()
{
  CFAUTOTRACE;
  
  // unsetup parent class
  FluxReconstructionSolverStrategy::unsetup();
}

//////////////////////////////////////////////////////////////////////////////

  }  // namespace FluxReconstructionMethod

}  // namespace COOLFluiD

