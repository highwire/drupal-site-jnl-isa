<?php
/**
 * @file
 * jnl_isa_error_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_error_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_403_error_page';
  $page->task = 'page';
  $page->admin_title = 'isa 403 Error Page';
  $page->admin_description = 'isa 403 Error Page';
  $page->path = 'error/access-denied';
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
  $handler->name = 'page_jnl_isa_403_error_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_403_error_page';
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
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Access Denied Page',
        'keyword' => 'node',
        'name' => 'access_denied_node',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
    ),
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
  $display->title = 'Access Denied';
  $display->uuid = '2fb5d1e4-d800-4922-9c04-951fbd8894e9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_403_error_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9783364-f57e-4550-992c-603880d1d18f';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_access_denied_node_1',
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
  $pane->uuid = 'f9783364-f57e-4550-992c-603880d1d18f';
  $display->content['new-f9783364-f57e-4550-992c-603880d1d18f'] = $pane;
  $display->panels['bottom'][0] = 'new-f9783364-f57e-4550-992c-603880d1d18f';
  $pane = new stdClass();
  $pane->pid = 'new-bf18ebf7-bac8-4362-8b9d-f1af72a7f592';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>You are not authorized to access this page "%token:site:request_path".</p>',
    'format' => 'highwire_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bf18ebf7-bac8-4362-8b9d-f1af72a7f592';
  $display->content['new-bf18ebf7-bac8-4362-8b9d-f1af72a7f592'] = $pane;
  $display->panels['content'][0] = 'new-bf18ebf7-bac8-4362-8b9d-f1af72a7f592';
  $pane = new stdClass();
  $pane->pid = 'new-e238c798-ff33-4da6-bd04-bfe498526d93';
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
  $pane->uuid = 'e238c798-ff33-4da6-bd04-bfe498526d93';
  $display->content['new-e238c798-ff33-4da6-bd04-bfe498526d93'] = $pane;
  $display->panels['top'][0] = 'new-e238c798-ff33-4da6-bd04-bfe498526d93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e238c798-ff33-4da6-bd04-bfe498526d93';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_403_error_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_404_error_page';
  $page->task = 'page';
  $page->admin_title = 'isa 404 Error Page';
  $page->admin_description = 'isa 404 Error Page';
  $page->path = 'error/not-found';
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
  $handler->name = 'page_jnl_isa_404_error_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_404_error_page';
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
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
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
      'top' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Page Not Found';
  $display->uuid = 'bdda2db2-e7cd-4bad-aea7-f6cb0c726c29';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_404_error_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06cc92af-0b64-4373-8eca-eb7446a15721';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>The requested page "%token:site:request_path" could not be found.</p>',
    'format' => 'highwire_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '06cc92af-0b64-4373-8eca-eb7446a15721';
  $display->content['new-06cc92af-0b64-4373-8eca-eb7446a15721'] = $pane;
  $display->panels['content'][0] = 'new-06cc92af-0b64-4373-8eca-eb7446a15721';
  $pane = new stdClass();
  $pane->pid = 'new-3ea8daeb-e57b-4ece-8209-af03a7d2e9b0';
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
  $pane->uuid = '3ea8daeb-e57b-4ece-8209-af03a7d2e9b0';
  $display->content['new-3ea8daeb-e57b-4ece-8209-af03a7d2e9b0'] = $pane;
  $display->panels['top'][0] = 'new-3ea8daeb-e57b-4ece-8209-af03a7d2e9b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3ea8daeb-e57b-4ece-8209-af03a7d2e9b0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_404_error_page'] = $page;

  return $pages;

}
