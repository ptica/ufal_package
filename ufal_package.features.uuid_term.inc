<?php
/**
 * @file
 * ufal_package.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ufal_package_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Room 409',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '263f25b9-2c67-4156-8b90-4e017f1dc602',
    'vocabulary_machine_name' => 'rooms',
  );
  $terms[] = array(
    'name' => 'NPFL099 Statistical dialogue systems',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5dd2553e-61fb-448f-9a83-6aa664fc6baf',
    'vocabulary_machine_name' => 'classes',
  );
  $terms[] = array(
    'name' => 'Senior Research Associates',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '77639108-00a1-42f1-bec0-e41e0330c69f',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Research Assistants',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '7e288d81-2d4b-44c9-b295-ab603ad113b5',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Professors',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '825d2708-5028-4647-b808-136ad676eb74',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Ph.D. Students',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '9c1396f1-7bd4-413a-a0f2-17f2c512a459',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Students',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '9d2349f7-af38-4053-8327-1bd8532fe784',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Secretary',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => 'af47e4a2-f7e8-48ac-a8da-1cc3a3f2b968',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Head of the Institute',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ea98adc6-1f1f-4e06-92a6-6a8b31d3a98d',
    'vocabulary_machine_name' => 'positions',
  );
  $terms[] = array(
    'name' => 'Technical Specialists',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => 'ec4b1d59-cac0-4f40-9c07-fba44dfcc46a',
    'vocabulary_machine_name' => 'positions',
  );
  return $terms;
}
