<?php
/**
 * @file
 * gsb_feature_toolbar.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gsb_feature_toolbar_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-section-editor.
  $menus['menu-section-editor'] = array(
    'menu_name' => 'menu-section-editor',
    'title' => 'Section Editor',
    'description' => '',
  );
  // Exported menu: menu-section-manager.
  $menus['menu-section-manager'] = array(
    'menu_name' => 'menu-section-manager',
    'title' => 'Section Manager',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Section Editor');
  t('Section Manager');


  return $menus;
}
