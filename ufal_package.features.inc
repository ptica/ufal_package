<?php
/**
 * @file
 * ufal_package.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ufal_package_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ufal_package_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ufal_package_image_default_styles() {
  $styles = array();

  // Exported image style: avatar.
  $styles['avatar'] = array(
    'name' => 'avatar',
    'effects' => array(
      4 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 233,
          'height' => 350,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'avatar',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: square-130-130.
  $styles['square-130-130'] = array(
    'name' => 'square-130-130',
    'effects' => array(
      4 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ufal_package_node_info() {
  $items = array(
    'personal_profile' => array(
      'name' => t('Personal Profile'),
      'base' => 'node_content',
      'description' => t('Personal page'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'personal_profile_page' => array(
      'name' => t('Personal Profile subpage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Page title'),
      'help' => '',
    ),
  );
  return $items;
}
