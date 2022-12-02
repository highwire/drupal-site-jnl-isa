<?php
/**
 * @file
 * jnl_isa_pap.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_pap_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Highwire Jnl Template Title PAP Description Main Snippet';
  $snippet->name = 'jnl_isa_pap_description_main_snippet';
  $snippet->title = 'Highwire Jnl Template PAP Description Main Snippet';
  $export['jnl_isa_pap_description_main_snippet'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Highwire Jnl Template Title PAP Description Right Snippet';
  $snippet->name = 'jnl_isa_pap_description_right_snippet';
  $snippet->title = 'Highwire Jnl Template PAP Description Right Snippet';
  $export['jnl_isa_pap_description_right_snippet'] = $snippet;

  return $export;
}
