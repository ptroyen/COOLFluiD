IF ( NOT CF_HAVE_SINGLE_EXEC ) 
SET ( MYLIBNAME "FiniteVolume" )
ELSE () 
SET ( MYLIBNAME "coolfluid-solver" )
ENDIF()

LIST ( APPEND FiniteVolume_files
AUSMFluxALE.ci
AUSMFluxALE.hh
BarthJesp.cxx
BarthJesp.hh
BDF2ALEPrepare.cxx
BDF2ALEPrepare.hh
BDF2ALESetup.cxx
BDF2ALESetup.hh
BDF2ALEUnSetup.cxx
BDF2ALEUnSetup.hh
BDF2ALEUpdate.cxx
BDF2ALEUpdate.hh
CellCenterFVM.cxx
CellCenterFVMData.cxx
CellCenterFVMData.hh
CellCenterFVM.hh
CellData.hh
CentredFlux.cxx
CentredFlux.hh
ComputeBFieldCom.cxx
ComputeBFieldCom.hh
ComputeDiffusiveFlux.cxx
ComputeDiffusiveFlux.hh
ComputeFaceBVertexNeighbors.cxx
ComputeFaceBVertexNeighbors.hh
ComputeFaceEdgeNeighbors.cxx
ComputeFaceEdgeNeighbors.hh
ComputeFaceNeighbors.cxx
ComputeFaceNeighbors.hh
ComputeFaceVertexNeighbors.cxx
ComputeFaceVertexNeighbors.hh
ComputeFaceVertexNeighborsPlusGhost.cxx
ComputeFaceVertexNeighborsPlusGhost.hh
ComputeFieldFromPotential.cxx
ComputeFieldFromPotential.hh
ComputeSourceTermFVMCC.cxx
ComputeSourceTermFVMCC.hh
ComputeVariablesDerivatives.cxx
ComputeVariablesDerivatives.hh
ComputeStencil.cxx
ComputeStencil.hh
ConstantSourceTerm.cxx
ConstantSourceTerm.hh
ConstantPolyRec.cxx
ConstantPolyRec.hh
#ConstantPolyRecLin.cxx
#ConstantPolyRecLin.hh
CorrectedDerivative2D.cxx
CorrectedDerivative2D.hh
CorrectedDerivativeGG2D.cxx
CorrectedDerivativeGG2D.hh
CorrectedDerivative3D.cxx
CorrectedDerivative3D.hh
CorrectedDerivativeGG3D.cxx
CorrectedDerivativeGG3D.hh
CoupledSuperInlet_GhostFVMCC.cxx
CoupledSuperInlet_GhostFVMCC.hh
CoupledSuperInlet_NodalFVMCC.cxx
CoupledSuperInlet_NodalFVMCC.hh
CustomLimiter.hh
CustomLimiter.cxx
CustomLimiter1D.hh
CustomLimiter1D.cxx
CustomLimiter2D.hh
CustomLimiter2D.cxx
CustomLimiter3D.hh
CustomLimiter3D.cxx
DerivativeComputer.hh
DiamondVolume2DDerivative.cxx
DiamondVolume2DDerivative.hh
DiamondVolume3DDerivative.cxx
DiamondVolume3DDerivative.hh
DistanceBasedExtrapolator.cxx
DistanceBasedExtrapolatorGMove.cxx
DistanceBasedExtrapolatorGMove.hh
DistanceBasedExtrapolatorGMoveCoupled.cxx
DistanceBasedExtrapolatorGMoveCoupled.hh
DistanceBasedExtrapolatorGMoveCoupledAndNot.cxx
DistanceBasedExtrapolatorGMoveCoupledAndNot.hh
DistanceBasedExtrapolatorGMoveMultiTRS.cxx
DistanceBasedExtrapolatorGMoveMultiTRS.hh
DistanceBasedExtrapolatorMagnetogram.cxx
DistanceBasedExtrapolatorMagnetogram.hh
FileInitState.cxx
FileInitState.hh
FiniteVolume.hh
FunctionSourceTerm.cxx
FunctionSourceTerm.hh
FVMCCSparsity.cxx
FVMCCSparsity.hh
FVMCCSparsityNoBlock.cxx
FVMCCSparsityNoBlock.hh
FVMCC_ALEBDF2TimeRhs.cxx
FVMCC_ALEBDF2TimeRhs.hh
FVMCC_ALEBDF2TimeRhsCoupling.cxx
FVMCC_ALEBDF2TimeRhsCoupling.hh
FVMCC_ALETimeRhs.cxx
FVMCC_ALETimeRhs.hh
FVMCC_ALETimeRhsCoupling.cxx
FVMCC_ALETimeRhsCoupling.hh
FVMCC_BC.cxx
FVMCC_BC.hh
FVMCC_BCPeriodic.hh
FVMCC_BCPeriodic.cxx
FVMCC_BDF2TimeRhs.cxx
FVMCC_BDF2TimeRhs.hh
FVMCC_BDF2TimeRhsCoupling.cxx
FVMCC_BDF2TimeRhsCoupling.hh
FVMCC_BDF2TimeRhsLimited.cxx
FVMCC_BDF2TimeRhsLimited.hh
FVMCC_ComputeRHS.cxx
FVMCC_ComputeRHS.hh
FVMCC_ComputeRHSSingleState.cxx
FVMCC_ComputeRHSSingleState.hh
FVMCC_ComputeRhsBlockJacob.cxx
FVMCC_ComputeRhsBlockJacob.hh
FVMCC_ComputeRhsJacob.cxx
FVMCC_ComputeRhsJacob.hh
FVMCC_ComputeRhsJacobCoupling.cxx
FVMCC_ComputeRhsJacobCoupling.hh
FVMCC_ComputeRhsJacobAnalytic.cxx
FVMCC_ComputeRhsJacobAnalytic.hh
#FVMCC_ComputeRhsJacobConv.hh
#FVMCC_ComputeRhsJacobConv.cxx
#FVMCC_ComputeRhsJacobDiag.hh
#FVMCC_ComputeRhsJacobDiag.cxx
#FVMCC_ComputeRhsJacobDiagFast.hh
#FVMCC_ComputeRhsJacobDiagFast.cxx
#FVMCC_ComputeRhsJacobDiagSimple.hh
#FVMCC_ComputeRhsJacobDiagSimple.cxx
#FVMCC_ComputeRhsJacobDiagFull.hh
#FVMCC_ComputeRhsJacobDiagFull.cxx
#FVMCC_ComputeRhsJacobFastCoupling.cxx
#FVMCC_ComputeRhsJacobFastCoupling.hh
#FVMCC_ComputeRhsJacobBlockDiag.cxx
#FVMCC_ComputeRhsJacobBlockDiag.hh
FVMCC_ComputeRhsJacobFast.cxx
FVMCC_ComputeRhsJacobFast.hh
#FVMCC_ComputeRhsJacobFastSingleSys.cxx
#FVMCC_ComputeRhsJacobFastSingleSys.hh
#FVMCC_ComputeRhsJacob_Linearized.cxx
#FVMCC_ComputeRhsJacob_Linearized.hh
#FVMCC_ComputeRhsJacobSingleSys.cxx
#FVMCC_ComputeRhsJacobSingleSys.hh
#FVMCC_ComputeRhsJacobTridiag.hh
#FVMCC_ComputeRhsJacobTridiag.cxx
#FVMCC_ComputeRhsJacobTriGM.hh
#FVMCC_ComputeRhsJacobTriGM.cxx
#FVMCC_ComputeRhsJacobDiff.hh
#FVMCC_ComputeRhsJacobDiff.cxx
FVMCC_CrankNichLimComputeRhs.cxx
FVMCC_CrankNichLimComputeRhs.hh
FVMCC_EquationFilter.cxx
FVMCC_EquationFilter.hh
FVMCC_Data.hh
FVMCC_FluxSplitter.cxx
FVMCC_FluxSplitter.hh
FVMCC_GeoDataComputer.cxx
FVMCC_PolyRec.cxx
FVMCC_PolyRec.hh
#FVMCC_PolyRecLin.cxx
#FVMCC_PolyRecLin.hh
FVMCC_PseudoSteadyTimeRhs.cxx
FVMCC_PseudoSteadyTimeRhs.hh
FVMCC_PseudoSteadyTimeRhsBlockDiag.cxx
FVMCC_PseudoSteadyTimeRhsBlockDiag.hh
FVMCC_PseudoSteadyTimeRhsCoupling.cxx
FVMCC_PseudoSteadyTimeRhsCoupling.hh
FVMCC_PseudoSteadyTimeRhsDiag.cxx
FVMCC_PseudoSteadyTimeRhsDiag.hh
FVMCC_PseudoSteadyTimeRhsSingleSys.cxx
FVMCC_PseudoSteadyTimeRhsSingleSys.hh
FVMCC_PseudoSteadyTimeRhsTridiag.cxx
FVMCC_PseudoSteadyTimeRhsTridiag.hh
FVMCC_PseudoSteadyTimeRhsTriGM.cxx
FVMCC_PseudoSteadyTimeRhsTriGM.hh
FVMCC_StdComputeTimeRhsCoupling.cxx
FVMCC_StdComputeTimeRhsCoupling.hh
FVMCC_StdComputeTimeRhs.cxx
FVMCC_StdComputeTimeRhs.hh
GForceFlux.cxx
GForceFlux.hh
HLLFlux.cxx
HLLFlux.hh
HLLEFlux.ci
HLLEFlux.hh
HolmesConnellExtrapolator.cxx
HolmesConnellExtrapolator.hh
KernelData.hh
InitStateAddVar.cxx
InitStateAddVar.hh
InitState.cxx
InitState.hh
InitStateD.cxx
InitStateD.hh
InitStateInterp.cxx
InitStateInterp.hh
InitStateTorch.hh
InitStateTorch.cxx
InitStateTurb.hh
InitStateTurb.cxx
LaxFriedBCCorrFlux.cxx
LaxFriedBCCorrFlux.hh
LaxFriedCouplingFlux.cxx
LaxFriedCouplingFlux.hh
#LaxFriedFlux.cxx
#LaxFriedFlux.hh
LeastSquareP1PolyRec2D.cxx
LeastSquareP1PolyRec2D.hh
LeastSquareP1PolyRec2DBcFix.hh
LeastSquareP1PolyRec2DBcFix.cxx
#LeastSquareP1PolyRec2DLin.cxx
#LeastSquareP1PolyRec2DLin.hh
LeastSquareP1PolyRec2DPeriodic.cxx
LeastSquareP1PolyRec2DPeriodic.hh
LeastSquareP1PolyRec2DTurb.cxx
LeastSquareP1PolyRec2DTurb.hh
LeastSquareP1PolyRec3D.cxx
LeastSquareP1PolyRec3D.hh
LeastSquareP1Setup.cxx
LeastSquareP1Setup.hh
LeastSquareP1UnSetup.cxx
LeastSquareP1UnSetup.hh
MCTimeLimiter.cxx
MCTimeLimiter.hh
MeshFittingAlgorithm.cxx
MeshFittingAlgorithm.hh
MinModTimeLimiter.cxx
MinModTimeLimiter.hh
MinModATimeLimiter.cxx
MinModATimeLimiter.hh
MinModBTimeLimiter.cxx
MinModBTimeLimiter.hh
MinMod2TimeLimiter.cxx
MinMod2TimeLimiter.hh
MUSCLPolyRec.hh
MUSCLPolyRec.cxx
NSFlux.hh
NSFlux.ci
NSFluxCoupling.hh
NSFluxCoupling.ci
WMUSCLPolyRec.hh
WMUSCLPolyRec.cxx
MUSCLSetup.hh
MUSCLSetup.cxx
NeumannBC.hh
NeumannBC.cxx
NeumannBCFromFile.hh
NeumannBCFromFile.cxx
NeumannCondition.cxx
NeumannCondition.hh
NullBC.hh
NullBC.cxx
NullComputeSourceTerm.cxx
NullComputeSourceTerm.hh
NullDerivativeComputer.cxx
NullDerivativeComputer.hh
NullDiffusiveFlux.cxx
NullDiffusiveFlux.hh
NullFVMEquationSplitter.cxx
NullFVMFluxSplitter.cxx
NullFVMLimiter.cxx
NullFVMPolyRec.cxx
ShiftedPeriodicX2D.cxx
ShiftedPeriodicX2D.hh
PeriodicX2D.cxx
PeriodicX2D.hh
PeriodicX2DMPI.cxx
PeriodicX2DMPI.hh
Periodic3DMPI.cxx
Periodic3DMPI.hh
Periodic3DturboMPI.cxx
Periodic3DturboMPI.hh
PeriodicturboMPI.cxx
PeriodicturboMPI.hh
PeriodicY2D.cxx
PeriodicY2D.hh
PeriodicY2DMPI.cxx
PeriodicY2DMPI.hh
#PolyReconstructorLin.cxx
#PolyReconstructorLin.hh
QRadSetup.cxx
QRadSetup.hh
ForceSourceTerm.cxx
ForceSourceTerm.hh
RoeFluxALEBDF2.cxx
RoeFluxALEBDF2.hh
RoeFluxALE.cxx
RoeFluxALE.hh
RoeFlux.cxx
RoeFluxT.ci
RoeFluxT.cxx
RoeFluxT.hh
RoeEntropyFixFlux.cxx
RoeEntropyFixFlux.hh
RoeFlux.hh
#RoeFluxLin.cxx
#RoeFluxLin.hh
#RoeFluxLinALE.cxx
#RoeFluxLinALE.hh
RoeFluxTurb.cxx
RoeFluxTurb.hh
SimpleEdgeGraph.cxx
SimpleEdgeGraph.hh
StateDiffDerivative.cxx
StateDiffDerivative.hh
StdALEPrepare.cxx
StdALEPrepare.hh
StdALESetup.cxx
StdALESetup.hh
StdALEUnSetup.cxx
StdALEUnSetup.hh
StdALEUpdate.cxx
StdALEUpdate.hh
StdLinSetup.cxx
StdLinSetup.hh
StdSetNodalStates.cxx
StdSetNodalStates.hh
StdSetup.cxx
StdSetup.hh
StdUnSetup.cxx
StdUnSetup.hh
SteadyMeshMovementUpdate.cxx
SteadyMeshMovementUpdate.hh
SpecialSuperInlet.cxx
SpecialSuperInlet.hh
SuperbeeTimeLimiter.cxx
SuperbeeTimeLimiter.hh
SuperInlet.cxx
SuperInlet.hh
SwebyTimeLimiter.cxx
SwebyTimeLimiter.hh
TimeLimiter.hh
TimeLimiter.cxx
UnsteadySuperInlet.cxx
UnsteadySuperInlet.hh
SuperInletInterp.cxx
SuperInletInterp.hh
SuperInletProjection.cxx
SuperInletProjection.hh
SuperOutlet.cxx
SuperOutlet.hh
Venktn2D.cxx
Venktn2D.hh
Venktn3D.cxx
Venktn3D.hh
VolumeBasedExtrapolator.cxx
VolumeBasedExtrapolator.hh
WenoP1PolyRec2D.cxx
WenoP1PolyRec2D.hh
MirrorVelocity.hh
MirrorVelocity.cxx
ZeroVelocity.hh
ZeroVelocity.cxx
StdMeshFittingUpdate.cxx
StdMeshFittingUpdate.hh
StegerWarmingFlux.cxx
StegerWarmingFlux.hh
StegerWarmingFluxT.ci
StegerWarmingFluxT.hh
RoeVLPAFlux.hh
RoeVLPAFlux.cxx
RoeSAFlux.hh
RoeSAFlux.cxx
RoeSAFluxGhost.hh
RoeSAFluxGhost.cxx
SphericalDerivatives.cxx
SphericalDerivatives.hh
UpwindBiasedMUSCLPolyRec.hh
UpwindBiasedMUSCLPolyRec.cxx
)

IF (NOT CF_HAVE_CUDA)
LIST ( APPEND FiniteVolume_files
     LaxFriedFlux.cxx
     LaxFriedFlux.hh     
) 
ELSE()
EXECUTE_PROCESS(COMMAND cp LaxFriedFlux.cxx LaxFriedFlux.cu
WORKING_DIRECTORY ${COOLFluiD_SOURCE_DIR}/plugins/FiniteVolume
)
LIST ( APPEND FiniteVolume_files
     LaxFriedFlux.cu
     LaxFriedFlux.hh
) 
LIST ( APPEND ${MYLIBNAME}_includedirs ${MPI_INCLUDE_DIR} ${CUDA_INCLUDE_DIR} )
LIST ( APPEND ${MYLIBNAME}_libs ${CUDA_LIBRARIES} )
ENDIF ()

IF ( NOT CF_HAVE_SINGLE_EXEC )
LIST ( APPEND FiniteVolume_cflibs Framework ShapeFunctions )
CF_ADD_PLUGIN_LIBRARY ( FiniteVolume )
ELSE()
FOREACH (AFILE ${FiniteVolume_files} )
LIST(APPEND coolfluid-solver_files ../../plugins/FiniteVolume/${AFILE} )
ENDFOREACH(AFILE)
CF_CACHE_LIST_APPEND ( ${MYLIBNAME}_files  ${coolfluid-solver_files} )
ENDIF()

CF_WARN_ORPHAN_FILES()
