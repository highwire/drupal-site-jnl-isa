<?php
/**
 * @file
 * jnl_isa_challenge_override.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_challenge_override_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'shibboleth_login';
  $page->task = 'page';
  $page->admin_title = 'Shibboleth Login';
  $page->admin_description = '';
  $page->path = 'login/shibboleth';
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
  $handler->name = 'page_shibboleth_login_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'shibboleth_login';
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
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f531d632-2a20-4764-8f04-0cb6dc367a32';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_shibboleth_login_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5d41d4af-385a-46e4-abf9-6b2b69c3b2a1';
  $pane->panel = 'content';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_shib_login_header',
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
  $pane->uuid = '5d41d4af-385a-46e4-abf9-6b2b69c3b2a1';
  $display->content['new-5d41d4af-385a-46e4-abf9-6b2b69c3b2a1'] = $pane;
  $display->panels['content'][0] = 'new-5d41d4af-385a-46e4-abf9-6b2b69c3b2a1';
  $pane = new stdClass();
  $pane->pid = 'new-ba8b61b5-3564-4ec9-b6f5-7d2687b1a8b6';
  $pane->panel = 'content';
  $pane->type = 'highwire_shib';
  $pane->subtype = 'highwire_shib';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ba8b61b5-3564-4ec9-b6f5-7d2687b1a8b6';
  $display->content['new-ba8b61b5-3564-4ec9-b6f5-7d2687b1a8b6'] = $pane;
  $display->panels['content'][1] = 'new-ba8b61b5-3564-4ec9-b6f5-7d2687b1a8b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5d41d4af-385a-46e4-abf9-6b2b69c3b2a1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['shibboleth_login'] = $page;

  return $pages;

}
