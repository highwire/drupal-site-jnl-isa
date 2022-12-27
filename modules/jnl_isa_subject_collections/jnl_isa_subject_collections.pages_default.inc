<?php
/**
 * @file
 * jnl_isa_subject_collections.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_subject_collections_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_subject_collections';
  $page->task = 'page';
  $page->admin_title = 'Highwire Jnl Template Subject Collections';
  $page->admin_description = '';
  $page->path = 'collection';
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
  $handler->name = 'page_jnl_isa_subject_collections_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_subject_collections';
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
        'keyword' => 'default_journal',
        'name' => 'default_journal',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Subject Collection(s)';
  $display->uuid = 'fd5b3e00-eab9-4eda-ba75-13db8c6a7937';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_subject_collections_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45a93c5b-0d03-4794-94e6-45f3920b9f93';
  $pane->panel = 'content';
  $pane->type = 'highwire_subject_coll_inc_shared';
  $pane->subtype = 'highwire_subject_coll_inc_shared';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'hide_categories' => 1,
    'is_collapsed' => 1,
    'hide_article_counts' => 0,
    'collection_code' => '[default]',
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '14400',
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
  $pane->uuid = '45a93c5b-0d03-4794-94e6-45f3920b9f93';
  $display->content['new-45a93c5b-0d03-4794-94e6-45f3920b9f93'] = $pane;
  $display->panels['content'][0] = 'new-45a93c5b-0d03-4794-94e6-45f3920b9f93';
  $pane = new stdClass();
  $pane->pid = 'new-9960c8bb-b496-4cf9-9aef-a8dba293471a';
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
  $pane->uuid = '9960c8bb-b496-4cf9-9aef-a8dba293471a';
  $display->content['new-9960c8bb-b496-4cf9-9aef-a8dba293471a'] = $pane;
  $display->panels['top'][0] = 'new-9960c8bb-b496-4cf9-9aef-a8dba293471a';
  $pane = new stdClass();
  $pane->pid = 'new-9677d4a0-1a89-41de-b8b6-701279908f5f';
  $pane->panel = 'top';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_subject_collections_snippet',
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
  $pane->uuid = '9677d4a0-1a89-41de-b8b6-701279908f5f';
  $display->content['new-9677d4a0-1a89-41de-b8b6-701279908f5f'] = $pane;
  $display->panels['top'][1] = 'new-9677d4a0-1a89-41de-b8b6-701279908f5f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9677d4a0-1a89-41de-b8b6-701279908f5f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_subject_collections'] = $page;

  return $pages;

}
