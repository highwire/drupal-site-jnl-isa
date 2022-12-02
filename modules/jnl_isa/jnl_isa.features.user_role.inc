<?php
/**
 * @file
 * jnl_isa.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jnl_isa_user_default_roles() {
  $roles = array();

  // Exported role: Content Review.
  $roles['Content Review'] = array(
    'name' => 'Content Review',
    'weight' => '10',
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '8',
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => '9',
  );

  return $roles;
}
