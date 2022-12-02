<?php
/**
 * @file
 * jnl_isa_subject_collections.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_subject_collections_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Highwire Jnl Template Subject Collections Snippet';
  $snippet->name = 'jnl_isa_subject_collections_snippet';
  $snippet->title = '';
  $export['jnl_isa_subject_collections_snippet'] = $snippet;

  return $export;
}
