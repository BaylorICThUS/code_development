#include "../include/pCT_development.h"
//	#include <getopt.h>
//	#include <unistd.h>
//typedef std::tuple<configurations, std::string, PARAMETER_TYPES> PCT_PARAMS;
////typedef std::tuple<class, std::string, PARAMETER_TYPES> PCT_PARAMS;
////template<typename T> typedef std::tuple<T, std::string, PARAMETER_TYPES> PCT_PARAMS;
////extern PCT_PARAMS pct_params;
//std::vector<PCT_PARAMS> pct_params;
////PCT_PARAMS pct_params;
//std::vector<PCT_PARAMS> pct_params_vec;

//typedef std::tuple<configurations, std::string, PARAMETER_TYPES> PCT_PARAMS;
//extern std::vector<PCT_PARAMS> pct_params;
//std::vector<PCT_PARAMS> pct_params;
//std::vector<PCT_PARAMS> pct_params_vec;

struct option long_options[] =
{
    {"rand_engine", required_argument, NULL, 1},
    {"tvs_rand_engine", required_argument, NULL, 2},
    {"scan_type", required_argument, NULL, 3},
    {"file_type", required_argument, NULL, 4},
    {"data_format", required_argument, NULL, 5},
    {"image_basis", required_argument, NULL, 6},
    {"fbp_filter", required_argument, NULL, 7},
    {"endpoints_hull", required_argument, NULL, 8},
    {"x_0", required_argument, NULL, 9},
    {"endpoints_alg", required_argument, NULL, 10},
    {"endpoints_tx_mode", required_argument, NULL, 11},
    {"mlp_algorithm", required_argument, NULL, 12},
    {"projection_algorithm", required_argument, NULL, 13},
    {"recon_tx_mode", required_argument, NULL, 14},
    {"drop_tx_mode", required_argument, NULL, 15},
    {"s_curve", required_argument, NULL, 16},
    {"robust_method", required_argument, NULL, 17},
    {"run_on", required_argument, NULL, 18},
    {"testing_on", required_argument, NULL, 19},
    {"block_testing_on", required_argument, NULL, 20},
    {"s_curve_testing_on", required_argument, NULL, 21},
    {"ntvs_testing_on", required_argument, NULL, 22},
    {"overwriting_ok", required_argument, NULL, 23},
    {"exit_after_binning", required_argument, NULL, 24},
    {"exit_after_hulls", required_argument, NULL, 25},
    {"exit_after_cuts", required_argument, NULL, 26},
    {"exit_after_sinogram", required_argument, NULL, 27},
    {"exit_after_fbp", required_argument, NULL, 28},
    {"close_after_execution", required_argument, NULL, 29},
    {"debug_text_on", required_argument, NULL, 30},
    {"sample_std_dev", required_argument, NULL, 31},
    {"fbp_on", required_argument, NULL, 32},
    {"import_filtered_fbp", required_argument, NULL, 33},
    {"sc_on", required_argument, NULL, 34},
    {"msc_on", required_argument, NULL, 35},
    {"sm_on", required_argument, NULL, 36},
    {"count_0_wepls", required_argument, NULL, 37},
    {"direct_image_reconstruction", required_argument, NULL, 38},
    {"mlp_file_exists", required_argument, NULL, 39},
    {"mlp_endpoints_file_exists", required_argument, NULL, 40},
    {"input_directory", required_argument, NULL, 41},
    {"output_directory", required_argument, NULL, 42},
    {"input_folder", required_argument, NULL, 43},
    {"output_folder", required_argument, NULL, 44},
    {"binary_encoding", required_argument, NULL, 45},
    {"single_data_file", required_argument, NULL, 46},
    {"ssd_in_mm", required_argument, NULL, 47},
    {"data_in_mm", required_argument, NULL, 48},
    {"micah_sim", required_argument, NULL, 49},
    {"write_bin_wepls", required_argument, NULL, 50},
    {"write_wepl_dists", required_argument, NULL, 51},
    {"write_ssd_angles", required_argument, NULL, 52},
    {"write_sc_hull", required_argument, NULL, 53},
    {"write_msc_counts", required_argument, NULL, 54},
    {"write_msc_hull", required_argument, NULL, 55},
    {"write_sm_counts", required_argument, NULL, 56},
    {"write_sm_hull", required_argument, NULL, 57},
    {"write_fbp_image", required_argument, NULL, 58},
    {"write_fbp_hull", required_argument, NULL, 59},
    {"write_avg_fbp", required_argument, NULL, 60},
    {"write_median_fbp", required_argument, NULL, 61},
    {"write_filtered_hull", required_argument, NULL, 62},
    {"write_x_hull", required_argument, NULL, 63},
    {"write_x_0", required_argument, NULL, 64},
    {"write_x_ki", required_argument, NULL, 65},
    {"write_x", required_argument, NULL, 66},
    {"drop_block_size", required_argument, NULL, 67},
    {"threads_per_block", required_argument, NULL, 68},
    {"endpoints_per_block", required_argument, NULL, 69},
    {"histories_per_block", required_argument, NULL, 70},
    {"endpoints_per_thread", required_argument, NULL, 71},
    {"histories_per_thread", required_argument, NULL, 72},
    {"voxels_per_thread", required_argument, NULL, 73},
    {"max_gpu_histories", required_argument, NULL, 74},
    {"max_cuts_histories", required_argument, NULL, 75},
    {"max_endpoints_histories", required_argument, NULL, 76},
    {"max_intersections", required_argument, NULL, 77},
    {"gantry_angle_interval", required_argument, NULL, 78},
    {"num_scans", required_argument, NULL, 79},
    {"ssd_t_size", required_argument, NULL, 80},
    {"ssd_v_size", required_argument, NULL, 81},
    {"t_shift", required_argument, NULL, 82},
    {"u_shift", required_argument, NULL, 83},
    {"v_shift", required_argument, NULL, 84},
    {"t_bin_size", required_argument, NULL, 85},
    {"v_bin_size", required_argument, NULL, 86},
    {"angular_bin_size", required_argument, NULL, 87},
    {"sigmas_to_keep", required_argument, NULL, 88},
    {"fbp_threshold", required_argument, NULL, 89},
    {"recon_cyl_radius", required_argument, NULL, 90},
    {"slice_thickness", required_argument, NULL, 91},
    {"voxel_width", required_argument, NULL, 92},
    {"voxel_height", required_argument, NULL, 93},
    {"voxel_thickness", required_argument, NULL, 94},
    {"sc_lower_threshold", required_argument, NULL, 95},
    {"sc_upper_threshold", required_argument, NULL, 96},
    {"msc_upper_threshold", required_argument, NULL, 97},
    {"msc_lower_threshold", required_argument, NULL, 98},
    {"msc_diff_thresh", required_argument, NULL, 99},
    {"sm_lower_threshold", required_argument, NULL, 100},
    {"sm_upper_threshold", required_argument, NULL, 101},
    {"sm_scale_threshold", required_argument, NULL, 102},
    {"voxel_step_size", required_argument, NULL, 103},
    {"prime_offset", required_argument, NULL, 104},
    {"eta", required_argument, NULL, 105},
    {"method", required_argument, NULL, 106},
    {"psi_sign", required_argument, NULL, 107},
    {"lambda", required_argument, NULL, 108},
    {"iterations", required_argument, NULL, 109},
    {"ignore_short_mlp", required_argument, NULL, 110},
    {"min_mlp_length", required_argument, NULL, 111},
    {"bound_image", required_argument, NULL, 112},
    {"s_curve_on", required_argument, NULL, 113},
    {"sigmoid_steepness", required_argument, NULL, 114},
    {"sigmoid_mid_shift", required_argument, NULL, 115},
    {"dual_sided_s_curve", required_argument, NULL, 116},
    {"tvs_on", required_argument, NULL, 117},
    {"tvs_first", required_argument, NULL, 118},
    {"tvs_parallel", required_argument, NULL, 119},
    {"tvs_conditioned", required_argument, NULL, 120},
    {"tvs_min_beta", required_argument, NULL, 121},
    {"tv_threshold", required_argument, NULL, 122},
    {"alpha", required_argument, NULL, 123},
    {"ell_0", required_argument, NULL, 124},
    {"ell", required_argument, NULL, 125},
    {"beta_0", required_argument, NULL, 126},
    {"beta", required_argument, NULL, 127},
    {"n", required_argument, NULL, 128},
    {"avg_filter_fbp", required_argument, NULL, 129},
    {"avg_filter_hull", required_argument, NULL, 130},
    {"avg_filter_x_0", required_argument, NULL, 131},
    {"median_filter_fbp", required_argument, NULL, 132},
    {"median_filter_hull", required_argument, NULL, 133},
    {"median_filter_x_0", required_argument, NULL, 134},
    {"hull_avg_filter_radius", required_argument, NULL, 135},
    {"fbp_avg_filter_radius", required_argument, NULL, 136},
    {"x_0_avg_filter_radius", required_argument, NULL, 137},
    {"fbp_med_filter_radius", required_argument, NULL, 138},
    {"hull_med_filter_radius", required_argument, NULL, 139},
    {"x_0_med_filter_radius", required_argument, NULL, 140},
    {"hull_avg_filter_threshold", required_argument, NULL, 141},
    {"fbp_avg_filter_threshold", required_argument, NULL, 142},
    {"x_0_avg_filter_threshold", required_argument, NULL, 143},
    {"tested_by_string", required_argument, NULL, 144},
    {"code_owner", required_argument, NULL, 145},
    {"program_version", required_argument, NULL, 146},
    {"section_exit_string", required_argument, NULL, 147},
    {"my_recon_dir", required_argument, NULL, 148},
    {"current_git_branch", required_argument, NULL, 149},
    {"tardis_rcode_dir", required_argument, NULL, 150},
    {"perturb_A", required_argument, NULL, 151},
    {"perturbation_parameter", required_argument, NULL, 152},
    {"max_histories_2_remove", required_argument, NULL, 153},
    {"source_radius", required_argument, NULL, 154},
    {"trig_table_step", required_argument, NULL, 155},
    {"run_on_kodiak", required_argument, NULL, 156},
    {"lambda_k_type", required_argument, NULL, 157},
    {"lambda_0", required_argument, NULL, 158},
	{"lambda_m", required_argument, NULL, 159},
    {"alpha_x0", required_argument, NULL, 160},
    {"ell_0_x0", required_argument, NULL, 161},
    {"n_x0", required_argument, NULL, 162},
    {"superiorize_x_0", required_argument, NULL, 163},
    {"sabip_config", required_argument, NULL, 164},
    {"sadrop_strings", required_argument, NULL, 165},
    {"sadrop_blocks_per_string", required_argument, NULL, 166},
    //{"sadrop_string_blocks", required_argument, NULL, 166},
	{"block_ordering", required_argument, NULL, 167},
    /*{"workstation_1_hostname", required_argument, NULL, 172},
    {"workstation_2_hostname", required_argument, NULL, 173},
    {"kodiak_hostname", required_argument, NULL, 174},
    {"whartnell_hostname", required_argument, NULL, 175},
    {"whartnell_ID", required_argument, NULL, 176},
    {"jpertwee_ID", required_argument, NULL, 177},
    {"jpertwee_hostname", required_argument, NULL, 178},
    {"bash_secure_copy", required_argument, NULL, 179},
    {"bash_copy_dir", required_argument, NULL, 180},
    {"bash_copy_file", required_argument, NULL, 181},
    {"baylor_username", required_argument, NULL, 182},
    {"cluster_username", required_argument, NULL, 183},
    {"kodiak_login", required_argument, NULL, 184},
    {"whartnell_login", required_argument, NULL, 185},
    {"ptroughton_login", required_argument, NULL, 186},
    {"jpertwee_login", required_argument, NULL, 187},
    {"tbaker_login", required_argument, NULL, 188},
    {"pdavison_login", required_argument, NULL, 189},
    {"pct_path_global", required_argument, NULL, 190},
    {"pct_path_tardis", required_argument, NULL, 191},
    {"pct_data_dir", required_argument, NULL, 192},
    {"pct_code_dir", required_argument, NULL, 193},
    {"pct_recon_dir", required_argument, NULL, 194},
    {"pct_recon_path", required_argument, NULL, 195},
    {"my_data_dir", required_argument, NULL, 196},
    {"my_recon_dir", required_argument, NULL, 197},
    {"my_code_dir", required_argument, NULL, 198},
    {"ws2_code_dir", required_argument, NULL, 199},
    {"ws2_recon_dir", required_argument, NULL, 200},
    {"jpertwee_code_dir", required_argument, NULL, 201},
    {"jpertwee_recon_dir", required_argument, NULL, 202},
    {"whartnell_code_dir", required_argument, NULL, 203},
    {"whartnell_recon_dir", required_argument, NULL, 204},
    {"pct_data_folder", required_argument, NULL, 205},
    {"pct_code_folder", required_argument, NULL, 206},
    {"raw_data_folder", required_argument, NULL, 207},
    {"processed_data_folder", required_argument, NULL, 208},
    {"projection_data_folder", required_argument, NULL, 209},
    {"recon_data_folder", required_argument, NULL, 210},
    {"organized_data_folder", required_argument, NULL, 211},
    {"experimental_folder", required_argument, NULL, 212},
    {"simulated_folder", required_argument, NULL, 213},
    {"geant4_dir_prefix", required_argument, NULL, 214},
    {"topas_dir_prefix", required_argument, NULL, 215},
    {"raw_links_folder", required_argument, NULL, 216},
    {"projection_links_folder", required_argument, NULL, 217},
    {"reconstruction_folder", required_argument, NULL, 218},
    {"hostname_cmd", required_argument, NULL, 219},
    {"username_cmd", required_argument, NULL, 220},
    {"userid_cmd", required_argument, NULL, 221},
    {"groupname_cmd", required_argument, NULL, 222},
    {"groupid_cmd", required_argument, NULL, 223},
    {"groupnames_cmd", required_argument, NULL, 224},
    {"groupids_cmd", required_argument, NULL, 225},
    {"hostname_envvar", required_argument, NULL, 226},
    {"home_dir_envvar", required_argument, NULL, 227},
    {"username_envvar", required_argument, NULL, 228},
    {"userid_envvar", required_argument, NULL, 229},
    {"userid_effect_envvar", required_argument, NULL, 230},
    {"groups_envvar", required_argument, NULL, 231},
    {"ostype_envvar", required_argument, NULL, 232},
    {"path_envvar", required_argument, NULL, 233},
    {"work_dir_envvar", required_argument, NULL, 234},
    {"owner_access", required_argument, NULL, 235},
    {"group_access", required_argument, NULL, 236},
    {"global_access", required_argument, NULL, 237},
    {"input_base_name", required_argument, NULL, 238},
    {"file_extension", required_argument, NULL, 239},
    {"config_filename", required_argument, NULL, 240},
    {"config_out_filename", required_argument, NULL, 241},
    {"log_filename", required_argument, NULL, 242},
    {"stdout_filename", required_argument, NULL, 243},
    {"stdin_filename", required_argument, NULL, 244},
    {"stderr_filename", required_argument, NULL, 245},
    {"execution_times_fname", required_argument, NULL, 246},
    {"sin_table_fname", required_argument, NULL, 247},
    {"cos_table_fname", required_argument, NULL, 248},
    {"coefficient_fname", required_argument, NULL, 249},
    {"poly_1_2_fname", required_argument, NULL, 250},
    {"poly_2_3_fname", required_argument, NULL, 251},
    {"poly_3_4_fname", required_argument, NULL, 252},
    {"poly_2_6_fname", required_argument, NULL, 253},
    {"poly_3_12_fname", required_argument, NULL, 254},
    {"sc_hull_fname", required_argument, NULL, 255},
    {"msc_hull_fname", required_argument, NULL, 256},
    {"sm_hull_fname", required_argument, NULL, 257},
    {"fbp_hull_fname", required_argument, NULL, 258},
    {"sm_counts_fname", required_argument, NULL, 259},
    {"msc_counts_fname", required_argument, NULL, 260},
    {"hull_fname", required_argument, NULL, 261},
    {"hull_avg_filter_fname", required_argument, NULL, 262},
    {"hull_med_filter_fname", required_argument, NULL, 263},
    {"input_hull_fname", required_argument, NULL, 264},
    {"sinogram_fname", required_argument, NULL, 265},
    {"sinogram_pre_fname", required_argument, NULL, 266},
    {"fbp_fname", required_argument, NULL, 267},
    {"fbp_after_fname", required_argument, NULL, 268},
    {"fbp_image_filter_fname", required_argument, NULL, 269},
    {"fbp_med_filter_fname", required_argument, NULL, 270},
    {"fbp_avg_filter_filename", required_argument, NULL, 271},
    {"input_iterate_fname", required_argument, NULL, 272},
    {"import_fbp_fname", required_argument, NULL, 273},
    {"x_0_fname", required_argument, NULL, 274},
    {"x_fname", required_argument, NULL, 275},
    {"bin_counts_pre_fname", required_argument, NULL, 276},
    {"bin_counts_fname", required_argument, NULL, 277},
    {"bin_counts_post_fname", required_argument, NULL, 278},
    {"mean_wepl_fname", required_argument, NULL, 279},
    {"mean_rel_ut_fname", required_argument, NULL, 280},
    {"mean_rel_uv_fname", required_argument, NULL, 281},
    {"stddev_rel_ut_fname", required_argument, NULL, 282},
    {"stddev_rel_uv_fname", required_argument, NULL, 283},
    {"stddev_wepl_fname", required_argument, NULL, 284},
    {"mlp_paths_fname", required_argument, NULL, 285},
    {"mlp_paths_error_fname", required_argument, NULL, 286},
    {"mlp_endpoints_fname", required_argument, NULL, 287},
    {"old_format_string", required_argument, NULL, 288},
    {"version_0_string", required_argument, NULL, 289},
    {"version_1_string", required_argument, NULL, 290},
    {"experimental_string", required_argument, NULL, 291},
    {"simulated_g_string", required_argument, NULL, 292},
    {"simulated_t_string", required_argument, NULL, 293},
    {"text_string", required_argument, NULL, 294},
    {"binary_string", required_argument, NULL, 295},
    {"default_rand_string", required_argument, NULL, 296},
    {"minstd_rand_string", required_argument, NULL, 297},
    {"minstd_rand0_string", required_argument, NULL, 298},
    {"mt19937_string", required_argument, NULL, 299},
    {"mt19937_64_string", required_argument, NULL, 300},
    {"randlux24_string", required_argument, NULL, 301},
    {"randlux48_string", required_argument, NULL, 302},
    {"knuth_b_string", required_argument, NULL, 303},
    {"voxels_string", required_argument, NULL, 304},
    {"blobs_string", required_argument, NULL, 305},
    {"means_string", required_argument, NULL, 306},
    {"counts_string", required_argument, NULL, 307},
    {"members_string", required_argument, NULL, 308},
    {"all_bins_string", required_argument, NULL, 309},
    {"specific_bins_string", required_argument, NULL, 310},
    {"by_bin_string", required_argument, NULL, 311},
    {"by_history_string", required_argument, NULL, 312},
    {"wepls_string", required_argument, NULL, 313},
    {"angles_string", required_argument, NULL, 314},
    {"positions_string", required_argument, NULL, 315},
    {"bin_nums_string", required_argument, NULL, 316},
    {"ram_lak_string", required_argument, NULL, 317},
    {"shepp_logan_string", required_argument, NULL, 318},
    {"none_string", required_argument, NULL, 319},
    {"sc_hull_string", required_argument, NULL, 320},
    {"msc_hull_string", required_argument, NULL, 321},
    {"sm_hull_string", required_argument, NULL, 322},
    {"fbp_hull_string", required_argument, NULL, 323},
    {"x_hull_string", required_argument, NULL, 324},
    {"hull_string", required_argument, NULL, 325},
    {"fbp_image_string", required_argument, NULL, 326},
    {"hybrid_string", required_argument, NULL, 327},
    {"zeros_string", required_argument, NULL, 328},
    {"import_string", required_argument, NULL, 329},
    {"full_tx_string", required_argument, NULL, 330},
    {"partial_tx_string", required_argument, NULL, 331},
    {"partial_tx_preallocated_string", required_argument, NULL, 332},
    {"bool_string", required_argument, NULL, 333},
    {"yes_bool_string", required_argument, NULL, 334},
    {"no_bool_string", required_argument, NULL, 335},
    {"standard_string", required_argument, NULL, 336},
    {"tabulated_string", required_argument, NULL, 337},
    {"art_string", required_argument, NULL, 338},
    {"sart_string", required_argument, NULL, 339},
    {"drop_string", required_argument, NULL, 340},
    {"bip_string", required_argument, NULL, 341},
    {"sap_string", required_argument, NULL, 342},
    {"robusta_string", required_argument, NULL, 343},
    {"robustb_string", required_argument, NULL, 344},
    {"sigmoid_string", required_argument, NULL, 345},
    {"tanh_string", required_argument, NULL, 346},
    {"atan_string", required_argument, NULL, 347},
    {"erf_string", required_argument, NULL, 348},
    {"lin_over_root_string", required_argument, NULL, 349},
    {"ols_string", required_argument, NULL, 350},
    {"tls_string", required_argument, NULL, 351},
    {"tikhonov_string", required_argument, NULL, 352},
    {"ridge_string", required_argument, NULL, 353},
    {"minmin_string", required_argument, NULL, 354},
    {"minmax_string", required_argument, NULL, 355},
    {"square_string", required_argument, NULL, 356},
    {"disk_string", required_argument, NULL, 357},
    {"erosion_string", required_argument, NULL, 358},
    {"dilation_string", required_argument, NULL, 359},
    {"opening_string", required_argument, NULL, 360},
    {"closing_string", required_argument, NULL, 361},
    {"object_l_string", required_argument, NULL, 362},
    {"scan_type_l_string", required_argument, NULL, 363},
    {"run_date_l_string", required_argument, NULL, 364},
    {"run_number_l_string", required_argument, NULL, 365},
    {"max_iterations", required_argument, NULL, 366},
    {"e_0", required_argument, NULL, 367},
    {"x0", required_argument, NULL, 368},
    {"rsp_air", required_argument, NULL, 369},
    {"beam_energy", required_argument, NULL, 370},
    {"source_radius", required_argument, NULL, 371},
    {"a_0", required_argument, NULL, 372},
    {"a_1", required_argument, NULL, 373},
    {"a_2", required_argument, NULL, 374},
    {"a_3", required_argument, NULL, 375},
    {"a_4", required_argument, NULL, 376},
    {"a_5", required_argument, NULL, 377},*/
    {NULL, 0, NULL, 0}
};

struct configurations
{

	RAND_GENERATORS		rand_engine;					// Specify the random number generator engine to use
	RAND_GENERATORS		tvs_rand_engine;					// Specify the random number generator engine to use
	SCAN_TYPES		scan_type;			  		// Specifies which of the defined filters will be used in FBP
	FILE_TYPES		file_type;						// Experimental or simulated data
	DATA_FORMATS		data_format;					// Specify which data format to use for this run
	IMAGE_BASES		image_basis;						// Specifies which basis is used to construct the images
	FILTER_TYPES		fbp_filter;			  		// Specifies which of the defined filters will be used in FBP
	HULL_TYPES		endpoints_hull;						// Specify which of the HULL_TYPES to use in this run's MLP calculations
	INITIAL_ITERATE		x_0;						// Specify which of the HULL_TYPES to use in this run's MLP calculations
	ENDPOINTS_ALGORITHMS	endpoints_alg;						// Specifies if boolean array is used to store whether a proton hit/missed the hull (BOOL) or uses the 1st MLP voxel (NO_BOOL)
	TX_OPTIONS		endpoints_tx_mode;		// Specifies GPU data tx mode for MLP endpoints as all data (FULL_TX), portions of data (PARTIAL_TX), or portions of data w/ reused GPU arrays (PARTIAL_TX_PREALLOCATED)
	LAMBDA_K_TYPES		lambda_k_type;					// Specifies whether the value of the relaxation parameter lambda is constant (CONSTANT) or linear (LINEAR_K) as a function of iteration k
	SABIP_CONFIGS		sabip_config;					// Specifies if # of BIP blocks per SAP string is explicitly set directly (SABIP_STRING_BLOCKS) or calculated based on # histories/SAP strings (SABIP_STRINGS)
	BLOCK_ORDERING		block_ordering;					// Specifies selected option for setting the order in which BIP blocks are being used in reconstruction
	MLP_ALGORITHMS		mlp_algorithm;					// Specifies whether calculations are performed explicitly (STANDARD) or if lookup tables are used for MLP calculations (TABULATED)
	PROJECTION_ALGORITHMS	projection_algorithm;							// Specify which of the projection algorithms to use for image reconstruction
	TX_OPTIONS		recon_tx_mode;						// Specifies GPU data tx mode for MLP+DROP as all data (FULL_TX), portions of data (PARTIAL_TX), or portions of data w/ reused GPU arrays (PARTIAL_TX_PREALLOCATED)
	TX_OPTIONS		drop_tx_mode;						// Specifies GPU data tx mode for MLP+DROP as all data (FULL_TX), portions of data (PARTIAL_TX), or portions of data w/ reused GPU arrays (PARTIAL_TX_PREALLOCATED)
	S_CURVES		s_curve;						// Specify S-curve to use to scale updates applied to voxels around the object boundary
	ROBUST_METHODS		robust_method;
	bool run_on;										// turn preprocessing on/off (t/f) to enter individual function testing without commenting
	bool testing_on;									// write output to "testing" directory (t) or to organized dat directory (f)
	bool block_testing_on;									// use value of variables relevant to block testing to name output directory (t) or not (f)
	bool s_curve_testing_on;									// use value of variables relevant to block testing to name output directory (t) or not (f)
	bool ntvs_testing_on;										// use value of variables relevant to block testing to name output directory (t) or not (f)
	bool overwriting_ok;									// allow output to
	bool exit_after_binning;									// exit program early after completing data read and initial processing
	bool exit_after_hulls;									// exit program early after completing hull-detection
	bool exit_after_cuts;									// exit program early after completing statistical cuts
	bool exit_after_sinogram;									// exit program early after completing the construction of the sinogram
	bool exit_after_fbp;									// exit program early after completing fbp
	bool close_after_execution;
	bool debug_text_on;										// provide (t) or suppress (f) print statements to console during execution
	bool sample_std_dev;										// use sample/population standard deviation (t/f) in statistical cuts (i.e. divisor is n/n-1)
	bool fbp_on;										// turn fbp on (t) or off (f)
	bool import_filtered_fbp;
	bool sc_on;									// turn space carving on (t) or off (f)
	bool msc_on;										// turn modified space carving on (t) or off (f)
	bool sm_on;									// turn space modeling on (t) or off (f)
	bool count_0_wepls;									// count the number of histories with wepl = 0 (t) or not (f)
	bool direct_image_reconstruction;
	bool mlp_file_exists;
	bool mlp_endpoints_file_exists;
	char input_directory[100];//   	= "//home//karbasip//";
	char output_directory[100];//  	= "//home//karbasip//";
	char input_folder[100];//	 	= "input_CTP404_4M";
	char output_folder[100];//     	= "cuda_test";
	bool binary_encoding;									// input data provided in binary (t) encoded files or asci text files (f)
	bool single_data_file;									// individual file for each gantry angle (t) or single data file for all data (f)
	bool ssd_in_mm;									// ssd distances from rotation axis given in mm (t) or cm (f)
	bool data_in_mm;									// input data given in mm (t) or cm (f)
	bool micah_sim;
	bool write_bin_wepls;									// write wepls for each bin to disk (t) for wepl distribution analysis, or do not (f)
	bool write_wepl_dists;									// write mean wepl values to disk (t) or not (f): t bin = columns, v bin = rows, 1 angle per file
	bool write_ssd_angles;									// write angles for each proton through entry/exit tracker planes to disk (t), or do not (f)
	bool write_sc_hull;									// write sc hull to disk (t) or not (f)
	bool write_msc_counts;								// write msc counts array to disk (t) or not (f) before performing edge detection
	bool write_msc_hull;								// write msc hull to disk (t) or not (f)
	bool write_sm_counts;									// write sm counts array to disk (t) or not (f) before performing edge detection
	bool write_sm_hull;									// write sm hull to disk (t) or not (f)
	bool write_fbp_image;									// write fbp image before thresholding to disk (t) or not (f)
	bool write_fbp_hull;									// write fbp hull to disk (t) or not (f)
	bool write_avg_fbp;									// write average filtered fbp image before thresholding to disk (t) or not (f)
	bool write_median_fbp;									// write median filtered fbp image to disk (t) or not (f)
	bool write_filtered_hull;									// write average filtered fbp image to disk (t) or not (f)
	bool write_x_hull;									// write the hull selected to be used in mlp calculations to disk (t) or not (f)
	bool write_x_0;									// write the hull selected to be used in mlp calculations to disk (t) or not (f)
	bool write_x_ki;									// write the hull selected to be used in mlp calculations to disk (t) or not (f)
	bool write_x;
	int recon_block_size;									// # of histories in each BIP block, i.e., # of histories used per image update
	int bip_block_size;									// # of histories in each BIP block, i.e., # of histories used per image update
	int bicav_block_size;									// # of histories in each bicav block, i.e., # of histories used per image update
	int drop_block_size;									// # of histories in each drop block, i.e., # of histories used per image update
	int ossart_block_size;									// # of histories in each ossart block, i.e., # of histories used per image update
	int sabicav_block_size;									// # of histories in each bicav block, i.e., # of histories used per image update
	int sadrop_block_size;									// # of histories in each drop block, i.e., # of histories used per image update
	int saossart_block_size;									// # of histories in each ossart block, i.e., # of histories used per image update
	int threads_per_block;									// # of threads per gpu block for preprocessing kernels
    int endpoints_per_block;										// # of threads per gpu block for collect_mlp_endpoints_gpu kernel
	int histories_per_block;										// # of threads per gpu block for block_update_gpu kernel
	int endpoints_per_thread;										// # of mlp endpoints each thread is responsible for calculating in collect_mlp_endpoints_gpu kernel
	int histories_per_thread;										// # of histories each thread is responsible for in mlp/drop kernel block_update_gpu
	int voxels_per_thread;										// # of voxels each thread is responsible for updating for reconstruction image initialization/updates
	int max_gpu_histories;									// [#] number of histories to process on the gpu at a time for preprocessing, based on gpu capacity
	int max_cuts_histories;									// [#] number of histories to process on the gpu at a time for statistical cuts, based on gpu capacity
	int max_endpoints_histories;								// [#] number of histories to process on the gpu at a time for mlp endpoints, based on gpu capacity
	int max_intersections;
  	float gantry_angle_interval;										// [degrees] angle between successive projection angles
	int gantry_angles;		// [#] total number of projection angles
	int num_scans;										// [#] total number of scans
	int num_files;			// [#] 1 file per gantry angle per translation
	float ssd_t_size;									// [cm] length of ssd in t (lateral) direction
	float ssd_v_size;
	float t_shift;										// [cm] amount by which to shift all t coordinates on input
	float u_shift;										// [cm] amount by which to shift all u coordinates on input
	float v_shift;										// [cm] amount by which to shift all v coordinates on input
	float t_bin_size;										// [cm] distance between adjacent bins in t (lateral) direction
	int t_bins;	// [#] number of bins (i.e. quantization levels) for t (lateral) direction
	float v_bin_size;									// [cm] distance between adjacent bins in v (vertical) direction
	int v_bins;		// [#] number of bins (i.e. quantization levels) for v (vertical) direction
	float angular_bin_size;										// [degrees] angle between adjacent bins in angular (rotation) direction
	int angular_bins;		// [#] number of bins (i.e. quantization levels) for path angle
	int num_bins;		// [#] total number of bins corresponding to possible 3-tuples [angular_bin, t_bin, v_bin]
	int sigmas_to_keep;										// [#] number of standard deviations from mean to allow before cutting the history
	float ram_lak_tau;					// defines tau in ram-lak filter calculation, estimated from largest frequency in slice
	float fbp_threshold;
	float recon_cyl_radius;									// [cm] radius of reconstruction cylinder
	float recon_cyl_diameter;				// [cm] diameter of reconstruction cylinder
	float recon_cyl_height;
	float image_width;						// [cm] distance between left and right edges of each slice in image
	float image_height;						// [cm] distance between top and bottom edges of each slice in image
	float image_thickness;			// [cm] distance between bottom of bottom slice and top of the top slice of image
	int columns;										// [#] number of voxels in the x direction (i.e., number of columns) of image
	int rows;										// [#] number of voxels in the y direction (i.e., number of rows) of image
	int slices;// [#] number of voxels in the z direction (i.e., number of slices) of image
	int num_voxels;				// [#] total number of voxels (i.e. 3-tuples [column, row, slice]) in image
	float voxel_width;										// [cm] distance between left and right edges of each voxel in image
	float voxel_height;										// [cm] distance between top and bottom edges of each voxel in image
	float voxel_thickness;									// [cm] distance between top and bottom of each slice in image
	float slice_thickness;
	float sc_lower_threshold;										// [cm] if wepl >= sc_lower_threshold, sc assumes the proton missed the object
	float sc_upper_threshold;										// [cm] if wepl <= sc_upper_threshold, sc assumes the proton missed the object
	float msc_upper_threshold;										// [cm] if wepl >= msc_lower_threshold, msc assumes the proton missed the object
	float msc_lower_threshold;									// [cm] if wepl <= msc_upper_threshold, msc assumes the proton missed the object
	int msc_diff_thresh;										// [#] threshold on difference in counts between adjacent voxels used by msc for edge detection
	float sm_lower_threshold;										// [cm] if wepl >= sm_threshold, sm assumes the proton passed through the object
	float sm_upper_threshold;									// [cm] if wepl > sm_upper_threshold, sm ignores this history
	float sm_scale_threshold;
	float voxel_step_size;						// [cm] length of the step taken along the path, i.e. change in depth per step for
	float mlp_u_step;						// size of the step taken along u direction during mlp; depth difference between successive mlp points
	int max_path_elements; // defines size of gpu array used to store a proton history's mlp voxel #s
	ULL prime_offset;							// Separation between successive histories used in ordering histories for reconstruction
	double eta;								// coefficient of perturbation used in robust methods
	unsigned int method;								// integer indicating the desired robust method to use (deprecated, non in use)
	int psi_sign;								// use a positive (1) or negative (-1) perturbation in robust methods
	float lambda_0;							// initial value of relaxation parameter for case of linear lambda as a function of iteration k, i.e. b in lambda = mk + b -------------------------
	float lambda_m;							// rate of increase of relaxation parameter for case of linear lambda as a function of iteration k, i.e. m in lambda = mk + b ----------------------
	float lambda;							// relaxation parameter to use in image iterative projection reconstruction algorithms
	int iterations;									// # of iterations through the entire set of histories to perform in iterative image reconstruction
	uint sadrop_strings;					// SA-BIP Configuration Option #2: Specifies # of SAP strings separately performing BIP algorithm internally in combined SAP/BIP algorithm
	uint sadrop_blocks_per_string;					// SA-BIP Configuration Option #1: Specifies # of BIP algorithm blocks in each SAP string of combined SAP/BIP algorithm
	//uint sadrop_string_blocks;					// SA-BIP Configuration Option #1: Specifies # of BIP algorithm blocks in each SAP string of combined SAP/BIP algorithm
	bool ignore_short_mlp;									// remove proton histories with short mlp paths from use in reconstruction (on) or not (off)
	int min_mlp_length;									// minimum # of intersections required to use in reconstruction so proton's skimming object are ignored
	bool bound_image;									// if any voxel in the image exceeds 2.0, set it to exactly 2.0
	bool s_curve_on;									//***************************** turn on application of s-curve scaling of updates of voxels near the boundary
	float sigmoid_steepness;								// scaling factor 'k' of logistic curve: 1 / (1 + exp[k(logistic_mid_shift - voxel)])
	int sigmoid_mid_shift;									// x-coordinate where the signoid curve is half of its maximum value
	bool dual_sided_s_curve;									// apply a single-sided (off) or double-sided (on) s-curve attenuation of voxel update values
	bool tvs_on;									// perform total variation superiorization (tvs) during reconstruction
	bool tvs_first;									// perform tvs before (on) or after (off) feasibility seeking during reconstruction
	bool tvs_parallel;									//******************* use the sequential (off) or parallel (on) implementation of tvs
	bool tvs_conditioned;									//****************** verify tvs perturbation improves total variation tv (on) or not (off)
	float tvs_min_beta;								// specify minimum perturbation coefficient to include in precalculated coefficient array
	float tv_threshold;							// [#] value of tv difference ratio |tv_y - tv_y_previous| / tv_y between successive betas where beta is not decreased more
	float alpha;									// perturbation coefficient generation kernel value: beta_k_n = alpha^ell
	float alpha_x0;									// perturbation coefficient generation kernel value applied on initial iterate x_0: beta_n = alpha_x0^ell ----------------------------------
	float perturb_down_factor;							// used in scaling perturbation to yield image w/ reduced perturbation from image previously perturbed w/ larger perturbation
	int ell_0;									// initial value of ell used in calculating the perturbation coefficient: alpha^ell
	int ell_0_x0;									// initial value of ell used in calculating the perturbation coefficient: alpha_x0^ell -----------------------------------------------------
	int ell;								// variable storing perturbation coefficient kernel exponent ell used in calculating the perturbation coefficient: alpha^ell
	float beta_0;								// inital value of tvs perturbation coefficient
	float beta;							// tvs perturbation coefficient
	float beta_k_n;						// Value of BETA used in classical TVS as perturbation coefficient
	UINT n;								// [#] Specifies # of times to perform TVS for each iteration of DROP
	UINT n_x0;								// [#] Specifies # of times to perform TVS on initial iterate x_0 ----------------------------------------------------------------------------------
	bool avg_filter_fbp;
	bool avg_filter_hull;								// apply averaging filter to hull (t) or not (f)
	bool avg_filter_x_0;							// apply averaging filter to initial iterate (t) or not (f)
	bool median_filter_fbp;								// apply median filter to fbp (t) or not (f)
	bool median_filter_hull;								// apply median filter to hull (t) or not (f)
	bool median_filter_x_0;							// Apply averaging filter to initial iterate (T) or not (F)
	bool superiorize_x_0;							// Apply averaging filter to initial iterate (T) or not (F)  ---------------------------------------------------------------------------------
	UINT hull_avg_filter_radius;								// [#] Radius of the average filter to apply to hull image
	UINT fbp_avg_filter_radius;								// [#] Radius of the average filter to apply to FBP image
	UINT x_0_avg_filter_radius;								// [#] Radius of the average filter to apply to initial iterate
	UINT fbp_med_filter_radius;								// [#] Radius of the median filter to apply to hull image
	UINT hull_med_filter_radius;								// [#] Radius of the median filter to apply to FBP image
	UINT x_0_med_filter_radius;								// [#] Radius of the median filter to apply to initial iterate
	double hull_avg_filter_threshold;								// [#] threshold applied to average filtered hull separating voxels to include/exclude from hull (i.e. set to 0/1)
	double fbp_avg_filter_threshold;								// [#] threshold applied to average filtered fbp separating voxels to include/exclude from fbp hull (i.e. set to 0/1)
	double x_0_avg_filter_threshold;								// [#] threshold applied to average filtered initial iterate below which a voxel is excluded from reconstruction (i.e. set to 0)
	char tested_by_string[50];
	char code_owner[50];							// karbasip, plautzt, giacomettiv, zatserkl, penfolds, wittm, master
	char program_version[50];
	char section_exit_string[50];
	char true_string[50];
	char false_string[50];
	char on_string[50];
	char off_string[50];
	char my_recon_dir[100];
	char current_git_branch[30];
	char tardis_rcode_dir[100];
    bool perturb_A;
	float perturbation_parameter;
	int max_histories_2_remove;
  	UINT size_bins_char;
  	UINT size_bins_bool;
  	uint size_bins_int;
  	UINT size_bins_uint;
  	UINT size_bins_float;
  	UINT size_image_char;
  	UINT size_image_bool;
  	UINT size_image_int;
  	UINT size_image_uint;
  	UINT size_image_float;
  	UINT size_image_double;
	float x_zero_coordinate;
  	float y_zero_coordinate;
	float z_zero_coordinate;
	float source_radius;
	float trig_table_step;
	bool run_on_kodiak;
	unsigned int current_iterate;
} pCTparams;
configurations parameter_container;
configurations *configurations_h = &parameter_container;
configurations *configurations_d;

void construct_pCT_params()
{
	//std::vector<PCT_PARAMS> pct_params;
	//pct_params.push_back(PCT_PARAMS(configurations_h, std::string("rand_engine"), ENUM));
	//size_t offset = offsetof(configurations,rand_engine);
	//int* pointerToC = (int*)((char*)&configurations_h + offset);
	//auto b = (&configurations_h +offset);
	//auto dd = (configurations::)(1);
	//cout << (*b) << endl;
	//int* pointerToC = (int*)((char*)&configurations_h + offset);
	//cout << pCTparams[0]  << endl;
}

////cfgdef_enum_parameter(configurations_h->rand_engine, "rand_engine" , cfgdef_optname );	// 1
////
//std::string TF_bin2text(int TFbinary)
//{
//	if(TFbinary)
//		return std::string("true");
//	else
//		return std::string("false");
//}
//template<typename B2> void print_TFtext(B2 TFbinary)
//{
//	cout << TF_bin2text(TFbinary) << endl;
//}
//void print_TF_parameter(int TFbinary, int getopt_num, std::string getopt_name)
//{
//	cout << TF_bin2text(TFbinary) << " # " << getopt_num << ": " << getopt_name <<  endl;
//}
//void print_TF_parameter(int TFbinary, std::string getopt_name)
//{
//	cout << TF_bin2text(TFbinary) << " # " << param_index++ << ": " << getopt_name <<  endl;
//}
////void enum_name2text(std::string enum_parameter, int enum_index)
////{
////	//cout << RAND_GENERATORS(configurations_h->rand_engine) << endl; // 1
////	if(enum_parameter == std::string("rand_engine") )
////	{
////		switch(configurations_h->rand_engine)
////		{
////			case 0:cout << "DEFAULT_RAND"  << endl;return;
////			case 1:cout << "MINSTD_RAND"  << endl;return;
////			case 2:cout << "MINSTD_RAND0"  << endl;return;
////			case 3:cout << "MT19937"  << endl;return;
////			case 4:cout << "MT19937_64"  << endl;return;
////			case 5:cout << "RANLUX24"  << endl;return;
////			case 6:cout << "RANLUX48"  << endl;return;
////			case 7:cout << "KNUTH_B"  << endl;return;
////		}
////	}
////	if(enum_parameter == std::string("tvs_rand_engine") )
////	{
////	//	cout << configurations_h->tvs_rand_engine << endl; // 2
////		switch(configurations_h->tvs_rand_engine)
////		{
////			case 0:cout << "DEFAULT_RAND"  << endl;return;
////			case 1:cout << "MINSTD_RAND"  << endl;return;
////			case 2:cout << "MINSTD_RAND0"  << endl;return;
////			case 3:cout << "MT19937"  << endl;return;
////			case 4:cout << "MT19937_64"  << endl;return;
////			case 5:cout << "RANLUX24"  << endl;return;
////			case 6:cout << "RANLUX48"  << endl;return;
////			case 7:cout << "KNUTH_B"  << endl;return;
////		}
////	}
////	if(enum_parameter == std::string("scan_type") )
////	{
////	//cout << configurations_h->scan_type << endl; // 3
////		switch(configurations_h->scan_type)
////		{
////			case 0:cout << "EXPERIMENTAL"  << endl;return;
////			case 1:cout << "SIMULATED_G"  << endl;return;
////			case 2:cout << "SIMULATED_T"  << endl;return;
////		}
////	}
////	if(enum_parameter == std::string("file_type") )
////	{
////	//cout << configurations_h->file_type << endl; // 4
////			switch(configurations_h->file_type)
////		{
////			case 0:cout << "TEXT"  << endl;return;
////			case 1:cout << "BINARY"  << endl;return;
////		}
////	}
////}
////template<typename E> void enum_index2text(E enum_type)
////{
////	//int enum_int = static_cast<int>(enum_type);
////	if(typeid(RAND_GENERATORS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "DEFAULT_RAND"  << endl;return;
////			case 1:cout << "MINSTD_RAND"  << endl;return;
////			case 2:cout << "MINSTD_RAND0"  << endl;return;
////			case 3:cout << "MT19937"  << endl;return;
////			case 4:cout << "MT19937_64"  << endl;return;
////			case 5:cout << "RANLUX24"  << endl;return;
////			case 6:cout << "RANLUX48"  << endl;return;
////			case 7:cout << "KNUTH_B"  << endl;return;
////		}
////	}
////	else if(typeid(SCAN_TYPES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "EXPERIMENTAL"  << endl;return;
////			case 1:cout << "SIMULATED_G"  << endl;return;
////			case 2:cout << "SIMULATED_T"  << endl;return;
////		}
////	}
////	else if(typeid(FILE_TYPES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "TEXT"  << endl;return;
////			case 1:cout << "BINARY"  << endl;return;
////		}
////	}
////	else if(typeid(DATA_FORMATS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "OLD_FORMAT"  << endl;return;
////			case 1:cout << "VERSION_0"  << endl;return;
////			case 2:cout << "VERSION_1"  << endl;return;
////			case 3:cout << "CONTINUOUS"  << endl;return;
////		}
////	}
////	else if(typeid(IMAGE_BASES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "VOXELS"  << endl;return;
////			case 1:cout << "BLOBS"  << endl;return;
////		}
////	}
////	else if(typeid(FILTER_TYPES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "RAM_LAK"  << endl;return;
////			case 1:cout << "SHEPP_LOGAN"  << endl;return;
////			case 2:cout << "NONE"  << endl;return;
////		}
////	}
////	else if(typeid(HULL_TYPES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "SC_HULL"  << endl;return;
////			case 1:cout << "MSC_HULL"  << endl;return;
////			case 2:cout << "SM_HULL"  << endl;return;
////			case 3:cout << "FBP_HULL"  << endl;return;
////		}
////	}
////	else if(typeid(INITIAL_ITERATE).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "X_HULL"  << endl;return;
////			case 1:cout << "FBP_IMAGE"  << endl;return;
////			case 2:cout << "HYBRID"  << endl;return;
////			case 3:cout << "ZEROS"  << endl;return;
////			case 4:cout << "IMPORT"  << endl;return;
////		}
////	}
////	else if(typeid(ENDPOINTS_ALGORITHMS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "YES_BOOL"  << endl;return;
////			case 1:cout << "NO_BOOL"  << endl;return;
////		}
////	}
////	else if(typeid(TX_OPTIONS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "FULL_TX"  << endl;return;
////			case 1:cout << "PARTIAL_TX"  << endl;return;
////			case 2:cout << "PARTIAL_TX_PREALLOCATED"  << endl;return;
////		}
////	}
////	else if(typeid(MLP_ALGORITHMS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "STANDARD"  << endl;return;
////			case 1:cout << "TABULATED"  << endl;return;
////		}
////	}
////	else if(typeid(PROJECTION_ALGORITHMS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "ART"  << endl;return;
////			case 1:cout << "SART"  << endl;return;
////			case 2:cout << "BIP"  << endl;return;
////			case 3:cout << "BICAV"  << endl;return;
////			case 4:cout << "DROP"  << endl;return;
////			case 5:cout << "OSSART"  << endl;return;
////			case 6:cout << "SAP"  << endl;return;
////			case 7:cout << "CARP"  << endl;return;
////			case 8:cout << "SABICAV"  << endl;return;
////			case 9:cout << "SADROP"  << endl;return;
////			case 10:cout << "SAOSSART"  << endl;return;
////			case 11:cout << "ROBUST_A"  << endl;return;
////			case 12:cout << "ROBUST_B"  << endl;return;
////		}
////	}
////	else if(typeid(S_CURVES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "SIGMOID"  << endl;return;
////			case 1:cout << "TANH"  << endl;return;
////			case 2:cout << "ATAN"  << endl;return;
////			case 3:cout << "ERF"  << endl;return;
////			case 4:cout << "LIN_OVER_ROOT"  << endl;return;
////		}
////	}
////	else if(typeid(ROBUST_METHODS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "OLS"  << endl;return;
////			case 1:cout << "TLS"  << endl;return;
////			case 2:cout << "TIKHONOV"  << endl;return;
////			case 3:cout << "RIDGE"  << endl;return;
////			case 4:cout << "MINMIN"  << endl;return;
////			case 5:cout << "MINMAX"  << endl;return;
////			case 6:cout << "ADDITIVE_UPDATE"  << endl;return;
////		}
////	}
////	else if(typeid(LAMBDA_K_TYPES).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "CONSTANT"  << endl;return;
////			case 1:cout << "LINEAR_K"  << endl;return;
////		}
////	}
////	else if(typeid(SABIP_CONFIGS).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "SABIP_NUM_STRINGS"  << endl;return;
////			case 1:cout << "SABIP_STRING_SIZE"  << endl;return;
////		}
////	}
////	else if(typeid(BLOCK_ORDERING).name() == typeid(enum_type).name()  )
////	{
////		//switch(enum_int)
////		switch(enum_type)
////		{
////			case 0:cout << "CYCLIC"  << endl;return;
////			case 1:cout << "ROTATE_LEFT"  << endl;return;
////			case 2:cout << "ROTATE_RIGHT"  << endl;return;
////			case 3:cout << "RAND_SHUFFLE"  << endl;return;
////			case 4:cout << "PRIME_CYCLE"  << endl;return;
////		}
////	}
////	else
////		cout << "ERROR: Undefined 'enum' type parameter"  << endl;
////}
//template<typename E> void print_enum_parameter(E enum_type, int getopt_num, std::string getopt_name)
//{
//	//int enum_int = static_cast<int>(enum_type);
//	if(typeid(RAND_GENERATORS).name() == typeid(enum_type).name()  )
//	//if( typeid(enum_type).name() == "RAND_GENERATORS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case DEFAULT_RAND:cout << "DEFAULT_RAND"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case MINSTD_RAND:cout << "MINSTD_RAND"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case MINSTD_RAND0:cout << "MINSTD_RAND0"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case MT19937:cout << "MT19937"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case MT19937_64:cout << "MT19937_64"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case RANLUX24:cout << "RANLUX24"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case RANLUX48:cout << "RANLUX48"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case KNUTH_B:cout << "KNUTH_B"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(SCAN_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "SCAN_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case EXPERIMENTAL:cout << "EXPERIMENTAL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SIMULATED_G:cout << "SIMULATED_G"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SIMULATED_T:cout << "SIMULATED_T"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(FILE_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "FILE_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case TEXT:cout << "TEXT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case BINARY:cout << "BINARY"  << " # " <<  getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(DATA_FORMATS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "DATA_FORMATS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case OLD_FORMAT:cout << "OLD_FORMAT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case VERSION_0:cout << "VERSION_0"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case VERSION_1:cout << "VERSION_1"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case CONTINUOUS:cout << "CONTINUOUS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(IMAGE_BASES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "IMAGE_BASES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case VOXELS:cout << "VOXELS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case BLOBS:cout << "BLOBS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(FILTER_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "FILTER_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case RAM_LAK:cout << "RAM_LAK"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SHEPP_LOGAN:cout << "SHEPP_LOGAN"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case NONE:cout << "NONE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(HULL_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "HULL_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case SC_HULL:cout << "SC_HULL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case MSC_HULL:cout << "MSC_HULL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SM_HULL:cout << "SM_HULL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case FBP_HULL:cout << "FBP_HULL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(INITIAL_ITERATE).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "INITIAL_ITERATE" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case X_HULL:cout << "X_HULL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case FBP_IMAGE:cout << "FBP_IMAGE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case HYBRID:cout << "HYBRID"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case ZEROS:cout << "ZEROS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case IMPORT:cout << "IMPORT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(ENDPOINTS_ALGORITHMS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "ENDPOINTS_ALGORITHMS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "YES_BOOL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "NO_BOOL"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(TX_OPTIONS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "TX_OPTIONS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "FULL_TX"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "PARTIAL_TX"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 2:cout << "PARTIAL_TX_PREALLOCATED"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(MLP_ALGORITHMS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "MLP_ALGORITHMS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "STANDARD"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "TABULATED"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(PROJECTION_ALGORITHMS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "PROJECTION_ALGORITHMS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case ART:cout << "ART"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SART:cout << "SART"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case BIP:cout << "BIP"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case BICAV:cout << "BICAV"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case DROP:cout << "DROP"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case OSSART:cout << "OSSART"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SAP:cout << "SAP"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case CARP:cout << "CARP"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SABICAV:cout << "SABICAV"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SADROP:cout << "SADROP"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case SAOSSART:cout << "SAOSSART"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case ROBUST_A:cout << "ROBUST_A"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case ROBUST_B:cout << "ROBUST_B"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(S_CURVES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "S_CURVES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "SIGMOID"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "TANH"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 2:cout << "ATAN"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 3:cout << "ERF"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 4:cout << "LIN_OVER_ROOT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(ROBUST_METHODS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "ROBUST_METHODS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "OLS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "TLS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 2:cout << "TIKHONOV"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 3:cout << "RIDGE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 4:cout << "MINMIN"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 5:cout << "MINMAX"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 6:cout << "ADDITIVE_UPDATE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(LAMBDA_K_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "LAMBDA_K_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "CONSTANT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "LINEAR_K"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(SABIP_CONFIGS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "SABIP_CONFIGS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "SABIP_NUM_STRINGS"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "SABIP_STRING_SIZE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(BLOCK_ORDERING).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "BLOCK_ORDERING" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "CYCLIC"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 1:cout << "ROTATE_LEFT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 2:cout << "ROTATE_RIGHT"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 3:cout << "RAND_SHUFFLE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			case 4:cout << "PRIME_CYCLE"  << " # " << getopt_num << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else
//		cout << "ERROR: Undefined 'enum' type parameter"  << endl;
//}
//template<typename E> void print_enum_parameter(E enum_type, std::string getopt_name)
//{
//	//int enum_int = static_cast<int>(enum_type);
//	if(typeid(RAND_GENERATORS).name() == typeid(enum_type).name()  )
//	//if( typeid(enum_type).name() == "RAND_GENERATORS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case DEFAULT_RAND:cout << "DEFAULT_RAND"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case MINSTD_RAND:cout << "MINSTD_RAND"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case MINSTD_RAND0:cout << "MINSTD_RAND0"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case MT19937:cout << "MT19937"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case MT19937_64:cout << "MT19937_64"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case RANLUX24:cout << "RANLUX24"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case RANLUX48:cout << "RANLUX48"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case KNUTH_B:cout << "KNUTH_B"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(SCAN_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "SCAN_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case EXPERIMENTAL:cout << "EXPERIMENTAL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SIMULATED_G:cout << "SIMULATED_G"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SIMULATED_T:cout << "SIMULATED_T"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(FILE_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "FILE_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case TEXT:cout << "TEXT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case BINARY:cout << "BINARY"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(DATA_FORMATS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "DATA_FORMATS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case OLD_FORMAT:cout << "OLD_FORMAT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case VERSION_0:cout << "VERSION_0"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case VERSION_1:cout << "VERSION_1"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case CONTINUOUS:cout << "CONTINUOUS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(IMAGE_BASES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "IMAGE_BASES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case VOXELS:cout << "VOXELS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case BLOBS:cout << "BLOBS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(FILTER_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "FILTER_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case RAM_LAK:cout << "RAM_LAK"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SHEPP_LOGAN:cout << "SHEPP_LOGAN"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case NONE:cout << "NONE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(HULL_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "HULL_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case SC_HULL:cout << "SC_HULL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case MSC_HULL:cout << "MSC_HULL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SM_HULL:cout << "SM_HULL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case FBP_HULL:cout << "FBP_HULL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(INITIAL_ITERATE).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "INITIAL_ITERATE" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case X_HULL:cout << "X_HULL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case FBP_IMAGE:cout << "FBP_IMAGE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case HYBRID:cout << "HYBRID"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case ZEROS:cout << "ZEROS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case IMPORT:cout << "IMPORT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(ENDPOINTS_ALGORITHMS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "ENDPOINTS_ALGORITHMS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "YES_BOOL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "NO_BOOL"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(TX_OPTIONS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "TX_OPTIONS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "FULL_TX"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "PARTIAL_TX"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 2:cout << "PARTIAL_TX_PREALLOCATED"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(MLP_ALGORITHMS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "MLP_ALGORITHMS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "STANDARD"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "TABULATED"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(PROJECTION_ALGORITHMS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "PROJECTION_ALGORITHMS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case ART:cout << "ART"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SART:cout << "SART"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case BIP:cout << "BIP"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case BICAV:cout << "BICAV"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case DROP:cout << "DROP"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case OSSART:cout << "OSSART"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SAP:cout << "SAP"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case CARP:cout << "CARP"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SABICAV:cout << "SABICAV"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SADROP:cout << "SADROP"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case SAOSSART:cout << "SAOSSART"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case ROBUST_A:cout << "ROBUST_A"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case ROBUST_B:cout << "ROBUST_B"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(S_CURVES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "S_CURVES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "SIGMOID"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "TANH"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 2:cout << "ATAN"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 3:cout << "ERF"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 4:cout << "LIN_OVER_ROOT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(ROBUST_METHODS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "ROBUST_METHODS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "OLS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "TLS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 2:cout << "TIKHONOV"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 3:cout << "RIDGE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 4:cout << "MINMIN"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 5:cout << "MINMAX"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 6:cout << "ADDITIVE_UPDATE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(LAMBDA_K_TYPES).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "LAMBDA_K_TYPES" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "CONSTANT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "LINEAR_K"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(SABIP_CONFIGS).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "SABIP_CONFIGS" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "SABIP_NUM_STRINGS"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "SABIP_STRING_SIZE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(BLOCK_ORDERING).name() == typeid(enum_type).name()  )
//	//else if( typeid(enum_type).name() == "BLOCK_ORDERING" )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case 0:cout << "CYCLIC"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 1:cout << "ROTATE_LEFT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 2:cout << "ROTATE_RIGHT"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 3:cout << "RAND_SHUFFLE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case 4:cout << "PRIME_CYCLE"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else
//		cout << "ERROR: Undefined 'enum' type parameter"  << endl;
//}
//template<typename N> void print_numeric(N parameter_value)
//{
//	cout << parameter_value << endl; // 18
//}
//template<typename N> void print_alphanumeric_parameter(N parameter_value, int getopt_num, std::string getopt_name)
//{
//	cout << parameter_value << " # " << getopt_num << ": " << getopt_name <<  endl; // 18
//}
//template<typename N> void print_alphanumeric_parameter(N parameter_value, std::string getopt_name)
//{
//	cout << parameter_value << " # " << param_index++ << ": " << getopt_name <<  endl; // 18
//}
////template<typename T> void print_parameter_value( T parameter_value, PARAMETER_TYPES parameter_type )
////{
////	//const PARAMETER_TYPES this_param = parameter_type;
//////if(parameter_type == bool_parameter)
////	//void(& func)(T) = print_numeric;
////	////void (*func)(T) (&print_numeric); //ugly
////	//	if(parameter_type == numeric_parameter)
////	//	void(& func)(T) = print_numeric;
////	//	//void (*func)(T) (&print_numeric); //ugly
////	//	//auto &func (print_numeric);
////	//else if(parameter_type == bool_parameter)
////	//	void(& func)(T) = print_TFtext;
////	//	//void (*func)(T) (&print_TFtext); //ugly
////	//	//auto &func (print_TFtext);
////	//else //if(parameter_type == enum_parameter)
////	//	void(& func)(T) = enum_index2text;
////	//	//void (*func)(T) (&enum_index2text); //ugly
////	//	//auto &func (enum_index2text);
////	//func(parameter_value);
////	//if(parameter_type == numeric_parameter)
////	//{
////	//	cout << parameter_value << endl; // 18
////	//	return;
////	//}
////	//else if(parameter_type == bool_parameter)
////	////else if(typeid(parameter_value) == typeid(bool) )
////	//{
////	//	cout << TF_bin2text(parameter_value) << endl; // 18
////	//	//print_TFtext(parameter_value ); // 18
////	//	return;
////	//}
////	//else if(parameter_type == enum_parameter)
////	//{
////	//	enum_index2text(parameter_value ); // 18
////	//	return;
////	//}
////	//else
////	//	return;
////	switch(parameter_type)
////	{//ENUM, BOOLEAN, ALPHANUMERIC
////		case ALPHANUMERIC: cout << parameter_value << endl; return;// 18
////		case BOOLEAN: print_TFtext(parameter_value ); return;// 18
////		case ENUM: 		enum_index2text(parameter_value ); return;// 18
////	}
////	//switch(parameter_type)
////	//{
////	//	case 0: cout << parameter_value << endl; return;// 18
////	//	case 1: print_TFtext(parameter_value ); return;// 18
////	//	case 2: 		enum_index2text(parameter_value ); return;// 18
////	//}
////}
////void print_init_values2()
////{
////	std::ofstream out("defParamVals.txt");
////    std::streambuf *coutbuf = cout.rdbuf(); //save old buf
////    cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
////	param_index = 1;
////	//std::map<char,int> first;
////	//std::tuple<int,char> a (10,'x');
////
////	//auto bar = std::make_tuple ("rand_engine" , ENUM);
////	////typedef std::vector<std::tuple<const char*, PARAMETER_TYPES>> params;
////	////params param_list;
////	//std::vector<std::tuple<const char*, PARAMETER_TYPES>> params;
////	//params.push_back(bar);
////	////param_list.push_back(bar);
////
////
////	print_enum_parameter(configurations_h->rand_engine, "rand_engine" );	// 1
////	print_enum_parameter(configurations_h->tvs_rand_engine, "tvs_rand_engine" );	// 2
////	print_enum_parameter(configurations_h->scan_type,  "scan_type" );	// 3
////	print_enum_parameter(configurations_h->file_type, "file_type" );	// 4
////	print_enum_parameter(configurations_h->data_format,  "data_format" );	// 5
////	print_enum_parameter(configurations_h->image_basis,  "image_basis" );	// 6
////	print_enum_parameter(configurations_h->fbp_filter,  "fbp_filter" );	// 7
////	print_enum_parameter(configurations_h->endpoints_hull , "endpoints_hull"); 	// 8
////	print_enum_parameter(configurations_h->x_0 ,  "x_0"); 	// 9
////	print_enum_parameter(configurations_h->endpoints_alg ,  "endpoints_alg"); 	// 10
////	print_enum_parameter(configurations_h->endpoints_tx_mode ,  "endpoints_tx_mode"); 	// 11
////	print_enum_parameter(configurations_h->mlp_algorithm ,  "mlp_algorithm"); 	// 12
////	print_enum_parameter(configurations_h->projection_algorithm ,  "projection_algorithm"); 	// 13
////	print_enum_parameter(configurations_h->recon_tx_mode, "recon_tx_mode"); 	// 14
////	print_enum_parameter(configurations_h->drop_tx_mode, "drop_tx_mode"); 	// 15
////	print_enum_parameter(configurations_h->s_curve, "s_curve"); 	// 16
////	print_enum_parameter(configurations_h->robust_method, "robust_method"); 	// 17
////	print_TF_parameter(configurations_h->run_on, "run_on");  // 18
////	print_TF_parameter(configurations_h->testing_on, "testing_on");  // 19
////	print_TF_parameter(configurations_h->block_testing_on, "block_testing_on");  // 20
////	print_TF_parameter(configurations_h->s_curve_testing_on, "s_curve_testing_on");  // 21
////	print_TF_parameter(configurations_h->ntvs_testing_on, "ntvs_testing_on");  // 22
////	print_TF_parameter(configurations_h->overwriting_ok, "overwriting_ok");  // 23
////	print_TF_parameter(configurations_h->exit_after_binning, "exit_after_binning");  // 24
////	print_TF_parameter(configurations_h->exit_after_hulls, "exit_after_hulls");  // 25
////	print_TF_parameter(configurations_h->exit_after_cuts, "exit_after_cuts");  // 26
////	print_TF_parameter(configurations_h->exit_after_sinogram, "exit_after_sinogram");  // 27
////	print_TF_parameter(configurations_h->exit_after_fbp, "exit_after_fbp");  // 28
////	print_TF_parameter(configurations_h->close_after_execution, "close_after_execution");  // 29
////	print_TF_parameter(configurations_h->debug_text_on, "debug_text_on");  // 30
////	print_TF_parameter(configurations_h->sample_std_dev, "sample_std_dev");  // 31
////	print_TF_parameter(configurations_h->fbp_on, "fbp_on");  // 32
////	print_TF_parameter(configurations_h->import_filtered_fbp, "import_filtered_fbp");  // 33
////	print_TF_parameter(configurations_h->sc_on, "sc_on");  // 34
////	print_TF_parameter(configurations_h->msc_on, "msc_on");  // 35
////	print_TF_parameter(configurations_h->sm_on, "sm_on");  // 36
////	print_TF_parameter(configurations_h->count_0_wepls, "count_0_wepls");  // 37
////	print_TF_parameter(configurations_h->direct_image_reconstruction, "direct_image_reconstruction");  // 38
////	print_TF_parameter(configurations_h->mlp_file_exists, "mlp_file_exists");  // 39
////	print_TF_parameter(configurations_h->mlp_endpoints_file_exists, "mlp_endpoints_file_exists");  // 40
////	print_alphanumeric_parameter(configurations_h->input_directory, "input_directory");  // 41
////	print_alphanumeric_parameter(configurations_h->output_directory, "output_directory");  // 42
////	print_alphanumeric_parameter(configurations_h->input_folder, "input_folder");  // 43
////	print_alphanumeric_parameter(configurations_h->output_folder, "output_folder");  // 44
////	print_TF_parameter(configurations_h->binary_encoding, "binary_encoding");  // 45
////	print_TF_parameter(configurations_h->single_data_file, "single_data_file");  // 46
////	print_TF_parameter(configurations_h->ssd_in_mm, "ssd_in_mm");  // 47
////	print_TF_parameter(configurations_h->data_in_mm, "data_in_mm");  // 48
////	print_TF_parameter(configurations_h->micah_sim, "micah_sim");  // 49
////	print_TF_parameter(configurations_h->write_bin_wepls, "write_bin_wepls");  // 50
////	print_TF_parameter(configurations_h->write_wepl_dists, "write_wepl_dists");  // 51
////	print_TF_parameter(configurations_h->write_ssd_angles, "write_ssd_angles");  // 52
////	print_TF_parameter(configurations_h->write_sc_hull, "write_sc_hull");  // 53
////	print_TF_parameter(configurations_h->write_msc_counts, "write_msc_counts");  // 54
////	print_TF_parameter(configurations_h->write_msc_hull, "write_msc_hull");  // 55
////	print_TF_parameter(configurations_h->write_sm_counts, "write_sm_counts");  // 56
////	print_TF_parameter(configurations_h->write_sm_hull, "write_sm_hull");  // 57
////	print_TF_parameter(configurations_h->write_fbp_image, "write_fbp_image");  // 58
////	print_TF_parameter(configurations_h->write_fbp_hull, "write_fbp_hull");  // 59
////	print_TF_parameter(configurations_h->write_avg_fbp, "write_avg_fbp");  // 60
////	print_TF_parameter(configurations_h->write_median_fbp, "write_median_fbp");  // 61
////	print_TF_parameter(configurations_h->write_filtered_hull, "write_filtered_hull");  // 62
////	print_TF_parameter(configurations_h->write_x_hull, "write_x_hull");  // 63
////	print_TF_parameter(configurations_h->write_x_0, "write_x_0");  // 64
////	print_TF_parameter(configurations_h->write_x_ki, "write_x_ki");  // 65
////	print_TF_parameter(configurations_h->write_x, "write_x");  // 66
////	print_alphanumeric_parameter<int>(configurations_h->drop_block_size, "drop_block_size");  // 67
////	print_alphanumeric_parameter(configurations_h->threads_per_block, "threads_per_block");  // 68
////	print_alphanumeric_parameter(configurations_h->endpoints_per_block, "endpoints_per_block");  // 69
////	print_alphanumeric_parameter(configurations_h->histories_per_block, "histories_per_block");  // 70
////	print_alphanumeric_parameter(configurations_h->endpoints_per_thread, "endpoints_per_thread");  // 71
////	print_alphanumeric_parameter(configurations_h->histories_per_thread, "histories_per_thread");  // 72
////	print_alphanumeric_parameter(configurations_h->voxels_per_thread, "voxels_per_thread");  // 73
////	print_alphanumeric_parameter(configurations_h->max_gpu_histories, "max_gpu_histories");  // 74
////	print_alphanumeric_parameter(configurations_h->max_cuts_histories, "max_cuts_histories");  // 75
////	print_alphanumeric_parameter(configurations_h->max_endpoints_histories, "max_endpoints_histories");  // 76
////	print_alphanumeric_parameter(configurations_h->max_intersections, "max_intersections");  // 77
////	print_alphanumeric_parameter(configurations_h->gantry_angle_interval, "gantry_angle_interval");  // 78
////	print_alphanumeric_parameter(configurations_h->num_scans, "num_scans");  // 79
////	print_alphanumeric_parameter(configurations_h->ssd_t_size, "ssd_t_size");  // 80
////	print_alphanumeric_parameter(configurations_h->ssd_v_size, "ssd_v_size");  // 81
////	print_alphanumeric_parameter(configurations_h->t_shift, "t_shift");  // 82
////	print_alphanumeric_parameter(configurations_h->u_shift, "u_shift");  // 83
////	print_alphanumeric_parameter(configurations_h->v_shift, "v_shift");  // 84
////	print_alphanumeric_parameter(configurations_h->t_bin_size, "t_bin_size");  // 85
////	print_alphanumeric_parameter(configurations_h->v_bin_size, "v_bin_size");  // 86
////	print_alphanumeric_parameter(configurations_h->angular_bin_size, "angular_bin_size");  // 87
////	print_alphanumeric_parameter(configurations_h->sigmas_to_keep, "sigmas_to_keep");  // 88
////	print_alphanumeric_parameter(configurations_h->fbp_threshold, "fbp_threshold");  // 89
////	print_alphanumeric_parameter(configurations_h->recon_cyl_radius, "recon_cyl_radius");  // 90
////	print_alphanumeric_parameter(configurations_h->slice_thickness, "slice_thickness");  // 91
////	print_alphanumeric_parameter(configurations_h->voxel_width, "voxel_width");  // 92
////	print_alphanumeric_parameter(configurations_h->voxel_height, "voxel_height");  // 93
////	print_alphanumeric_parameter(configurations_h->voxel_thickness, "voxel_thickness");  // 94
////	print_alphanumeric_parameter(configurations_h->sc_lower_threshold, "sc_lower_threshold");  // 95
////	print_alphanumeric_parameter(configurations_h->sc_upper_threshold, "sc_upper_threshold");  // 96
////	print_alphanumeric_parameter(configurations_h->msc_upper_threshold, "msc_upper_threshold");  // 97
////	print_alphanumeric_parameter(configurations_h->msc_lower_threshold, "msc_lower_threshold");  // 98
////	print_alphanumeric_parameter(configurations_h->msc_diff_thresh, "msc_diff_thresh");  // 99
////	print_alphanumeric_parameter(configurations_h->sm_lower_threshold, "sm_lower_threshold");  // 100
////	print_alphanumeric_parameter(configurations_h->sm_upper_threshold, "sm_upper_threshold");  // 101
////	print_alphanumeric_parameter(configurations_h->sm_scale_threshold, "sm_scale_threshold");  // 102
////	print_alphanumeric_parameter(configurations_h->voxel_step_size, "voxel_step_size");  // 103
////	print_alphanumeric_parameter(configurations_h->prime_offset, "prime_offset");  // 104
////	print_alphanumeric_parameter(configurations_h->eta, "eta");  // 105
////	print_alphanumeric_parameter(configurations_h->method, "method");  // 106
////	print_alphanumeric_parameter(configurations_h->psi_sign, "psi_sign");  // 107
////	print_alphanumeric_parameter(configurations_h->lambda, "lambda");  // 108
////	print_alphanumeric_parameter(configurations_h->iterations, "iterations");  // 109
////	print_TF_parameter(configurations_h->ignore_short_mlp, "ignore_short_mlp");  // 110
////	print_alphanumeric_parameter(configurations_h->min_mlp_length, "min_mlp_length");  // 111
////	print_TF_parameter(configurations_h->bound_image, "bound_image");  // 112
////	print_TF_parameter(configurations_h->s_curve_on, "s_curve_on");  // 113
////	print_alphanumeric_parameter(configurations_h->sigmoid_steepness, "sigmoid_steepness");  // 114
////	print_alphanumeric_parameter(configurations_h->sigmoid_mid_shift, "sigmoid_mid_shift");  // 115
////	print_TF_parameter(configurations_h->dual_sided_s_curve, "dual_sided_s_curve");  // 116
////	print_TF_parameter(configurations_h->tvs_on, "tvs_on");  // 117
////	print_TF_parameter(configurations_h->tvs_first, "tvs_first");  // 118
////	print_TF_parameter(configurations_h->tvs_parallel, "tvs_parallel");  // 119
////	print_TF_parameter(configurations_h->tvs_conditioned, "tvs_conditioned");  // 120
////	print_alphanumeric_parameter(configurations_h->tvs_min_beta, "tvs_min_beta");  // 121
////	print_alphanumeric_parameter(configurations_h->tv_threshold, "tv_threshold");  // 122
////	print_alphanumeric_parameter(configurations_h->alpha, "alpha");  // 123
////	print_alphanumeric_parameter(configurations_h->ell_0, "ell_0");  // 124
////	print_alphanumeric_parameter(configurations_h->ell, "ell");  // 125
////	print_alphanumeric_parameter(configurations_h->beta_0, "beta_0");  // 126
////	print_alphanumeric_parameter(configurations_h->beta, "beta");  // 127
////	print_alphanumeric_parameter(configurations_h->n, "n");  // 128
////	print_TF_parameter(configurations_h->avg_filter_fbp, "avg_filter_fbp");  // 129
////	print_TF_parameter(configurations_h->avg_filter_hull, "avg_filter_hull");  // 130
////	print_TF_parameter(configurations_h->avg_filter_x_0, "avg_filter_x_0");  // 131
////	print_TF_parameter(configurations_h->median_filter_fbp, "median_filter_fbp");  // 132
////	print_TF_parameter(configurations_h->median_filter_hull, "median_filter_hull");  // 133
////	print_TF_parameter(configurations_h->median_filter_x_0, "median_filter_x_0");  // 134
////	print_alphanumeric_parameter(configurations_h->hull_avg_filter_radius, "hull_avg_filter_radius");  // 135
////	print_alphanumeric_parameter(configurations_h->fbp_avg_filter_radius, "fbp_avg_filter_radius");  // 136
////	print_alphanumeric_parameter(configurations_h->x_0_avg_filter_radius, "x_0_avg_filter_radius");  // 137
////	print_alphanumeric_parameter(configurations_h->fbp_med_filter_radius, "fbp_med_filter_radius");  // 138
////	print_alphanumeric_parameter(configurations_h->hull_med_filter_radius, "hull_med_filter_radius");  // 139
////	print_alphanumeric_parameter(configurations_h->x_0_med_filter_radius, "x_0_med_filter_radius");  // 140
////	print_alphanumeric_parameter(configurations_h->hull_avg_filter_threshold, "hull_avg_filter_threshold");  // 141
////	print_alphanumeric_parameter(configurations_h->fbp_avg_filter_threshold, "fbp_avg_filter_threshold");  // 142
////	print_alphanumeric_parameter(configurations_h->x_0_avg_filter_threshold, "x_0_avg_filter_threshold");  // 143
////	print_alphanumeric_parameter(configurations_h->tested_by_string, "tested_by_string");  // 144
////	print_alphanumeric_parameter(configurations_h->code_owner, "code_owner");  // 145
////	print_alphanumeric_parameter(configurations_h->program_version, "program_version");  // 146
////	print_alphanumeric_parameter(configurations_h->section_exit_string, "section_exit_string");  // 147
////	print_alphanumeric_parameter(configurations_h->my_recon_dir, "my_recon_dir");  // 148
////	print_alphanumeric_parameter(configurations_h->current_git_branch, "current_git_branch");  // 149
////	print_alphanumeric_parameter(configurations_h->tardis_rcode_dir, "tardis_rcode_dir");  // 150
////	print_TF_parameter(configurations_h->perturb_A, "perturb_A");  // 151
////	print_alphanumeric_parameter(configurations_h->perturbation_parameter, "perturbation_parameter");  // 152
////	print_alphanumeric_parameter(configurations_h->max_histories_2_remove, "max_histories_2_remove");  // 153
////	print_alphanumeric_parameter(configurations_h->source_radius, "source_radius");  // 154
////	print_alphanumeric_parameter(configurations_h->trig_table_step, "trig_table_step");  // 155
////	print_TF_parameter(configurations_h->run_on_kodiak, "run_on_kodiak");  // 156
////	print_enum_parameter(configurations_h->lambda_k_type, "lambda_k_type"); 	// 157
////	print_alphanumeric_parameter(configurations_h->lambda_0, "lambda_0");  // 158
////	print_alphanumeric_parameter(configurations_h->lambda_m, "lambda_m");  // 159
////	print_alphanumeric_parameter(configurations_h->alpha_x0, "alpha_x0");  // 160
////	print_alphanumeric_parameter(configurations_h->ell_0_x0, "ell_0_x0");  // 161
////	print_alphanumeric_parameter(configurations_h->n_x0, "n_x0");  // 162
////	print_TF_parameter(configurations_h->superiorize_x_0, "superiorize_x_0");  // 163
////	print_enum_parameter(configurations_h->sabip_config, "sabip_config"); 	// 164
////	print_alphanumeric_parameter(configurations_h->sadrop_strings, "sadrop_strings");  // 165
////	print_alphanumeric_parameter(configurations_h->sadrop_blocks_per_string, "sadrop_blocks_per_string");  // 166
////	print_enum_parameter(configurations_h->block_ordering, "block_ordering"); 	// 167
////	cout.rdbuf(coutbuf); //reset to standard output again
////}
////void print_init_values3()
////{
////	//const PARAMETER_TYPES numeric_parameter = NUMERIC;
////	enum_index2text(configurations_h->rand_engine );	// 1
////	enum_index2text(configurations_h->tvs_rand_engine );	// 2
////	enum_index2text(configurations_h->scan_type );	// 3
////	enum_index2text(configurations_h->file_type );	// 4
////	enum_index2text(configurations_h->data_format );	// 5
////	enum_index2text(configurations_h->image_basis );	// 6
////	enum_index2text(configurations_h->fbp_filter );	// 7
////	enum_index2text(configurations_h->endpoints_hull );	// 8
////	enum_index2text(configurations_h->x_0 );	// 9
////	enum_index2text(configurations_h->endpoints_alg );	// 10
////	enum_index2text(configurations_h->endpoints_tx_mode );	// 11
////	enum_index2text(configurations_h->mlp_algorithm );	// 12
////	enum_index2text(configurations_h->projection_algorithm );	// 13
////	enum_index2text(configurations_h->recon_tx_mode );	// 14
////	enum_index2text(configurations_h->drop_tx_mode );	// 15
////	enum_index2text(configurations_h->s_curve );	// 16
////	enum_index2text(configurations_h->robust_method );	// 17
////print_TFtext(configurations_h->run_on ); // 18
////print_TFtext(configurations_h->testing_on ); // 19
////print_TFtext(configurations_h->block_testing_on ); // 20
////print_TFtext(configurations_h->s_curve_testing_on ); // 21
////print_TFtext(configurations_h->ntvs_testing_on ); // 22
////print_TFtext(configurations_h->overwriting_ok  ); // 23
////print_TFtext(configurations_h->exit_after_binning  ); // 24
////print_TFtext(configurations_h->exit_after_hulls  ); // 25
////print_TFtext(configurations_h->exit_after_cuts  ); // 26
////print_TFtext(configurations_h->exit_after_sinogram  ); // 27
////print_TFtext(configurations_h->exit_after_fbp  ); // 28
////print_TFtext(configurations_h->close_after_execution  ); // 29
////print_TFtext(configurations_h->debug_text_on ); // 30
////print_TFtext(configurations_h->sample_std_dev  ); // 31
////print_TFtext(configurations_h->fbp_on  ); // 32
////print_TFtext(configurations_h->import_filtered_fbp ); // 33
////print_TFtext(configurations_h->sc_on ); // 34
////print_TFtext(configurations_h->msc_on  ); // 35
////print_TFtext(configurations_h->sm_on  ); // 36
////print_TFtext(configurations_h->count_0_wepls  ); // 37
////print_TFtext(configurations_h->direct_image_reconstruction  ); // 38
////print_TFtext(configurations_h->mlp_file_exists ); // 39
////print_TFtext(configurations_h->mlp_endpoints_file_exists ); // 40
////print_numeric(configurations_h->input_directory ); // 41
////print_numeric(configurations_h->output_directory ); // 42
////print_numeric(configurations_h->input_folder ); // 43
////print_numeric(configurations_h->output_folder ); // 44
////print_TFtext(configurations_h->binary_encoding ); // 45
////print_TFtext(configurations_h->single_data_file ); // 46
////print_TFtext(configurations_h->ssd_in_mm ); // 47
////print_TFtext(configurations_h->data_in_mm ); // 48
////print_TFtext(configurations_h->micah_sim ); // 49
////print_TFtext(configurations_h->write_bin_wepls ); // 50
////print_TFtext(configurations_h->write_wepl_dists ); // 51
////print_TFtext(configurations_h->write_ssd_angles ); // 52
////print_TFtext(configurations_h->write_sc_hull ); // 53
////print_TFtext(configurations_h->write_msc_counts ); // 54
////print_TFtext(configurations_h->write_msc_hull ); // 55
////print_TFtext(configurations_h->write_sm_counts ); // 56
////print_TFtext(configurations_h->write_sm_hull ); // 57
////print_TFtext(configurations_h->write_fbp_image ); // 58
////print_TFtext(configurations_h->write_fbp_hull ); // 59
////print_TFtext(configurations_h->write_avg_fbp ); // 60
////print_TFtext(configurations_h->write_median_fbp ); // 61
////print_TFtext(configurations_h->write_filtered_hull ); // 62
////print_TFtext(configurations_h->write_x_hull ); // 63
////print_TFtext(configurations_h->write_x_0 ); // 64
////print_TFtext(configurations_h->write_x_ki ); // 65
////print_TFtext(configurations_h->write_x ); // 66
////print_numeric<int>(configurations_h->drop_block_size ); // 67
////print_numeric(configurations_h->threads_per_block ); // 68
////print_numeric(configurations_h->endpoints_per_block ); // 69
////print_numeric(configurations_h->histories_per_block ); // 70
////print_numeric(configurations_h->endpoints_per_thread ); // 71
////print_numeric(configurations_h->histories_per_thread ); // 72
////print_numeric(configurations_h->voxels_per_thread ); // 73
////print_numeric(configurations_h->max_gpu_histories ); // 74
////print_numeric(configurations_h->max_cuts_histories ); // 75
////print_numeric(configurations_h->max_endpoints_histories ); // 76
////print_numeric(configurations_h->max_intersections ); // 77
////print_numeric(configurations_h->gantry_angle_interval ); // 78
////print_numeric(configurations_h->num_scans ); // 79
////print_numeric(configurations_h->ssd_t_size ); // 80
////print_numeric(configurations_h->ssd_v_size ); // 81
////print_numeric(configurations_h->t_shift ); // 82
////print_numeric(configurations_h->u_shift ); // 83
////print_numeric(configurations_h->v_shift ); // 84
////print_numeric(configurations_h->t_bin_size ); // 85
////print_numeric(configurations_h->v_bin_size ); // 86
////print_numeric(configurations_h->angular_bin_size ); // 87
////print_numeric(configurations_h->sigmas_to_keep ); // 88
////print_numeric(configurations_h->fbp_threshold ); // 89
////print_numeric(configurations_h->recon_cyl_radius ); // 90
////print_numeric(configurations_h->slice_thickness ); // 91
////print_numeric(configurations_h->voxel_width ); // 92
////print_numeric(configurations_h->voxel_height ); // 93
////print_numeric(configurations_h->voxel_thickness ); // 94
////print_numeric(configurations_h->sc_lower_threshold ); // 95
////print_numeric(configurations_h->sc_upper_threshold ); // 96
////print_numeric(configurations_h->msc_upper_threshold ); // 97
////print_numeric(configurations_h->msc_lower_threshold ); // 98
////print_numeric(configurations_h->msc_diff_thresh ); // 99
////print_numeric(configurations_h->sm_lower_threshold ); // 100
////print_numeric(configurations_h->sm_upper_threshold ); // 101
////print_numeric(configurations_h->sm_scale_threshold ); // 102
////print_numeric(configurations_h->voxel_step_size ); // 103
////print_numeric(configurations_h->prime_offset ); // 104
////print_numeric(configurations_h->eta ); // 105
////print_numeric(configurations_h->method ); // 106
////print_numeric(configurations_h->psi_sign ); // 107
////print_numeric(configurations_h->lambda ); // 108
////print_numeric(configurations_h->iterations ); // 109
////print_TFtext(configurations_h->ignore_short_mlp ); // 110
////print_numeric(configurations_h->min_mlp_length ); // 111
////print_TFtext(configurations_h->bound_image ); // 112
////print_TFtext(configurations_h->s_curve_on ); // 113
////print_numeric(configurations_h->sigmoid_steepness ); // 114
////print_numeric(configurations_h->sigmoid_mid_shift ); // 115
////print_TFtext(configurations_h->dual_sided_s_curve ); // 116
////print_TFtext(configurations_h->tvs_on ); // 117
////print_TFtext(configurations_h->tvs_first ); // 118
////print_TFtext(configurations_h->tvs_parallel ); // 119
////print_TFtext(configurations_h->tvs_conditioned ); // 120
////print_numeric(configurations_h->tvs_min_beta ); // 121
////print_numeric(configurations_h->tv_threshold ); // 122
////print_numeric(configurations_h->alpha ); // 123
////print_numeric(configurations_h->ell_0 ); // 124
////print_numeric(configurations_h->ell ); // 125
////print_numeric(configurations_h->beta_0 ); // 126
////print_numeric(configurations_h->beta ); // 127
////print_numeric(configurations_h->n ); // 128
////print_TFtext(configurations_h->avg_filter_fbp ); // 129
////print_TFtext(configurations_h->avg_filter_hull ); // 130
////print_TFtext(configurations_h->avg_filter_x_0 ); // 131
////print_TFtext(configurations_h->median_filter_fbp ); // 132
////print_TFtext(configurations_h->median_filter_hull ); // 133
////print_TFtext(configurations_h->median_filter_x_0 ); // 134
////print_numeric(configurations_h->hull_avg_filter_radius ); // 135
////print_numeric(configurations_h->fbp_avg_filter_radius ); // 136
////print_numeric(configurations_h->x_0_avg_filter_radius ); // 137
////print_numeric(configurations_h->fbp_med_filter_radius ); // 138
////print_numeric(configurations_h->hull_med_filter_radius ); // 139
////print_numeric(configurations_h->x_0_med_filter_radius ); // 140
////print_numeric(configurations_h->hull_avg_filter_threshold ); // 141
////print_numeric(configurations_h->fbp_avg_filter_threshold ); // 142
////print_numeric(configurations_h->x_0_avg_filter_threshold ); // 143
////print_numeric(configurations_h->tested_by_string ); // 144
////print_numeric(configurations_h->code_owner ); // 145
////print_numeric(configurations_h->program_version ); // 146
////print_numeric(configurations_h->section_exit_string ); // 147
////print_numeric(configurations_h->my_recon_dir ); // 148
////print_numeric(configurations_h->current_git_branch ); // 149
////print_numeric(configurations_h->tardis_rcode_dir ); // 150
////print_numeric(configurations_h->perturb_A ); // 151
////print_numeric(configurations_h->perturbation_parameter ); // 152
////print_numeric(configurations_h->max_histories_2_remove ); // 153
////print_numeric(configurations_h->source_radius ); // 154
////print_numeric(configurations_h->trig_table_step ); // 155
////print_TFtext(configurations_h->run_on_kodiak ); // 156
//////print_parameter_value(configurations_h->lambda_k_type ); // 157
////		enum_index2text(configurations_h->lambda_k_type );	// 157
////print_numeric(configurations_h->lambda_0 ); // 158
////print_numeric(configurations_h->lambda_m ); // 159
////print_numeric(configurations_h->alpha_x0 ); // 160
////print_numeric(configurations_h->ell_0_x0 ); // 161
////print_numeric(configurations_h->n_x0 ); // 162
////print_TFtext(configurations_h->superiorize_x_0 ); // 163
//////print_parameter_value(configurations_h->sabip_config ); // 164
////		enum_index2text(configurations_h->sabip_config );	// 164
////print_numeric(configurations_h->sadrop_strings ); // 165
////print_numeric(configurations_h->sadrop_blocks_per_string ); // 166
//////print_numeric(configurations_h->sadrop_string_blocks ); // 166
//////print_numeric(configurations_h->block_ordering ); // 167
////		enum_index2text(configurations_h->block_ordering );	// 167
//////
////}
////void print_init_values4()
////{
////	//const PARAMETER_TYPES numeric_parameter = NUMERIC;
////	//print_parameter_value(configurations_h->rand_engine, ENUM );	// 1
////	//print_parameter_value(configurations_h->tvs_rand_engine, ENUM );	// 2
////	//print_parameter_value(configurations_h->scan_type, ENUM );	// 3
////	//print_parameter_value(configurations_h->file_type, ENUM );	// 4
////	//print_parameter_value(configurations_h->data_format, ENUM );	// 5
////	//print_parameter_value(configurations_h->image_basis, ENUM );	// 6
////	//print_parameter_value(configurations_h->fbp_filter, ENUM );	// 7
////	//print_parameter_value(configurations_h->endpoints_hull, ENUM );	// 8
////	//print_parameter_value(configurations_h->x_0, ENUM );	// 9
////	//print_parameter_value(configurations_h->endpoints_alg, ENUM );	// 10
////	//print_parameter_value(configurations_h->endpoints_tx_mode, ENUM );	// 11
////	//print_parameter_value(configurations_h->mlp_algorithm, ENUM );	// 12
////	//print_parameter_value(configurations_h->projection_algorithm, ENUM );	// 13
////	//print_parameter_value(configurations_h->recon_tx_mode, ENUM );	// 14
////	//print_parameter_value(configurations_h->drop_tx_mode, ENUM );	// 15
////	//print_parameter_value(configurations_h->s_curve, ENUM );	// 16
////	//print_parameter_value(configurations_h->robust_method, ENUM );	// 17
//////print_parameter_value(configurations_h->run_on , BOOLEAN ); // 18
//////print_parameter_value(configurations_h->testing_on, BOOLEAN ); // 19
//////print_parameter_value(configurations_h->block_testing_on, BOOLEAN ); // 20
//////print_parameter_value(configurations_h->s_curve_testing_on, BOOLEAN ); // 21
//////print_parameter_value(configurations_h->ntvs_testing_on, BOOLEAN ); // 22
//////print_parameter_value(configurations_h->overwriting_ok , BOOLEAN ); // 23
//////print_parameter_value(configurations_h->exit_after_binning , BOOLEAN ); // 24
//////print_parameter_value(configurations_h->exit_after_hulls , BOOLEAN ); // 25
//////print_parameter_value(configurations_h->exit_after_cuts , BOOLEAN ); // 26
//////print_parameter_value(configurations_h->exit_after_sinogram , BOOLEAN ); // 27
//////print_parameter_value(configurations_h->exit_after_fbp , BOOLEAN ); // 28
//////print_parameter_value(configurations_h->close_after_execution , BOOLEAN ); // 29
//////print_parameter_value(configurations_h->debug_text_on, BOOLEAN ); // 30
//////print_parameter_value(configurations_h->sample_std_dev , BOOLEAN ); // 31
//////print_parameter_value(configurations_h->fbp_on , BOOLEAN ); // 32
//////print_parameter_value(configurations_h->import_filtered_fbp, BOOLEAN ); // 33
//////print_parameter_value(configurations_h->sc_on, BOOLEAN ); // 34
//////print_parameter_value(configurations_h->msc_on , BOOLEAN ); // 35
//////print_parameter_value(configurations_h->sm_on , BOOLEAN ); // 36
//////print_parameter_value(configurations_h->count_0_wepls , BOOLEAN ); // 37
//////print_parameter_value(configurations_h->direct_image_reconstruction , BOOLEAN ); // 38
//////print_parameter_value(configurations_h->mlp_file_exists, BOOLEAN ); // 39
//////print_parameter_value(configurations_h->mlp_endpoints_file_exists, bool_parameter ); // 40
//////print_parameter_value(std::string(configurations_h->input_directory), NUMERIC ); // 41
//////print_parameter_value(configurations_h->output_directory, NUMERIC ); // 42
//////print_parameter_value(configurations_h->input_folder, NUMERIC ); // 43
//////print_parameter_value(configurations_h->output_folder, NUMERIC ); // 44
//////print_parameter_value(configurations_h->binary_encoding, BOOLEAN ); // 45
//////print_parameter_value(configurations_h->single_data_file, BOOLEAN ); // 46
//////print_parameter_value(configurations_h->ssd_in_mm, BOOLEAN ); // 47
//////print_parameter_value(configurations_h->data_in_mm, BOOLEAN ); // 48
//////print_parameter_value(configurations_h->micah_sim, BOOLEAN ); // 49
//////print_parameter_value(configurations_h->write_bin_wepls, BOOLEAN ); // 50
//////print_parameter_value(configurations_h->write_wepl_dists, BOOLEAN ); // 51
//////print_parameter_value(configurations_h->write_ssd_angles, BOOLEAN ); // 52
//////print_parameter_value(configurations_h->write_sc_hull, BOOLEAN ); // 53
//////print_parameter_value(configurations_h->write_msc_counts, BOOLEAN ); // 54
//////print_parameter_value(configurations_h->write_msc_hull, BOOLEAN ); // 55
//////print_parameter_value(configurations_h->write_sm_counts, BOOLEAN ); // 56
//////print_parameter_value(configurations_h->write_sm_hull, BOOLEAN ); // 57
//////print_parameter_value(configurations_h->write_fbp_image, BOOLEAN ); // 58
//////print_parameter_value(configurations_h->write_fbp_hull, BOOLEAN ); // 59
//////print_parameter_value(configurations_h->write_avg_fbp, BOOLEAN ); // 60
//////print_parameter_value(configurations_h->write_median_fbp, BOOLEAN ); // 61
//////print_parameter_value(configurations_h->write_filtered_hull, BOOLEAN ); // 62
//////print_parameter_value(configurations_h->write_x_hull, BOOLEAN ); // 63
//////print_parameter_value(configurations_h->write_x_0, BOOLEAN ); // 64
//////print_parameter_value(configurations_h->write_x_ki, BOOLEAN ); // 65
//////print_parameter_value(configurations_h->write_x, BOOLEAN ); // 66
//////print_parameter_value<int>(configurations_h->drop_block_size, NUMERIC ); // 67
//////print_parameter_value(configurations_h->threads_per_block, NUMERIC ); // 68
//////print_parameter_value(configurations_h->endpoints_per_block, NUMERIC ); // 69
//////print_parameter_value(configurations_h->histories_per_block, NUMERIC ); // 70
//////print_parameter_value(configurations_h->endpoints_per_thread, NUMERIC ); // 71
//////print_parameter_value(configurations_h->histories_per_thread, NUMERIC ); // 72
//////print_parameter_value(configurations_h->voxels_per_thread, NUMERIC ); // 73
//////print_parameter_value(configurations_h->max_gpu_histories, NUMERIC ); // 74
//////print_parameter_value(configurations_h->max_cuts_histories, NUMERIC ); // 75
//////print_parameter_value(configurations_h->max_endpoints_histories, NUMERIC ); // 76
//////print_parameter_value(configurations_h->max_intersections, NUMERIC ); // 77
//////print_parameter_value(configurations_h->gantry_angle_interval, NUMERIC ); // 78
//////print_parameter_value(configurations_h->num_scans, NUMERIC ); // 79
//////print_parameter_value(configurations_h->ssd_t_size, NUMERIC ); // 80
//////print_parameter_value(configurations_h->ssd_v_size, NUMERIC ); // 81
//////print_parameter_value(configurations_h->t_shift, NUMERIC ); // 82
//////print_parameter_value(configurations_h->u_shift, NUMERIC ); // 83
//////print_parameter_value(configurations_h->v_shift, NUMERIC ); // 84
//////print_parameter_value(configurations_h->t_bin_size, NUMERIC ); // 85
//////print_parameter_value(configurations_h->v_bin_size, NUMERIC ); // 86
//////print_parameter_value(configurations_h->angular_bin_size, NUMERIC ); // 87
//////print_parameter_value(configurations_h->sigmas_to_keep, NUMERIC ); // 88
//////print_parameter_value(configurations_h->fbp_threshold, NUMERIC ); // 89
//////print_parameter_value(configurations_h->recon_cyl_radius, NUMERIC ); // 90
//////print_parameter_value(configurations_h->slice_thickness, NUMERIC ); // 91
//////print_parameter_value(configurations_h->voxel_width, NUMERIC ); // 92
//////print_parameter_value(configurations_h->voxel_height, NUMERIC ); // 93
//////print_parameter_value(configurations_h->voxel_thickness, NUMERIC ); // 94
//////print_parameter_value(configurations_h->sc_lower_threshold, NUMERIC ); // 95
//////print_parameter_value(configurations_h->sc_upper_threshold, NUMERIC ); // 96
//////print_parameter_value(configurations_h->msc_upper_threshold, NUMERIC ); // 97
//////print_parameter_value(configurations_h->msc_lower_threshold, NUMERIC ); // 98
//////print_parameter_value(configurations_h->msc_diff_thresh, NUMERIC ); // 99
//////print_parameter_value(configurations_h->sm_lower_threshold, NUMERIC ); // 100
//////print_parameter_value(configurations_h->sm_upper_threshold, NUMERIC ); // 101
//////print_parameter_value(configurations_h->sm_scale_threshold, NUMERIC ); // 102
//////print_parameter_value(configurations_h->voxel_step_size, NUMERIC ); // 103
//////print_parameter_value(configurations_h->prime_offset, NUMERIC ); // 104
//////print_parameter_value(configurations_h->eta, NUMERIC ); // 105
//////print_parameter_value(configurations_h->method, NUMERIC ); // 106
//////print_parameter_value(configurations_h->psi_sign, NUMERIC ); // 107
//////print_parameter_value(configurations_h->lambda, NUMERIC ); // 108
//////print_parameter_value(configurations_h->iterations, NUMERIC ); // 109
//////print_parameter_value(configurations_h->ignore_short_mlp, BOOLEAN ); // 110
//////print_parameter_value(configurations_h->min_mlp_length, NUMERIC ); // 111
//////print_parameter_value(configurations_h->bound_image, BOOLEAN ); // 112
//////print_parameter_value(configurations_h->s_curve_on, BOOLEAN ); // 113
//////print_parameter_value(configurations_h->sigmoid_steepness, NUMERIC ); // 114
//////print_parameter_value(configurations_h->sigmoid_mid_shift, NUMERIC ); // 115
//////print_parameter_value(configurations_h->dual_sided_s_curve, BOOLEAN ); // 116
//////print_parameter_value(configurations_h->tvs_on, BOOLEAN ); // 117
//////print_parameter_value(configurations_h->tvs_first, BOOLEAN ); // 118
//////print_parameter_value(configurations_h->tvs_parallel, BOOLEAN ); // 119
//////print_parameter_value(configurations_h->tvs_conditioned, BOOLEAN ); // 120
//////print_parameter_value(configurations_h->tvs_min_beta, NUMERIC ); // 121
//////print_parameter_value(configurations_h->tv_threshold, NUMERIC ); // 122
//////print_parameter_value(configurations_h->alpha, NUMERIC ); // 123
//////print_parameter_value(configurations_h->ell_0, NUMERIC ); // 124
//////print_parameter_value(configurations_h->ell, NUMERIC ); // 125
//////print_parameter_value(configurations_h->beta_0, NUMERIC ); // 126
//////print_parameter_value(configurations_h->beta, NUMERIC ); // 127
//////print_parameter_value(configurations_h->n, NUMERIC ); // 128
//////print_parameter_value(configurations_h->avg_filter_fbp, BOOLEAN ); // 129
//////print_parameter_value(configurations_h->avg_filter_hull, BOOLEAN ); // 130
//////print_parameter_value(configurations_h->avg_filter_x_0, BOOLEAN ); // 131
//////print_parameter_value(configurations_h->median_filter_fbp, BOOLEAN ); // 132
//////print_parameter_value(configurations_h->median_filter_hull, BOOLEAN ); // 133
//////print_parameter_value(configurations_h->median_filter_x_0, BOOLEAN ); // 134
//////print_parameter_value(configurations_h->hull_avg_filter_radius, NUMERIC ); // 135
//////print_parameter_value(configurations_h->fbp_avg_filter_radius, NUMERIC ); // 136
//////print_parameter_value(configurations_h->x_0_avg_filter_radius, NUMERIC ); // 137
//////print_parameter_value(configurations_h->fbp_med_filter_radius, NUMERIC ); // 138
//////print_parameter_value(configurations_h->hull_med_filter_radius, NUMERIC ); // 139
//////print_parameter_value(configurations_h->x_0_med_filter_radius, NUMERIC ); // 140
//////print_parameter_value(configurations_h->hull_avg_filter_threshold, NUMERIC ); // 141
//////print_parameter_value(configurations_h->fbp_avg_filter_threshold, NUMERIC ); // 142
//////print_parameter_value(configurations_h->x_0_avg_filter_threshold, NUMERIC ); // 143
//////print_parameter_value(configurations_h->tested_by_string, NUMERIC ); // 144
//////print_parameter_value(configurations_h->code_owner, NUMERIC ); // 145
//////print_parameter_value(configurations_h->program_version, NUMERIC ); // 146
//////print_parameter_value(configurations_h->section_exit_string, NUMERIC ); // 147
//////print_parameter_value(configurations_h->my_recon_dir, NUMERIC ); // 148
//////print_parameter_value(configurations_h->current_git_branch, NUMERIC ); // 149
//////print_parameter_value(configurations_h->tardis_rcode_dir, NUMERIC ); // 150
//////print_parameter_value(configurations_h->perturb_A, BOOLEAN ); // 151
//////print_parameter_value(configurations_h->perturbation_parameter, NUMERIC ); // 152
//////print_parameter_value(configurations_h->max_histories_2_remove, NUMERIC ); // 153
//////print_parameter_value(configurations_h->source_radius, NUMERIC ); // 154
//////print_parameter_value(configurations_h->trig_table_step, NUMERIC ); // 155
//////print_parameter_value(configurations_h->run_on_kodiak, BOOLEAN ); // 156
////////print_parameter_value(configurations_h->lambda_k_type, NUMERIC ); // 157
//////		print_parameter_value(configurations_h->lambda_k_type, ENUM );	// 157
//////print_parameter_value(configurations_h->lambda_0, NUMERIC ); // 158
//////print_parameter_value(configurations_h->lambda_m, NUMERIC ); // 159
//////print_parameter_value(configurations_h->alpha_x0, NUMERIC ); // 160
//////print_parameter_value(configurations_h->ell_0_x0, NUMERIC ); // 161
//////print_parameter_value(configurations_h->n_x0, NUMERIC ); // 162
//////print_parameter_value(configurations_h->superiorize_x_0, BOOLEAN ); // 163
////////print_parameter_value(configurations_h->sabip_config, NUMERIC ); // 164
//////		print_parameter_value(configurations_h->sabip_config, ENUM );	// 164
//////print_parameter_value(configurations_h->sadrop_strings, NUMERIC ); // 165
//////print_parameter_value(configurations_h->sadrop_blocks_per_string, NUMERIC ); // 166
////////print_parameter_value(configurations_h->sadrop_string_blocks, NUMERIC ); // 166
////////print_parameter_value(configurations_h->block_ordering, NUMERIC ); // 167
//////		print_parameter_value(configurations_h->block_ordering, ENUM );	// 167
//////
////}
//void cfgdef_open_bash_array(const char* array_name)
//{
//	cout << array_name << "=(" << endl;
//}
//void cfgdef_close_bash_array()
//{
//	cout << ")" << endl;
//}
//void cfgdef_empty_optdesc_array(int elements)
//{
//	cfgdef_open_bash_array("optdesc");
//	for( int i = 1; i <= elements; i++)
//		cout << "\" # " << i << "\"" << endl;
//	cfgdef_close_bash_array();
//}
//template<typename N> void cfgdef_alphanumeric_parameter(N parameter_value, std::string getopt_name, bool cfgdef_optname)
//{
//	if(cfgdef_optname)
//		cout << "\"" << getopt_name << "\" # " << param_index++ << ": " << parameter_value <<  endl; // 18
//	else
//		cout << "\"" << parameter_value << "\" # " << param_index++ << ": " << getopt_name <<  endl; // 18
//}
//void cfgdef_TF_parameter(int TFbinary, std::string getopt_name, bool cfgdef_optname)
//{
//	if(cfgdef_optname)
//		cout << "\"" << getopt_name << "\" # " << param_index++ << ": " << TF_bin2text(TFbinary) <<  endl;
//	else
//		cout << "\"" << TF_bin2text(TFbinary) << "\" # " << param_index++ << ": " << getopt_name <<  endl;
//}
//template<typename E> void cfgdef_enum_parameter(E enum_type, std::string getopt_name, bool cfgdef_optname)
//{
//	//int enum_int = static_cast<int>(enum_type);
//	char prefix[256];
//	char suffix[256];
//	if(cfgdef_optname)
//	{
//		sprintf(prefix, "\"%s\" # %d: ", getopt_name.c_str(), param_index++ );
//		sprintf(suffix, "");
//	}
//	else
//	{
//		sprintf(prefix, "\"" );
//		sprintf(suffix, "\" # %d : %s", param_index++, getopt_name.c_str() );
//	}
//	if(typeid(RAND_GENERATORS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			//case 0:cout << "\"" << getopt_name << "\" # " << param_index++ << ": "  <<  "DEFAULT_RAND"  << endl;return;
//			//case 0:cout << "DEFAULT_RAND"  << " # " << param_index++ << ": " << getopt_name <<  endl;return;
//			case DEFAULT_RAND:cout << prefix <<  "DEFAULT_RAND"  << suffix  <<  endl;return;
//			case MINSTD_RAND:cout << prefix << "MINSTD_RAND"  << suffix <<  endl;return;
//			case MINSTD_RAND0:cout << prefix << "MINSTD_RAND0"  << suffix <<  endl;return;
//			case MT19937:cout << prefix << "MT19937"  << suffix <<  endl;return;
//			case MT19937_64:cout << prefix << "MT19937_64"  << suffix <<  endl;return;
//			case RANLUX24:cout << prefix << "RANLUX24"  << suffix <<  endl;return;
//			case RANLUX48:cout << prefix << "RANLUX48"  << suffix <<  endl;return;
//			case KNUTH_B:cout << prefix << "KNUTH_B"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(RAND_GENERATORS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(SCAN_TYPES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case EXPERIMENTAL:cout << prefix << "EXPERIMENTAL"  << suffix <<  endl;return;
//			case SIMULATED_G:cout << prefix << "SIMULATED_G"  << suffix <<  endl;return;
//			case SIMULATED_T:cout << prefix << "SIMULATED_T"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SCAN_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(FILE_TYPES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case TEXT:cout << prefix << "TEXT"  << suffix <<  endl;return;
//			case BINARY:cout << prefix << "BINARY"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(FILE_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(DATA_FORMATS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case OLD_FORMAT:cout << prefix << "OLD_FORMAT"  << suffix <<  endl;return;
//			case VERSION_0:cout << prefix << "VERSION_0"  << suffix <<  endl;return;
//			case VERSION_1:cout << prefix << "VERSION_1"  << suffix <<  endl;return;
//			case CONTINUOUS:cout << prefix << "CONTINUOUS"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(DATA_FORMATS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(IMAGE_BASES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case VOXELS:cout << prefix << "VOXELS"  << suffix <<  endl;return;
//			case BLOBS:cout << prefix << "BLOBS"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(IMAGE_BASES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(FILTER_TYPES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case RAM_LAK:cout << prefix << "RAM_LAK"  << suffix <<  endl;return;
//			case SHEPP_LOGAN:cout << prefix << "SHEPP_LOGAN"  << suffix <<  endl;return;
//			case NONE:cout << prefix << "NONE"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(FILTER_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(HULL_TYPES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case SC_HULL:cout << prefix << "SC_HULL"  << suffix <<  endl;return;
//			case MSC_HULL:cout << prefix << "MSC_HULL"  << suffix <<  endl;return;
//			case SM_HULL:cout << prefix << "SM_HULL"  << suffix <<  endl;return;
//			case FBP_HULL:cout << prefix << "FBP_HULL"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(HULL_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(INITIAL_ITERATE).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case X_HULL:cout << prefix << "X_HULL"  << suffix <<  endl;return;
//			case FBP_IMAGE:cout << prefix << "FBP_IMAGE"  << suffix <<  endl;return;
//			case HYBRID:cout << prefix << "HYBRID"  << suffix <<  endl;return;
//			case ZEROS:cout << prefix << "ZEROS"  << suffix <<  endl;return;
//			case IMPORT:cout << prefix << "IMPORT"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(INITIAL_ITERATE).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(ENDPOINTS_ALGORITHMS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case YES_BOOL:cout << prefix << "YES_BOOL"  << suffix <<  endl;return;
//			case NO_BOOL:cout << prefix << "NO_BOOL"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(ENDPOINTS_ALGORITHMS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(TX_OPTIONS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case FULL_TX:cout << prefix << "FULL_TX"  << suffix <<  endl;return;
//			case PARTIAL_TX:cout << prefix << "PARTIAL_TX"  << suffix <<  endl;return;
//			case PARTIAL_TX_PREALLOCATED:cout << prefix << "PARTIAL_TX_PREALLOCATED"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(TX_OPTIONS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(MLP_ALGORITHMS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case STANDARD:cout << prefix << "STANDARD"  << suffix <<  endl;return;
//			case TABULATED:cout << prefix << "TABULATED"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(MLP_ALGORITHMS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(PROJECTION_ALGORITHMS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case ART:cout << prefix << "ART"  << suffix <<  endl;return;
//			case SART:cout << prefix << "SART"  << suffix <<  endl;return;
//			case BIP:cout << prefix << "BIP"  << suffix <<  endl;return;
//			case BICAV:cout << prefix << "BICAV"  << suffix <<  endl;return;
//			case DROP:cout << prefix << "DROP"  << suffix <<  endl;return;
//			case OSSART:cout << prefix << "OSSART"  << suffix <<  endl;return;
//			case SAP:cout << prefix << "SAP"  << suffix <<  endl;return;
//			case CARP:cout << prefix << "CARP"  << suffix <<  endl;return;
//			case SABICAV:cout << prefix << "SABICAV"  << suffix <<  endl;return;
//			case SADROP:cout << prefix << "SADROP"  << suffix <<  endl;return;
//			case SAOSSART:cout << prefix << "SAOSSART"  << suffix <<  endl;return;
//			case ROBUST_A:cout << prefix << "ROBUST_A"  << suffix <<  endl;return;
//			case ROBUST_B:cout << prefix << "ROBUST_B"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(PROJECTION_ALGORITHMS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(S_CURVES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case SIGMOID:cout << prefix << "SIGMOID"  << suffix <<  endl;return;
//			case TANH:cout << prefix << "TANH"  << suffix <<  endl;return;
//			case ATAN:cout << prefix << "ATAN"  << suffix <<  endl;return;
//			case ERF:cout << prefix << "ERF"  << suffix <<  endl;return;
//			case LIN_OVER_ROOT:cout << prefix << "LIN_OVER_ROOT"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(S_CURVES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(ROBUST_METHODS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case OLS:cout << prefix << "OLS"  << suffix <<  endl;return;
//			case TLS:cout << prefix << "TLS"  << suffix <<  endl;return;
//			case TIKHONOV:cout << prefix << "TIKHONOV"  << suffix <<  endl;return;
//			case RIDGE:cout << prefix << "RIDGE"  << suffix <<  endl;return;
//			case MINMIN:cout << prefix << "MINMIN"  << suffix <<  endl;return;
//			case MINMAX:cout << prefix << "MINMAX"  << suffix <<  endl;return;
//			case ADDITIVE_UPDATE:cout << prefix << "ADDITIVE_UPDATE"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(ROBUST_METHODS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(LAMBDA_K_TYPES).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case CONSTANT:cout << prefix << "CONSTANT"  << suffix <<  endl;return;
//			case LINEAR_K:cout << prefix << "LINEAR_K"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(LAMBDA_K_TYPES).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(SABIP_CONFIGS).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case SABIP_NUM_STRINGS:cout << prefix << "SABIP_NUM_STRINGS"  << suffix <<  endl;return;
//			case SABIP_STRING_SIZE:cout << prefix << "SABIP_STRING_SIZE"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(SABIP_CONFIGS).name() << " parameter " << endl;return;
//		}
//	}
//	else if(typeid(BLOCK_ORDERING).name() == typeid(enum_type).name()  )
//	{
//		//switch(enum_int)
//		switch(enum_type)
//		{
//			case CYCLIC:cout << prefix << "CYCLIC"  << suffix <<  endl;return;
//			case ROTATE_LEFT:cout << prefix << "ROTATE_LEFT"  << suffix <<  endl;return;
//			case ROTATE_RIGHT:cout << prefix << "ROTATE_RIGHT"  << suffix <<  endl;return;
//			case RAND_SHUFFLE:cout << prefix << "RAND_SHUFFLE"  << suffix <<  endl;return;
//			case PRIME_CYCLE:cout << prefix << "PRIME_CYCLE"  << suffix <<  endl;return;
//			default:cout << "ERROR: Invalid " << typeid(BLOCK_ORDERING).name() << " parameter " << endl;return;
//		}
//	}
//	else
//		cout << "ERROR: Undefined 'enum' type parameter"  << endl;
//}
//void print_init_values()
//{
//	std::ofstream out("cfgdef.sh.txt");
//    std::streambuf *coutbuf = cout.rdbuf(); //save old buf
//    cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
//	param_index = 1;
//	int num_params = 0;
//	//auto bar = std::make_tuple ("rand_engine" , ENUM);
//	////typedef std::vector<std::tuple<const char*, PARAMETER_TYPES>> params;
//	////params param_list;
//	////param_list.push_back(bar);
//	//std::vector<std::tuple<const char*, PARAMETER_TYPES>> params;
//	//params.push_back(bar);
//
//	bool cfgdef_optname = false;
//	char cfgdef_array_name[256];
//	for( int i = 1; i >= 0; i--)
//	{
//		cfgdef_optname = static_cast<bool>(i);
//		if(cfgdef_optname)
//			sprintf(cfgdef_array_name, "optarr");
//		else
//			sprintf(cfgdef_array_name, "optargs");
//		cfgdef_open_bash_array(cfgdef_array_name);
//		cfgdef_enum_parameter(configurations_h->rand_engine, "rand_engine" , cfgdef_optname );	// 1
//		cfgdef_enum_parameter(configurations_h->tvs_rand_engine, "tvs_rand_engine" , cfgdef_optname );	// 2
//		cfgdef_enum_parameter(configurations_h->scan_type,  "scan_type" , cfgdef_optname );	// 3
//		cfgdef_enum_parameter(configurations_h->file_type, "file_type" , cfgdef_optname );	// 4
//		cfgdef_enum_parameter(configurations_h->data_format,  "data_format" , cfgdef_optname );	// 5
//		cfgdef_enum_parameter(configurations_h->image_basis,  "image_basis" , cfgdef_optname );	// 6
//		cfgdef_enum_parameter(configurations_h->fbp_filter,  "fbp_filter" , cfgdef_optname );	// 7
//		cfgdef_enum_parameter(configurations_h->endpoints_hull , "endpoints_hull", cfgdef_optname ); 	// 8
//		cfgdef_enum_parameter(configurations_h->x_0 ,  "x_0", cfgdef_optname ); 	// 9
//		cfgdef_enum_parameter(configurations_h->endpoints_alg ,  "endpoints_alg", cfgdef_optname ); 	// 10
//		cfgdef_enum_parameter(configurations_h->endpoints_tx_mode ,  "endpoints_tx_mode", cfgdef_optname ); 	// 11
//		cfgdef_enum_parameter(configurations_h->mlp_algorithm ,  "mlp_algorithm", cfgdef_optname ); 	// 12
//		cfgdef_enum_parameter(configurations_h->projection_algorithm ,  "projection_algorithm", cfgdef_optname ); 	// 13
//		cfgdef_enum_parameter(configurations_h->recon_tx_mode, "recon_tx_mode", cfgdef_optname ); 	// 14
//		cfgdef_enum_parameter(configurations_h->drop_tx_mode, "drop_tx_mode", cfgdef_optname ); 	// 15
//		cfgdef_enum_parameter(configurations_h->s_curve, "s_curve", cfgdef_optname ); 	// 16
//		cfgdef_enum_parameter(configurations_h->robust_method, "robust_method", cfgdef_optname ); 	// 17
//		cfgdef_TF_parameter(configurations_h->run_on, "run_on", cfgdef_optname );  // 18
//		cfgdef_TF_parameter(configurations_h->testing_on, "testing_on", cfgdef_optname );  // 19
//		cfgdef_TF_parameter(configurations_h->block_testing_on, "block_testing_on", cfgdef_optname );  // 20
//		cfgdef_TF_parameter(configurations_h->s_curve_testing_on, "s_curve_testing_on", cfgdef_optname );  // 21
//		cfgdef_TF_parameter(configurations_h->ntvs_testing_on, "ntvs_testing_on", cfgdef_optname );  // 22
//		cfgdef_TF_parameter(configurations_h->overwriting_ok, "overwriting_ok", cfgdef_optname );  // 23
//		cfgdef_TF_parameter(configurations_h->exit_after_binning, "exit_after_binning", cfgdef_optname );  // 24
//		cfgdef_TF_parameter(configurations_h->exit_after_hulls, "exit_after_hulls", cfgdef_optname );  // 25
//		cfgdef_TF_parameter(configurations_h->exit_after_cuts, "exit_after_cuts", cfgdef_optname );  // 26
//		cfgdef_TF_parameter(configurations_h->exit_after_sinogram, "exit_after_sinogram", cfgdef_optname );  // 27
//		cfgdef_TF_parameter(configurations_h->exit_after_fbp, "exit_after_fbp", cfgdef_optname );  // 28
//		cfgdef_TF_parameter(configurations_h->close_after_execution, "close_after_execution", cfgdef_optname );  // 29
//		cfgdef_TF_parameter(configurations_h->debug_text_on, "debug_text_on", cfgdef_optname );  // 30
//		cfgdef_TF_parameter(configurations_h->sample_std_dev, "sample_std_dev", cfgdef_optname );  // 31
//		cfgdef_TF_parameter(configurations_h->fbp_on, "fbp_on", cfgdef_optname );  // 32
//		cfgdef_TF_parameter(configurations_h->import_filtered_fbp, "import_filtered_fbp", cfgdef_optname );  // 33
//		cfgdef_TF_parameter(configurations_h->sc_on, "sc_on", cfgdef_optname );  // 34
//		cfgdef_TF_parameter(configurations_h->msc_on, "msc_on", cfgdef_optname );  // 35
//		cfgdef_TF_parameter(configurations_h->sm_on, "sm_on", cfgdef_optname );  // 36
//		cfgdef_TF_parameter(configurations_h->count_0_wepls, "count_0_wepls", cfgdef_optname );  // 37
//		cfgdef_TF_parameter(configurations_h->direct_image_reconstruction, "direct_image_reconstruction", cfgdef_optname );  // 38
//		cfgdef_TF_parameter(configurations_h->mlp_file_exists, "mlp_file_exists", cfgdef_optname );  // 39
//		cfgdef_TF_parameter(configurations_h->mlp_endpoints_file_exists, "mlp_endpoints_file_exists", cfgdef_optname );  // 40
//		cfgdef_alphanumeric_parameter(configurations_h->input_directory, "input_directory", cfgdef_optname );  // 41
//		cfgdef_alphanumeric_parameter(configurations_h->output_directory, "output_directory", cfgdef_optname );  // 42
//		cfgdef_alphanumeric_parameter(configurations_h->input_folder, "input_folder", cfgdef_optname );  // 43
//		cfgdef_alphanumeric_parameter(configurations_h->output_folder, "output_folder", cfgdef_optname );  // 44
//		cfgdef_TF_parameter(configurations_h->binary_encoding, "binary_encoding", cfgdef_optname );  // 45
//		cfgdef_TF_parameter(configurations_h->single_data_file, "single_data_file", cfgdef_optname );  // 46
//		cfgdef_TF_parameter(configurations_h->ssd_in_mm, "ssd_in_mm", cfgdef_optname );  // 47
//		cfgdef_TF_parameter(configurations_h->data_in_mm, "data_in_mm", cfgdef_optname );  // 48
//		cfgdef_TF_parameter(configurations_h->micah_sim, "micah_sim", cfgdef_optname );  // 49
//		cfgdef_TF_parameter(configurations_h->write_bin_wepls, "write_bin_wepls", cfgdef_optname );  // 50
//		cfgdef_TF_parameter(configurations_h->write_wepl_dists, "write_wepl_dists", cfgdef_optname );  // 51
//		cfgdef_TF_parameter(configurations_h->write_ssd_angles, "write_ssd_angles", cfgdef_optname );  // 52
//		cfgdef_TF_parameter(configurations_h->write_sc_hull, "write_sc_hull", cfgdef_optname );  // 53
//		cfgdef_TF_parameter(configurations_h->write_msc_counts, "write_msc_counts", cfgdef_optname );  // 54
//		cfgdef_TF_parameter(configurations_h->write_msc_hull, "write_msc_hull", cfgdef_optname );  // 55
//		cfgdef_TF_parameter(configurations_h->write_sm_counts, "write_sm_counts", cfgdef_optname );  // 56
//		cfgdef_TF_parameter(configurations_h->write_sm_hull, "write_sm_hull", cfgdef_optname );  // 57
//		cfgdef_TF_parameter(configurations_h->write_fbp_image, "write_fbp_image", cfgdef_optname );  // 58
//		cfgdef_TF_parameter(configurations_h->write_fbp_hull, "write_fbp_hull", cfgdef_optname );  // 59
//		cfgdef_TF_parameter(configurations_h->write_avg_fbp, "write_avg_fbp", cfgdef_optname );  // 60
//		cfgdef_TF_parameter(configurations_h->write_median_fbp, "write_median_fbp", cfgdef_optname );  // 61
//		cfgdef_TF_parameter(configurations_h->write_filtered_hull, "write_filtered_hull", cfgdef_optname );  // 62
//		cfgdef_TF_parameter(configurations_h->write_x_hull, "write_x_hull", cfgdef_optname );  // 63
//		cfgdef_TF_parameter(configurations_h->write_x_0, "write_x_0", cfgdef_optname );  // 64
//		cfgdef_TF_parameter(configurations_h->write_x_ki, "write_x_ki", cfgdef_optname );  // 65
//		cfgdef_TF_parameter(configurations_h->write_x, "write_x", cfgdef_optname );  // 66
//		cfgdef_alphanumeric_parameter<int>(configurations_h->drop_block_size, "drop_block_size", cfgdef_optname );  // 67
//		cfgdef_alphanumeric_parameter(configurations_h->threads_per_block, "threads_per_block", cfgdef_optname );  // 68
//		cfgdef_alphanumeric_parameter(configurations_h->endpoints_per_block, "endpoints_per_block", cfgdef_optname );  // 69
//		cfgdef_alphanumeric_parameter(configurations_h->histories_per_block, "histories_per_block", cfgdef_optname );  // 70
//		cfgdef_alphanumeric_parameter(configurations_h->endpoints_per_thread, "endpoints_per_thread", cfgdef_optname );  // 71
//		cfgdef_alphanumeric_parameter(configurations_h->histories_per_thread, "histories_per_thread", cfgdef_optname );  // 72
//		cfgdef_alphanumeric_parameter(configurations_h->voxels_per_thread, "voxels_per_thread", cfgdef_optname );  // 73
//		cfgdef_alphanumeric_parameter(configurations_h->max_gpu_histories, "max_gpu_histories", cfgdef_optname );  // 74
//		cfgdef_alphanumeric_parameter(configurations_h->max_cuts_histories, "max_cuts_histories", cfgdef_optname );  // 75
//		cfgdef_alphanumeric_parameter(configurations_h->max_endpoints_histories, "max_endpoints_histories", cfgdef_optname );  // 76
//		cfgdef_alphanumeric_parameter(configurations_h->max_intersections, "max_intersections", cfgdef_optname );  // 77
//		cfgdef_alphanumeric_parameter(configurations_h->gantry_angle_interval, "gantry_angle_interval", cfgdef_optname );  // 78
//		cfgdef_alphanumeric_parameter(configurations_h->num_scans, "num_scans", cfgdef_optname );  // 79
//		cfgdef_alphanumeric_parameter(configurations_h->ssd_t_size, "ssd_t_size", cfgdef_optname );  // 80
//		cfgdef_alphanumeric_parameter(configurations_h->ssd_v_size, "ssd_v_size", cfgdef_optname );  // 81
//		cfgdef_alphanumeric_parameter(configurations_h->t_shift, "t_shift", cfgdef_optname );  // 82
//		cfgdef_alphanumeric_parameter(configurations_h->u_shift, "u_shift", cfgdef_optname );  // 83
//		cfgdef_alphanumeric_parameter(configurations_h->v_shift, "v_shift", cfgdef_optname );  // 84
//		cfgdef_alphanumeric_parameter(configurations_h->t_bin_size, "t_bin_size", cfgdef_optname );  // 85
//		cfgdef_alphanumeric_parameter(configurations_h->v_bin_size, "v_bin_size", cfgdef_optname );  // 86
//		cfgdef_alphanumeric_parameter(configurations_h->angular_bin_size, "angular_bin_size", cfgdef_optname );  // 87
//		cfgdef_alphanumeric_parameter(configurations_h->sigmas_to_keep, "sigmas_to_keep", cfgdef_optname );  // 88
//		cfgdef_alphanumeric_parameter(configurations_h->fbp_threshold, "fbp_threshold", cfgdef_optname );  // 89
//		cfgdef_alphanumeric_parameter(configurations_h->recon_cyl_radius, "recon_cyl_radius", cfgdef_optname );  // 90
//		cfgdef_alphanumeric_parameter(configurations_h->slice_thickness, "slice_thickness", cfgdef_optname );  // 91
//		cfgdef_alphanumeric_parameter(configurations_h->voxel_width, "voxel_width", cfgdef_optname );  // 92
//		cfgdef_alphanumeric_parameter(configurations_h->voxel_height, "voxel_height", cfgdef_optname );  // 93
//		cfgdef_alphanumeric_parameter(configurations_h->voxel_thickness, "voxel_thickness", cfgdef_optname );  // 94
//		cfgdef_alphanumeric_parameter(configurations_h->sc_lower_threshold, "sc_lower_threshold", cfgdef_optname );  // 95
//		cfgdef_alphanumeric_parameter(configurations_h->sc_upper_threshold, "sc_upper_threshold", cfgdef_optname );  // 96
//		cfgdef_alphanumeric_parameter(configurations_h->msc_upper_threshold, "msc_upper_threshold", cfgdef_optname );  // 97
//		cfgdef_alphanumeric_parameter(configurations_h->msc_lower_threshold, "msc_lower_threshold", cfgdef_optname );  // 98
//		cfgdef_alphanumeric_parameter(configurations_h->msc_diff_thresh, "msc_diff_thresh", cfgdef_optname );  // 99
//		cfgdef_alphanumeric_parameter(configurations_h->sm_lower_threshold, "sm_lower_threshold", cfgdef_optname );  // 100
//		cfgdef_alphanumeric_parameter(configurations_h->sm_upper_threshold, "sm_upper_threshold", cfgdef_optname );  // 101
//		cfgdef_alphanumeric_parameter(configurations_h->sm_scale_threshold, "sm_scale_threshold", cfgdef_optname );  // 102
//		cfgdef_alphanumeric_parameter(configurations_h->voxel_step_size, "voxel_step_size", cfgdef_optname );  // 103
//		cfgdef_alphanumeric_parameter(configurations_h->prime_offset, "prime_offset", cfgdef_optname );  // 104
//		cfgdef_alphanumeric_parameter(configurations_h->eta, "eta", cfgdef_optname );  // 105
//		cfgdef_alphanumeric_parameter(configurations_h->method, "method", cfgdef_optname );  // 106
//		cfgdef_alphanumeric_parameter(configurations_h->psi_sign, "psi_sign", cfgdef_optname );  // 107
//		cfgdef_alphanumeric_parameter(configurations_h->lambda, "lambda", cfgdef_optname );  // 108
//		cfgdef_alphanumeric_parameter(configurations_h->iterations, "iterations", cfgdef_optname );  // 109
//		cfgdef_TF_parameter(configurations_h->ignore_short_mlp, "ignore_short_mlp", cfgdef_optname );  // 110
//		cfgdef_alphanumeric_parameter(configurations_h->min_mlp_length, "min_mlp_length", cfgdef_optname );  // 111
//		cfgdef_TF_parameter(configurations_h->bound_image, "bound_image", cfgdef_optname );  // 112
//		cfgdef_TF_parameter(configurations_h->s_curve_on, "s_curve_on", cfgdef_optname );  // 113
//		cfgdef_alphanumeric_parameter(configurations_h->sigmoid_steepness, "sigmoid_steepness", cfgdef_optname );  // 114
//		cfgdef_alphanumeric_parameter(configurations_h->sigmoid_mid_shift, "sigmoid_mid_shift", cfgdef_optname );  // 115
//		cfgdef_TF_parameter(configurations_h->dual_sided_s_curve, "dual_sided_s_curve", cfgdef_optname );  // 116
//		cfgdef_TF_parameter(configurations_h->tvs_on, "tvs_on", cfgdef_optname );  // 117
//		cfgdef_TF_parameter(configurations_h->tvs_first, "tvs_first", cfgdef_optname );  // 118
//		cfgdef_TF_parameter(configurations_h->tvs_parallel, "tvs_parallel", cfgdef_optname );  // 119
//		cfgdef_TF_parameter(configurations_h->tvs_conditioned, "tvs_conditioned", cfgdef_optname );  // 120
//		cfgdef_alphanumeric_parameter(configurations_h->tvs_min_beta, "tvs_min_beta", cfgdef_optname );  // 121
//		cfgdef_alphanumeric_parameter(configurations_h->tv_threshold, "tv_threshold", cfgdef_optname );  // 122
//		cfgdef_alphanumeric_parameter(configurations_h->alpha, "alpha", cfgdef_optname );  // 123
//		cfgdef_alphanumeric_parameter(configurations_h->ell_0, "ell_0", cfgdef_optname );  // 124
//		cfgdef_alphanumeric_parameter(configurations_h->ell, "ell", cfgdef_optname );  // 125
//		cfgdef_alphanumeric_parameter(configurations_h->beta_0, "beta_0", cfgdef_optname );  // 126
//		cfgdef_alphanumeric_parameter(configurations_h->beta, "beta", cfgdef_optname );  // 127
//		cfgdef_alphanumeric_parameter(configurations_h->n, "n", cfgdef_optname );  // 128
//		cfgdef_TF_parameter(configurations_h->avg_filter_fbp, "avg_filter_fbp", cfgdef_optname );  // 129
//		cfgdef_TF_parameter(configurations_h->avg_filter_hull, "avg_filter_hull", cfgdef_optname );  // 130
//		cfgdef_TF_parameter(configurations_h->avg_filter_x_0, "avg_filter_x_0", cfgdef_optname );  // 131
//		cfgdef_TF_parameter(configurations_h->median_filter_fbp, "median_filter_fbp", cfgdef_optname );  // 132
//		cfgdef_TF_parameter(configurations_h->median_filter_hull, "median_filter_hull", cfgdef_optname );  // 133
//		cfgdef_TF_parameter(configurations_h->median_filter_x_0, "median_filter_x_0", cfgdef_optname );  // 134
//		cfgdef_alphanumeric_parameter(configurations_h->hull_avg_filter_radius, "hull_avg_filter_radius", cfgdef_optname );  // 135
//		cfgdef_alphanumeric_parameter(configurations_h->fbp_avg_filter_radius, "fbp_avg_filter_radius", cfgdef_optname );  // 136
//		cfgdef_alphanumeric_parameter(configurations_h->x_0_avg_filter_radius, "x_0_avg_filter_radius", cfgdef_optname );  // 137
//		cfgdef_alphanumeric_parameter(configurations_h->fbp_med_filter_radius, "fbp_med_filter_radius", cfgdef_optname );  // 138
//		cfgdef_alphanumeric_parameter(configurations_h->hull_med_filter_radius, "hull_med_filter_radius", cfgdef_optname );  // 139
//		cfgdef_alphanumeric_parameter(configurations_h->x_0_med_filter_radius, "x_0_med_filter_radius", cfgdef_optname );  // 140
//		cfgdef_alphanumeric_parameter(configurations_h->hull_avg_filter_threshold, "hull_avg_filter_threshold", cfgdef_optname );  // 141
//		cfgdef_alphanumeric_parameter(configurations_h->fbp_avg_filter_threshold, "fbp_avg_filter_threshold", cfgdef_optname );  // 142
//		cfgdef_alphanumeric_parameter(configurations_h->x_0_avg_filter_threshold, "x_0_avg_filter_threshold", cfgdef_optname );  // 143
//		cfgdef_alphanumeric_parameter(configurations_h->tested_by_string, "tested_by_string", cfgdef_optname );  // 144
//		cfgdef_alphanumeric_parameter(configurations_h->code_owner, "code_owner", cfgdef_optname );  // 145
//		cfgdef_alphanumeric_parameter(configurations_h->program_version, "program_version", cfgdef_optname );  // 146
//		cfgdef_alphanumeric_parameter(configurations_h->section_exit_string, "section_exit_string", cfgdef_optname );  // 147
//		cfgdef_alphanumeric_parameter(configurations_h->my_recon_dir, "my_recon_dir", cfgdef_optname );  // 148
//		cfgdef_alphanumeric_parameter(configurations_h->current_git_branch, "current_git_branch", cfgdef_optname );  // 149
//		cfgdef_alphanumeric_parameter(configurations_h->tardis_rcode_dir, "tardis_rcode_dir", cfgdef_optname );  // 150
//		cfgdef_TF_parameter(configurations_h->perturb_A, "perturb_A", cfgdef_optname );  // 151
//		cfgdef_alphanumeric_parameter(configurations_h->perturbation_parameter, "perturbation_parameter", cfgdef_optname );  // 152
//		cfgdef_alphanumeric_parameter(configurations_h->max_histories_2_remove, "max_histories_2_remove", cfgdef_optname );  // 153
//		cfgdef_alphanumeric_parameter(configurations_h->source_radius, "source_radius", cfgdef_optname );  // 154
//		cfgdef_alphanumeric_parameter(configurations_h->trig_table_step, "trig_table_step", cfgdef_optname );  // 155
//		cfgdef_TF_parameter(configurations_h->run_on_kodiak, "run_on_kodiak", cfgdef_optname );  // 156
//		cfgdef_enum_parameter(configurations_h->lambda_k_type, "lambda_k_type", cfgdef_optname ); 	// 157
//		cfgdef_alphanumeric_parameter(configurations_h->lambda_0, "lambda_0", cfgdef_optname );  // 158
//		cfgdef_alphanumeric_parameter(configurations_h->lambda_m, "lambda_m", cfgdef_optname );  // 159
//		cfgdef_alphanumeric_parameter(configurations_h->alpha_x0, "alpha_x0", cfgdef_optname );  // 160
//		cfgdef_alphanumeric_parameter(configurations_h->ell_0_x0, "ell_0_x0", cfgdef_optname );  // 161
//		cfgdef_alphanumeric_parameter(configurations_h->n_x0, "n_x0", cfgdef_optname );  // 162
//		cfgdef_TF_parameter(configurations_h->superiorize_x_0, "superiorize_x_0", cfgdef_optname );  // 163
//		cfgdef_enum_parameter(configurations_h->sabip_config, "sabip_config", cfgdef_optname ); 	// 164
//		cfgdef_alphanumeric_parameter(configurations_h->sadrop_strings, "sadrop_strings", cfgdef_optname );  // 165
//		cfgdef_alphanumeric_parameter(configurations_h->sadrop_blocks_per_string, "sadrop_blocks_per_string", cfgdef_optname );  // 166
//		cfgdef_enum_parameter(configurations_h->block_ordering, "block_ordering", cfgdef_optname ); 	// 167
//		cfgdef_close_bash_array();
//		num_params = param_index;
//	}
//	cfgdef_empty_optdesc_array(num_params);
//	cout.rdbuf(coutbuf); //reset to standard output again
//}
