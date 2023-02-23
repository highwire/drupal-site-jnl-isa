<?php
/**
 * @file
 * jnl_isa_cct.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_cct_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'content_collections_toolkit';
  $page->task = 'page';
  $page->admin_title = 'Custom Collection Toolkit';
  $page->admin_description = 'Page to display CCT2';
  $page->path = 'cc/%term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_collections_toolkit__panel_context_08d9b97d-3072-48b8-8ebe-10d373bf183d';
  $handler->task = 'page';
  $handler->subtask = 'content_collections_toolkit';
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
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
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
  $display->uuid = 'f4e79b2a-c1ed-4b1e-8f76-03c787abdba9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_collections_toolkit__panel_context_08d9b97d-3072-48b8-8ebe-10d373bf183d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4642aa20-e84f-4adb-a8c1-4b03a774e3c0';
  $pane->panel = 'middle';
  $pane->type = 'highwire_cct2_widget';
  $pane->subtype = 'highwire_cct2_widget';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'return' => 'Finish',
    'cancel' => 'Cancel',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'cct2_publisher_id' => 'arbor',
    'form_build_id' => 'form-QippglJsqvRR0ScKoRbaNqRDexcFi18Z6N7AvadtPlc',
    'form_token' => 'ZmTzGrUlBoQDeFw_DMQGbsEoIw58pY6WVgHfd7XeXAI',
    'form_id' => 'highwire_cct2_widget_content_type_edit_form',
    'op' => 'Finish',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4642aa20-e84f-4adb-a8c1-4b03a774e3c0';
  $display->content['new-4642aa20-e84f-4adb-a8c1-4b03a774e3c0'] = $pane;
  $display->panels['middle'][0] = 'new-4642aa20-e84f-4adb-a8c1-4b03a774e3c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['content_collections_toolkit'] = $page;

  return $pages;

}
