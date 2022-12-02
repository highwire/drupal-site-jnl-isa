<?php
/**
 * @file
 * jnl_isa_home_page.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_home_page_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'highwire_jnl_bottom_announcement';
  $snippet->name = 'highwire_jnl_bottom_announcement';
  $snippet->title = 'JN Bottom Announcement - Alternate Route';
  $export['highwire_jnl_bottom_announcement'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa About Journal Snippet';
  $snippet->name = 'jnl_isa_about_journal_snippet';
  $snippet->title = '';
  $export['jnl_isa_about_journal_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa Announcement Snippet';
  $snippet->name = 'jnl_isa_announcement_snippet';
  $snippet->title = 'isa Announcement Snippet';
  $export['jnl_isa_announcement_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Home page Ad';
  $snippet->name = 'jnl_isa_home_page_ad';
  $snippet->title = '';
  $export['jnl_isa_home_page_ad'] = $snippet;

  return $export;
}
