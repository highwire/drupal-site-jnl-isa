<?php
/**
 * @file
 * jnl_isa_manage_citations.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_manage_citations_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa About Manage Selected Citations';
  $snippet->name = 'jnl_isa_about_manage_selected_citation';
  $snippet->title = '';
  $export['jnl_isa_about_manage_selected_citation'] = $snippet;

  return $export;
}
