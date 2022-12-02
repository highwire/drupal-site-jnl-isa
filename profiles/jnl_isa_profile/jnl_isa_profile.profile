<?php

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function jnl_isa_profile_details() {
  return array(
    'name' => 'isa',
    'description' => 'This is the install script for isa',
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function jnl_isa_profile_install_tasks(&$install_state) {
  $tasks = array();
  set_time_limit(0);
  $tasks['highwire_profile_task_jcore_options'] = array(
    'display_name' => 'Configure JCore Options',
    'type' => 'form',
    'function' => 'highwire_profile_task_jcore_options_form',
  );

  $tasks['higwhire_profile_task_set_variables'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_enable_highwire'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_enable_contrib'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_enable_site_features'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_add_indexes'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_grant_permissions'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_enable_hw_theme'] = array(
    'display' => FALSE,
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  $tasks['jnl_isa_profile_task_create_content_menus'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_create_footer_menus'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_create_social_media_menu'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_block_configuration'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_ckeditor_configuration'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_add_menu_position_rule'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_create_email_alerts_change_email_address_advaced_page'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_create_snippet'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_update_archive_menu_path'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_update_user_menu'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_configure_login_destination_rule'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_eu_cookie_compliance'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['jnl_isa_profile_task_flush_caches'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  return $tasks;
}

/**
 * Form constructor for jcore options install profile task.
 *
 * @ingroup forms
 */
function highwire_profile_task_jcore_options_form($form, &$form_state, &$install_state) {
  $form = highwire_jcore_settings($form, $form_state);

  // Theme settings.
  $form['theme'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );

  // Default palette.
  $scheme = 'jcore_1';
  // Add schemes from color module.
  if (module_exists('color')) {
    $info = color_get_info('jcore_1');
    if (!empty($info['schemes']) && is_array($info['schemes'])) {
      $options = array();
      foreach($info['schemes'] as $name => $scheme) {
        // Skip default scheme, we don't want it to be used.
        if ($name == 'default') {
          continue;
        }
        $options[$name] = $scheme['title'];
      }
      $form['theme']['jcore_1_color_scheme'] = array(
        '#type' => 'select',
        '#title' => t('Color Palette'),
        '#description' => t('Choose the color palette to use on your jcore site.'),
        '#options' => $options,
        '#default_value' => $scheme,
      );
    }
  }

  $form['actions']['submit']['#submit'] = array('highwire_profile_task_jcore_options_form_submit');
  $form['actions']['submit']['#value'] = t('Save and continue');
  return $form;
}

/**
 * Submit handler for highwire_profile_task_jcore_options_form().
 */
function highwire_profile_task_jcore_options_form_submit($form, &$form_state) {
  global $install_state;
  form_state_values_clean($form_state);
  if (!empty($form_state['values']['theme'])) {
    $install_state['parameters']['theme'] = $form_state['values']['theme'];
    unset($form_state['values']['theme']);
  }
  $install_state['parameters']['jcore_conf'] = $form_state['values'];
}

function higwhire_profile_task_set_variables(&$install_state) {
  // Set the first-day-of-the-week
  variable_set('date_first_day', 0);

  // Set-up date/time formats
  variable_set('date_format_short', 'Y-m-d H:i');
  variable_set('date_format_medium', 'D, Y-m-d H:i');
  variable_set('date_format_long', 'l, F j, Y - H:i');

  // Set-up the admin-theme to be hw-admin
  variable_set('admin_theme', 'hw_admin');

  // Enable clean-urls
  variable_set('clean_url', TRUE);

  // Set the default login panel
  variable_set('highwire_user_login_panel', 'jnl_isa_login');

  // If it\'s the default site-name, rename it to be HighWire specific
  if (variable_get('site_name', '') == 'Site-Install') {
    variable_set('site_name', 'isa');
  }

  // Set the default 403 page i.e. Access denied
  variable_set('site_403', 'error/access-denied');

  // Set the default 404 page i.e. Page not found
  variable_set('site_404', 'error/not-found');
  //Do an AC request on every page load. This has negative performance implications, but is needed to support Athens, Shibboleth, and RBAC authentication methods. It is also needed for auth strings
  //for JCORE highwire_user_auto_identify should be set to TRUE on install.
  variable_set('highwire_user_auto_identify', TRUE);
  // Add destination parameter to login link.
  variable_set('highwire_user_current_path_as_destination', 1);

  // Set the default values for Image Cache External.
  variable_set('imagecache_external_use_whitelist', FALSE);
  variable_set('imagecache_external_hosts', '');

  // Set default LESS engine
  variable_set('less_engine', 'less.php');

  // Set maximum depth limit for the token UI to 2.
  variable_set('token_tree_recursion_limit', 2);

  // Set redirects for journal and volume node pages.
  variable_set('redirect_journal_node_view', TRUE);
  variable_set('redirect_journal_node_view_path', 'content/by/year');
  variable_set('redirect_volume_node_view', TRUE);
  variable_set('redirect_volume_node_view_path', 'content/by/volume');

  // Configure AdvAgg modules.
  // Global AdvAgg settings.
  variable_set('advagg_browser_dns_prefetch', TRUE);
  variable_set('advagg_cache_level', 3);
  variable_set('advagg_ie_css_selector_limiter', TRUE);
  // AdvAgg Bundler settings: target 1 bundle.
  variable_set('advagg_bundler_max_css', 1);
  variable_set('advagg_bundler_max_js', 1);
  // AdvAgg CSS Compression settings: use YUI.
  variable_set('advagg_css_compressor', 2);
  variable_set('advagg_css_compress_inline', 2);
  variable_set('advagg_css_compress_inline_if_not_cacheable', TRUE);
  // AdvAgg JS Compression settings: use JSqueeze.
  variable_set('advagg_js_compressor', 5);
  variable_set('advagg_js_compress_inline', 5);
  variable_set('advagg_js_compress_add_license', FALSE);

  // Configure Lazyloading
  variable_set('highwire_responsive_lazyload', 1);

  // 'Enabled yepnope.js for backwards compatibility.'
  variable_set('modernizr_cb_load', 1);

  variable_set('date_default_timezone', 'America/Los_Angeles');
  variable_set('site_default_country', 'US');
  variable_set('forward_display_nodes', 0);

  // Set qtip to not load library on every page.
  variable_set('qtip_pages_visibility', '1');

  // Setting default page title format for 'highwire_issue' contenttype
  variable_set('highwire_issue_default_head_title', '[variant:title:toc] — [node:ppubdate:F_d,_Y], [node:volume] ([node:issue])');
  variable_set('highwire_issue_default_head_title_with_variant', '[variant:title:!current] — [node:ppubdate:F_d,_Y], [node:volume] ([node:issue])');

  // Configure citation_fulltext_world_readable metatag.
  variable_set('highwire_metatags_world_readable_cc_license', 1);

  // Set jcore options variables.
  $jcore_conf = !empty($install_state['parameters']['jcore_conf']) ? $install_state['parameters']['jcore_conf'] : array();
  foreach($jcore_conf as $var => $value) {
    variable_set($var, $value);
  }

  // DRQUEST-1326 - Set default dimensions for current cover image sizes
  variable_set('cover_image_small_width', 75);
  variable_set('cover_image_medium_width', 150);
  variable_set('cover_image_large_width', 300);

  // JCORE-2855: Turn off auto-creation of nodequeue views
  variable_set('nodequeue_view_per_queue', 0);

  // JCORE-3273: Allow abstract variant to work/not get redirected
  variable_set('highwire_variant_settings_redirect_to_base_abstract', FALSE);

  // JCORE-3341: Set AC to use apath by default
  variable_set('highwire_ac_id_type', 'apath');
}

function jnl_isa_profile_task_enable_highwire(&$install_state) {
  features_install_modules(array('highwire'));
  features_revert(array('highwire' => array('strongarm')));

  features_install_modules(array('highwire_user'));

  $module_list = array(
    'highwire_citation_manager',
    'highwire_corpus_config',
    'highwire_import',
    'highwire_node_state_query_service',
    'highwire_services_ipauth',
    'highwire_responsive',
    'highwire_theme_tools',
    'hw_feature_responsive_menu',
    'hw_feature_small_logo',
  );
  module_enable($module_list);
}

// Enable all the contrib modules we will use everywhere
function jnl_isa_profile_task_enable_contrib(&$install_state) {
  $module_list = array(
    'entitycache',
    'memcache',
    'pathauto',
    'page_rebuild_cache',
    'chosen',
    'block_class',
    'menu_item_visibility',
    'modernizr',
    'advagg',
    'advagg_bundler',
    'advagg_css_compress',
    'advagg_js_compress',
    'eu_cookie_compliance',
  );
  module_enable($module_list);
}

function jnl_isa_profile_task_add_indexes(&$install_state) {
  highwire_add_indexes(TRUE);
}

/**
 * This will set default permission for anonymous and authenticate user
 * @param $install_state
 */
function jnl_isa_profile_task_grant_permissions(&$install_state) {
  // grant access to published content to anonymous and authenticate user
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access forward'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access forward'));

  // EU Cookie Compliance permissions.
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('display EU Cookie Compliance popup'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('display EU Cookie Compliance popup'));

  // Clear all caches.
  drupal_flush_all_caches();

  $permissions = array();
  $permissions = array(
                 "Editor" => array
                 (
                   'view embargoed content',
                   'delete own highwire_comment content',
                   'delete any highwire_comment content',
                   'edit any highwire_comment content',
                   'access administration menu',
                   'access administration pages',
                   'access content overview',
                   'access contextual links',
                   'administer static page',
                   'create advanced_page content',
                   'create new directories',
                   'create new files',
                   'delete files and directories',
                   'duplicate files',
                   'edit any advanced_page content',
                   'edit files',
                   'edit own advanced_page content',
                   'file uploads',
                   'manage snippet',
                   'paste from clipboard',
                   'rename files and directories',
                   'resize images',
                   'skip CAPTCHA',
                   'use file manager',
                   'use text format highwire_full_html',
                   'use text format highwire_plain_text',
                   'view own unpublished content',
                   'view static page list',
                   'view the administration theme'
                 ),
                 "Site Administrator" => array
                 (
                   'access administration menu',
                   'access administration pages',
                   'access content overview',
                   'access contextual links',
                   'administer google analytics',
                   'administer menu',
                   'administer static page',
                   'create advanced_page content',
                   'create new directories',
                   'create new files',
                   'delete any advanced_page content',
                   'delete files and directories',
                   'delete own advanced_page content',
                   'duplicate files',
                   'edit any advanced_page content',
                   'edit files',
                   'edit own advanced_page content',
                   'file uploads',
                   'manage snippet',
                   'manipulate all queues',
                   'manipulate queues',
                   'paste from clipboard',
                   'rename files and directories',
                   'resize images',
                   'skip CAPTCHA',
                   'use file manager',
                   'use text format highwire_full_html',
                   'use text format highwire_plain_text',
                   'view embargoed content',
                   'view own unpublished content',
                   'view static page list',
                   'view the administration theme'
                 ),
                 "Content Review" => array
                 (
                   'access administration menu',
                   'access administration pages',
                   'access content overview',
                   'access contextual links',
                   'skip CAPTCHA',
                   'use text format highwire_full_html',
                   'use text format highwire_plain_text',
                   'view embargoed content'
                 )
               );

  foreach ($permissions as $key => $value) {
    $role = user_role_load_by_name($key);
    if (empty($role) || empty($role->rid)) {
      $e = new Exception($role . 'Role Missing');
      watchdog_exception('site_install', $e);
      throw $e;
    }
    else {
      user_role_grant_permissions($role->rid, $value);
    }
  }
}

function jnl_isa_profile_enable_site_features(&$install_state) {
  $features = features_get_features(NULL, TRUE);

  foreach ($features as $feature) {
    if ($feature->info['package'] == 'Highwire Journal Templates') {
      module_enable(array($feature->name));
    }
  }
}

function jnl_isa_enable_hw_theme(&$install_state) {
  $enable_theme = array(
    'admin_theme' => 'hw_admin',
    'theme_default' => 'jcore_1',
  );

  theme_enable($enable_theme);

  foreach ($enable_theme as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }

  // Add settings per color scheme.
  $theme_conf = !empty($install_state['parameters']['theme']) ? $install_state['parameters']['theme'] : array();
  $scheme = !empty($theme_conf['jcore_1_color_scheme']) ? $theme_conf['jcore_1_color_scheme'] : 'jcore_1';
  require_once(drupal_get_path('theme', 'jcore_1') . '/inc/color-scheme-theme-defaults.inc');
  $settings = jcore_1_color_scheme_get_defaults($scheme);
  jcore_1_color_scheme_set_defaults($scheme, $settings);
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 * Allows the profile to alter the site configuration form.
 */
function jnl_isa_profile_form_install_configure_form_alter(&$form, $form_state) {

  // Pre-populate the site name and other variables
  $form['site_information']['site_name']['#default_value'] = "isa";
  $form['site_information']['site_mail']['#default_value'] = "drupal-admin@highwire.org";

  $form['admin_account']['account']['name']['#default_value'] = "hwadmin";
  $form['admin_account']['account']['mail']['#default_value'] = "drupal-admin@highwire.org";

  $form['server_settings']['#collapsible'] = TRUE;
  $form['server_settings']['#collapsed'] = TRUE;

  $form['server_settings']['site_default_country']['#attributes']['disabled'] = TRUE;
  $form['server_settings']['site_default_country']['#description'] = st('Default country for the site will be United States');

  $form['server_settings']['date_default_timezone']['#attributes']['disabled'] = TRUE;
  $form['server_settings']['date_default_timezone']['#description'] = st('By default, dates in this site will be displayed in the California time zone.');

  $form['update_notifications']['#collapsible'] = TRUE;
  $form['update_notifications']['#collapsed'] = TRUE;
  $form['update_notifications']['update_status_module']['#default_value'] = array(0, 0);

  if (count($form_state['input']) == 0) {
    $element_info = element_info('password_confirm');
    $process = array_merge($element_info['#process'], array(0 => 'jnl_isa_profile_process_password_confirm'));
    $form['admin_account']['account']['pass']['#process'] = $process;
  }
}

/**
 * Implementation of standard_password_confirm.
 */
function jnl_isa_profile_process_password_confirm($element) {
  $pwd = user_password();
  $element['pass1']['#attributes'] = array('value' => $pwd);
  $element['pass2']['#attributes'] = array('value' => $pwd);
  drupal_set_message('Password for hwadmin is '.$pwd);
  return $element;
}

/**
 * Task to create a advance_page content and menus
 * @return [type] [description]
 */
function jnl_isa_profile_task_create_content_menus() {

  // Menu 'Umbrella Menu'
  $menu = array();
  $menu_name = 'umbrella-menu';
  $menu['menu_name'] = $menu_name;
  $menu['title'] = 'Umbrella menu';
  $menu['description'] = 'Umbrella menu';

  // save umbrella menu
  menu_save($menu);

  // menu 'Other Publications'
  $links = array();
  $links['parent'] = array(
    'link_title' => 'Other Publications',
    'link_path' => '<front>',
  );
  // child menu of 'Other Publications'
  $links['children']['isa'] = array(
    'link_title' => 'isa',
    'link_path' => '<front>',
  );
  $menu_links[] = $links;
  _highwire_create_menu_links($menu_links, $menu_name);

  // Menu links in 'main-menu'
  $menu_name = 'main-menu';
  $menu_links = array();

  // menu 'Home'
  $links = array();
  $links['parent'] = array(
    'link_title' => 'Home',
    'link_path' => '<front>',
  );
  $menu_links[] = $links;

  // menu 'Content'
  $links = array();
  $links['parent'] = array(
    'link_title' => 'Content',
    'link_path' => 'content/current',
  );

  $links['children']['current'] = array(
    'link_title' => 'Current',
    'link_path' => 'content/current',
  );

  $links['children']['ahead_of_print'] = array(
    'link_title' => 'Ahead of print',
    'link_path' => 'content/early/recent',
    'customized' => 1,
  );

  $links['children']['archive'] = array(
    'link_title' => 'Archive',
    'link_path' => 'content/by/year',
    'customized' => 1,
  );
  $menu_links[] = $links;

  // menu 'Info for'
  $links = array();
  $node_id = _highwire_create_advanced_page("Authors");
  $links['parent'] = array(
    'link_title' => 'Info for',
    'link_path' => 'node/' . $node_id
  );

  $links['children']['Authors'] = array(
    'link_title' => 'Authors',
    'link_path' => 'node/' . $node_id
  );

  $node_id = _highwire_create_advanced_page("Reviewers");
  $links['children']['Reviewers'] = array(
    'link_title' => 'Reviewers',
    'link_path' => 'node/' . $node_id
  );

  $node_id = _highwire_create_advanced_page("Subscribers");
  $links['children']['Subscribers'] = array(
    'link_title' => 'Subscribers',
    'link_path' => 'node/' . $node_id
  );

  $node_id = _highwire_create_advanced_page("Institutions");
  $links['children']['Institutions'] = array(
    'link_title' => 'Institutions',
    'link_path' => 'node/' . $node_id
  );

  $node_id = _highwire_create_advanced_page("Advertisers");
  $links['children']['Advertisers'] = array(
    'link_title' => 'Advertisers',
    'link_path' => 'node/' . $node_id
  );

  $node_id = _highwire_create_advanced_page("Patients");
  $links['children']['Patients'] = array(
    'link_title' => 'Patients',
    'link_path' => 'node/' . $node_id
  );
  $menu_links[] = $links;

  // menu 'About Us'
  $links = array();

  $node_id = _highwire_create_advanced_page("About Us");
  $links['parent'] = array(
    'link_title' => 'About Us',
    'link_path' => 'node/' . $node_id
  );

  $links['children']['About Us'] = array(
    'link_title' => 'About Us',
    'link_path' => 'node/' . $node_id
  );

  $links['children']['Contact Us'] = array(
    'link_title' => 'Contact Us',
    'link_path' => 'contact'
  );

  $node_id = _highwire_create_advanced_page("Editorial Board");
  $links['children']['Editorial Board'] = array(
    'link_title' => 'Editorial Board',
    'link_path' => 'node/' . $node_id
  );
  $menu_links[] = $links;

  // menu 'More'
  $links = array();

  $node_id = _highwire_create_advanced_page("Advertising");
  $links['parent'] = array(
    'link_title' => 'More',
    'link_path' => 'node/' . $node_id
  );

  $links['children']['Advertising'] = array(
    'link_title' => 'Advertising',
    'link_path' => 'node/' . $node_id
  );

  $links['children']['Alerts'] = array(
    'link_title' => 'Alerts',
    'link_path' => 'alerts',
    'customized' => 1,
  );

  // create a weeform for Feedback
  $node_id = _highwire_create_feedback_form();
  $links['children']['Feedback'] = array(
    'link_title' => 'Feedback',
    'link_path' => 'node/' . $node_id
  );

  $links['children']['Folders'] = array(
    'link_title' => 'Folders',
    'link_path' => 'folders',
    'customized' => 1,
  );

  $node_id = _highwire_create_advanced_page("Help");
  $links['children']['Help'] = array(
    'link_title' => 'Help',
    'link_path' => 'node/' . $node_id
  );
  $menu_links[] = $links;

  $publication_models = variable_get('highwire_default_publication_model');
  if (isset($publication_models[HIGHWIRE_PUB_MODEL_DP]) && !empty($publication_models[HIGHWIRE_PUB_MODEL_DP])) {
    // Menu 'News'
    $links = array();
    $links['parent'] = array(
      'link_title' => 'News',
      'link_path' => 'news'
    );
    $menu_links[] = $links;

    // Menu 'Blog'
    $links = array();
    $links['parent'] = array(
      'link_title' => 'Blog',
      'link_path' => 'blog'
    );
    $menu_links[] = $links;
  }

  // menu 'Cart'
  $links = array();
  $links['parent'] = array(
    'link_title' => 'Cart',
    'link_path' => 'cart',
  );
  $menu_links[] = $links;

  // Alldone - creat the menu links
  _highwire_create_menu_links($menu_links, $menu_name);
}

/**
 * Helper function create a advance page
 */
function _highwire_create_advanced_page($title) {
  $node = new stdClass();
  $node->type = 'advanced_page';
  node_object_prepare($node);

  $node->title = $title;
  $node->body[LANGUAGE_NONE][0]['value'] = t("This is a placeholder page for '@title'", array('@title' => $title));
  $node->uid = 1;
  $node->language = LANGUAGE_NONE;
  $node->status = 1;
  node_save($node);
  return $node->nid;
}

/**
 * Helper funtion create a feedform webform
 */
function _highwire_create_feedback_form() {
  $node = new stdClass();
  $node->type = 'webform';
  node_object_prepare($node);
  $node->title    = 'Feedback';
  $node->language = LANGUAGE_NONE; // Or other language.
  $node->body[$node->language][0]['value']   = '<p>Collect the site/overall feedback.</p>';
  $node->body[$node->language][0]['format']  = 'highwire_full_html';
  $node->uid = 1;     // Set admin as author
  $node->promote = 0; // Do not put this node to front page.
  $node->comment = 1; // Closed the comment.

  // create a default alias for webform
  $node->path['pathauto'] = 0;
  $node->path['alias'] = 'feedback';
  $node->path['language'] = $node->language;


  // Create the webform components.
  $components = array(
    0 => array(
      'name' => 'Name',
      'form_key' => 'name',
      'type' => 'textfield',
      'value' => '[current-user:name]',
      'mandatory' => 1,
      'weight' => 1,
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'private' => 0,
      ),
    ),
    1 => array(
      'name' => 'Email address',
      'form_key' => 'email_address',
      'type' => 'email',
      'value' => '[current-user:mail]',
      'mandatory' => 1,
      'weight' => 2,
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'private' => 0,
      ),
    ),
    2 => array(
      'name' => 'Subject',
      'form_key' => 'subject',
      'type' => 'textfield',
      'mandatory' => 1,
      'weight' => 3,
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'private' => 0,
      ),
    ),
    3 => array(
      'name' => 'To help your message go to the correct recipient, please indicate which of the following best describes the subject of your message',
      'pid' => 0,
      'form_key' => 'correct_recipient_of_subject_of_your_message',
      'type' => 'select',
      'value' => '0',
      'extra' => array(
        'items' => '0|Comments on the content of the site
1|Subscription problem or question
2|Website comment or suggestion
3|Questions about missing abstract views in the back content
4|None of the above',
        'other_option' => 0,
        'other_text' => 'Other...',
        'multiple' => 0,
        'title_display' => 'before',
        'private' => 0,
        'aslist' => 0,
        'optrand' => 0,
        'description' => '',
        'custom_keys' => FALSE,
        'options_source' => '',
      ),
      'mandatory' => 0,
      'weight' => 4,
    ),

    4 => array(
      'name' => 'Message',
      'form_key' => 'message',
      'type' => 'textarea',
      'mandatory' => 0,
      'weight' => 5,
      'pid' => 0,
      'extra' => array(
        'title_display' => 'before',
        'private' => 0,
      ),
    ),

    5 => array(
        'pid' => 0,
        'form_key' => 'promotional_use',
        'name' => 'I grant the isa permission to reprint my comments for promotional purposes',
        'type' => 'select',
        'value' => '1',
        'extra' => array(
          'items' => '1|Yes
0|No',
        'other_option' => 0,
        'other_text' => 'Other...',
        'multiple' => 0,
        'title_display' => 'before',
        'private' => 0,
        'aslist' => 0,
        'optrand' => 0,
        'description' => '',
        'custom_keys' => FALSE,
        'options_source' => '',
        ),
        'mandatory' => 0,
        'weight' => 6,
      ),

    6 => array(
        'pid' => 0,
        'form_key' => 'ip_address',
        'name' => 'IP Address',
        'type' => 'markup',
        'value' => 'Your IP address is <b> [current-user:ip-address] </b>',
        'extra' => array(
          'format' => 'highwire_full_html',
          'private' => 0,
        ),
        'mandatory' => 0,
        'weight' => 7,
      ),
  );

  // Setup notification email.
  $emails = array(
    0 => array(
      'email' => 'customerservice@highwire.stanford.edu',
      'subject' => '3',

      'from_name' => '1',
      'from_address' => '2',
      'template' => '------------------------------------------------------------
Comments sent via [site:default_jcode] Feedback Page
------------------------------------------------------------
TO:
NAME: [submission:user:name]
EMAIL: [submission:user:mail]
IP ADDRESS: [submission:ip-address]
HOSTNAME: [server:HTTP_HOST]
PREVIOUS PAGE: [server:HTTP_REFERER]
BROWSER: [server:HTTP_USER_AGENT]
PROMOTIONAL USE: [submission:values:promotional_use]
------------------------------------------------------------
Subject : [submission:values:correct_recipient_of_subject_of_your_message]
------------------------------------------------------------
COMMENTS:
[submission:values:message]
------------------------------------------------------------
Submitted values are:
[submission:values]
------------------------------------------------------------',
      'excluded_components' => array(),
    ),
  );

  // Attach the webform to the node.
  $node->webform = array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'submit_limit' => '-1', // User can submit more than once.
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1', // Anonymous user can submit this webform.
      1 => '2', // Authenticated user can submit this webform.
    ),
    'emails' => $emails,
    'components' => $components,
  );

  // Save the node.
  node_save($node);
  return $node->nid;
}

/**
 * Helper function to save menu links
 */
function _highwire_create_menu_links($menu_links, $menu_name, $parent = -50) {

  foreach ($menu_links as $menus) {
    foreach ($menus as $type => $link) {
      if ($type === 'parent') {
        $link['menu_name'] = $menu_name;
        $link['expanded'] = 0;
        $link['weight'] = $parent++;
        $id = menu_link_save($link);
      }
      else {
        $child_weight = -50;
        foreach ($link as $val) {
          $val['plid'] = $id;
          $val['menu_name'] = $menu_name;
          $val['expanded'] = 0;
          $val['weight'] = $child_weight++;
          menu_link_save($val);
        }
      }
    }
  }
}


function jnl_isa_profile_task_block_configuration($install_state = array(), $running_as_standalone_task = FALSE) {
  // Clear all caches and trigger block re-loading
  drupal_flush_all_caches();
  _block_rehash(variable_get('theme_default', NULL));

  // override default drupal menu settings
  variable_set('menu_main_links_source', '');
  variable_set('menu_secondary_links_source', '');

  // configure nice menu
  $module_name = 'nice_menus';
  $theme_name = variable_get('theme_default', '');

  //nice menu speed
  variable_set('nice_menus_sf_speed', 'fast');

  // nice menu block 1
  $nice_menus_block = array();
  variable_set('nice_menus_name_1', 'Main Menu with Dropdown');
  variable_set('nice_menus_menu_1', 'main-menu:0');
  variable_set('nice_menus_depth_1', 1);
  variable_set('nice_menus_type_1', 'down');
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'menu',
      'status' => 1,
      ))
    ->condition('module', $module_name)
    ->condition('theme', $theme_name)
    ->condition('delta', 1)
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // nice menu block 2
  $nice_menus_block = array();
  variable_set('nice_menus_name_2', 'User Bar Menu with Dropdown');
  variable_set('nice_menus_menu_2', 'umbrella-menu:0');
  variable_set('nice_menus_depth_2', 1);
  variable_set('nice_menus_type_2', 'down');
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'user_first',
      'status' => 1,
      ))
    ->condition('module', $module_name)
    ->condition('theme', $theme_name)
    ->condition('delta', 2)
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up "Institutional Branding" block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'branding_second',
      'status' => 1,
      'css_class' => 'highwire-inst-branding-block',
      'weight' => -1,
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'jnl_isa_inst_brand')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set up Social Media menu block.
  $transaction = db_transaction();
  $module = 'menu';
  $delta = 'menu-social-media';
  // Update block settings shared across themes.
  $block = array(
    'title' => '<none>',
    'css_class' => 'text-right',
    'weight' => 1,
  );
  try {
    db_update('block')
    ->fields($block)
    ->condition('module', $module)
    ->condition('delta', $delta)
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }
  // Update theme-specific block settings.
  $block['region'] = 'menu';
  $block['status'] = 1;
  try {
    db_update('block')
    ->fields($block)
    ->condition('module', $module)
    ->condition('theme', $theme_name)
    ->condition('delta', $delta)
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up quicksearch block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'branding_second',
      'status' => 1,
      'weight' => 0,
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'jnl_isa_search_box')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up "User Identity String" block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'user_second',
      'status' => 1,
      'css_class' => 'highwire-uid-string',
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'jnl_isa_uid_strng')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up "Responsive Menu" block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'superheader',
      'status' => 1,
      'weight' => -1,
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'responsive_menu')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up "HW Small Logo" block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'superheader',
      'status' => 1,
      'weight' => 0,
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'hw_small_logo')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up "Footer Menus" block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'postscript_fourth',
      'status' => 1,
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'jnl_isa_footer')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // Set-up "Footer Info" block
  $transaction = db_transaction();
  try {
    db_update('block')
    ->fields(array(
      'title' => '<none>',
      'region' => 'footer_first',
      'status' => 1,
      ))
    ->condition('module', 'panels_mini')
    ->condition('theme', $theme_name)
    ->condition('delta', 'jnl_isa_foot_info')
    ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('block', $e);
    throw $e;
  }

  // @see SHASTA-1777 for why this is necessary.
  if (drupal_is_cli() && !$running_as_standalone_task) {
     highwire_system_message("When running site-install via Drush, you must run 'drush hw-configure-blocks-install-task' "
                                                       . "to ensure the home page has the required blocks from the template.");
  }
}

// Setting up ckeditor profile
function jnl_isa_profile_task_ckeditor_configuration() {
  module_load_include('inc', 'ckeditor', 'includes/ckeditor.admin');

  $ckeditor_profile = array();

  //basic
  $ckeditor_profile['name'] = t('Advanced');
  $ckeditor_profile['input_formats'] = array(
    'highwire_full_html' => 'HighWire - Full HTML',
  );

  //security
  $ckeditor_profile['ss'] = "2";

  //appearance
  $ckeditor_profile['default'] = 't';
  $ckeditor_profile['show_toggle'] = 't';
  $ckeditor_profile['popup'] = variable_get('ckeditor_popup', 0) ? 't' : 'f';
  $ckeditor_profile['skin'] = 'kama';
  $ckeditor_profile['uicolor'] = 'default';
  $ckeditor_profile['uicolor_textarea'] = '<p>
Click the <strong>UI Color Picker</strong> button to set your color preferences.</p>
';
  $ckeditor_profile['uicolor_user'] = 'default';
  $ckeditor_profile['toolbar'] = '[
  [\'Source\'],
  [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\', \'Scayt\'],
  [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\',\'RemoveFormat\'],
  [\'Image\',\'Media\',\'Flash\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\'],
  [\'Maximize\', \'ShowBlocks\'],
  \'/\',
  [\'Format\'],
  [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\'],
  [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
  [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\'],
  [\'Link\',\'Unlink\',\'Anchor\', \'Linkit\']
]';
  $ckeditor_profile['loadPlugins'] = drupal_map_assoc(array('drupalbreaks'));
  $ckeditor_profile['expand'] = 't';
  $ckeditor_profile['width'] = '100%';
  $ckeditor_profile['lang'] = "en";
  $ckeditor_profile['auto_lang'] = "t";
  $ckeditor_profile['language_direction'] = "default";

  //output
  $ckeditor_profile['allowed_content'] = 'f';
  $ckeditor_profile['extraAllowedContent'] = '';

  $ckeditor_profile['enter_mode'] = 'p';
  $ckeditor_profile['shift_enter_mode'] = 'br';
  $ckeditor_profile['font_format'] = 'p;div;pre;address;h1;h2;h3;h4;h5;h6';
  $ckeditor_profile['custom_formatting'] = 'f';
  $ckeditor_profile['formatting']['custom_formatting_options'] = array(
    'indent' => 'indent',
    'breakBeforeOpen' => 'breakBeforeOpen',
    'breakAfterOpen' => 'breakAfterOpen',
    'breakAfterClose' => 'breakAfterClose',
    'breakBeforeClose' => 0,
    'pre_indent' => 0,
  );

  //css
  $ckeditor_profile['css_mode'] = 'none';
  $ckeditor_profile['css_path'] = '';
  $ckeditor_profile['css_style'] = 'theme';
  $ckeditor_profile['styles_path'] = '';

  //upload
  //get permissions here like in _update_role_permissions
  $ckeditor_profile['filebrowser'] = 'elfinder';
  $ckeditor_profile['user_choose'] = 'f';
  $ckeditor_profile['UserFilesPath'] = '%b%f/additional-assets';
  $ckeditor_profile['UserFilesAbsolutePath'] = '%d%b%f/additional-assets';

  // advance
  $ckeditor_profile['ckeditor_load_method'] = 'ckeditor.js';
  $ckeditor_profile['ckeditor_load_time_out'] = 0;
  $ckeditor_profile['forcePasteAsPlainText'] = 'f';
  $ckeditor_profile['html_entities'] = 't';
  $ckeditor_profile['scayt_autoStartup'] = 'f';
  $ckeditor_profile['theme_config_js'] = 'f';
  $ckeditor_profile['js_conf'] = '';

  $settings = ckeditor_admin_values_to_settings($ckeditor_profile);

  $profile = ckeditor_profile_load($ckeditor_profile['name']);
  if (!empty($profile)) {
    ckeditor_profile_delete($ckeditor_profile['name']);
  }

  // Update "ckeditor settings" block
  $transaction = db_transaction();
  try {
    db_insert('ckeditor_settings')
            ->fields(array(
                "name" => $ckeditor_profile['name'],
                "settings" => $settings
            ))
            ->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('ckeditor_settings', $e);
    throw $e;
  }

  $transaction = db_transaction();
  // Save input format
  try {
    db_insert('ckeditor_input_format')->fields(array("name" => $ckeditor_profile['name'], "format" => 'highwire_full_html'))->execute();
  }
  catch (Exception $e) {
    $transaction->rollback();
    watchdog_exception('ckeditor_settings', $e);
    throw $e;
  }

}

// Flush all caches as a final task
function jnl_isa_profile_task_flush_caches() {
  // We do this in a drush command since we need to re-bootstrap to properly clear all caches
  register_shutdown_function('exec', 'drush cc all');
}

/**
 * Task to add a menu_position rule.
 */
function jnl_isa_profile_task_add_menu_position_rule() {

  // Set the matching rule action.
  // We are setting this to Mark the rule's parent menu item as being "active".
  variable_set('menu_position_active_link_display', 'parent');

  // Clear all caches.
  drupal_flush_all_caches();

  // Include the helper file.
  module_load_include('inc', 'highwire', 'highwire.include.helper');

  // Add the menu position rule for Current link.
  // This needs to be added first per DRQUEST-1652
  $admin_title = 'Current issue and its children';

  // Get the link's mlid.
  $query = db_select('menu_links', 'ml')
    ->fields('ml', array('mlid'))
    ->condition('ml.link_path', 'content/current')
    ->condition('ml.plid', 0, '!=')
    ->condition('ml.menu_name', 'main-menu');
  $result = $query->execute()->fetchCol();
  $mlid = current($result);

  // Prepare the conditions for menu_position_rule.
  $conditions = array();
  $conditions['current_issue']['current_issue'] = 1;
  $conditions['current_issue']['current_issue_child'] = 1;
  highwire_add_menu_position_rule($admin_title, $conditions, $mlid);

  // Add the menu position rule for Content link.
  $admin_title = 'Articles, Issues, Adjunct, Fragment nodes';

  // Get the link's mlid.
  $query = db_select('menu_links', 'ml')
    ->fields('ml', array('mlid'))
    ->condition('ml.link_path', 'content/current')
    ->condition('ml.plid', 0)
    ->condition('ml.menu_name', 'main-menu');
  $result = $query->execute()->fetchCol();
  $mlid = current($result);

  // Prepare the conditions for menu_position_rule.
  $conditions = array();
  $conditions['content_type']['content_type'] = array(
    'highwire_adjunct',
    'highwire_article',
    'highwire_fragment',
    'highwire_issue',
  );
  highwire_add_menu_position_rule($admin_title, $conditions, $mlid);
}

/**
 * Create a node for Alerts - "How to change my email address" of Advanced page type
 */
function jnl_isa_profile_task_create_email_alerts_change_email_address_advaced_page() {
  $body = '<p>' . t('Are you a @journal_name subscriber? If your online record contains the same email address where you receive your @journal_name alerts, you may sign in and update your email address in your online record. After you make this change, your @journal_name alerts will be sent to your new address.', array("@journal_name" => "isa" )) . '</p>';

  $body .= '<p>' . t('You may also update the email address of your @journal_name and other HighWire-hosted journal email alerts from the HighWire site. If you have already created a HighWire account, you may <a href="@alerts_link">sign in now</a>. Otherwise, you may wish to <a href="@registration_link">register for a free account</a>.', array('@journal_name' => 'isa', '@alerts_link' =>'http://highwire.stanford.edu/cgi/alerts', '@registration_link' => 'http://highwire.stanford.edu/cgi/registration')) . '</p>';

  $body .= '<p>' . t('Otherwise, to change the email address on your alerts from the @journal_name site, <a href="@alert_link">delete your current alerts</a>. You may then resubscribe to the desired eTOC and citation alerts with your new email address.', array('@journal_name' => 'isa', '@alert_link' => url('alerts'))) . '</p>';

  $node = new stdClass();
  $node->type = 'advanced_page';
  node_object_prepare($node);

  $node->title = 'Email Alerts – How to Change my Email Address';
  $node->body[LANGUAGE_NONE][0]['value'] = $body;
  $node->body[LANGUAGE_NONE][0]['format']  = 'highwire_full_html';
  $node->uid = 1;
  $node->language = LANGUAGE_NONE;
  $node->status = 1;
  $node->path['alias'] = 'help/email-alert-change-email';
  $node->path['pathauto'] = 0;
  node_save($node);
  if ($node->nid) {
    variable_set('highwire_alerts_how_to_change_email_address_link', url('node/' . $node->nid));
  }
}

/**
 * Inserting values to snippet_revision table for about, bottom announcement, and footer copyright snippets.
 */
function jnl_isa_profile_task_create_snippet(&$install_state) {
  $mid = db_insert('snippet_revision')
    ->fields(array(
    'name' => 'highwire_jnl_bottom_announcement',
    'title' => 'JN Bottom Announcement - Alternate Route',
    'content' => '<div align="center">
        For an alternate route to this Journal use this URL:&nbsp;<a href="EDIT URL">[EDIT LINK]</a></div>',
    'content_format' => 'highwire_full_html',
    'is_current' => 1,
  ))
  ->execute();

  $mid = db_insert('snippet_revision')
    ->fields(array(
    'name' => 'footer_copyright_text',
    'title' => '',
    'content' => '<p>&copy; [current-date:custom:Y] [site:name]</p>',
    'content_format' => 'highwire_full_html',
    'is_current' => 1,
  ))
  ->execute();

  $mid = db_insert('snippet_revision')
    ->fields(array(
    'name' => 'jnl_isa_about_journal_snippet',
    'title' => 'About [site:name]',
    'content' => '<p>[EDIT DESCRIPTION]</p>',
    'content_format' => 'highwire_full_html',
    'is_current' => 1,
  ))
  ->execute();

  $mid = db_insert('snippet_revision')
    ->fields(array(
    'name' => 'article_access_text',
    'title' => '',
    'content' => '<p>This article requires a subscription to view the full text. If you have a subscription you may use the login form below to view the article. Access to this article can also be purchased.</p>',
    'content_format' => 'highwire_full_html',
    'is_current' => 1,
  ))
  ->execute();
}

/**
 * Updating link_path for Archive menu link
 */
function jnl_isa_profile_task_update_archive_menu_path(&$install_state) {
  db_update('menu_links')->fields(array('link_path' => 'content/by/year'))->condition('link_title', 'Archive')->execute();
}

/**
 * Adding menu links to User Menu
 */
function jnl_isa_profile_task_update_user_menu(&$install_state) {
  // menu links for 'User menu'
  $menu_links = array();
  $menu_name = 'user-menu';

  $links = array();
  $links['parent'] = array(
    'link_title' => 'Register',
    'link_path' => 'user/register',
  );
  $links['parent']['roles'] = array(DRUPAL_ANONYMOUS_RID => DRUPAL_ANONYMOUS_RID);
  $menu_links[] = $links;

  $links = array();
  $links['parent'] = array(
    'link_title' => 'Subscribe',
    'link_path' => '<front>', //@TODO replace as soon as link available
  );
  $links['parent']['roles'] = array(DRUPAL_ANONYMOUS_RID => DRUPAL_ANONYMOUS_RID);
  $menu_links[] = $links;

  $links = array();
  $links['parent'] = array(
    'link_title' => 'My alerts',
    'link_path' => 'alerts',
    'customized' => 1,
  );
  $menu_links[] = $links;

  $links = array();
  $links['parent'] = array(
    'link_title' => 'Log in',
    'link_path' => 'user/login',
  );
  $menu_links[] = $links;
  _highwire_create_menu_links($menu_links, $menu_name, -9);
}

/**
 * Inserting new menus for footer
 */
function jnl_isa_profile_task_create_footer_menus(&$install_state) {
  $menu_title = array('Navigate', 'More Information', 'Additional journals', 'Other Services');
  $menu_names = array('navigate', 'more-information', 'add-journals', 'other-services');
  for($i=0; $i < count($menu_title); $i++) {
    db_insert('menu_custom')
      ->fields(array(
        'menu_name' => $menu_names[$i],
        'title' => $menu_title[$i],
        'description' => $menu_names[$i],
      ))
      ->execute();
  }
}

function jnl_isa_profile_task_create_social_media_menu(&$install_state) {
  // Menu 'Social Media Menu'.
  $menu = array();
  $menu_name = 'menu-social-media';
  $menu['menu_name'] = $menu_name;
  $menu['title'] = 'Social Media';
  $menu['description'] = 'Links to social media accounts';

  // Save social media menu.
  menu_save($menu);

  $links = array();
  // Add social media links.
  $links['twitter']['parent'] = array(
    'link_title' => 'Follow isa on Twitter',
    'link_path' => 'http://www.twitter.com',
    'options' => array(
      'attributes' => array(
        'data-font-icon' => 'icon-twitter-sign icon-2x',
        'data-icon-position' => 'before',
        'data-hide-link-title' => 1,
        'target' => '_blank',
      ),
    ),
  );
  $links['fb']['parent'] = array(
    'link_title' => 'Visit isa on Facebook',
    'link_path' => 'http://www.facebook.com',
    'options' => array(
      'attributes' => array(
        'data-font-icon' => 'icon-facebook-sign icon-2x',
        'data-icon-position' => 'before',
        'data-hide-link-title' => 1,
        'target' => '_blank',
      ),
    ),
  );

  _highwire_create_menu_links($links, $menu_name);
}

/**
 * Inserting rules fields for login_destination module
 */
function jnl_isa_profile_task_configure_login_destination_rule(&$install_state) {
  variable_set('login_destination_preserve_destination', 1);

  $roles = array('a:0:{}', 'a:0:{}');
  $triggers = array('a:2:{s:5:"login";s:5:"login";s:6:"logout";s:6:"logout";}', 'a:2:{s:5:"login";s:5:"login";s:6:"logout";s:6:"logout";}');
  $pages_type = array(1, 0);
  $pages = array("user\nuser/*", '');
  $destination = array('<front>', '<current>');
  for($i=0; $i < count($roles); $i++) {
    db_insert('login_destination')
      ->fields(array(
        'triggers' => $triggers[$i],
        'roles' => $roles[$i],
        'pages_type' => $pages_type[$i],
        'pages' => $pages[$i],
        'destination' => $destination[$i],
      ))
    ->execute();
  }
}

function jnl_isa_profile_task_eu_cookie_compliance(&$install_state) {
  // Create Cookie Policy boilerplate page.
  $body = '<p>To make this site work properly, we sometimes place small data files called cookies on your device. Most big websites do this too.</p>';
  $body .= '<h2>What are cookies?</h2>';
  $body .= "<p>A cookie is a small text file that a website saves on your computer or mobile device when you visit the site. It enables the website to remember your actions and preferences (such as login, language, font size and other display preferences) over a period of time, so you don&rsquo;t have to keep re-entering them whenever you come back to the site or browse from one page to another.</p>";

  $body .= '<h2>How do we use cookies?</h2>';
  $body .= '<p>Adjust this part of the page according to your needs. Explain which cookies you use in plain, jargon-free language. In particular:</p>';
  $body .= '<ul><li>their purpose and the reason why they are being used, (e.g. to remember users&#39; actions, to identify the user, for online behavioural advertising)</li><li>if they are essential for the website or a given functionality to work or if they aim to enhance the performance of the website</li><li>the types of cookies used (e.g. session or permanent, first or third-party)</li><li>who controls/accesses the cookie-related information (website or third party)</li><li>that the cookie will not be used for any purpose other than the one stated</li><li>how consent can be withdrawn.</li></ul>';
  $body .= '<h3>Example:</h3>';
  $body .= '<blockquote>';
  $body .= '<p>A number of our pages use cookies to remember:</p>';
  $body .= '<ul><li>your display preferences, such as contrast colour settings or font size</li><li>if you have already replied to a survey pop-up that asks you if the content was helpful or not (so you won&#39;t be asked again)</li><li>if you have agreed (or not) to our use of cookies on this site</li></ul>';
  $body .= '<p>Also, some videos embedded in our pages use a cookie to anonymously gather statistics on how you got there and what videos you visited.</p>';
  $body .= '<p>Enabling these cookies is not strictly necessary for the website to work but it will provide you with a better browsing experience. You can delete or block these cookies, but if you do that some features of this site may not work as intended.</p>';
  $body .= '<p>The cookie-related information is not used to identify you personally and the pattern data is fully under our control. These cookies are not used for any purpose other than those described here.</p>';
  $body .= '</blockquote>';
  $body .= '<h2>How to control cookies</h2>';
  $body .= '<p>You can control and/or delete cookies as you wish &ndash; for details, see aboutcookies.org. You can delete all cookies that are already on your computer and you can set most browsers to prevent them from being placed. If you do this, however, you may have to manually adjust some preferences every time you visit a site and some services and functionalities may not work.</p>';

  $node = new stdClass();
  $node->type = 'advanced_page';
  node_object_prepare($node);
  $node->title = 'Cookies';
  $node->body[LANGUAGE_NONE][0]['value'] = $body;
  $node->body[LANGUAGE_NONE][0]['format']  = 'highwire_full_html';
  $node->uid = 1;
  $node->language = LANGUAGE_NONE;
  $node->status = 1;
  $node->path['alias'] = 'help/cookie-policy';
  $node->path['pathauto'] = 0;
  node_save($node);

  // Settings for EU Cookie Compliance module.
  // Global module settings.
  variable_set('eu_cookie_compliance_cookie_lifetime', 365);

  // Language-specific settings.
  global $language;
  $ln = $language->language;
  $cookiebar_key = 'eu_cookie_compliance_' . $ln;
  $cookiebar_settings = variable_get($cookiebar_key);
  $cookiebar_settings['popup_enabled'] = 1;
  $cookiebar_settings['popup_agreed_enabled'] = 0;
  $cookiebar_settings['popup_position'] = 0;
  $cookiebar_settings['popup_agree_button_message'] = 'Continue';
  $cookiebar_settings['popup_disagree_button_message'] = 'Find out more';
  $cookiebar_settings['popup_find_more_button_message'] = 'Find out more';
  $cookiebar_settings['popup_info']['value'] = 'We use cookies on this site to enhance your user experience. By clicking any link on this page you are giving your consent for us to set cookies.';
  $cookiebar_settings['popup_info']['format'] = 'plain_text';
  $cookiebar_settings['popup_agreed']['value'] = 'Thank you for accepting cookies. You can now hide this message or find out more about cookies.';
  $cookiebar_settings['popup_agreed']['format'] = 'plain_text';
  $cookiebar_settings['popup_link_new_window'] = 1;
  $cookiebar_settings['popup_bg_hex'] = '000000';
  $cookiebar_settings['popup_text_hex'] = 'ffffff';
  $cookiebar_settings['popup_width'] = '100%';
  $cookiebar_settings['popup_height'] = '';
  $cookiebar_settings['popup_delay'] = '1';

  // Set url for EU Cookie Compliance settings.
  if ($node->nid) {
    $cookiebar_settings['popup_link'] = 'help/cookie-policy';
  }

  variable_set($cookiebar_key, $cookiebar_settings);
}
