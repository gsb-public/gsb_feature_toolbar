<?php
/**
 * @file
 * gsb_feature_toolbar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_toolbar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_role_menus';
  $strongarm->value = array(
    'anonymous-user' => '0',
    'authenticated-user' => '0',
    'administrator' => '0',
    'section-editor' => 'menu-section-editor-toolbar',
    'section-manager' => 'menu-section-manager-toolbar',
    'aa' => '0',
    'fa' => '0',
    'cwo_admin' => '0',
    'marketing_admin' => 'menu-marketing',
  );
  $export['quickbar_role_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_role_weights';
  $strongarm->value = array(
    'anonymous-user' => '-2',
    'authenticated-user' => '-3',
    'administrator' => '-1',
    'section-editor' => '-8',
    'section-manager' => '-9',
    'aa' => '-5',
    'fa' => '-4',
    'cwo_admin' => '-7',
    'marketing_admin' => '-10',
  );
  $export['quickbar_role_weights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_marketing_admin';
  $strongarm->value = array(
    'iconset' => '_none',
    'sticky' => 1,
    'float' => 0,
    'secondary_menu_visibility' => 1,
    'nofollow' => 0,
    'expanded_items' => array(
      'expand_node_add' => 1,
      'expand_structure_menu' => 1,
    ),
  );
  $export['quickbar_settings_marketing_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_section-editor';
  $strongarm->value = array(
    'iconset' => '_none',
    'sticky' => 1,
    'float' => 0,
    'secondary_menu_visibility' => 1,
    'nofollow' => 0,
    'expanded_items' => array(
      'expand_node_add' => 1,
      'expand_structure_menu' => 1,
    ),
  );
  $export['quickbar_settings_section-editor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_section-manager';
  $strongarm->value = array(
    'iconset' => '_none',
    'sticky' => 1,
    'float' => 0,
    'secondary_menu_visibility' => 1,
    'nofollow' => 0,
    'expanded_items' => array(
      'expand_node_add' => 1,
      'expand_structure_menu' => 1,
    ),
  );
  $export['quickbar_settings_section-manager'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_use_machine_names';
  $strongarm->value = 1;
  $export['quickbar_use_machine_names'] = $strongarm;

  return $export;
}
