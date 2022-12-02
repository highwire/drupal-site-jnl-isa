<?php
/**
 * @file
 * jnl_isa_archive_pages.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_archive_pages_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue Archive Ad';
  $snippet->name = 'jnl_isa_issue_archive_ad';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_ad'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue archive footer';
  $snippet->name = 'jnl_isa_issue_archive_footer';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_footer'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue archive header';
  $snippet->name = 'jnl_isa_issue_archive_header';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_header'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue Archive Related Archives';
  $snippet->name = 'jnl_isa_issue_archive_related_archives';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_related_archives'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue Archive Volume Ad';
  $snippet->name = 'jnl_isa_issue_archive_volume_ad';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_volume_ad'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue archive Volume footer';
  $snippet->name = 'jnl_isa_issue_archive_volume_footer';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_volume_footer'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue Archive Volume header';
  $snippet->name = 'jnl_isa_issue_archive_volume_header';
  $snippet->title = '';
  $export['jnl_isa_issue_archive_volume_header'] = $snippet;

  return $export;
}
