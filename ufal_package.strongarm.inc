<?php
/**
 * @file
 * ufal_package.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ufal_package_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_page_fieldsets_packages';
  $strongarm->value = array(
    'Filter' => 'Filter',
    'Lightweight Directory Access Protocol' => 'Lightweight Directory Access Protocol',
    'administration' => 'administration',
    'Administration' => 0,
    'Chaos tool suite' => 0,
    'Content' => 0,
    'Core' => 0,
    'Development' => 0,
    'Drupal Projects' => 0,
    'Filters' => 0,
    'Media' => 0,
    'Multilingual - Internationalization' => 0,
    'Other' => 0,
    'Rules' => 0,
    'Taxonomy' => 0,
    'Testing' => 0,
    'User interface' => 0,
    'Util' => 0,
    'Views' => 0,
    'Workbench' => 0,
    'Workflow' => 0,
  );
  $export['admin_page_fieldsets_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_personal_profile';
  $strongarm->value = 0;
  $export['comment_anonymous_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_personal_profile_page';
  $strongarm->value = 0;
  $export['comment_anonymous_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_personal_profile';
  $strongarm->value = 1;
  $export['comment_default_mode_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_personal_profile_page';
  $strongarm->value = 1;
  $export['comment_default_mode_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_personal_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_personal_profile_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_personal_profile';
  $strongarm->value = 1;
  $export['comment_form_location_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_personal_profile_page';
  $strongarm->value = 1;
  $export['comment_form_location_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_personal_profile';
  $strongarm->value = '1';
  $export['comment_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_personal_profile_page';
  $strongarm->value = '1';
  $export['comment_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_personal_profile';
  $strongarm->value = '1';
  $export['comment_preview_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_personal_profile_page';
  $strongarm->value = '1';
  $export['comment_preview_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_personal_profile';
  $strongarm->value = 1;
  $export['comment_subject_field_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_personal_profile_page';
  $strongarm->value = 1;
  $export['comment_subject_field_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_personal_profile';
  $strongarm->value = array();
  $export['field_bundle_settings_comment__comment_node_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__drupal_projects';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__drupal_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__personal_profile';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_personal_profile';
  $strongarm->value = array(
    0 => 'user-menu',
  );
  $export['menu_options_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_personal_profile_page';
  $strongarm->value = array(
    0 => 'project-130-menu',
    1 => 'project-95-menu',
    2 => 'project-146-menu',
    3 => 'project-113-menu',
    4 => 'project-149-menu',
    5 => 'project-154-menu',
    6 => 'project-106-menu',
    7 => 'project-94-menu',
    8 => 'project-100-menu',
    9 => 'project-124-menu',
    10 => 'project-151-menu',
    11 => 'project-103-menu',
    12 => 'project-131-menu',
    13 => 'project-96-menu',
    14 => 'project-102-menu',
    15 => 'project-114-menu',
    16 => 'project-107-menu',
    17 => 'project-117-menu',
    18 => 'project-145-menu',
    19 => 'project-127-menu',
    20 => 'project-157-menu',
  );
  $export['menu_options_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_personal_profile';
  $strongarm->value = 'user-menu:0';
  $export['menu_parent_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_personal_profile_page';
  $strongarm->value = 'project-95-menu:0';
  $export['menu_parent_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_personal_profile';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_personal_profile_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_personal_profile';
  $strongarm->value = '1';
  $export['node_preview_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_personal_profile_page';
  $strongarm->value = '1';
  $export['node_preview_personal_profile_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_personal_profile';
  $strongarm->value = 0;
  $export['node_submitted_personal_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_personal_profile_page';
  $strongarm->value = 0;
  $export['node_submitted_personal_profile_page'] = $strongarm;

  return $export;
}
