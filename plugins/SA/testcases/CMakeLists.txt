cf_add_case( MPI 8 CASEDIR FlatPlate PCASE flatPlateFRImplSA_Re1e7_P0.CFcase CASEFILES 1e7P0.CFmesh SAFlatPlate.CFmesh )
cf_add_case( MPI 8 CASEDIR FlatPlate PCASE flatPlateFRImplSA_Re1e7_P1.CFcase CASEFILES 1e7P1.CFmesh 1e7P0.CFmesh )
cf_add_case( MPI 8 CASEDIR FlatPlate PCASE flatPlateFRImplSA_Re1e7_P2.CFcase CASEFILES 1e7P1.CFmesh 1e7P2.CFmesh )
cf_add_case( MPI 8 CASEDIR FlatPlate PCASE flatPlateFRImplSA_Re1e7_P3.CFcase CASEFILES 1e7P3.CFmesh 1e7P2.CFmesh )
cf_add_case( MPI 8 CASEDIR FlatPlate PCASE flatPlateFRImplSA_Re1e7_P4.CFcase CASEFILES 1e7P3.CFmesh 1e7P4.CFmesh )
cf_add_case( MPI 8 CASEDIR Cylinder  PCASE cylinder2DSA_Re3900.CFcase CASEFILES cylinder_2D_quad.CFmesh )
cf_add_case( MPI 8 CASEDIR Cylinder  PCASE cylinder2DSA_Re3900_URANS.CFcase CASEFILES cylinder_2D_quad.CFmesh )
cf_add_case( MPI 8 CASEDIR Cylinder  PCASE cylinder3DSA_Re3900.CFcase CASEFILES cylinder_2D_quad.CFmesh )
cf_add_case( MPI 8 CASEDIR Cylinder  PCASE cylinder3DSA_Re3900_decoupled.CFcase CASEFILES cylinder_2D_quad.CFmesh )
cf_add_case( MPI 1 CASEDIR FlatPlate PCASE flatPlateFVMImplSA_dim_Re75e4_fineMesh.CFcase CASEFILES flatPlateQD5.CFmesh )
cf_add_case( MPI 8 CASEDIR FlatPlate PCASE flatPlate3DFVMImplSA_dim_Re75e4_fineMesh.CFcase CASEFILES flatPlateQD5.CFmesh )
