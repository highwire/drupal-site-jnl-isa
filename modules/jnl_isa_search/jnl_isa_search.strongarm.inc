<?php
/**
 * @file
 * jnl_isa_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jnl_isa_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_search_highwire_advanced_search_disabled';
  $strongarm->value = FALSE;
  $export['highwire_search_highwire_advanced_search_disabled'] = $strongarm;

  return $export;
}
