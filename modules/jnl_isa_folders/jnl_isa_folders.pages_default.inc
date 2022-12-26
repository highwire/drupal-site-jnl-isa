<?php
/**
 * @file
 * jnl_isa_folders.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_folders_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_folders';
  $page->task = 'page';
  $page->admin_title = 'Highwire JNL Template manage folders page';
  $page->admin_description = '';
  $page->path = 'folders/!folder_id';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'folder_id' => array(
      'id' => 1,
      'identifier' => 'Highwire Folder Id',
      'name' => 'highwire_folders_folder_arg',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_folders_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_folders';
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
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Highwire Folder Context',
        'keyword' => 'highwire_folders_folder_context',
        'name' => 'highwire_folders_folder_context',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7dfee012-1979-414a-9e0d-d411c61053bb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_folders_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-87df8ca2-b35c-4555-8e37-0c40645d2065';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'folder_left_mini_template';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_user_1',
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
  $pane->uuid = '87df8ca2-b35c-4555-8e37-0c40645d2065';
  $display->content['new-87df8ca2-b35c-4555-8e37-0c40645d2065'] = $pane;
  $display->panels['middle'][0] = 'new-87df8ca2-b35c-4555-8e37-0c40645d2065';
  $pane = new stdClass();
  $pane->pid = 'new-5151ba17-2353-4dbf-b836-dd2240a9934d';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'folder_right_mini_template';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_user_1',
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
  $pane->uuid = '5151ba17-2353-4dbf-b836-dd2240a9934d';
  $display->content['new-5151ba17-2353-4dbf-b836-dd2240a9934d'] = $pane;
  $display->panels['middle'][1] = 'new-5151ba17-2353-4dbf-b836-dd2240a9934d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_folders'] = $page;

  return $pages;

}
