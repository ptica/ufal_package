<?php
/**
 * @file
 * ufal_package.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function ufal_package_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'custom',
        'uicolor_user' => '#D3D3D3',
        'toolbar' => '[
    [\'Save\',\'Source\'],
    [\'PasteText\',\'PasteFromWord\'],
    [\'Undo\',\'Redo\',\'RemoveFormat\'],
    [\'OCUpload\',\'linkit\',\'Image\',\'Table\',\'Smiley\'],
    \'/\',
    [\'SpecialChar\',\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'-\',\'BidiLtr\',\'BidiRtl\'],
    [\'Link\',\'Unlink\'],
    
    \'/\',
    [\'Format\',\'Font\',\'FontSize\'],
    [\'Maximize\',\'ShowBlocks\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '/sites/all/themes/bootstrap/bootstrap/css/bootstrap.css,/sites/all/themes/drufal/css/ufal.css,/sites/all/themes/drufal_project/css/ufal-project.css,/sites/all/themes/drufal_project/css/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => 'config.autoGrow_onStartup = true;
config.entities = false;
config.htmlEncodeOutput = false;
config.basicEntities = false;
config.disableReadonlyStyling = true;
config.allowedContent = true;',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Plugin file: autogrow',
            'path' => '%plugin_dir%autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'dragresize' => array(
            'name' => 'dragresize',
            'desc' => 'Plugin file: dragresize',
            'path' => '%plugin_dir%dragresize/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
          'ocupload' => array(
            'name' => 'OCUpload',
            'desc' => 'One Click Upload',
            'path' => '%base_path%sites/all/modules/ocupload/static/',
            'buttons' => array(
              'OCUpload' => array(
                'icon' => 'button.png',
                'label' => 'One Click Upload',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
