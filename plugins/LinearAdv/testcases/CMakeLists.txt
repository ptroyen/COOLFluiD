cf_add_case( MPI 8       CASEDIR Advect3D PCASE cube2-coarse-tetra.CFcase CASEFILES cube2-coarse-tetra.SP cube2-coarse-tetra.thor )
cf_add_case( MPI 8       CASEDIR Advect3D PCASE cube2-coarse-tetraFVM.CFcase CASEFILES cube2-coarse-tetra.SP cube2-coarse-tetra.thor )
cf_add_case( MPI 8       CASEDIR Advect3D PCASE cube2-coarse-tetraFVMImpl.CFcase CASEFILES cube2-coarse-tetra.SP cube2-coarse-tetra.thor )
cf_add_case( MPI 8       CASEDIR Advect3D PCASE cube2-coarse-hybrid.CFcase CASEFILES cube2-coarse-fullhybrid.SP cube2-coarse-fullhybrid.thor )
cf_add_case( MPI 8       CASEDIR Advect3D PCASE cube2-coarse-hybridFVMImpl.CFcase CASEFILES cube2-coarse-fullhybrid.SP cube2-coarse-fullhybrid.thor ) 
cf_add_case( MPI 8       CASEDIR AdvectSinusWave PCASE advectSWFVM.CFcase CASEFILES advectSW.SP advectSW.thor ) 
cf_add_case( MPI 8       CASEDIR AdvectSinusWave PCASE advectSWImpl_2meshdata.CFcase CASEFILES advectSW.SP advectSW.thor )
cf_add_case( MPI 8       CASEDIR AdvecDiff PCASE advectdiffSWFSCRD.CFcase CASEFILES square_400n.SP square_400n.thor )
cf_add_case( MPI 8       CASEDIR AdvecDiff PCASE advectdiffSWFVM.CFcase CASEFILES square_400n.SP square_400n.thor )
cf_add_case( MPI 8       CASEDIR AdvecDiff PCASE advectdiffSWFVMImpl.CFcase CASEFILES square_400n.SP square_400n.thor )
cf_add_case( MPI 8       CASEDIR AdvecDiff PCASE advectdiffSWFVMImplBDF2.CFcase CASEFILES square_400n.SP square_400n.thor )

#cf_add_case( MPI default PCASE AdvecDiff/advectdiffSWFSCRD.CFcase )
#cf_add_case( MPI default PCASE AdvecDiff/advectdiffSWFSHOCRD.CFcase )
#cf_add_case( MPI 1       PCASE AdvecDiff/unstadvectdiff-STKT.CFcase )
#cf_add_case( MPI 1       PCASE AdvectSinusWave/advectFS_Remeshing.CFcase )
#cf_add_case( MPI 1       PCASE AdvectSinusWave/advectFS_RemeshingQD.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectFVM_Remeshing.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFS_2meshdata.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFS.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFSCRD.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFSCRD-QD.CFcase )
#cf_add_case( MPI 1       PCASE AdvectSinusWave/advectSWFSImpl.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFSImpl_SpaceTime2Layer.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFSImpl_SpaceTime.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectsw_fsm_interactive.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWFSQD.CFcase )
#cf_add_case( MPI 1       PCASE AdvectSinusWave/advectSWFVM.CFcase )
#cf_add_case( MPI 1       PCASE AdvectSinusWave/advectSWImpl_2meshdata.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWImpl_FEMMove2.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWImpl_FEMMove3.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSWImpl_FEMMove.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/advectSW_Jets2D_2meshdata.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/extruder2D.CFcase )
#3cf_add_case( MPI default PCASE AdvectSinusWave/extruder2DQD.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/openDX.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/restart.CFcase )
#cf_add_case( MPI 1       PCASE AdvectSinusWave/restartFVM.CFcase )
#cf_add_case( MPI default PCASE AdvectSinusWave/splitter2D.CFcase )
#cf_add_case( MPI default PCASE Channel3D/channel3DFluctSplit.CFcase )
#cf_add_case( MPI default PCASE CosHill/const_linear_adv_stm.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_source_STMCRD.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_source_STM_HOCRD.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_source_STM_RDS.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_source_STUSTKS.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_source_STUSTKT.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_STKT_HOCRD.CFcase )
#cf_add_case( MPI 1       PCASE CosHill/linear_adv_STU.CFcase )
#cf_add_case( MPI default PCASE SinusWave/sinus_wave_fsm_crd_p2.CFcase )
#cf_add_case( MPI 1       PCASE SinusWave/sinus_wave_fsm_periodic.CFcase )
#cf_add_case( MPI 1       PCASE SinusWave/sinus_wave_fsm_periodic_impl.CFcase )
#cf_add_case( MPI default PCASE SinusWave/sinus_wave_fsm_write_thetas.CFcase )
