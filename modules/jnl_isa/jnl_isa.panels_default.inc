<?php
/**
 * @file
 * jnl_isa.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function jnl_isa_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_foot_info';
  $mini->category = 'All pages';
  $mini->admin_title = 'Footer info';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Default Journal',
      'keyword' => 'node',
      'name' => 'default_journal',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7e81594c-3d81-415d-a8f7-730d46cbc6f5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_foot_info';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e08e6467-0e63-458c-9034-d75cf0314103';
  $pane->panel = 'middle';
  $pane->type = 'page_logo_footer';
  $pane->subtype = 'page_logo_footer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e08e6467-0e63-458c-9034-d75cf0314103';
  $display->content['new-e08e6467-0e63-458c-9034-d75cf0314103'] = $pane;
  $display->panels['middle'][0] = 'new-e08e6467-0e63-458c-9034-d75cf0314103';
  $pane = new stdClass();
  $pane->pid = 'new-f8c71714-10fe-4ae5-b01c-6cfdde085213';
  $pane->panel = 'middle';
  $pane->type = 'snippet';
  $pane->subtype = 'footer_copyright_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f8c71714-10fe-4ae5-b01c-6cfdde085213';
  $display->content['new-f8c71714-10fe-4ae5-b01c-6cfdde085213'] = $pane;
  $display->panels['middle'][1] = 'new-f8c71714-10fe-4ae5-b01c-6cfdde085213';
  $pane = new stdClass();
  $pane->pid = 'new-7faf0a2e-eb81-4258-9a33-19b682476f50';
  $pane->panel = 'middle';
  $pane->type = 'highwire_branding';
  $pane->subtype = 'highwire_branding';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'link_type' => 'logo',
    'logo_image' => 'white',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7faf0a2e-eb81-4258-9a33-19b682476f50';
  $display->content['new-7faf0a2e-eb81-4258-9a33-19b682476f50'] = $pane;
  $display->panels['middle'][2] = 'new-7faf0a2e-eb81-4258-9a33-19b682476f50';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_foot_info'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_inst_brand';
  $mini->category = 'All pages';
  $mini->admin_title = 'Institutional Branding Logo';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a81748-d6cc-46e8-806b-a66d4a5bc7bc';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_inst_brand';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e0535e94-198e-47dc-b6bd-0844b78253bd';
  $pane->panel = 'middle';
  $pane->type = 'highwire_inst_branding';
  $pane->subtype = 'highwire_inst_branding';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'markup_type' => 'inst_logo',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e0535e94-198e-47dc-b6bd-0844b78253bd';
  $display->content['new-e0535e94-198e-47dc-b6bd-0844b78253bd'] = $pane;
  $display->panels['middle'][0] = 'new-e0535e94-198e-47dc-b6bd-0844b78253bd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_inst_brand'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_metrics';
  $mini->category = 'Article Page';
  $mini->admin_title = 'Highwire Metrics Information';
  $mini->admin_description = 'Provides Article "Metrics" Tab';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be7ca779-6723-46d4-9792-529dbf87f395';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_metrics';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-77bf11d0-eab7-4ec0-abe4-09d1c913e44f';
  $pane->panel = 'middle';
  $pane->type = 'highwire_altmetrics';
  $pane->subtype = 'highwire_altmetrics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'tag' => '<div data-badge-details="right" data-badge-type="medium-donut" [PUBCODE] data-hide-no-mentions="true" class="altmetric-embed"></div>',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '77bf11d0-eab7-4ec0-abe4-09d1c913e44f';
  $display->content['new-77bf11d0-eab7-4ec0-abe4-09d1c913e44f'] = $pane;
  $display->panels['middle'][0] = 'new-77bf11d0-eab7-4ec0-abe4-09d1c913e44f';
  $pane = new stdClass();
  $pane->pid = 'new-22d42a1b-64df-4aa7-86dd-bba13de919f6';
  $pane->panel = 'middle';
  $pane->type = 'highwire_stats';
  $pane->subtype = 'highwire_stats';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Article usage',
    'display_type' => '2',
    'show_date_filter' => 1,
    'columns' => array(
      'abstract' => 'abstract',
      'full' => 'full',
      'pdf' => 'pdf',
    ),
    'logging' => 0,
    'total_row' => 0,
    'empty_text' => 'No statistics are available.',
    'show_source' => 0,
    'default_source_name' => 'Highwire',
    'color_one' => '#2b83ba',
    'color_two' => '#abdda4',
    'color_three' => '#fdae61',
    'color_four' => '#f45140',
    'color_five' => '#fef1b3',
    'x_axis_label' => '',
    'y_axis_label' => '',
    'yearly_annual_total_row' => 0,
    'yearly_annual_total_label' => 'Total',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '22d42a1b-64df-4aa7-86dd-bba13de919f6';
  $display->content['new-22d42a1b-64df-4aa7-86dd-bba13de919f6'] = $pane;
  $display->panels['middle'][1] = 'new-22d42a1b-64df-4aa7-86dd-bba13de919f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_metrics'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_search_box';
  $mini->category = 'All pages';
  $mini->admin_title = 'Search Box';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '39a58ef2-798e-4c33-9d17-db1a49d4e3fc';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_search_box';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e26811d6-3735-4a29-90d6-726cefa7317f';
  $pane->panel = 'middle';
  $pane->type = 'highwire_seach_qsearch_nocontext';
  $pane->subtype = 'highwire_seach_qsearch_nocontext';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'empty',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'submit_button_type' => 'mini',
    'placeholder' => 'search',
    'title_search' => '',
    'target' => 'search',
    'form_build_id' => 'form-Ul884i2HXtI3GnoAMcT23jez4oN_NP5nKFYCcUYSo8w',
    'form_token' => '-UoQjWwaqvUEUqUaI96rpLRhJuND7TPww91V_cP-WtU',
    'form_id' => 'highwire_search_qsearch_nocontext_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'no-margin-bottom',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e26811d6-3735-4a29-90d6-726cefa7317f';
  $display->content['new-e26811d6-3735-4a29-90d6-726cefa7317f'] = $pane;
  $display->panels['middle'][0] = 'new-e26811d6-3735-4a29-90d6-726cefa7317f';
  $pane = new stdClass();
  $pane->pid = 'new-ecf99cb5-5d11-4b40-af75-fab42c6e289a';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<p><a href="/search">Advanced Search</a></p>',
    'format' => 'highwire_full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ecf99cb5-5d11-4b40-af75-fab42c6e289a';
  $display->content['new-ecf99cb5-5d11-4b40-af75-fab42c6e289a'] = $pane;
  $display->panels['middle'][1] = 'new-ecf99cb5-5d11-4b40-af75-fab42c6e289a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_search_box'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_uid_strng';
  $mini->category = 'All pages';
  $mini->admin_title = 'User Identity String';
  $mini->admin_description = 'User Identity String';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Token',
      'keyword' => 'token',
      'name' => 'token',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ff3d6352-188e-40cc-b240-ccda95436a35';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_uid_strng';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9c8e9b1-75de-49e6-b892-c14fa22438a2';
  $pane->panel = 'middle';
  $pane->type = 'highwire_user_identities';
  $pane->subtype = 'highwire_user_identities';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_user_type',
        'settings' => array(
          'user_type' => array(
            'individual' => 'individual',
            'institution' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'display_institutional' => 1,
    'institutional_message' => '<span class="narrow-hidden">Institution: </span>[identity:institutional_display_name]',
    'display_individual' => 1,
    'individual_message' => '<span class="narrow-hidden">Welcome, </span><strong>[identity:individual_display_name]</strong>',
    'display_drupal_user' => 0,
    'drupal_user_message' => '<span class="narrow-hidden">Welcome, </span><strong>[current-user:name]</strong>',
    'separator' => ' | ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f9c8e9b1-75de-49e6-b892-c14fa22438a2';
  $display->content['new-f9c8e9b1-75de-49e6-b892-c14fa22438a2'] = $pane;
  $display->panels['middle'][0] = 'new-f9c8e9b1-75de-49e6-b892-c14fa22438a2';
  $pane = new stdClass();
  $pane->pid = 'new-f579da10-9716-4aab-be30-8e10ce913e81';
  $pane->panel = 'middle';
  $pane->type = 'highwire_user_identities';
  $pane->subtype = 'highwire_user_identities';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'highwire_user_type',
        'settings' => array(
          'user_type' => array(
            'individual' => 'individual',
            'institution' => 0,
          ),
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'display_institutional' => 1,
    'institutional_message' => '<span class="narrow-hidden">Institution: </span>[identity:institutional_display_name]',
    'display_individual' => 0,
    'individual_message' => '<span class="narrow-hidden">Welcome, </span><strong>[identity:individual_display_name]</strong>',
    'display_drupal_user' => 1,
    'drupal_user_message' => '<span class="narrow-hidden">Welcome, </span><strong>[current-user:name]</strong>',
    'separator' => ' | ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f579da10-9716-4aab-be30-8e10ce913e81';
  $display->content['new-f579da10-9716-4aab-be30-8e10ce913e81'] = $pane;
  $display->panels['middle'][1] = 'new-f579da10-9716-4aab-be30-8e10ce913e81';
  $pane = new stdClass();
  $pane->pid = 'new-ad0c81e0-6f66-4ac7-9417-ce4307d1ab11';
  $pane->panel = 'middle';
  $pane->type = 'highwire_user_identities';
  $pane->subtype = 'highwire_user_identities';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_user_type',
        'settings' => array(
          'user_type' => array(
            'individual' => 'individual',
            'institution' => 0,
          ),
        ),
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'display_institutional' => 1,
    'institutional_message' => '<span class="narrow-hidden">Institution: </span>[identity:institutional_display_name]',
    'display_individual' => 0,
    'individual_message' => '<span class="narrow-hidden">Welcome, </span><strong>[identity:individual_display_name]</strong>',
    'display_drupal_user' => 0,
    'drupal_user_message' => 'Welcome, <strong>[current-user:name]</strong>',
    'separator' => ' | ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ad0c81e0-6f66-4ac7-9417-ce4307d1ab11';
  $display->content['new-ad0c81e0-6f66-4ac7-9417-ce4307d1ab11'] = $pane;
  $display->panels['middle'][2] = 'new-ad0c81e0-6f66-4ac7-9417-ce4307d1ab11';
  $pane = new stdClass();
  $pane->pid = 'new-8ff58a96-22d9-4bc1-a9a5-8387b5fb9024';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'system-user-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'links inline',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8ff58a96-22d9-4bc1-a9a5-8387b5fb9024';
  $display->content['new-8ff58a96-22d9-4bc1-a9a5-8387b5fb9024'] = $pane;
  $display->panels['middle'][3] = 'new-8ff58a96-22d9-4bc1-a9a5-8387b5fb9024';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_uid_strng'] = $mini;

  return $export;
}
