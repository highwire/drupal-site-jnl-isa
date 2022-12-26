<?php
/**
 * @file
 * jnl_isa_home_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function jnl_isa_home_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_alert';
  $mini->category = '';
  $mini->admin_title = 'Alerts RHS mini-panel';
  $mini->admin_description = 'Alerts RHS Mini-panel for Most-cited, Top topics and Most read.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0e3fbb3c-9f10-435b-abcf-b51320a3216f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_alert';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b08dbfce-b328-480f-b976-a76a06cd4a73';
  $pane->panel = 'center';
  $pane->type = 'panels_ajax_tab_tabs';
  $pane->subtype = 'panels_ajax_tab_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mini_panels' => array(
      'jnl_isa_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_mc_read' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_foot_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_search_box' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_uid_strng' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_challenge' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_login' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_accordion' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_tools' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_apa' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_chi' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_en' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_mla' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_tool' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_view' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_iss_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_share' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_art' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_data' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_elets' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_pdf' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_supp' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_trans_dls' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_arcpage' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_footer' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_hme_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_most_cited' => array(
        'selected' => 1,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '0',
      ),
      'jnl_isa_most_read' => array(
        'selected' => 1,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '2',
      ),
      'jnl_isa_tab_refs' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_top_topics' => array(
        'selected' => 1,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '1',
      ),
      'jnl_isa_cit_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_print' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_toolb' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_mult_exrt' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_save_copy' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
    ),
    'container_id' => 'jnl_isa_alert_page_top_topics_n_most_cited',
    'url_enabled' => 0,
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'clean_url' => 0,
    'clean_url_delim' => '.',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b08dbfce-b328-480f-b976-a76a06cd4a73';
  $display->content['new-b08dbfce-b328-480f-b976-a76a06cd4a73'] = $pane;
  $display->panels['center'][0] = 'new-b08dbfce-b328-480f-b976-a76a06cd4a73';
  $pane = new stdClass();
  $pane->pid = 'new-e86a721c-e525-4717-be89-b0271d030841';
  $pane->panel = 'center';
  $pane->type = 'panels_ajax_tab_container';
  $pane->subtype = 'panels_ajax_tab_container';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'container_id' => 'jnl_isa_alert_page_top_topics_n_most_cited',
    'context' => array(
      0 => 'empty',
    ),
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
  $pane->uuid = 'e86a721c-e525-4717-be89-b0271d030841';
  $display->content['new-e86a721c-e525-4717-be89-b0271d030841'] = $pane;
  $display->panels['center'][1] = 'new-e86a721c-e525-4717-be89-b0271d030841';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b08dbfce-b328-480f-b976-a76a06cd4a73';
  $mini->display = $display;
  $export['jnl_isa_alert'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_arcpage';
  $mini->category = '';
  $mini->admin_title = 'Archive Page RHS';
  $mini->admin_description = 'Archive Page RHS minipanel';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bb806743-48dc-4312-b8f1-741fd7637438';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_arcpage';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-857cbbd0-bbe7-4d72-899a-e72575423a7b';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_hme_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '7200',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '857cbbd0-bbe7-4d72-899a-e72575423a7b';
  $display->content['new-857cbbd0-bbe7-4d72-899a-e72575423a7b'] = $pane;
  $display->panels['middle'][0] = 'new-857cbbd0-bbe7-4d72-899a-e72575423a7b';
  $pane = new stdClass();
  $pane->pid = 'new-59961351-f3c2-490c-8f47-f7cb000b21a1';
  $pane->panel = 'middle';
  $pane->type = 'highwire_issue_archive_refine';
  $pane->subtype = 'highwire_issue_archive_refine';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'volume_url_prefix' => 'content/by/volume/',
    'submit_button_type' => 'full',
    'submit_button_text' => 'Search',
    'submit_button_icon' => 'icon-search',
    'submit_button_icon_position' => 'after',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '59961351-f3c2-490c-8f47-f7cb000b21a1';
  $display->content['new-59961351-f3c2-490c-8f47-f7cb000b21a1'] = $pane;
  $display->panels['middle'][1] = 'new-59961351-f3c2-490c-8f47-f7cb000b21a1';
  $pane = new stdClass();
  $pane->pid = 'new-55d1703b-f54d-4ccf-86e6-841252c961f7';
  $pane->panel = 'middle';
  $pane->type = 'snippet';
  $pane->subtype = 'jnl_isa_issue_archive_volume_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '55d1703b-f54d-4ccf-86e6-841252c961f7';
  $display->content['new-55d1703b-f54d-4ccf-86e6-841252c961f7'] = $pane;
  $display->panels['middle'][2] = 'new-55d1703b-f54d-4ccf-86e6-841252c961f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_arcpage'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_footer';
  $mini->category = 'All pages';
  $mini->admin_title = 'Page Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'jcore_row_4col';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r3',
          1 => 'r2',
          2 => 'r1',
          3 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'r1' => array(
        'type' => 'region',
        'title' => 'R1',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'r2' => array(
        'type' => 'region',
        'title' => 'R2',
        'width' => 12.5,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'r3' => array(
        'type' => 'region',
        'title' => 'R3',
        'width' => 12.5,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'r1' => NULL,
      'r2' => array(
        'equal_height_container' => 1,
        'region_classes' => '',
      ),
      'r3' => array(
        'equal_height_container' => 1,
        'region_classes' => '',
      ),
      'col_1' => NULL,
      'col_2' => NULL,
      'col_3' => NULL,
      'col_4' => NULL,
    ),
    'r3' => array(
      'style' => 'jcore_eqh_region',
    ),
    'r2' => array(
      'style' => 'jcore_eqh_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47445a4f-826f-423e-bff5-3fc751fe6963';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e59a9967-3726-4bdf-ab5e-6108c1bc1d80';
  $pane->panel = 'col_1';
  $pane->type = 'block';
  $pane->subtype = 'menu-navigate';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e59a9967-3726-4bdf-ab5e-6108c1bc1d80';
  $display->content['new-e59a9967-3726-4bdf-ab5e-6108c1bc1d80'] = $pane;
  $display->panels['col_1'][0] = 'new-e59a9967-3726-4bdf-ab5e-6108c1bc1d80';
  $pane = new stdClass();
  $pane->pid = 'new-95e38824-8a76-45fb-9245-d03dd2b93868';
  $pane->panel = 'col_2';
  $pane->type = 'block';
  $pane->subtype = 'menu-more-information';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '95e38824-8a76-45fb-9245-d03dd2b93868';
  $display->content['new-95e38824-8a76-45fb-9245-d03dd2b93868'] = $pane;
  $display->panels['col_2'][0] = 'new-95e38824-8a76-45fb-9245-d03dd2b93868';
  $pane = new stdClass();
  $pane->pid = 'new-0ca6b45d-31c4-44c1-be2f-1b81c9431a27';
  $pane->panel = 'col_3';
  $pane->type = 'block';
  $pane->subtype = 'menu-add-journals';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0ca6b45d-31c4-44c1-be2f-1b81c9431a27';
  $display->content['new-0ca6b45d-31c4-44c1-be2f-1b81c9431a27'] = $pane;
  $display->panels['col_3'][0] = 'new-0ca6b45d-31c4-44c1-be2f-1b81c9431a27';
  $pane = new stdClass();
  $pane->pid = 'new-61646cbd-0c41-423a-8ddc-8010fbe202f9';
  $pane->panel = 'col_4';
  $pane->type = 'block';
  $pane->subtype = 'menu-other-services';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '61646cbd-0c41-423a-8ddc-8010fbe202f9';
  $display->content['new-61646cbd-0c41-423a-8ddc-8010fbe202f9'] = $pane;
  $display->panels['col_4'][0] = 'new-61646cbd-0c41-423a-8ddc-8010fbe202f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_hme_issue';
  $mini->category = 'Home Page';
  $mini->admin_title = 'Home Page - Current Issue';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Current issue',
      'keyword' => 'current_issue',
      'name' => 'current_issue',
      'use_default_jcode' => 1,
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'highwire_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '7200',
      'granularity' => array(
        'context' => 'context',
        'args' => 0,
        'user' => 0,
        'user_role' => 0,
        'url' => 0,
        'path' => 0,
      ),
    ),
  );
  $display->title = 'Current Issue';
  $display->uuid = '760224ae-bd7b-4116-aa50-1408a100e32f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_hme_issue';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3e250533-8c95-4fe9-a88d-4665c3bde5de';
  $pane->panel = 'content_left';
  $pane->type = 'highwire_issue_cover';
  $pane->subtype = 'highwire_issue_cover';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'cover_size' => 'large',
    'variant_link' => 'default',
    'context' => 'context_current_issue_1',
    'override_title' => 0,
    'override_title_text' => '',
    'alt_text' => '',
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
  $pane->uuid = '3e250533-8c95-4fe9-a88d-4665c3bde5de';
  $display->content['new-3e250533-8c95-4fe9-a88d-4665c3bde5de'] = $pane;
  $display->panels['content_left'][0] = 'new-3e250533-8c95-4fe9-a88d-4665c3bde5de';
  $pane = new stdClass();
  $pane->pid = 'new-c12e6e5d-d719-486c-a101-372261687901';
  $pane->panel = 'content_right';
  $pane->type = 'highwire_issue_highlights';
  $pane->subtype = 'highwire_issue_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_current_issue_1',
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Issue highlights',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'jcore_title_only',
    'title_type' => 'short',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-8IDFLlSkipdpzkTyG4euZFUEz9iIg7bIp1gu8t0lJoM',
    'form_token' => 'cJCn-j3AlsHv-P5CD09HPPyEHsuX-WE3kdIt1zZTb_8',
    'form_id' => 'highwire_highwire_issue_highlights_content_type_edit_form',
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'toc',
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'display_subtitle' => 0,
    'display_markup_snippet' => '',
    'access_indicator_settings' => array(
      'open_access' => array(
        'icon' => 'icon-unlock',
        'title' => 'Open Access',
      ),
      'user_access' => array(
        'icon' => 'icon-ok-sign',
        'title' => 'You have access',
      ),
      'no_access' => array(
        'icon' => 'icon-lock',
        'title' => 'Restricted access',
      ),
    ),
    'pdf_download' => array(
      'display_pdf_download' => 0,
      'pdf_download_icon' => 'icon-cloud-download',
      'pdf_download_text' => 'PDF',
    ),
    'include_on_behalf' => 1,
    'show_mark_citation' => 0,
    'display_infotrieve_link' => 0,
    'infotrieve_link_settings' => array(
      'icon' => 'icon-usd',
      'link_caption' => 'Order full text via Infotrieve',
    ),
    'display_highlight_image' => '0',
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'featured_image_click_image' => 'colorbox',
    'display_cme_link' => 0,
    'display_author_tooltip' => 0,
    'display_google_scholar_tooltip' => 1,
    'display_pubmed_tooltip' => 1,
    'display_advanced_search_tooltip' => 1,
    'display_author_landing_page_tooltip' => 1,
    'display_orcid_tooltip' => 0,
    'display_ads_search_tooltip' => 0,
    'display_agricola_tooltip' => 0,
    'author_site_search_path' => '',
    'display_translations' => 0,
    'display_translations_text' => '',
    'display_translations_text_icon' => '',
    'bundle_overrides_checkboxes' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
      ),
      'highwire_news_story' => array(
        'selector' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
      ),
      'highwire_article' => array(
        'selector' => 0,
      ),
      'highwire_issue' => array(
        'selector' => 0,
      ),
      'highwire_comment' => array(
        'selector' => 0,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
      ),
      'highwire_book_section' => array(
        'selector' => 0,
      ),
      'highwire_journal' => array(
        'selector' => 0,
      ),
    ),
    'bundle_overrides' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
        'citation_style' => 'jcore_title_and_author',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => 'thumbnail',
        'display_fragment_caption' => 1,
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_book_section',
        'parent_citation_settings' => array(
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 1,
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
      ),
      'highwire_news_story' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 0,
        'display_pubmed_tooltip' => 0,
        'display_advanced_search_tooltip' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
        'citation_style' => 'folio_books_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_article' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_variant' => 'large',
        'featured_image_click_image' => 'nothing',
        'display_orcid_icon' => 0,
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'display_ads_search_tooltip' => 0,
        'display_agricola_tooltip' => 0,
        'author_site_search_path' => 'search/',
        'display_translations' => 0,
        'display_translations_text' => 'Translations Available',
        'display_translations_text_icon' => 'icon-globe',
      ),
      'highwire_issue' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_comment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_comment',
        'show_title' => 0,
        'title_as_link' => 0,
        'title_as_link_type' => 'tab_view',
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_format' => '(j F Y)',
        'display_comment_body' => 1,
        'display_attachment' => 1,
        'display_conflict_of_interest' => 1,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
        'citation_style' => 'jcore_title_and_author',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_fragment_caption' => 1,
        'enable_show_more_link' => array(
          'is_checked_enable_show_more_link' => 0,
          'show_more_link_title' => 'Show More',
          'show_less_link_title' => 'Show Less',
          'snippet_max_length' => '150',
        ),
        'fragment_image_settings' => array(
          'fragment_image_variant' => 'medium',
          'fragment_click_image' => 'colorbox',
          'show_download_links' => 1,
        ),
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_article',
        'parent_citation_settings' => array(
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_orcid_icon' => 0,
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
      ),
      'highwire_book_section' => array(
        'selector' => 0,
        'citation_style' => 'folio_book_sections_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'author_site_search_path' => 'search/',
      ),
      'highwire_journal' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
    ),
    'show_pager' => 0,
    'number_per_page' => '4',
    'highlight_image_toggle' => 0,
    'display_variants_list_inline' => 1,
    'cpath_prefix' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c12e6e5d-d719-486c-a101-372261687901';
  $display->content['new-c12e6e5d-d719-486c-a101-372261687901'] = $pane;
  $display->panels['content_right'][0] = 'new-c12e6e5d-d719-486c-a101-372261687901';
  $pane = new stdClass();
  $pane->pid = 'new-b9644253-3efd-4bcc-8876-76a1042ad35c';
  $pane->panel = 'top';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_current_issue_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_slugline',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'toc',
    ),
    'citation_style' => 'mla',
    'cache_enabled' => 1,
    'cache_time' => '600',
    'title_type' => 'full',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'title_as_link' => 0,
    'display_subtitle' => 0,
    'choose_pubdate' => 'ppubdate',
    'display_markup_snippet' => '',
    'highlight_image_toggle' => 0,
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'access_indicator_settings' => array(
      'open_access' => array(
        'icon' => 'icon-unlock',
        'title' => 'Open Access',
      ),
      'user_access' => array(
        'icon' => 'icon-ok-sign',
        'title' => 'You have access',
      ),
      'no_access' => array(
        'icon' => 'icon-lock',
        'title' => 'Restricted access',
      ),
    ),
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_variants_list_inline' => 1,
    'pdf_download' => array(
      'display_pdf_download' => 0,
      'pdf_download_icon' => 'icon-cloud-download',
      'pdf_download_text' => 'PDF',
    ),
    'include_on_behalf' => 1,
    'cpath_prefix' => '',
    'show_mark_citation' => 0,
    'display_infotrieve_link' => 0,
    'infotrieve_link_settings' => array(
      'icon' => 'icon-usd',
      'link_caption' => 'Order full text via Infotrieve',
    ),
    'bundle_overrides_checkboxes' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
      ),
      'highwire_news_story' => array(
        'selector' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
      ),
      'highwire_article' => array(
        'selector' => 0,
      ),
      'highwire_issue' => array(
        'selector' => 0,
      ),
      'highwire_comment' => array(
        'selector' => 0,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
      ),
      'highwire_book_section' => array(
        'selector' => 0,
      ),
      'highwire_journal' => array(
        'selector' => 0,
      ),
    ),
    'bundle_overrides' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_issue_info',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => 'hw_citation_fragments_small',
        'display_fragment_caption' => 1,
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_book_section',
        'parent_citation_settings' => array(
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 1,
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
      ),
      'highwire_news_story' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 0,
        'display_pubmed_tooltip' => 0,
        'display_advanced_search_tooltip' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
        'citation_style' => 'folio_books_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_article' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_variant' => 'large',
        'featured_image_click_image' => 'nothing',
        'display_orcid_icon' => 0,
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'display_ads_search_tooltip' => 0,
        'display_agricola_tooltip' => 0,
        'author_site_search_path' => 'search/',
        'display_translations' => 0,
        'display_translations_text' => 'Translations Available',
        'display_translations_text_icon' => 'icon-globe',
      ),
      'highwire_issue' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'node',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_comment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_comment',
        'show_title' => 1,
        'title_as_link' => 0,
        'title_as_link_type' => 'tab_view',
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_format' => '(j F Y)',
        'display_comment_body' => 1,
        'display_attachment' => 1,
        'display_conflict_of_interest' => 1,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_issue_info',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_fragment_caption' => 1,
        'enable_show_more_link' => array(
          'is_checked_enable_show_more_link' => 0,
          'show_more_link_title' => 'Show More',
          'show_less_link_title' => 'Show Less',
          'snippet_max_length' => '150',
        ),
        'fragment_image_settings' => array(
          'fragment_image_variant' => 'medium',
          'fragment_click_image' => 'colorbox',
          'show_download_links' => 1,
        ),
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_article',
        'parent_citation_settings' => array(
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_orcid_icon' => 0,
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
      ),
      'highwire_book_section' => array(
        'selector' => 0,
        'citation_style' => 'folio_book_sections_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'author_site_search_path' => 'search/',
      ),
      'highwire_journal' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'highlight_image_toggle' => 0,
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_variants_list_inline' => 1,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
    ),
    'form_build_id' => 'form-lVjq4qZxDTCW6ctvMaLmaeHbiF1j6fH8iwz3XaPUs4o',
    'form_token' => 'jPdyfFXd-7eW-_zbYLbnsx7IqFeqH2ZsxCkPuLQjLL4',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b9644253-3efd-4bcc-8876-76a1042ad35c';
  $display->content['new-b9644253-3efd-4bcc-8876-76a1042ad35c'] = $pane;
  $display->panels['top'][0] = 'new-b9644253-3efd-4bcc-8876-76a1042ad35c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c12e6e5d-d719-486c-a101-372261687901';
  $mini->display = $display;
  $export['jnl_isa_hme_issue'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_home_list';
  $mini->category = 'Home Page';
  $mini->admin_title = 'Homepage Article List';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Default Journal',
      'keyword' => 'node',
      'name' => 'default_journal',
      'optional' => 0,
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
  $display->uuid = 'fb457c80-e33c-443e-8947-2c2e71b2134a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_home_list';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fbe340b9-f60c-4e5a-a56c-0161f04f3225';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'jnl_isa_pap_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_ISSUE_PAP',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_DP',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'requiredcontext_default_journal_1.nid',
    ),
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
  $pane->uuid = 'fbe340b9-f60c-4e5a-a56c-0161f04f3225';
  $display->content['new-fbe340b9-f60c-4e5a-a56c-0161f04f3225'] = $pane;
  $display->panels['middle'][0] = 'new-fbe340b9-f60c-4e5a-a56c-0161f04f3225';
  $pane = new stdClass();
  $pane->pid = 'new-29d0eaf0-734a-4804-932c-59185f8689e8';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'jnl_isa_pap_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_ISSUE_PAP',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_DP',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'requiredcontext_default_journal_1.nid',
    ),
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
  $pane->uuid = '29d0eaf0-734a-4804-932c-59185f8689e8';
  $display->content['new-29d0eaf0-734a-4804-932c-59185f8689e8'] = $pane;
  $display->panels['middle'][1] = 'new-29d0eaf0-734a-4804-932c-59185f8689e8';
  $pane = new stdClass();
  $pane->pid = 'new-83cf9d30-dca5-47f2-80c6-5fee7f7f8299';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'latest_articles';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_ISSUE_PAP',
        ),
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_DP',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'requiredcontext_default_journal_1.nid',
    ),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '83cf9d30-dca5-47f2-80c6-5fee7f7f8299';
  $display->content['new-83cf9d30-dca5-47f2-80c6-5fee7f7f8299'] = $pane;
  $display->panels['middle'][2] = 'new-83cf9d30-dca5-47f2-80c6-5fee7f7f8299';
  $pane = new stdClass();
  $pane->pid = 'new-c52160d7-4b19-4671-9120-e3bfcc727aaf';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'latest_articles';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_ISSUE_PAP',
        ),
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'highwire_variable_match',
        'settings' => array(
          'variable_name' => 'highwire_default_publication_model',
          'variable_value' => 'HIGHWIRE_PUB_MODEL_DP',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'requiredcontext_default_journal_1.nid',
    ),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c52160d7-4b19-4671-9120-e3bfcc727aaf';
  $display->content['new-c52160d7-4b19-4671-9120-e3bfcc727aaf'] = $pane;
  $display->panels['middle'][3] = 'new-c52160d7-4b19-4671-9120-e3bfcc727aaf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fbe340b9-f60c-4e5a-a56c-0161f04f3225';
  $mini->display = $display;
  $export['jnl_isa_home_list'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_mc_read';
  $mini->category = '';
  $mini->admin_title = 'Highwire Most Cited/Read';
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
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7e82de6a-f26a-481a-ab17-1019cf97bd48';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_mc_read';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f7e339e2-5082-48c0-896d-a62e7fb25a70';
  $pane->panel = 'middle';
  $pane->type = 'panels_ajax_tab_tabs';
  $pane->subtype = 'panels_ajax_tab_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mini_panels' => array(
      'jnl_isa_mc_read' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_foot_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_search_box' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-7',
      ),
      'jnl_isa_uid_strng' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-6',
      ),
      'jnl_isa_challenge' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-5',
      ),
      'jnl_isa_login' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-4',
      ),
      'jnl_isa_accordion' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-3',
      ),
      'jnl_isa_art_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-2',
      ),
      'jnl_isa_art_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-1',
      ),
      'jnl_isa_art_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '0',
      ),
      'jnl_isa_art_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '1',
      ),
      'jnl_isa_art_tools' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '2',
      ),
      'jnl_isa_cite_apa' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '3',
      ),
      'jnl_isa_cite_chi' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '4',
      ),
      'jnl_isa_cite_en' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '5',
      ),
      'jnl_isa_cite_mla' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '6',
      ),
      'jnl_isa_cite_tool' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '7',
      ),
      'jnl_isa_cite_view' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '8',
      ),
      'jnl_isa_iss_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '9',
      ),
      'jnl_isa_share' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_tab_art' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-9',
      ),
      'jnl_isa_tab_data' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_tab_elets' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_tab_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_tab_pdf' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_tab_supp' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_trans_dls' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_arcpage' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_footer' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_hme_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_most_cited' => array(
        'selected' => 1,
        'tab_title' => 'Most Cited',
        'url_id' => 'most-cited',
        'weight' => '9',
      ),
      'jnl_isa_most_read' => array(
        'selected' => 1,
        'tab_title' => 'Most Read',
        'url_id' => 'most-read',
        'weight' => '10',
      ),
      'jnl_isa_tab_refs' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_top_topics' => array(
        'selected' => 1,
        'tab_title' => 'Top Topics',
        'url_id' => 'top-topics',
        'weight' => '8',
      ),
      'jnl_isa_cit_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_print' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_toolb' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_mult_exrt' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_save_copy' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
    ),
    'container_id' => 'jnl_isa_most_cited_n_top_topics_panel',
    'url_enabled' => 0,
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'clean_url' => 0,
    'clean_url_delim' => '.',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7e339e2-5082-48c0-896d-a62e7fb25a70';
  $display->content['new-f7e339e2-5082-48c0-896d-a62e7fb25a70'] = $pane;
  $display->panels['middle'][0] = 'new-f7e339e2-5082-48c0-896d-a62e7fb25a70';
  $pane = new stdClass();
  $pane->pid = 'new-11fbf6f8-f675-4065-89f7-7adf0c9bbafa';
  $pane->panel = 'middle';
  $pane->type = 'panels_ajax_tab_container';
  $pane->subtype = 'panels_ajax_tab_container';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'container_id' => 'jnl_isa_most_cited_n_top_topics_panel',
    'context' => array(
      0 => 'empty',
    ),
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
  $pane->uuid = '11fbf6f8-f675-4065-89f7-7adf0c9bbafa';
  $display->content['new-11fbf6f8-f675-4065-89f7-7adf0c9bbafa'] = $pane;
  $display->panels['middle'][1] = 'new-11fbf6f8-f675-4065-89f7-7adf0c9bbafa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_mc_read'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_most_cited';
  $mini->category = 'Home tabs';
  $mini->admin_title = 'Most Cited';
  $mini->admin_description = 'Minipanel to hold the "Most Cited Articles"';
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '14400',
      'granularity' => 'none',
    ),
  );
  $display->title = '';
  $display->uuid = 'eab853cd-1b3a-4658-a288-8af63207a694';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_most_cited';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9240d973-bc6c-4eb3-8c79-7036cdc24483';
  $pane->panel = 'middle';
  $pane->type = 'highwire_reports_feed';
  $pane->subtype = 'highwire_reports_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'reports_feed' => 'http://staticfs.highwire.org/[site:default_jcode]/reports/mfc_atom.xml',
    'number_of_articles_to_display' => '5',
    'citation_style' => 'jcore_title_only',
    'title_type' => 'full',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-NyoQfqQk4DMjrq-6yWWqiaV685XC-GOh7Nkw0Ktzs6M',
    'form_token' => 'uscpQPAIQTpM0NPQsLDc2A3szRXkZdSQnTk5ndKT4w0',
    'form_id' => 'highwire_highwire_reports_feed_content_type_edit_form',
    'display_access_indicator_text' => 0,
    'show_pager' => 0,
    'show_more_link' => 1,
    'more_url_text' => 'More...',
    'more_url' => 'articles/most-cited',
    'display_markup_snippet' => '',
    'display_author_tooltip' => 0,
    'display_subtitle' => 0,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'access_indicator_settings' => array(
      'open_access' => array(
        'icon' => 'icon-unlock',
        'title' => 'Open Access',
      ),
      'user_access' => array(
        'icon' => 'icon-ok-sign',
        'title' => 'You have access',
      ),
      'no_access' => array(
        'icon' => 'icon-lock',
        'title' => 'Restricted access',
      ),
    ),
    'pdf_download' => array(
      'display_pdf_download' => 0,
      'pdf_download_icon' => 'icon-cloud-download',
      'pdf_download_text' => 'PDF',
    ),
    'include_on_behalf' => 1,
    'show_mark_citation' => 0,
    'display_infotrieve_link' => 0,
    'infotrieve_link_settings' => array(
      'icon' => 'icon-usd',
      'link_caption' => 'Order full text via Infotrieve',
    ),
    'display_highlight_image' => '0',
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'featured_image_click_image' => 'colorbox',
    'display_cme_link' => 0,
    'display_google_scholar_tooltip' => 1,
    'display_pubmed_tooltip' => 1,
    'display_advanced_search_tooltip' => 1,
    'display_author_landing_page_tooltip' => 1,
    'display_orcid_tooltip' => 0,
    'display_ads_search_tooltip' => 0,
    'display_agricola_tooltip' => 0,
    'author_site_search_path' => '',
    'display_translations' => 0,
    'display_translations_text' => '',
    'display_translations_text_icon' => '',
    'bundle_overrides_checkboxes' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
      ),
      'highwire_article' => array(
        'selector' => 0,
      ),
      'highwire_issue' => array(
        'selector' => 0,
      ),
      'highwire_comment' => array(
        'selector' => 0,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
      ),
      'highwire_book_section' => array(
        'selector' => 0,
      ),
      'highwire_journal' => array(
        'selector' => 0,
      ),
    ),
    'bundle_overrides' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
        'citation_style' => 'jcore_title_and_author',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => 'thumbnail',
        'display_fragment_caption' => 1,
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_book_section',
        'parent_citation_settings' => array(
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 1,
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
        'citation_style' => 'folio_books_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_article' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_variant' => 'large',
        'featured_image_click_image' => 'nothing',
        'display_cme_link' => 0,
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'display_ads_search_tooltip' => 0,
        'display_agricola_tooltip' => 0,
        'author_site_search_path' => 'search/',
        'display_translations' => 0,
        'display_translations_text' => 'Translations Available',
        'display_translations_text_icon' => 'icon-globe',
      ),
      'highwire_issue' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_comment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_comment',
        'title_as_link' => 0,
        'title_as_link_type' => 'tab_view',
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_format' => '(j F Y)',
        'display_comment_body' => 1,
        'display_attachment' => 1,
        'display_conflict_of_interest' => 1,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
        'citation_style' => 'jcore_title_and_author',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_fragment_caption' => 1,
        'fragment_image_settings' => array(
          'fragment_image_variant' => 'medium',
          'fragment_click_image' => 'colorbox',
          'show_download_links' => 1,
        ),
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_article',
        'parent_citation_settings' => array(
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_cme_link' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
      ),
      'highwire_book_section' => array(
        'selector' => 0,
        'citation_style' => 'folio_book_sections_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'author_site_search_path' => 'search/',
      ),
      'highwire_journal' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9240d973-bc6c-4eb3-8c79-7036cdc24483';
  $display->content['new-9240d973-bc6c-4eb3-8c79-7036cdc24483'] = $pane;
  $display->panels['middle'][0] = 'new-9240d973-bc6c-4eb3-8c79-7036cdc24483';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_most_cited'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_most_read';
  $mini->category = 'Home tabs';
  $mini->admin_title = 'Most Read';
  $mini->admin_description = 'isa Most Read';
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '14400',
      'granularity' => 'none',
    ),
  );
  $display->title = '';
  $display->uuid = '50492098-033c-42ed-8474-f7b82154bf37';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_most_read';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a29c14ba-279d-49b1-a961-1fd4cf0159a3';
  $pane->panel = 'middle';
  $pane->type = 'highwire_reports_feed';
  $pane->subtype = 'highwire_reports_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'reports_feed' => 'http://staticfs.highwire.org/[site:default_jcode]/reports/mfr_atom.xml',
    'number_of_articles_to_display' => '5',
    'citation_style' => 'jcore_title_only',
    'title_type' => 'full',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-O-Z0_kD43Uv6bUvgCBCleHNAL5XkWdN87EsU2C7d31I',
    'form_token' => 'LPXARuZjI0B1l_0fECjktjoRQluG5cxmuMCnoZhDqCM',
    'form_id' => 'highwire_highwire_reports_feed_content_type_edit_form',
    'display_access_indicator_text' => 0,
    'show_more_link' => 1,
    'more_url_text' => 'More...',
    'more_url' => 'articles/most-read',
    'show_pager' => 0,
    'display_markup_snippet' => '',
    'display_author_tooltip' => 0,
    'display_subtitle' => 0,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'access_indicator_settings' => array(
      'open_access' => array(
        'icon' => 'icon-unlock',
        'title' => 'Open Access',
      ),
      'user_access' => array(
        'icon' => 'icon-ok-sign',
        'title' => 'You have access',
      ),
      'no_access' => array(
        'icon' => 'icon-lock',
        'title' => 'Restricted access',
      ),
    ),
    'pdf_download' => array(
      'display_pdf_download' => 0,
      'pdf_download_icon' => 'icon-cloud-download',
      'pdf_download_text' => 'PDF',
    ),
    'include_on_behalf' => 1,
    'show_mark_citation' => 0,
    'display_infotrieve_link' => 0,
    'infotrieve_link_settings' => array(
      'icon' => 'icon-usd',
      'link_caption' => 'Order full text via Infotrieve',
    ),
    'display_highlight_image' => '0',
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'featured_image_click_image' => 'colorbox',
    'display_cme_link' => 0,
    'display_google_scholar_tooltip' => 1,
    'display_pubmed_tooltip' => 1,
    'display_advanced_search_tooltip' => 1,
    'display_author_landing_page_tooltip' => 1,
    'display_orcid_tooltip' => 0,
    'display_ads_search_tooltip' => 0,
    'display_agricola_tooltip' => 0,
    'author_site_search_path' => '',
    'display_translations' => 0,
    'display_translations_text' => '',
    'display_translations_text_icon' => '',
    'bundle_overrides_checkboxes' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
      ),
      'highwire_article' => array(
        'selector' => 0,
      ),
      'highwire_issue' => array(
        'selector' => 0,
      ),
      'highwire_comment' => array(
        'selector' => 0,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
      ),
      'highwire_book_section' => array(
        'selector' => 0,
      ),
      'highwire_journal' => array(
        'selector' => 0,
      ),
    ),
    'bundle_overrides' => array(
      'highwire_book_fragment' => array(
        'selector' => 0,
        'citation_style' => 'jcore_title_and_author',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => 'thumbnail',
        'display_fragment_caption' => 1,
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_book_section',
        'parent_citation_settings' => array(
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 1,
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
        'citation_style' => 'folio_books_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_article' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_variant' => 'large',
        'featured_image_click_image' => 'nothing',
        'display_cme_link' => 0,
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 1,
        'display_orcid_tooltip' => 1,
        'display_ads_search_tooltip' => 0,
        'display_agricola_tooltip' => 0,
        'author_site_search_path' => 'search/',
        'display_translations' => 0,
        'display_translations_text' => 'Translations Available',
        'display_translations_text_icon' => 'icon-globe',
      ),
      'highwire_issue' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
      'highwire_comment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_comment',
        'title_as_link' => 0,
        'title_as_link_type' => 'tab_view',
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_format' => '(j F Y)',
        'display_comment_body' => 1,
        'display_attachment' => 1,
        'display_conflict_of_interest' => 1,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
        'citation_style' => 'jcore_title_and_author',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => '0',
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_fragment_caption' => 1,
        'fragment_image_settings' => array(
          'fragment_image_variant' => 'medium',
          'fragment_click_image' => 'colorbox',
          'show_download_links' => 1,
        ),
        'display_parent_citation' => 1,
        'parent_citation_type' => 'highwire_article',
        'parent_citation_settings' => array(
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_cme_link' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
      ),
      'highwire_book_section' => array(
        'selector' => 0,
        'citation_style' => 'folio_book_sections_standard',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_abstract_tooltip' => 0,
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'author_site_search_path' => 'search/',
      ),
      'highwire_journal' => array(
        'selector' => 0,
        'citation_style' => 'mla',
        'cache_enabled' => 1,
        'cache_time' => '600',
        'title_type' => 'full',
        'short_title_options' => array(
          'char_count' => '50',
          'add_ellipsis' => 0,
        ),
        'title_as_link' => 0,
        'display_subtitle' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'access_indicator_settings' => array(
          'open_access' => array(
            'icon' => 'icon-unlock',
            'title' => 'Open Access',
          ),
          'user_access' => array(
            'icon' => 'icon-ok-sign',
            'title' => 'You have access',
          ),
          'no_access' => array(
            'icon' => 'icon-lock',
            'title' => 'Restricted access',
          ),
        ),
        'display_variants' => 0,
        'display_supplements' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
      ),
    ),
  );
  $pane->cache = array(
    'method' => 0,
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a29c14ba-279d-49b1-a961-1fd4cf0159a3';
  $display->content['new-a29c14ba-279d-49b1-a961-1fd4cf0159a3'] = $pane;
  $display->panels['middle'][0] = 'new-a29c14ba-279d-49b1-a961-1fd4cf0159a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_most_read'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_refs';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - References';
  $mini->admin_description = 'Provides main "References" tab';
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
  $display->uuid = '399bf4c9-24bd-4e5d-81f7-92104e850756';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_refs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2435b200-0062-43f0-8e1a-a4fae06603e9';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'variant' => 'ref-links',
    'process' => array(
      'highwire_footnote_jump_link' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_figures' => 0,
      'highwire_cc_logo' => 0,
      'highwire_extract_element' => 0,
      'highwire_quick_nav' => 0,
      'highwire_doi' => 0,
      'highwire_socialcite_doi' => 0,
      'highwire_disable_references' => 'highwire_disable_references',
      'highwire_tables' => 0,
      'highwire_inline_linked_media' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_arxiv_url' => 0,
      'highwire_openurl' => 'highwire_openurl',
      'highwire_remove_invalid_links' => 0,
      'highwire_reclass' => 0,
      'highwire_brightcove_video' => 0,
      'highwire_tables_images' => 0,
      'highwire_georef_css' => 0,
      'highwire_tables_expansion' => 0,
      'highwire_at_symbol' => 0,
      'highwire_infotrieve_link' => 0,
      'highwire_article_reference_popup' => 0,
      'highwire_article_glossary_popup' => 0,
      'highwire_image_protection' => 0,
      'highwire_embed' => 0,
      'highwire_glencoe_video' => 0,
      'highwire_keywords' => 0,
      'highwire_math' => 0,
      'highwire_inline_ads' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_video_flowplayer' => 0,
      'highwire_google_scholar' => 0,
      'highwire_collapsible_supplemental' => 0,
      'highwire_insert_mini_panel' => 0,
      'highwire_delete_elements' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_author_affiliates' => 0,
    ),
    'variant_404' => 'display_nothing',
    'ac_403' => 'drupal_login',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 1,
    'lock_variant' => 1,
    'disable_ac' => 1,
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'toc_heading' => '',
        'remove_toc_heading' => '',
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_apa',
          ),
          'corpus_config_wrapper' => array(
            'corpus_config_citation_context' => 'toc',
          ),
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'toggle_rows' => array(
            'highlight' => 'highlight',
            'overline' => 'overline',
            'access' => 'access',
            'title' => 'title',
            'authors' => 'authors',
            'metadata' => 'metadata',
            'snippet' => 'snippet',
            'extras' => 'extras',
          ),
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'send_pdf_through_ac' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'audio_settings' => array(
            'display_audio_player' => 0,
            'no_html5_audio_text' => '',
            'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
            'enable_download_link' => 0,
            'download_link_icon' => '',
            'download_link_text' => '',
          ),
          'bundle_overrides_checkboxes' => array(
            'highwire_article' => array(
              'selector' => 0,
            ),
            'highwire_comment' => array(
              'selector' => 0,
            ),
            'highwire_news_story' => array(
              'selector' => 0,
            ),
            'highwire_book_edition' => array(
              'selector' => 0,
            ),
            'highwire_book_section' => array(
              'selector' => 0,
            ),
            'highwire_journal' => array(
              'selector' => 0,
            ),
            'highwire_issue' => array(
              'selector' => 0,
            ),
            'highwire_fragment' => array(
              'selector' => 0,
            ),
            'highwire_book_fragment' => array(
              'selector' => 0,
            ),
          ),
          'bundle_overrides' => array(
            'highwire_article' => array(
              'selector' => 0,
              'citation_style' => 'mla',
              'cache_enabled' => 1,
              'cache_time' => '600',
              'toggle_rows' => array(
                'highlight' => 'highlight',
                'overline' => 'overline',
                'access' => 'access',
                'title' => 'title',
                'authors' => 'authors',
                'metadata' => 'metadata',
                'snippet' => 'snippet',
                'extras' => 'extras',
              ),
              'title_type' => 'full',
              'short_title_options' => array(
                'char_count' => '50',
                'add_ellipsis' => 0,
              ),
              'title_as_link' => 0,
              'display_subtitle' => 0,
              'choose_pubdate' => 'ppubdate',
              'choose_early_release_pubdate' => '',
              'pubdate_format_type' => '',
              'pubdate_format_custom' => '',
              'display_markup_snippet' => '',
              'highlight_image_toggle' => 0,
              'display_original_link' => 0,
              'display_access_indicator' => 0,
              'access_indicator_settings' => array(
                'open_access' => array(
                  'icon' => 'icon-unlock',
                  'title' => 'Open Access',
                ),
                'user_access' => array(
                  'icon' => 'icon-ok-sign',
                  'title' => 'You have access',
                ),
                'no_access' => array(
                  'icon' => 'icon-lock',
                  'title' => 'Restricted access',
                ),
              ),
              'display_variants' => 0,
              'display_supplements' => 0,
              'display_variants_list_inline' => 1,
              'pdf_download' => array(
                'display_pdf_download' => 0,
                'send_pdf_through_ac' => 0,
                'pdf_download_icon' => 'icon-cloud-download',
                'pdf_download_text' => 'PDF',
              ),
              'cpath_prefix' => '',
              'show_mark_citation' => 0,
              'display_infotrieve_link' => 0,
              'infotrieve_link_settings' => array(
                'icon' => 'icon-usd',
                'link_caption' => 'Order full text via Infotrieve',
              ),
              'audio_settings' => array(
                'display_audio_player' => 0,
                'no_html5_audio_text' => '',
                'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
                'enable_download_link' => 0,
                'download_link_icon' => '',
                'download_link_text' => '',
              ),
              'display_highlight_image' => '0',
              'highlight_image_style' => '',
              'featured_image_variant' => 'large',
              'featured_image_click_image' => 'colorbox',
              'display_cme_link' => 0,
              'display_cme_link_label' => 'CME',
              'display_cme_link_icon' => 'icon-link',
              'display_cme_link_attributes' => array(
                'target' => '',
              ),
              'display_abstract_tooltip' => 0,
              'abstract_tooltip_instance' => 'highwire_abstract_tooltip',
              'display_contributors' => 0,
              'include_on_behalf' => 0,
              'display_orcid_icon' => 0,
              'display_author_settings' => array(
                'author_format_type' => 'hw_shortname',
                'author_format_custom' => 'Yc',
                'separator' => ', ',
                'and' => 0,
              ),
              'display_author_types' => array(
                'author' => 0,
                'editor' => 0,
                'group-author' => 0,
                'guest-editor' => 0,
                'presenter' => 0,
                'translator' => 0,
                'reviewer' => 0,
              ),
              'display_author_types_settings' => array(
                'author' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'editor' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'group-author' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'guest-editor' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'presenter' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'translator' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'reviewer' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
              ),
              'display_author_tooltip' => 0,
              'author_tooltip_conf' => array(
                'author_tooltip_instance' => 'highwire_author_tooltip',
                'display_google_scholar_tooltip' => 1,
                'display_pubmed_tooltip' => 1,
                'display_advanced_search_tooltip' => 1,
                'display_author_landing_page_tooltip' => 1,
                'display_orcid_tooltip' => 1,
                'display_ads_search_tooltip' => 0,
                'display_agricola_tooltip' => 0,
                'author_site_search_path' => 'search/',
              ),
              'display_translations' => 0,
              'display_translations_text' => 'Traslations Available',
              'display_translations_text_icon' => 'icon-globe',
            ),
          ),
        ),
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_apa',
          ),
          'corpus_config_wrapper' => array(
            'corpus_config_citation_context' => 'toc',
          ),
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'toggle_rows' => array(
            'highlight' => 'highlight',
            'overline' => 'overline',
            'access' => 'access',
            'title' => 'title',
            'authors' => 'authors',
            'metadata' => 'metadata',
            'snippet' => 'snippet',
            'extras' => 'extras',
          ),
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'send_pdf_through_ac' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'audio_settings' => array(
            'display_audio_player' => 0,
            'no_html5_audio_text' => '',
            'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
            'enable_download_link' => 0,
            'download_link_icon' => '',
            'download_link_text' => '',
          ),
          'bundle_overrides_checkboxes' => array(
            'highwire_article' => array(
              'selector' => 0,
            ),
            'highwire_comment' => array(
              'selector' => 0,
            ),
            'highwire_news_story' => array(
              'selector' => 0,
            ),
            'highwire_book_edition' => array(
              'selector' => 0,
            ),
            'highwire_book_section' => array(
              'selector' => 0,
            ),
            'highwire_journal' => array(
              'selector' => 0,
            ),
            'highwire_issue' => array(
              'selector' => 0,
            ),
            'highwire_fragment' => array(
              'selector' => 0,
            ),
            'highwire_book_fragment' => array(
              'selector' => 0,
            ),
          ),
          'bundle_overrides' => array(
            'highwire_article' => array(
              'selector' => 0,
              'citation_style' => 'mla',
              'cache_enabled' => 1,
              'cache_time' => '600',
              'toggle_rows' => array(
                'highlight' => 'highlight',
                'overline' => 'overline',
                'access' => 'access',
                'title' => 'title',
                'authors' => 'authors',
                'metadata' => 'metadata',
                'snippet' => 'snippet',
                'extras' => 'extras',
              ),
              'title_type' => 'full',
              'short_title_options' => array(
                'char_count' => '50',
                'add_ellipsis' => 0,
              ),
              'title_as_link' => 0,
              'display_subtitle' => 0,
              'choose_pubdate' => 'ppubdate',
              'choose_early_release_pubdate' => '',
              'pubdate_format_type' => '',
              'pubdate_format_custom' => '',
              'display_markup_snippet' => '',
              'highlight_image_toggle' => 0,
              'display_original_link' => 0,
              'display_access_indicator' => 0,
              'access_indicator_settings' => array(
                'open_access' => array(
                  'icon' => 'icon-unlock',
                  'title' => 'Open Access',
                ),
                'user_access' => array(
                  'icon' => 'icon-ok-sign',
                  'title' => 'You have access',
                ),
                'no_access' => array(
                  'icon' => 'icon-lock',
                  'title' => 'Restricted access',
                ),
              ),
              'display_variants' => 0,
              'display_supplements' => 0,
              'display_variants_list_inline' => 1,
              'pdf_download' => array(
                'display_pdf_download' => 0,
                'send_pdf_through_ac' => 0,
                'pdf_download_icon' => 'icon-cloud-download',
                'pdf_download_text' => 'PDF',
              ),
              'cpath_prefix' => '',
              'show_mark_citation' => 0,
              'display_infotrieve_link' => 0,
              'infotrieve_link_settings' => array(
                'icon' => 'icon-usd',
                'link_caption' => 'Order full text via Infotrieve',
              ),
              'audio_settings' => array(
                'display_audio_player' => 0,
                'no_html5_audio_text' => '',
                'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
                'enable_download_link' => 0,
                'download_link_icon' => '',
                'download_link_text' => '',
              ),
              'display_highlight_image' => '0',
              'highlight_image_style' => '',
              'featured_image_variant' => 'large',
              'featured_image_click_image' => 'colorbox',
              'display_cme_link' => 0,
              'display_cme_link_label' => 'CME',
              'display_cme_link_icon' => 'icon-link',
              'display_cme_link_attributes' => array(
                'target' => '',
              ),
              'display_abstract_tooltip' => 0,
              'abstract_tooltip_instance' => 'highwire_abstract_tooltip',
              'display_contributors' => 0,
              'include_on_behalf' => 0,
              'display_orcid_icon' => 0,
              'display_author_settings' => array(
                'author_format_type' => 'hw_shortname',
                'author_format_custom' => 'Yc',
                'separator' => ', ',
                'and' => 0,
              ),
              'display_author_types' => array(
                'author' => 0,
                'editor' => 0,
                'group-author' => 0,
                'guest-editor' => 0,
                'presenter' => 0,
                'translator' => 0,
                'reviewer' => 0,
              ),
              'display_author_types_settings' => array(
                'author' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'editor' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'group-author' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'guest-editor' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'presenter' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'translator' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
                'reviewer' => array(
                  'label_display' => 0,
                  'label' => '',
                  'author_format_type' => 'hw_shortname',
                  'author_format_custom' => 'Yc',
                  'separator' => ', ',
                  'and' => 0,
                  'show-orcid-icon' => 0,
                ),
              ),
              'display_author_tooltip' => 0,
              'author_tooltip_conf' => array(
                'author_tooltip_instance' => 'highwire_author_tooltip',
                'display_google_scholar_tooltip' => 1,
                'display_pubmed_tooltip' => 1,
                'display_advanced_search_tooltip' => 1,
                'display_author_landing_page_tooltip' => 1,
                'display_orcid_tooltip' => 1,
                'display_ads_search_tooltip' => 0,
                'display_agricola_tooltip' => 0,
                'author_site_search_path' => 'search/',
              ),
              'display_translations' => 0,
              'display_translations_text' => 'Traslations Available',
              'display_translations_text_icon' => 'icon-globe',
            ),
          ),
        ),
      ),
      'toc-tizra' => array(
        'tizra_site_code' => '',
        'tizra_api_token' => '',
        'row_highlight_style' => 'none',
        'tizra_toc_citation' => array(
          'title_html_tag' => 'h3',
          'title_link_target' => '_self',
          'title_classes' => '',
          'title_separator' => ': ',
          'toggle_section_nums' => array(
            'part' => 0,
            'chapter' => 0,
            'subpart' => 0,
            'lesson' => 0,
            'section' => 0,
            'unit' => 0,
          ),
          'part_num' => array(
            'format' => 'roman',
            'prefix' => 'Part ',
            'suffix' => '. ',
          ),
          'chapter_num' => array(
            'format' => 'roman',
            'prefix' => 'Chapter ',
            'suffix' => '. ',
          ),
          'subpart_num' => array(
            'format' => 'roman',
            'prefix' => 'Subpart ',
            'suffix' => '. ',
          ),
          'lesson_num' => array(
            'format' => 'roman',
            'prefix' => 'Lesson ',
            'suffix' => '. ',
          ),
          'section_num' => array(
            'format' => 'roman',
            'prefix' => 'Section ',
            'suffix' => '. ',
          ),
          'unit_num' => array(
            'format' => 'roman',
            'prefix' => 'Unit ',
            'suffix' => '. ',
          ),
          'toggle_access_indicator' => 1,
          'access_indicator' => array(
            'free' => array(
              'icon' => 'icon-unlock-alt',
              'title' => 'This section is free',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access to this section',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_order' => '',
          'hide_book_contribs' => 1,
          'metadata_classes' => '',
          'toggle_georef_link' => 0,
          'georef_link' => array(
            'base_url' => '',
            'text' => 'View GeoRef Record',
            'icon' => '',
            'icon_pos' => 'before',
            'classes' => '',
            'target_new' => 1,
          ),
          'toggle_abstract' => 1,
          'abstract' => array(
            'abstract_type' => 'abstract',
            'handle_text' => 'Abstract',
            'handle_classes' => '',
            'container_classes' => '',
          ),
          'citation_col_classes' => '',
        ),
        'toggle_page' => 1,
        'page_num' => array(
          'page_content_classes' => '',
          'page_col_classes' => '',
        ),
        'toggle_dl_pdf' => 0,
        'dl_pdf' => array(
          'pdf_link_text' => 'PDF',
          'pdf_link_icon' => 'icon-cloud-download',
          'pdf_icon_position' => 'before',
          'pdf_empty_text' => '-',
          'pdf_link_classes' => '',
          'pdf_col_classes' => '',
        ),
      ),
      'brief-allowalways' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
      'brief' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
      'georef' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
      'georef-long' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'process_settings' => array(
      'highwire_figures' => array(
        'image_size' => 'medium',
        'image_click' => 'colorbox',
        'enable_click_behaviour_on_table' => 0,
        'hide_caption' => 0,
        'exclude_protected' => 0,
        'figures_download_links' => array(
          'download-fig' => 'download-fig',
          'new-tab' => 'new-tab',
          'download-ppt' => 'download-ppt',
        ),
        'anchor_image_size' => 'medium',
        'enable_brightcove_figures' => 0,
        'brightcove_figures' => array(
          'brightcove_figures_width' => '',
          'brightcove_figures_height' => '',
          'brightcove_figures_account' => '',
          'brightcove_figures_playerid' => '',
          'brightcove_figures_policy_key' => '',
        ),
      ),
      'highwire_cc_logo' => array(
        'path' => '',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_quick_nav' => array(
        'nav_down_icon' => 'icon-caret-down',
        'nav_up_icon' => 'icon-caret-up',
        'nav_class' => 'mobile-only float-me-right',
      ),
      'highwire_doi' => array(
        'patterns' => '',
      ),
      'highwire_socialcite_doi' => array(
        'socialcite_partner_id' => '',
      ),
      'highwire_disable_references' => array(
        'links' => array(
          'cit-ref-sprinkles-crossref' => 0,
          'cit-ref-sprinkles-medline' => 0,
          'cit-ref-sprinkles-open-url' => 0,
          'cit-ref-sprinkles-webofscience' => 0,
          'cit-ref-sprinkles-georef' => 0,
        ),
        'available_links_fieldset' => array(
          'available_links' => 'cit-ref-sprinkles-crossref|Cross reference
cit-ref-sprinkles-medline|Medline
cit-ref-sprinkles-open-url|Open URL
cit-ref-sprinkles-webofscience|Web of Science
cit-ref-sprinkles-georef|GeoRef',
        ),
        'infotrieve_link_configuration' => array(
          'link_label' => 'Order article via Infotrieve',
          'link_icon' => 'icon-usd',
        ),
      ),
      'highwire_brightcove_video' => array(
        'width' => '500',
        'height' => '470',
        'account' => '',
        'playerid' => '',
        'policy_key' => '',
      ),
      'highwire_tables_images' => array(
        'image_click' => 'expansion',
        'table_placeholder_icons' => 'icon-table icon-2x',
      ),
      'highwire_infotrieve_link' => array(
        'link_label' => 'Order article via Infotrieve',
        'link_icon' => 'icon-usd',
      ),
      'highwire_keywords' => array(
        'enabled_search_fallback' => 1,
        'search_base_path' => '/search',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'tooltip_instance' => 'highwire_author_tooltip',
        'search-url' => '/search',
      ),
      'highwire_collapsible_supplemental' => array(
        'title_expand' => 'Expand view',
        'title_expand_icon' => 'icon-plus',
        'title_collapse' => 'Collapse view',
        'title_collapse_icon' => 'icon-minus',
        'title_subtitle' => 1,
        'expand_all' => 1,
        'title_all' => 'Expand all',
      ),
      'highwire_insert_mini_panel' => array(
        'mini_panel' => 'jnl_isa_tab_refs',
        'xpath' => '',
        'placement' => 'prependSibling',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
    ),
    'referer_first_click_referers' => '',
    'referer_first_click' => 0,
    'bypass_stamper' => 'global',
    'variant_language' => '0',
    'google_abstract_link' => 1,
    'google_abstract_link_title' => 'View Abstract',
    'google_fulltext_link_title' => 'View Full Text',
    'markup_server' => 'v1',
    'enable_sso_redirect' => 0,
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
  $pane->uuid = '2435b200-0062-43f0-8e1a-a4fae06603e9';
  $display->content['new-2435b200-0062-43f0-8e1a-a4fae06603e9'] = $pane;
  $display->panels['middle'][0] = 'new-2435b200-0062-43f0-8e1a-a4fae06603e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_refs'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_top_topics';
  $mini->category = 'Home tabs';
  $mini->admin_title = 'Top Topics';
  $mini->admin_description = 'Minipanel to hold the "Top Topics"';
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
  $display->uuid = '83e8c76d-d938-4363-a764-589b9710dcc9';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_top_topics';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-68017d2c-200f-4dbf-a5f9-c7a921e1ae6d';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'jnl_isa_top_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
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
  $pane->uuid = '68017d2c-200f-4dbf-a5f9-c7a921e1ae6d';
  $display->content['new-68017d2c-200f-4dbf-a5f9-c7a921e1ae6d'] = $pane;
  $display->panels['middle'][0] = 'new-68017d2c-200f-4dbf-a5f9-c7a921e1ae6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_top_topics'] = $mini;

  return $export;
}
