__global__ void assemble_boundary_accel_on_device(float * d_accel, const float * d_send_accel_buffer, const int num_interfaces, const int max_nibool_interfaces, const int * d_nibool_interfaces, const int * d_ibool_interfaces);
__global__ void assemble_boundary_potential_on_device(float * d_potential_dot_dot_acoustic, const float * d_send_potential_dot_dot_buffer, const int num_interfaces, const int max_nibool_interfaces, const int * d_nibool_interfaces, const int * d_ibool_interfaces);
__global__ void compute_acoustic_kernel(const int * ibool, const float * rhostore, const float * kappastore, const float * hprime_xx, const float * d_xix, const float * d_xiy, const float * d_xiz, const float * d_etax, const float * d_etay, const float * d_etaz, const float * d_gammax, const float * d_gammay, const float * d_gammaz, const float * potential_dot_dot_acoustic, const float * b_potential_acoustic, const float * b_potential_dot_dot_acoustic, float * rho_ac_kl, float * kappa_ac_kl, const float deltat, const int NSPEC);
__global__ void compute_add_sources_adjoint_kernel(float * accel, const int nrec, const float * adj_sourcearrays, const int * ibool, const int * ispec_selected_rec, const int * pre_computed_irec, const int nadj_rec_local);
__global__ void compute_add_sources_kernel(float * accel, const int * ibool, const float * sourcearrays, const double * stf_pre_compute, const int myrank, const int * islice_selected_source, const int * ispec_selected_source, const int NSOURCES);
__global__ void compute_ani_kernel(const float * epsilondev_xx, const float * epsilondev_yy, const float * epsilondev_xy, const float * epsilondev_xz, const float * epsilondev_yz, const float * epsilon_trace_over_3, const float * b_epsilondev_xx, const float * b_epsilondev_yy, const float * b_epsilondev_xy, const float * b_epsilondev_xz, const float * b_epsilondev_yz, const float * b_epsilon_trace_over_3, float * cijkl_kl, const int NSPEC, const float deltat);
__global__ void compute_ani_undoatt_kernel(const float * epsilondev_xx, const float * epsilondev_yy, const float * epsilondev_xy, const float * epsilondev_xz, const float * epsilondev_yz, const float * epsilon_trace_over_3, float * cijkl_kl, const int NSPEC, const float deltat, const int * d_ibool, const float * d_b_displ, const float * d_xix, const float * d_xiy, const float * d_xiz, const float * d_etax, const float * d_etay, const float * d_etaz, const float * d_gammax, const float * d_gammay, const float * d_gammaz, const float * d_hprime_xx);
__global__ void compute_coupling_CMB_fluid_kernel(const float * displ_crust_mantle, float * accel_crust_mantle, const float * accel_outer_core, const int * ibool_crust_mantle, const int * ibelm_bottom_crust_mantle, const float * normal_top_outer_core, const float * jacobian2D_top_outer_core, const float * wgllwgll_xy, const int * ibool_outer_core, const int * ibelm_top_outer_core, const float RHO_TOP_OC, const float minus_g_cmb, const int GRAVITY, const int NSPEC2D_BOTTOM_CM);
__global__ void compute_coupling_ICB_fluid_kernel(const float * displ_inner_core, float * accel_inner_core, const float * accel_outer_core, const int * ibool_inner_core, const int * ibelm_top_inner_core, const float * normal_bottom_outer_core, const float * jacobian2D_bottom_outer_core, const float * wgllwgll_xy, const int * ibool_outer_core, const int * ibelm_bottom_outer_core, const float RHO_BOTTOM_OC, const float minus_g_icb, const int GRAVITY, const int NSPEC2D_TOP_IC);
__global__ void compute_coupling_fluid_CMB_kernel(const float * displ_crust_mantle, float * accel_outer_core, const int * ibool_crust_mantle, const int * ibelm_bottom_crust_mantle, const float * normal_top_outer_core, const float * jacobian2D_top_outer_core, const float * wgllwgll_xy, const int * ibool_outer_core, const int * ibelm_top_outer_core, const int NSPEC2D_TOP_OC);
__global__ void compute_coupling_fluid_ICB_kernel(const float * displ_inner_core, float * accel_outer_core, const int * ibool_inner_core, const int * ibelm_top_inner_core, const float * normal_bottom_outer_core, const float * jacobian2D_bottom_outer_core, const float * wgllwgll_xy, const int * ibool_outer_core, const int * ibelm_bottom_outer_core, const int NSPEC2D_BOTTOM_OC);
__global__ void compute_coupling_ocean_kernel(float * accel_crust_mantle, const float * rmassx_crust_mantle, const float * rmassy_crust_mantle, const float * rmassz_crust_mantle, const float * rmass_ocean_load, const int npoin_ocean_load, const int * ibool_ocean_load, const float * normal_ocean_load);
__global__ void compute_hess_kernel(const int * ibool, const float * accel, const float * b_accel, float * hess_kl, const float deltat, const int NSPEC_AB);
__global__ void compute_iso_kernel(const float * epsilondev_xx, const float * epsilondev_yy, const float * epsilondev_xy, const float * epsilondev_xz, const float * epsilondev_yz, const float * epsilon_trace_over_3, const float * b_epsilondev_xx, const float * b_epsilondev_yy, const float * b_epsilondev_xy, const float * b_epsilondev_xz, const float * b_epsilondev_yz, const float * b_epsilon_trace_over_3, float * mu_kl, float * kappa_kl, const int NSPEC, const float deltat);
__global__ void compute_iso_undoatt_kernel(const float * epsilondev_xx, const float * epsilondev_yy, const float * epsilondev_xy, const float * epsilondev_xz, const float * epsilondev_yz, const float * epsilon_trace_over_3, float * mu_kl, float * kappa_kl, const int NSPEC, const float deltat, const int * d_ibool, const float * d_b_displ, const float * d_xix, const float * d_xiy, const float * d_xiz, const float * d_etax, const float * d_etay, const float * d_etaz, const float * d_gammax, const float * d_gammay, const float * d_gammaz, const float * d_hprime_xx);
__global__ void compute_rho_kernel(const int * ibool, const float * accel, const float * b_displ, float * rho_kl, const int NSPEC, const float deltat);
__global__ void compute_stacey_acoustic_backward_kernel(float * b_potential_dot_dot_acoustic, const float * b_absorb_potential, const int interface_type, const int num_abs_boundary_faces, const int * abs_boundary_ispec, const int * nkmin_xi, const int * nkmin_eta, const int * njmin, const int * njmax, const int * nimin, const int * nimax, const int * ibool);
__global__ void compute_stacey_acoustic_kernel(const float * potential_dot_acoustic, float * potential_dot_dot_acoustic, const int interface_type, const int num_abs_boundary_faces, const int * abs_boundary_ispec, const int * nkmin_xi, const int * nkmin_eta, const int * njmin, const int * njmax, const int * nimin, const int * nimax, const float * abs_boundary_jacobian2D, const float * wgllwgll, const int * ibool, const float * vpstore, const int SAVE_STACEY, float * b_absorb_potential);
__global__ void compute_stacey_elastic_backward_kernel(float * b_accel, const float * b_absorb_field, const int interface_type, const int num_abs_boundary_faces, const int * abs_boundary_ispec, const int * nkmin_xi, const int * nkmin_eta, const int * njmin, const int * njmax, const int * nimin, const int * nimax, const int * ibool);
__global__ void compute_stacey_elastic_kernel(const float * veloc, float * accel, const int interface_type, const int num_abs_boundary_faces, const int * abs_boundary_ispec, const int * nkmin_xi, const int * nkmin_eta, const int * njmin, const int * njmax, const int * nimin, const int * nimax, const float * abs_boundary_normal, const float * abs_boundary_jacobian2D, const float * wgllwgll, const int * ibool, const float * rho_vp, const float * rho_vs, const int SAVE_STACEY, float * b_absorb_field);
__global__ void compute_strain_kernel(const float * d_displ, const float * d_veloc, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int NSPEC, const int NSPEC_STRAIN_ONLY, const float deltat, const int * d_ibool, const float * d_xix, const float * d_xiy, const float * d_xiz, const float * d_etax, const float * d_etay, const float * d_etaz, const float * d_gammax, const float * d_gammay, const float * d_gammaz, const float * d_hprime_xx);
__global__ void compute_strength_noise_kernel(const float * displ, const int * ibelm_top, const int * ibool, const float * noise_surface_movie, const float * normal_x_noise, const float * normal_y_noise, const float * normal_z_noise, float * Sigma_kl, const float deltat, const int nspec_top);
__global__ 
#ifdef USE_LAUNCH_BOUNDS
__launch_bounds__(NGLL3_PADDED, LAUNCH_MIN_BLOCKS)
#endif
 void crust_mantle_impl_kernel_adjoint(const int nb_blocks_to_compute, const int * d_ibool, const int * d_ispec_is_tiso, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const float deltat, const int use_mesh_coloring_gpu, const float * __restrict__ d_displ, float * d_accel, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ d_wgllwgll_xy, const float * __restrict__ d_wgllwgll_xz, const float * __restrict__ d_wgllwgll_yz, const float * __restrict__ d_kappavstore, const float * __restrict__ d_muvstore, const float * __restrict__ d_kappahstore, const float * __restrict__ d_muhstore, const float * __restrict__ d_eta_anisostore, const int COMPUTE_AND_STORE_STRAIN, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int ATTENUATION, const int PARTIAL_PHYS_DISPERSION_ONLY, const int USE_3D_ATTENUATION_ARRAYS, const float * __restrict__ one_minus_sum_beta, const float * __restrict__ factor_common, float * R_xx, float * R_yy, float * R_xy, float * R_xz, float * R_yz, const float * __restrict__ alphaval, const float * __restrict__ betaval, const float * __restrict__ gammaval, const int ANISOTROPY, const float * __restrict__ d_c11store, const float * __restrict__ d_c12store, const float * __restrict__ d_c13store, const float * __restrict__ d_c14store, const float * __restrict__ d_c15store, const float * __restrict__ d_c16store, const float * __restrict__ d_c22store, const float * __restrict__ d_c23store, const float * __restrict__ d_c24store, const float * __restrict__ d_c25store, const float * __restrict__ d_c26store, const float * __restrict__ d_c33store, const float * __restrict__ d_c34store, const float * __restrict__ d_c35store, const float * __restrict__ d_c36store, const float * __restrict__ d_c44store, const float * __restrict__ d_c45store, const float * __restrict__ d_c46store, const float * __restrict__ d_c55store, const float * __restrict__ d_c56store, const float * __restrict__ d_c66store, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_minus_gravity_table, const float * __restrict__ d_minus_deriv_gravity_table, const float * __restrict__ d_density_table, const float * __restrict__ wgll_cube, const int NSPEC_CRUST_MANTLE_STRAIN_ONLY);
__global__ 
#ifdef USE_LAUNCH_BOUNDS
__launch_bounds__(NGLL3_PADDED, LAUNCH_MIN_BLOCKS)
#endif
 void crust_mantle_impl_kernel_forward(const int nb_blocks_to_compute, const int * d_ibool, const int * d_ispec_is_tiso, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const float deltat, const int use_mesh_coloring_gpu, const float * __restrict__ d_displ, float * d_accel, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ d_wgllwgll_xy, const float * __restrict__ d_wgllwgll_xz, const float * __restrict__ d_wgllwgll_yz, const float * __restrict__ d_kappavstore, const float * __restrict__ d_muvstore, const float * __restrict__ d_kappahstore, const float * __restrict__ d_muhstore, const float * __restrict__ d_eta_anisostore, const int COMPUTE_AND_STORE_STRAIN, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int ATTENUATION, const int PARTIAL_PHYS_DISPERSION_ONLY, const int USE_3D_ATTENUATION_ARRAYS, const float * __restrict__ one_minus_sum_beta, const float * __restrict__ factor_common, float * R_xx, float * R_yy, float * R_xy, float * R_xz, float * R_yz, const float * __restrict__ alphaval, const float * __restrict__ betaval, const float * __restrict__ gammaval, const int ANISOTROPY, const float * __restrict__ d_c11store, const float * __restrict__ d_c12store, const float * __restrict__ d_c13store, const float * __restrict__ d_c14store, const float * __restrict__ d_c15store, const float * __restrict__ d_c16store, const float * __restrict__ d_c22store, const float * __restrict__ d_c23store, const float * __restrict__ d_c24store, const float * __restrict__ d_c25store, const float * __restrict__ d_c26store, const float * __restrict__ d_c33store, const float * __restrict__ d_c34store, const float * __restrict__ d_c35store, const float * __restrict__ d_c36store, const float * __restrict__ d_c44store, const float * __restrict__ d_c45store, const float * __restrict__ d_c46store, const float * __restrict__ d_c55store, const float * __restrict__ d_c56store, const float * __restrict__ d_c66store, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_minus_gravity_table, const float * __restrict__ d_minus_deriv_gravity_table, const float * __restrict__ d_density_table, const float * __restrict__ wgll_cube, const int NSPEC_CRUST_MANTLE_STRAIN_ONLY);
__global__ void get_maximum_scalar_kernel(const float * array, const int size, float * d_max);
__global__ void get_maximum_vector_kernel(const float * array, const int size, float * d_max);
__global__ 
#ifdef USE_LAUNCH_BOUNDS
__launch_bounds__(NGLL3_PADDED, LAUNCH_MIN_BLOCKS)
#endif
 void inner_core_impl_kernel_adjoint(const int nb_blocks_to_compute, const int * d_ibool, const int * d_idoubling, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const float deltat, const int use_mesh_coloring_gpu, const float * __restrict__ d_displ, float * d_accel, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ d_wgllwgll_xy, const float * __restrict__ d_wgllwgll_xz, const float * __restrict__ d_wgllwgll_yz, const float * __restrict__ d_kappavstore, const float * __restrict__ d_muvstore, const int COMPUTE_AND_STORE_STRAIN, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int ATTENUATION, const int PARTIAL_PHYS_DISPERSION_ONLY, const int USE_3D_ATTENUATION_ARRAYS, const float * __restrict__ one_minus_sum_beta, const float * __restrict__ factor_common, float * R_xx, float * R_yy, float * R_xy, float * R_xz, float * R_yz, const float * __restrict__ alphaval, const float * __restrict__ betaval, const float * __restrict__ gammaval, const int ANISOTROPY, const float * __restrict__ d_c11store, const float * __restrict__ d_c12store, const float * __restrict__ d_c13store, const float * __restrict__ d_c33store, const float * __restrict__ d_c44store, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_minus_gravity_table, const float * __restrict__ d_minus_deriv_gravity_table, const float * __restrict__ d_density_table, const float * __restrict__ wgll_cube, const int NSPEC_INNER_CORE_STRAIN_ONLY, const int NSPEC_INNER_CORE);
__global__ 
#ifdef USE_LAUNCH_BOUNDS
__launch_bounds__(NGLL3_PADDED, LAUNCH_MIN_BLOCKS)
#endif
 void inner_core_impl_kernel_forward(const int nb_blocks_to_compute, const int * d_ibool, const int * d_idoubling, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const float deltat, const int use_mesh_coloring_gpu, const float * __restrict__ d_displ, float * d_accel, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ d_wgllwgll_xy, const float * __restrict__ d_wgllwgll_xz, const float * __restrict__ d_wgllwgll_yz, const float * __restrict__ d_kappavstore, const float * __restrict__ d_muvstore, const int COMPUTE_AND_STORE_STRAIN, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int ATTENUATION, const int PARTIAL_PHYS_DISPERSION_ONLY, const int USE_3D_ATTENUATION_ARRAYS, const float * __restrict__ one_minus_sum_beta, const float * __restrict__ factor_common, float * R_xx, float * R_yy, float * R_xy, float * R_xz, float * R_yz, const float * __restrict__ alphaval, const float * __restrict__ betaval, const float * __restrict__ gammaval, const int ANISOTROPY, const float * __restrict__ d_c11store, const float * __restrict__ d_c12store, const float * __restrict__ d_c13store, const float * __restrict__ d_c33store, const float * __restrict__ d_c44store, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_minus_gravity_table, const float * __restrict__ d_minus_deriv_gravity_table, const float * __restrict__ d_density_table, const float * __restrict__ wgll_cube, const int NSPEC_INNER_CORE_STRAIN_ONLY, const int NSPEC_INNER_CORE);
__global__ void noise_add_source_master_rec_kernel(const int * ibool, const int * ispec_selected_rec, const int irec_master_noise, float * accel, const float * noise_sourcearray, const int it);
__global__ void noise_add_surface_movie_kernel(float * accel, const int * ibool, const int * ibelm_top, const int nspec_top, const float * noise_surface_movie, const float * normal_x_noise, const float * normal_y_noise, const float * normal_z_noise, const float * mask_noise, const float * jacobian2D, const float * wgllwgll);
__global__ void noise_transfer_surface_to_host_kernel(const int * ibelm_top, const int nspec_top, const int * ibool, const float * displ, float * noise_surface_movie);
__global__ void outer_core_impl_kernel_adjoint(const int nb_blocks_to_compute, const int * d_ibool, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const int use_mesh_coloring_gpu, const float * __restrict__ d_potential, float * d_potential_dot_dot, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ wgllwgll_xy, const float * __restrict__ wgllwgll_xz, const float * __restrict__ wgllwgll_yz, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_d_ln_density_dr_table, const float * __restrict__ d_minus_rho_g_over_kappa_fluid, const float * __restrict__ wgll_cube, const int ROTATION, const float time, const float two_omega_earth, const float deltat, float * d_A_array_rotation, float * d_B_array_rotation, const int NSPEC_OUTER_CORE);
__global__ void outer_core_impl_kernel_forward(const int nb_blocks_to_compute, const int * d_ibool, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const int use_mesh_coloring_gpu, const float * __restrict__ d_potential, float * d_potential_dot_dot, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ wgllwgll_xy, const float * __restrict__ wgllwgll_xz, const float * __restrict__ wgllwgll_yz, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_d_ln_density_dr_table, const float * __restrict__ d_minus_rho_g_over_kappa_fluid, const float * __restrict__ wgll_cube, const int ROTATION, const float time, const float two_omega_earth, const float deltat, float * d_A_array_rotation, float * d_B_array_rotation, const int NSPEC_OUTER_CORE);
__global__ void prepare_boundary_accel_on_device(const float * d_accel, float * d_send_accel_buffer, const int num_interfaces, const int max_nibool_interfaces, const int * d_nibool_interfaces, const int * d_ibool_interfaces);
__global__ void prepare_boundary_potential_on_device(const float * d_potential_dot_dot_acoustic, float * d_send_potential_dot_dot_buffer, const int num_interfaces, const int max_nibool_interfaces, const int * d_nibool_interfaces, const int * d_ibool_interfaces);
__global__ void resort_array(float * old_array, const int NSPEC);
__global__ void update_accel_acoustic_kernel(float * accel, const int size, const float * rmass);
__global__ void update_accel_elastic_kernel(float * accel, const float * veloc, const int size, const float two_omega_earth, const float * rmassx, const float * rmassy, const float * rmassz);
__global__ void update_disp_veloc_kernel(float * displ, float * veloc, float * accel, const int size, const float deltat, const float deltatsqover2, const float deltatover2);
__global__ void update_potential_kernel(float * potential_acoustic, float * potential_dot_acoustic, float * potential_dot_dot_acoustic, const int size, const float deltat, const float deltatsqover2, const float deltatover2);
__global__ void update_veloc_acoustic_kernel(float * veloc, const float * accel, const int size, const float deltatover2);
__global__ void update_veloc_elastic_kernel(float * veloc, const float * accel, const int size, const float deltatover2);
__global__ void write_seismograms_transfer_from_device_kernel(const int * number_receiver_global, const int * ispec_selected_rec, const int * ibool, float * station_seismo_field, const float * d_field, const int nrec_local);
__global__ void write_seismograms_transfer_strain_from_device_kernel(const int * number_receiver_global, const int * ispec_selected_rec, const int * ibool, float * station_strain_field, const float * d_field, const int nrec_local);

#if GPU_ELEM_PER_THREAD != 1
#error "Preprocessor macro mesh_constants_gpu.h::GPU-ELEM_PER_THREAD (GPU_ELEM_PER_THREAD) is different from BOAST's value (1)."
#endif

// typedef-definitions for function pointers

typedef void (*outer_core_impl_kernel) (const int nb_blocks_to_compute, const int * d_ibool, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const int use_mesh_coloring_gpu, const float * __restrict__ d_potential, float * d_potential_dot_dot, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ wgllwgll_xy, const float * __restrict__ wgllwgll_xz, const float * __restrict__ wgllwgll_yz, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_d_ln_density_dr_table, const float * __restrict__ d_minus_rho_g_over_kappa_fluid, const float * __restrict__ wgll_cube, const int ROTATION, const float time, const float two_omega_earth, const float deltat, float * d_A_array_rotation, float * d_B_array_rotation, const int NSPEC_OUTER_CORE) ;

typedef void (*inner_core_impl_kernel) (const int nb_blocks_to_compute, const int * d_ibool, const int * d_idoubling, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const float deltat, const int use_mesh_coloring_gpu, const float * __restrict__ d_displ, float * d_accel, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ d_wgllwgll_xy, const float * __restrict__ d_wgllwgll_xz, const float * __restrict__ d_wgllwgll_yz, const float * __restrict__ d_kappavstore, const float * __restrict__ d_muvstore, const int COMPUTE_AND_STORE_STRAIN, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int ATTENUATION, const int PARTIAL_PHYS_DISPERSION_ONLY, const int USE_3D_ATTENUATION_ARRAYS, const float * __restrict__ one_minus_sum_beta, const float * __restrict__ factor_common, float * R_xx, float * R_yy, float * R_xy, float * R_xz, float * R_yz, const float * __restrict__ alphaval, const float * __restrict__ betaval, const float * __restrict__ gammaval, const int ANISOTROPY, const float * __restrict__ d_c11store, const float * __restrict__ d_c12store, const float * __restrict__ d_c13store, const float * __restrict__ d_c33store, const float * __restrict__ d_c44store, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_minus_gravity_table, const float * __restrict__ d_minus_deriv_gravity_table, const float * __restrict__ d_density_table, const float * __restrict__ wgll_cube, const int NSPEC_INNER_CORE_STRAIN_ONLY, const int NSPEC_INNER_CORE) ;

typedef void (*crust_mantle_impl_kernel) (const int nb_blocks_to_compute, const int * d_ibool, const int * d_ispec_is_tiso, const int * d_phase_ispec_inner, const int num_phase_ispec, const int d_iphase, const float deltat, const int use_mesh_coloring_gpu, const float * __restrict__ d_displ, float * d_accel, const float * __restrict__ d_xix, const float * __restrict__ d_xiy, const float * __restrict__ d_xiz, const float * __restrict__ d_etax, const float * __restrict__ d_etay, const float * __restrict__ d_etaz, const float * __restrict__ d_gammax, const float * __restrict__ d_gammay, const float * __restrict__ d_gammaz, const float * __restrict__ d_hprime_xx, const float * __restrict__ d_hprimewgll_xx, const float * __restrict__ d_wgllwgll_xy, const float * __restrict__ d_wgllwgll_xz, const float * __restrict__ d_wgllwgll_yz, const float * __restrict__ d_kappavstore, const float * __restrict__ d_muvstore, const float * __restrict__ d_kappahstore, const float * __restrict__ d_muhstore, const float * __restrict__ d_eta_anisostore, const int COMPUTE_AND_STORE_STRAIN, float * epsilondev_xx, float * epsilondev_yy, float * epsilondev_xy, float * epsilondev_xz, float * epsilondev_yz, float * epsilon_trace_over_3, const int ATTENUATION, const int PARTIAL_PHYS_DISPERSION_ONLY, const int USE_3D_ATTENUATION_ARRAYS, const float * __restrict__ one_minus_sum_beta, const float * __restrict__ factor_common, float * R_xx, float * R_yy, float * R_xy, float * R_xz, float * R_yz, const float * __restrict__ alphaval, const float * __restrict__ betaval, const float * __restrict__ gammaval, const int ANISOTROPY, const float * __restrict__ d_c11store, const float * __restrict__ d_c12store, const float * __restrict__ d_c13store, const float * __restrict__ d_c14store, const float * __restrict__ d_c15store, const float * __restrict__ d_c16store, const float * __restrict__ d_c22store, const float * __restrict__ d_c23store, const float * __restrict__ d_c24store, const float * __restrict__ d_c25store, const float * __restrict__ d_c26store, const float * __restrict__ d_c33store, const float * __restrict__ d_c34store, const float * __restrict__ d_c35store, const float * __restrict__ d_c36store, const float * __restrict__ d_c44store, const float * __restrict__ d_c45store, const float * __restrict__ d_c46store, const float * __restrict__ d_c55store, const float * __restrict__ d_c56store, const float * __restrict__ d_c66store, const int GRAVITY, const float * __restrict__ d_rstore, const float * __restrict__ d_minus_gravity_table, const float * __restrict__ d_minus_deriv_gravity_table, const float * __restrict__ d_density_table, const float * __restrict__ wgll_cube, const int NSPEC_CRUST_MANTLE_STRAIN_ONLY) ;

