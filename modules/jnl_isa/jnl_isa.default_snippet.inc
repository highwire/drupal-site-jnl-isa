<?php
/**
 * @file
 * jnl_isa.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Footer Copyright Text';
  $snippet->name = 'footer_copyright_text';
  $snippet->title = '';
  $export['footer_copyright_text'] = $snippet;

  return $export;
}
