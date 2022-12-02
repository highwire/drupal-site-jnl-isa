<?php
/**
 * @file
 * jnl_isa_alerts.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_alerts_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Alerts Add Blog Alerts Snippet';
  $snippet->name = 'jnl_isa_alerts_add_blog_alerts_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_add_blog_alerts_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts Add New Alerts Snippet';
  $snippet->name = 'jnl_isa_alerts_add_new_alerts_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_add_new_alerts_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Alerts Dashboard Advertisement';
  $snippet->name = 'jnl_isa_alerts_dashboard_advertisement';
  $snippet->title = '';
  $export['jnl_isa_alerts_dashboard_advertisement'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts Edit Blog Snippet';
  $snippet->name = 'jnl_isa_alerts_edit_blog_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_edit_blog_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts Edit News Snippet';
  $snippet->name = 'jnl_isa_alerts_edit_news_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_edit_news_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts Edit Toc Snippet';
  $snippet->name = 'jnl_isa_alerts_edit_toc_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_edit_toc_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts My Alert Preferences Snippet';
  $snippet->name = 'jnl_isa_alerts_my_alert_preferences_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_my_alert_preferences_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts My Alerts Snippet';
  $snippet->name = 'jnl_isa_alerts_my_alerts_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_my_alerts_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Alerts Page Title Snippet';
  $snippet->name = 'jnl_isa_alerts_page_title_snippet';
  $snippet->title = '';
  $export['jnl_isa_alerts_page_title_snippet'] = $snippet;

  return $export;
}
