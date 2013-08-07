<?php
/**
 * @file
 * ufal_package.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ufal_package_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|personal_profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personal_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_office_hours',
      1 => 'field_private_phone',
      2 => 'field_room_number',
      3 => 'field_work_fax',
      4 => 'field_work_phone',
      5 => 'field_email2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contact|node|personal_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service|node|personal_profile|form';
  $field_group->group_name = 'group_service';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personal_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service',
    'weight' => '11',
    'children' => array(
      0 => 'field_area_chair',
      1 => 'field_awards',
      2 => 'field_committees',
      3 => 'field_membership',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Service',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_service|node|personal_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|personal_profile|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personal_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '13',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_g_plus',
      2 => 'field_google_scholar',
      3 => 'field_linkedin',
      4 => 'field_sis_id',
      5 => 'field_twitter',
      6 => 'field_github',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_social|node|personal_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_students|node|personal_profile|form';
  $field_group->group_name = 'group_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personal_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Students',
    'weight' => '12',
    'children' => array(
      0 => 'field_students',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Students',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_students|node|personal_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaching|node|personal_profile|form';
  $field_group->group_name = 'group_teaching';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personal_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaching',
    'weight' => '9',
    'children' => array(
      0 => 'field_teaching',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teaching',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_teaching|node|personal_profile|form'] = $field_group;

  return $export;
}
