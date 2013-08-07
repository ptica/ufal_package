<?php
/**
 * @file
 * ufal_package.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ufal_package_taxonomy_default_vocabularies() {
  return array(
    'classes' => array(
      'name' => 'Classes',
      'machine_name' => 'classes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'positions' => array(
      'name' => 'Positions',
      'machine_name' => 'positions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'profiles' => array(
      'name' => 'Profiles',
      'machine_name' => 'profiles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rooms' => array(
      'name' => 'Rooms',
      'machine_name' => 'rooms',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
