<?php
/**
 * @file
 * jnl_isa_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'Front or Homepage for this site';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_front_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Option 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'front-page-container',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'highwire_jnl_jcode' => 'isa',
        'id' => 1,
        'use_default_jcode' => 1,
      ),
      1 => array(
        'identifier' => 'Default Journal',
        'keyword' => 'node',
        'name' => 'default_journal',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'highwire_variable_match',
          'settings' => array(
            'variable_name' => 'jcore_front_page_layout',
            'variable_value' => 'JCORE_FRONT_LAYOUT_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'jcore_home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'carousel' => NULL,
      'announcement' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ecd3edbc-74f1-4c36-89e2-73e2199fbeba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_front_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-94bed41f-3f73-43c3-a040-59c1b2746914';
  $pane->panel = 'announcement';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_announcement_snippet',
    'hide_title' => 0,
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
  $pane->uuid = '94bed41f-3f73-43c3-a040-59c1b2746914';
  $display->content['new-94bed41f-3f73-43c3-a040-59c1b2746914'] = $pane;
  $display->panels['announcement'][0] = 'new-94bed41f-3f73-43c3-a040-59c1b2746914';
  $pane = new stdClass();
  $pane->pid = 'new-e7a70ae4-5209-4a24-9fc0-8d1c3b92277f';
  $pane->panel = 'bottom';
  $pane->type = 'snippet';
  $pane->subtype = 'highwire_jnl_bottom_announcement';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e7a70ae4-5209-4a24-9fc0-8d1c3b92277f';
  $display->content['new-e7a70ae4-5209-4a24-9fc0-8d1c3b92277f'] = $pane;
  $display->panels['bottom'][0] = 'new-e7a70ae4-5209-4a24-9fc0-8d1c3b92277f';
  $pane = new stdClass();
  $pane->pid = 'new-6a39d979-a0be-426a-b330-fac223d3a9f9';
  $pane->panel = 'bottom';
  $pane->type = 'highwire_back_to_top';
  $pane->subtype = 'highwire_back_to_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_current_issue_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'form_build_id' => 'form-Qshod7VeKQI5N0ZiCPrTX4i0pQnnx9iW-BjVKhdC17M',
    'form_token' => 'U3dLRfJC0LbjvFDQtHXxTrudcWxhHy5JkU7iLQemNW0',
    'form_id' => 'highwire_highwire_back_to_top_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6a39d979-a0be-426a-b330-fac223d3a9f9';
  $display->content['new-6a39d979-a0be-426a-b330-fac223d3a9f9'] = $pane;
  $display->panels['bottom'][1] = 'new-6a39d979-a0be-426a-b330-fac223d3a9f9';
  $pane = new stdClass();
  $pane->pid = 'new-788548c7-bd6c-43bc-9ac4-39a7b648b8d5';
  $pane->panel = 'carousel';
  $pane->type = 'views';
  $pane->subtype = 'hw_article_carousel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '788548c7-bd6c-43bc-9ac4-39a7b648b8d5';
  $display->content['new-788548c7-bd6c-43bc-9ac4-39a7b648b8d5'] = $pane;
  $display->panels['carousel'][0] = 'new-788548c7-bd6c-43bc-9ac4-39a7b648b8d5';
  $pane = new stdClass();
  $pane->pid = 'new-55eae30b-87ff-4763-8de2-0a1b56d6e748';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_home_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_default_journal_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '600',
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55eae30b-87ff-4763-8de2-0a1b56d6e748';
  $display->content['new-55eae30b-87ff-4763-8de2-0a1b56d6e748'] = $pane;
  $display->panels['content'][0] = 'new-55eae30b-87ff-4763-8de2-0a1b56d6e748';
  $pane = new stdClass();
  $pane->pid = 'new-20b6fa46-073b-476f-bd56-5fd64fa98fd7';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_mc_read';
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
  $pane->uuid = '20b6fa46-073b-476f-bd56-5fd64fa98fd7';
  $display->content['new-20b6fa46-073b-476f-bd56-5fd64fa98fd7'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-20b6fa46-073b-476f-bd56-5fd64fa98fd7';
  $pane = new stdClass();
  $pane->pid = 'new-64d8a589-5a4f-41a9-896c-0c1e1e20fa1c';
  $pane->panel = 'sidebar_right';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_home_page_ad',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '64d8a589-5a4f-41a9-896c-0c1e1e20fa1c';
  $display->content['new-64d8a589-5a4f-41a9-896c-0c1e1e20fa1c'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-64d8a589-5a4f-41a9-896c-0c1e1e20fa1c';
  $pane = new stdClass();
  $pane->pid = 'new-13074803-ebe3-4ed1-b001-9d03c19f4535';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_home_dp';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
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
  $pane->uuid = '13074803-ebe3-4ed1-b001-9d03c19f4535';
  $display->content['new-13074803-ebe3-4ed1-b001-9d03c19f4535'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-13074803-ebe3-4ed1-b001-9d03c19f4535';
  $pane = new stdClass();
  $pane->pid = 'new-c79ad7a9-a7b1-42cb-8d49-110dcc811339';
  $pane->panel = 'top_left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_hme_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c79ad7a9-a7b1-42cb-8d49-110dcc811339';
  $display->content['new-c79ad7a9-a7b1-42cb-8d49-110dcc811339'] = $pane;
  $display->panels['top_left'][0] = 'new-c79ad7a9-a7b1-42cb-8d49-110dcc811339';
  $pane = new stdClass();
  $pane->pid = 'new-f10907bc-194c-46c8-bd8f-3f79aba13e5e';
  $pane->panel = 'top_right';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_about_journal_snippet',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f10907bc-194c-46c8-bd8f-3f79aba13e5e';
  $display->content['new-f10907bc-194c-46c8-bd8f-3f79aba13e5e'] = $pane;
  $display->panels['top_right'][0] = 'new-f10907bc-194c-46c8-bd8f-3f79aba13e5e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_front_page__option-2';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_front_page';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Option 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'front-page-container',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'highwire_jnl_jcode' => 'isa',
        'id' => 1,
        'use_default_jcode' => 1,
      ),
      1 => array(
        'identifier' => 'Default Journal',
        'keyword' => 'node',
        'name' => 'default_journal',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'option-2',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'highwire_variable_match',
          'settings' => array(
            'variable_name' => 'jcore_front_page_layout',
            'variable_value' => 'JCORE_FRONT_LAYOUT_2',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'jcore_home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'carousel' => NULL,
      'announcement' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd693a6c1-9360-4b2a-9b8b-e42737847349';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_front_page__option-2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-400e6c6d-98c5-4cc6-b97a-810ffb524336';
  $pane->panel = 'announcement';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_announcement_snippet',
    'hide_title' => 0,
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
  $pane->uuid = '400e6c6d-98c5-4cc6-b97a-810ffb524336';
  $display->content['new-400e6c6d-98c5-4cc6-b97a-810ffb524336'] = $pane;
  $display->panels['announcement'][0] = 'new-400e6c6d-98c5-4cc6-b97a-810ffb524336';
  $pane = new stdClass();
  $pane->pid = 'new-00101289-bbbb-4f49-a361-1cfe451d7649';
  $pane->panel = 'bottom';
  $pane->type = 'snippet';
  $pane->subtype = 'highwire_jnl_bottom_announcement';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00101289-bbbb-4f49-a361-1cfe451d7649';
  $display->content['new-00101289-bbbb-4f49-a361-1cfe451d7649'] = $pane;
  $display->panels['bottom'][0] = 'new-00101289-bbbb-4f49-a361-1cfe451d7649';
  $pane = new stdClass();
  $pane->pid = 'new-2249c249-f937-4367-a80e-d298930437fe';
  $pane->panel = 'bottom';
  $pane->type = 'highwire_back_to_top';
  $pane->subtype = 'highwire_back_to_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_current_issue_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'form_build_id' => 'form-Qshod7VeKQI5N0ZiCPrTX4i0pQnnx9iW-BjVKhdC17M',
    'form_token' => 'U3dLRfJC0LbjvFDQtHXxTrudcWxhHy5JkU7iLQemNW0',
    'form_id' => 'highwire_highwire_back_to_top_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2249c249-f937-4367-a80e-d298930437fe';
  $display->content['new-2249c249-f937-4367-a80e-d298930437fe'] = $pane;
  $display->panels['bottom'][1] = 'new-2249c249-f937-4367-a80e-d298930437fe';
  $pane = new stdClass();
  $pane->pid = 'new-69e98f32-9967-4f34-b0a9-fff290037948';
  $pane->panel = 'carousel';
  $pane->type = 'views';
  $pane->subtype = 'hw_article_carousel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '69e98f32-9967-4f34-b0a9-fff290037948';
  $display->content['new-69e98f32-9967-4f34-b0a9-fff290037948'] = $pane;
  $display->panels['carousel'][0] = 'new-69e98f32-9967-4f34-b0a9-fff290037948';
  $pane = new stdClass();
  $pane->pid = 'new-ad948b0b-9192-4e5c-af48-8b8bdfbdd758';
  $pane->panel = 'content';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_about_journal_snippet',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ad948b0b-9192-4e5c-af48-8b8bdfbdd758';
  $display->content['new-ad948b0b-9192-4e5c-af48-8b8bdfbdd758'] = $pane;
  $display->panels['content'][0] = 'new-ad948b0b-9192-4e5c-af48-8b8bdfbdd758';
  $pane = new stdClass();
  $pane->pid = 'new-0b444b7d-8ff3-486f-b671-3306a7523d2d';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_mc_read';
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
  $pane->uuid = '0b444b7d-8ff3-486f-b671-3306a7523d2d';
  $display->content['new-0b444b7d-8ff3-486f-b671-3306a7523d2d'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-0b444b7d-8ff3-486f-b671-3306a7523d2d';
  $pane = new stdClass();
  $pane->pid = 'new-dab70961-e921-404d-a0bd-428d40f5dc8c';
  $pane->panel = 'top_left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_home_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_default_journal_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '600',
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dab70961-e921-404d-a0bd-428d40f5dc8c';
  $display->content['new-dab70961-e921-404d-a0bd-428d40f5dc8c'] = $pane;
  $display->panels['top_left'][0] = 'new-dab70961-e921-404d-a0bd-428d40f5dc8c';
  $pane = new stdClass();
  $pane->pid = 'new-2cbfb2bc-2b24-4da5-b9b9-235bcaf6927e';
  $pane->panel = 'top_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_iss_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_current_issue_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Current issue',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2cbfb2bc-2b24-4da5-b9b9-235bcaf6927e';
  $display->content['new-2cbfb2bc-2b24-4da5-b9b9-235bcaf6927e'] = $pane;
  $display->panels['top_right'][0] = 'new-2cbfb2bc-2b24-4da5-b9b9-235bcaf6927e';
  $pane = new stdClass();
  $pane->pid = 'new-49e6fe43-2a05-48ce-94ba-2cc4a1d277b6';
  $pane->panel = 'top_right';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_home_page_ad',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '49e6fe43-2a05-48ce-94ba-2cc4a1d277b6';
  $display->content['new-49e6fe43-2a05-48ce-94ba-2cc4a1d277b6'] = $pane;
  $display->panels['top_right'][1] = 'new-49e6fe43-2a05-48ce-94ba-2cc4a1d277b6';
  $pane = new stdClass();
  $pane->pid = 'new-8a24a883-1483-403b-a91d-34ef43f2f1ba';
  $pane->panel = 'top_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_home_dp';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
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
  $pane->uuid = '8a24a883-1483-403b-a91d-34ef43f2f1ba';
  $display->content['new-8a24a883-1483-403b-a91d-34ef43f2f1ba'] = $pane;
  $display->panels['top_right'][2] = 'new-8a24a883-1483-403b-a91d-34ef43f2f1ba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_front_page__option-3';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_front_page';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Option 3',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'front-page-container',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'highwire_jnl_jcode' => 'isa',
        'id' => 1,
        'use_default_jcode' => 1,
      ),
      1 => array(
        'identifier' => 'Default Journal',
        'keyword' => 'node',
        'name' => 'default_journal',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'option-3',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'highwire_variable_match',
          'settings' => array(
            'variable_name' => 'jcore_front_page_layout',
            'variable_value' => 'JCORE_FRONT_LAYOUT_3',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'jcore_home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'carousel' => NULL,
      'announcement' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '17496980-1b3b-421a-be6a-f449c4588002';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_front_page__option-3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-657a98f1-a402-476f-b409-cb19b8c28a8c';
  $pane->panel = 'announcement';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_announcement_snippet',
    'hide_title' => 0,
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
  $pane->uuid = '657a98f1-a402-476f-b409-cb19b8c28a8c';
  $display->content['new-657a98f1-a402-476f-b409-cb19b8c28a8c'] = $pane;
  $display->panels['announcement'][0] = 'new-657a98f1-a402-476f-b409-cb19b8c28a8c';
  $pane = new stdClass();
  $pane->pid = 'new-c00bcc15-cb79-470b-af51-3d7a05a7f629';
  $pane->panel = 'bottom';
  $pane->type = 'snippet';
  $pane->subtype = 'highwire_jnl_bottom_announcement';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c00bcc15-cb79-470b-af51-3d7a05a7f629';
  $display->content['new-c00bcc15-cb79-470b-af51-3d7a05a7f629'] = $pane;
  $display->panels['bottom'][0] = 'new-c00bcc15-cb79-470b-af51-3d7a05a7f629';
  $pane = new stdClass();
  $pane->pid = 'new-61d71e70-cc13-4101-9704-ba4837d86c2c';
  $pane->panel = 'bottom';
  $pane->type = 'highwire_back_to_top';
  $pane->subtype = 'highwire_back_to_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_current_issue_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'form_build_id' => 'form-Qshod7VeKQI5N0ZiCPrTX4i0pQnnx9iW-BjVKhdC17M',
    'form_token' => 'U3dLRfJC0LbjvFDQtHXxTrudcWxhHy5JkU7iLQemNW0',
    'form_id' => 'highwire_highwire_back_to_top_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '61d71e70-cc13-4101-9704-ba4837d86c2c';
  $display->content['new-61d71e70-cc13-4101-9704-ba4837d86c2c'] = $pane;
  $display->panels['bottom'][1] = 'new-61d71e70-cc13-4101-9704-ba4837d86c2c';
  $pane = new stdClass();
  $pane->pid = 'new-e4932fc4-c149-43cd-ba8a-f2f1127a6740';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'hw_feature_image_carousel_column-panel_pane_2';
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
  $pane->uuid = 'e4932fc4-c149-43cd-ba8a-f2f1127a6740';
  $display->content['new-e4932fc4-c149-43cd-ba8a-f2f1127a6740'] = $pane;
  $display->panels['content'][0] = 'new-e4932fc4-c149-43cd-ba8a-f2f1127a6740';
  $pane = new stdClass();
  $pane->pid = 'new-b9159c08-d4be-4094-9a28-8e87c5cd3d00';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_home_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_default_journal_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '600',
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b9159c08-d4be-4094-9a28-8e87c5cd3d00';
  $display->content['new-b9159c08-d4be-4094-9a28-8e87c5cd3d00'] = $pane;
  $display->panels['content'][1] = 'new-b9159c08-d4be-4094-9a28-8e87c5cd3d00';
  $pane = new stdClass();
  $pane->pid = 'new-bdaab087-abed-4ee5-a056-e69c224b5129';
  $pane->panel = 'content';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_about_journal_snippet',
    'hide_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bdaab087-abed-4ee5-a056-e69c224b5129';
  $display->content['new-bdaab087-abed-4ee5-a056-e69c224b5129'] = $pane;
  $display->panels['content'][2] = 'new-bdaab087-abed-4ee5-a056-e69c224b5129';
  $pane = new stdClass();
  $pane->pid = 'new-3e33a156-678d-4817-9068-f268d4b3a82e';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_iss_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_current_issue_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Current issue',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3e33a156-678d-4817-9068-f268d4b3a82e';
  $display->content['new-3e33a156-678d-4817-9068-f268d4b3a82e'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-3e33a156-678d-4817-9068-f268d4b3a82e';
  $pane = new stdClass();
  $pane->pid = 'new-6365a0b9-7b2d-405d-a1fa-9a38f7f98e00';
  $pane->panel = 'sidebar_right';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_home_page_ad',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6365a0b9-7b2d-405d-a1fa-9a38f7f98e00';
  $display->content['new-6365a0b9-7b2d-405d-a1fa-9a38f7f98e00'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-6365a0b9-7b2d-405d-a1fa-9a38f7f98e00';
  $pane = new stdClass();
  $pane->pid = 'new-f06e7efe-ecb8-400b-8a8c-678a158d1ca1';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_mc_read';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f06e7efe-ecb8-400b-8a8c-678a158d1ca1';
  $display->content['new-f06e7efe-ecb8-400b-8a8c-678a158d1ca1'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-f06e7efe-ecb8-400b-8a8c-678a158d1ca1';
  $pane = new stdClass();
  $pane->pid = 'new-75eb9596-f6fd-4b1f-8a2f-2857fdca9601';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_home_dp';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
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
  $pane->uuid = '75eb9596-f6fd-4b1f-8a2f-2857fdca9601';
  $display->content['new-75eb9596-f6fd-4b1f-8a2f-2857fdca9601'] = $pane;
  $display->panels['sidebar_right'][3] = 'new-75eb9596-f6fd-4b1f-8a2f-2857fdca9601';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_most_cited';
  $page->task = 'page';
  $page->admin_title = 'isa Most Cited';
  $page->admin_description = 'Page which will render the most read articles';
  $page->path = 'articles/most-cited';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_most_cited_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_most_cited';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Most Read',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Most cited article(s)';
  $display->uuid = 'a870979b-bae6-49ed-8716-2c8284dec210';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_most_cited_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e4fd3ba6-63f4-4236-89a8-5b123242896e';
  $pane->panel = 'content';
  $pane->type = 'highwire_reports_feed';
  $pane->subtype = 'highwire_reports_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'reports_feed' => 'http://staticfs.highwire.org/[site:default_jcode]/reports/mfc_atom.xml',
    'show_pager' => 1,
    'number_of_articles_to_display' => '10',
    'show_more_link' => 0,
    'more_url_text' => 'More...',
    'more_url' => '',
    'citation_style' => 'jcore_standard',
    'title_type' => 'full',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_markup_snippet' => '',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'display_author_tooltip' => 0,
    'display_subtitle' => 0,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_full',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_browse',
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
        'pubdate_format_type' => '',
        'pubdate_format_custom' => '',
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
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_variant' => 'large',
        'featured_image_click_image' => 'nothing',
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
        'display_abstract_tooltip' => 0,
        'display_contributors' => 0,
        'include_on_behalf' => 0,
        'display_orcid_icon' => 0,
        'display_author_settings' => array(
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
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
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'group-author' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'guest-editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'presenter' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'translator' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'reviewer' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
        ),
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
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
        'display_contributors' => 0,
        'include_on_behalf' => 1,
        'display_orcid_icon' => 0,
        'display_author_settings' => array(
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
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
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'group-author' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'guest-editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'presenter' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'translator' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'reviewer' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
        ),
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
        'add_title_anchor' => 0,
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_label' => '',
        'date_format_type' => 'custom',
        'date_format' => '(j F Y)',
        'display_comment_body' => 1,
        'style_comment_body' => array(
          'enable_show_more_link' => 1,
          'show_more_link_title' => 'Show More',
          'show_less_link_title' => 'Show Less',
          'full_text_body_length' => '1500',
        ),
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
        'pubdate_format_type' => '',
        'pubdate_format_custom' => '',
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
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_contributors' => 0,
          'include_on_behalf' => 0,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
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
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
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
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'highlight_image_toggle' => 0,
    'display_variants_list_inline' => 1,
    'cpath_prefix' => '',
  );
  $pane->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '7200',
      'granularity' => array(
        'url' => 'url',
        'args' => 0,
        'context' => 0,
        'user' => 0,
        'user_role' => 0,
        'path' => 0,
      ),
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4fd3ba6-63f4-4236-89a8-5b123242896e';
  $display->content['new-e4fd3ba6-63f4-4236-89a8-5b123242896e'] = $pane;
  $display->panels['content'][0] = 'new-e4fd3ba6-63f4-4236-89a8-5b123242896e';
  $pane = new stdClass();
  $pane->pid = 'new-cafac0c5-faeb-4e5f-8557-d51b61920728';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => 'page-title',
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
  $pane->uuid = 'cafac0c5-faeb-4e5f-8557-d51b61920728';
  $display->content['new-cafac0c5-faeb-4e5f-8557-d51b61920728'] = $pane;
  $display->panels['top'][0] = 'new-cafac0c5-faeb-4e5f-8557-d51b61920728';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_most_cited'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_most_read';
  $page->task = 'page';
  $page->admin_title = 'isa Most Read';
  $page->admin_description = 'Page which will render the most read articles';
  $page->path = 'articles/most-read';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_most_read_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_most_read';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Most Read',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Most read article(s)';
  $display->uuid = '8d32e3ac-1c36-46be-986e-0bcc694938ad';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_most_read_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4b8f2d9e-ab3b-4f85-853d-9e609525fc37';
  $pane->panel = 'content';
  $pane->type = 'highwire_reports_feed';
  $pane->subtype = 'highwire_reports_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'reports_feed' => 'http://staticfs.highwire.org/[site:default_jcode]/reports/mfr_atom.xml',
    'show_pager' => 1,
    'number_of_articles_to_display' => '10',
    'show_more_link' => 0,
    'more_url_text' => 'More...',
    'more_url' => '',
    'citation_style' => 'jcore_standard',
    'title_type' => 'full',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_markup_snippet' => '',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'display_author_tooltip' => 0,
    'display_subtitle' => 0,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_full',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_browse',
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
        'pubdate_format_type' => '',
        'pubdate_format_custom' => '',
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
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_variant' => 'large',
        'featured_image_click_image' => 'nothing',
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
        'display_abstract_tooltip' => 0,
        'display_contributors' => 0,
        'include_on_behalf' => 0,
        'display_orcid_icon' => 0,
        'display_author_settings' => array(
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
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
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'group-author' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'guest-editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'presenter' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'translator' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'reviewer' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
        ),
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
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
        'display_contributors' => 0,
        'include_on_behalf' => 1,
        'display_orcid_icon' => 0,
        'display_author_settings' => array(
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
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
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'group-author' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'guest-editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'presenter' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'translator' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'reviewer' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
        ),
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
        'add_title_anchor' => 0,
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_label' => '',
        'date_format_type' => 'custom',
        'date_format' => '(j F Y)',
        'display_comment_body' => 1,
        'style_comment_body' => array(
          'enable_show_more_link' => 1,
          'show_more_link_title' => 'Show More',
          'show_less_link_title' => 'Show Less',
          'full_text_body_length' => '1500',
        ),
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
        'pubdate_format_type' => '',
        'pubdate_format_custom' => '',
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
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_contributors' => 0,
          'include_on_behalf' => 0,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
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
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
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
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
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
  $pane->uuid = '4b8f2d9e-ab3b-4f85-853d-9e609525fc37';
  $display->content['new-4b8f2d9e-ab3b-4f85-853d-9e609525fc37'] = $pane;
  $display->panels['content'][0] = 'new-4b8f2d9e-ab3b-4f85-853d-9e609525fc37';
  $pane = new stdClass();
  $pane->pid = 'new-ae323160-e08f-4275-b1f9-b03839ed41c3';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => 'page-title',
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
  $pane->uuid = 'ae323160-e08f-4275-b1f9-b03839ed41c3';
  $display->content['new-ae323160-e08f-4275-b1f9-b03839ed41c3'] = $pane;
  $display->panels['top'][0] = 'new-ae323160-e08f-4275-b1f9-b03839ed41c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_most_read'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'latest_articles';
  $page->task = 'page';
  $page->admin_title = 'Latest Articles';
  $page->admin_description = '';
  $page->path = 'content/latest';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_latest_articles__panel';
  $handler->task = 'page';
  $handler->subtask = 'latest_articles';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Default Journal',
        'keyword' => 'journal',
        'name' => 'default_journal',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Latest Articles';
  $display->uuid = 'f27398b1-4df4-4a41-ac21-ff9074ed841c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_latest_articles__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c44f4f3c-aada-4d30-b660-cf2cc9e159c4';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'latest_articles-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'use_pager' => 1,
    'pager_id' => '0',
    'fields_override' => array(
      'title' => 1,
    ),
    'arguments' => array(
      'field_highwire_a_journal_nid' => '%journal:nid',
    ),
  );
  $pane->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '86400',
      'granularity' => array(
        'args' => 0,
        'context' => 0,
        'user' => 0,
        'user_role' => 0,
        'url' => 0,
        'path' => 0,
      ),
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c44f4f3c-aada-4d30-b660-cf2cc9e159c4';
  $display->content['new-c44f4f3c-aada-4d30-b660-cf2cc9e159c4'] = $pane;
  $display->panels['content'][0] = 'new-c44f4f3c-aada-4d30-b660-cf2cc9e159c4';
  $pane = new stdClass();
  $pane->pid = 'new-de158d1b-2b8b-41a7-9716-991f034f0358';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => 'page-title',
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
  $pane->uuid = 'de158d1b-2b8b-41a7-9716-991f034f0358';
  $display->content['new-de158d1b-2b8b-41a7-9716-991f034f0358'] = $pane;
  $display->panels['top'][0] = 'new-de158d1b-2b8b-41a7-9716-991f034f0358';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['latest_articles'] = $page;

  return $pages;

}
