<?php
/**
 * @file
 * jnl_isa_browse_eletters.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_browse_eletters_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa About eLetters Snippet';
  $snippet->name = 'jnl_isa_about_eletters_snippet';
  $snippet->title = '';
  $export['jnl_isa_about_eletters_snippet'] = $snippet;

  return $export;
}
