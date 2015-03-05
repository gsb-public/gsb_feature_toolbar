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
    'editor' => '0',
    'events' => '0',
    'section-manager' => 'menu-section-manager-toolbar',
    'marketing_admin' => 'menu-marketing',
    'fa' => 'menu-section-editor-toolbar',
    'faculty' => 'menu-faculty-administration',
    'aa' => 'menu-section-editor-toolbar',
    'cwo_admin' => '0',
    'marketing:12396' => '0',
    'mba:12401' => '0',
    'alumnipg' => '0',
    'msx:12406' => '0',
    'phd:12481' => '0',
    'alumni:13071' => '0',
    'library:13051' => '0',
    'stanford-gsb-experience:12261' => '0',
    'visit-us:12416' => '0',
    'stanford-university-community:12421' => '0',
    'newsroom:12456' => '0',
    'contact-us:12461' => '0',
    'jobs:12946' => '0',
    'social-innovation:12956' => '0',
    'stanford-ignite:13001' => '0',
    'stanford-innovation-&-entrepreneurship-certificate:13011' => '0',
    'summer-institute-for-general-management:13016' => '0',
    'custom-programs:13021' => '0',
    'faculty-&-research:13046' => '0',
    'financial-aid:13056' => '0',
    'research-fellows:13146' => '0',
    'behavioral-lab:13186' => '0',
    'rail:13191' => '0',
    'companies-&-recruiters:26671' => '0',
    'insights:27251' => '0',
    'insight-topics:27256' => '0',
    'nongsbreg:28606' => '0',
    'help:29781' => '0',
    'alumni-help:29781' => '0',
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
    'editor' => '10',
    'events' => '0',
    'section-manager' => '-9',
    'marketing_admin' => '-10',
    'fa' => '-6',
    'faculty' => '-5',
    'aa' => '-7',
    'cwo_admin' => '-4',
    'marketing:12396' => '10',
    'mba:12401' => '10',
    'alumnipg' => '0',
    'msx:12406' => '10',
    'phd:12481' => '10',
    'alumni:13071' => '10',
    'library:13051' => '10',
    'stanford-gsb-experience:12261' => '10',
    'visit-us:12416' => '10',
    'stanford-university-community:12421' => '10',
    'newsroom:12456' => '10',
    'contact-us:12461' => '7',
    'jobs:12946' => '3',
    'social-innovation:12956' => '5',
    'stanford-ignite:13001' => '2',
    'stanford-innovation-&-entrepreneurship-certificate:13011' => '0',
    'summer-institute-for-general-management:13016' => '1',
    'custom-programs:13021' => '4',
    'faculty-&-research:13046' => '10',
    'financial-aid:13056' => '10',
    'research-fellows:13146' => '9',
    'behavioral-lab:13186' => '8',
    'rail:13191' => '6',
    'companies-&-recruiters:26671' => '0',
    'insights:27251' => '0',
    'insight-topics:27256' => '0',
    'nongsbreg:28606' => '0',
    'help:29781' => '0',
    'alumni-help:29781' => '0',
  );
  $export['quickbar_role_weights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_aa';
  $strongarm->value = array(
    'iconset' => '_none',
    'sticky' => 1,
    'float' => 0,
    'secondary_menu_visibility' => 1,
    'nofollow' => 0,
    'expanded_items' => array(
      'expand_node_add' => 1,
      'expand_structure_menu' => 0,
    ),
  );
  $export['quickbar_settings_aa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_fa';
  $strongarm->value = array(
    'iconset' => '_none',
    'sticky' => 1,
    'float' => 0,
    'secondary_menu_visibility' => 1,
    'nofollow' => 0,
    'expanded_items' => array(
      'expand_node_add' => 1,
      'expand_structure_menu' => 0,
    ),
  );
  $export['quickbar_settings_fa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_faculty';
  $strongarm->value = array(
    'iconset' => '_none',
    'sticky' => 1,
    'float' => 0,
    'secondary_menu_visibility' => 1,
    'nofollow' => 0,
    'expanded_items' => array(
      'expand_node_add' => 0,
      'expand_structure_menu' => 0,
    ),
  );
  $export['quickbar_settings_faculty'] = $strongarm;

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
