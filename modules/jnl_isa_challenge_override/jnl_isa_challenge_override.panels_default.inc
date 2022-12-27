<?php
/**
 * @file
 * jnl_isa_challenge_override.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function jnl_isa_challenge_override_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_challenge';
  $mini->category = 'Article Page';
  $mini->admin_title = 'Challenge / Opportunity Pane';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'highwire_1col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c457d1d6-8202-4469-bb19-5925a32e19ed';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_challenge';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a3db1e35-af81-4ae1-a0da-3b6187323d05';
  $pane->panel = 'bottom';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_challenge_footer',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a3db1e35-af81-4ae1-a0da-3b6187323d05';
  $display->content['new-a3db1e35-af81-4ae1-a0da-3b6187323d05'] = $pane;
  $display->panels['bottom'][0] = 'new-a3db1e35-af81-4ae1-a0da-3b6187323d05';
  $pane = new stdClass();
  $pane->pid = 'new-67d9920a-e729-4296-b73b-b9b1c360a5ae';
  $pane->panel = 'content';
  $pane->type = 'highwire_opportunity_challenge';
  $pane->subtype = 'highwire_opportunity_challenge';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'enable_drupal_login_form' => 1,
    'enable_athens_login' => 1,
    'enable_shib_login' => 1,
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'enable_deep_dyve' => 0,
    'enable_foxycart' => 1,
    'foxycart_text' => 'Purchase Access (%short-price)',
    'deep_dyve_affiliate_id' => '',
    'deep_dyve_link_text' => '',
    'drupal_login_form' => 'compact',
    'shib_description' => 'You may be able to gain access using your login credentials for your institution. Contact your library if you do not have a username and password.',
    'athens_description' => 'If your organization uses OpenAthens, you can log in using your OpenAthens username and password. <span class="openathens-sites"> To check if your institution is supported, please see <a href="http://auth.athensams.net/orglist.php">this list</a>.</span> Contact your library for more details.',
    'foxycart_link_type' => 'button',
    'purchase_description' => 'You may purchase access to this article. This will require you to <a href="/user/register">create an account</a> if you don\'t already have one.',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67d9920a-e729-4296-b73b-b9b1c360a5ae';
  $display->content['new-67d9920a-e729-4296-b73b-b9b1c360a5ae'] = $pane;
  $display->panels['content'][0] = 'new-67d9920a-e729-4296-b73b-b9b1c360a5ae';
  $pane = new stdClass();
  $pane->pid = 'new-58f7faae-7f04-4a18-8d2f-407fc6e5080b';
  $pane->panel = 'content';
  $pane->type = 'highwire_patientaccess_link';
  $pane->subtype = 'highwire_patientaccess_link';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'patientaccess_rightslink_title' => 'patientACCESS',
    'patientaccess_rightslink_text' => 'patientACCESS',
    'patientaccess_rightslink_separator' => '-',
    'patientaccess_rightslink_description' => 'Patients desiring access to articles',
    'patientaccess_rightslink_plus_url' => 'https://s100.copyright.com/AppDispatchServlet',
    'patientaccess_rightslink_edition' => 'rightslink-plus',
    'patientaccess_rightslink_icon' => '',
    'patientaccess_rightslink_book_edition_issn' => 'isbn-paper',
    'patientaccess_rightslink_allow_tokens' => 0,
    'patientaccess_rightslink_publisher_name' => '',
    'patientaccess_rightslink_publisher_issn' => '',
    'patientaccess_link_openaccess_parameter_enable' => 0,
    'patientaccess_rightslink_set_default_date' => 'highwire_a_ppubdate',
    'patientaccess_rightslink_custom_copyright_text' => '',
    'form_build_id' => 'form-sejnBJpANxo7IzVK7Jdb4DYGt-0ryAHzyrLfCIbOQ5Y',
    'form_token' => 'S3-CTenfzkoUVncFHVckwfUB5IORoO-zuVeNooi3XYs',
    'form_id' => 'highwire_highwire_patientaccess_link_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '58f7faae-7f04-4a18-8d2f-407fc6e5080b';
  $display->content['new-58f7faae-7f04-4a18-8d2f-407fc6e5080b'] = $pane;
  $display->panels['content'][1] = 'new-58f7faae-7f04-4a18-8d2f-407fc6e5080b';
  $pane = new stdClass();
  $pane->pid = 'new-792ea91f-0868-4814-aa54-7cb9847b344f';
  $pane->panel = 'top';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_challenge_header',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '792ea91f-0868-4814-aa54-7cb9847b344f';
  $display->content['new-792ea91f-0868-4814-aa54-7cb9847b344f'] = $pane;
  $display->panels['top'][0] = 'new-792ea91f-0868-4814-aa54-7cb9847b344f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-792ea91f-0868-4814-aa54-7cb9847b344f';
  $mini->display = $display;
  $export['jnl_isa_challenge'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_login';
  $mini->category = 'All pages';
  $mini->admin_title = 'Challenge / Opportunity General Login Pane';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'highwire_1col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '68ed8765-141b-4747-8145-fedf084c24ac';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_login';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8c4ad9f7-ac23-4669-8655-0fdcef8043c1';
  $pane->panel = 'bottom';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_challenge_footer',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8c4ad9f7-ac23-4669-8655-0fdcef8043c1';
  $display->content['new-8c4ad9f7-ac23-4669-8655-0fdcef8043c1'] = $pane;
  $display->panels['bottom'][0] = 'new-8c4ad9f7-ac23-4669-8655-0fdcef8043c1';
  $pane = new stdClass();
  $pane->pid = 'new-31547ab7-d35c-4f4b-a099-cf5fc9a5b273';
  $pane->panel = 'content';
  $pane->type = 'highwire_opportunity_challenge';
  $pane->subtype = 'highwire_opportunity_challenge';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'enable_drupal_login_form' => 1,
    'enable_athens_login' => 1,
    'enable_shib_login' => 1,
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
    'drupal_login_form' => 'full',
    'shib_description' => 'You may be able to gain access using your login credentials for your institution. Contact your library if you do not have a username and password.',
    'athens_description' => 'If your organization uses OpenAthens, you can log in using your OpenAthens username and password. <span class="openathens-sites"> To check if your institution is supported, please see <a href="http://auth.athensams.net/orglist.php">this list</a>.</span> Contact your library for more details.',
    'enable_foxycart' => 0,
    'foxycart_text' => 'Purchase Access (%short-price)',
    'foxycart_link_type' => 'button',
    'enable_deep_dyve' => 0,
    'deep_dyve_affiliate_id' => '',
    'deep_dyve_link_text' => '',
    'purchase_description' => 'You may purchase access to this article. This will require you to <a href="/user/register">create an account</a> if you don\'t already have one.',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '31547ab7-d35c-4f4b-a099-cf5fc9a5b273';
  $display->content['new-31547ab7-d35c-4f4b-a099-cf5fc9a5b273'] = $pane;
  $display->panels['content'][0] = 'new-31547ab7-d35c-4f4b-a099-cf5fc9a5b273';
  $pane = new stdClass();
  $pane->pid = 'new-532f7ca1-2081-4aec-97c2-491dee373627';
  $pane->panel = 'top';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_challenge_header',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '532f7ca1-2081-4aec-97c2-491dee373627';
  $display->content['new-532f7ca1-2081-4aec-97c2-491dee373627'] = $pane;
  $display->panels['top'][0] = 'new-532f7ca1-2081-4aec-97c2-491dee373627';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-532f7ca1-2081-4aec-97c2-491dee373627';
  $mini->display = $display;
  $export['jnl_isa_login'] = $mini;

  return $export;
}
