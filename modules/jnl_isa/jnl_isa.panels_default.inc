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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
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
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
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
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
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
    $display->content['new-4'] = $pane;
    $display->panels['middle'][0] = 'new-4';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5';
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
    $display->content['new-5'] = $pane;
    $display->panels['middle'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['middle'][1] = 'new-6';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['middle'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['middle'][1] = 'new-8';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9';
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
    $display->content['new-9'] = $pane;
    $display->panels['middle'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
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
    $display->content['new-10'] = $pane;
    $display->panels['middle'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
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
    $display->content['new-11'] = $pane;
    $display->panels['middle'][2] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
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
    $display->content['new-12'] = $pane;
    $display->panels['middle'][3] = 'new-12';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_uid_strng'] = $mini;

  return $export;
}
