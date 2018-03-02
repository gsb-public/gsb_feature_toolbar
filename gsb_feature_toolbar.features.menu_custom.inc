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

  // Exported menu: menu-marketing.
  $menus['menu-marketing'] = array(
    'menu_name' => 'menu-marketing',
    'title' => 'Author Menu: Marketing',
    'description' => '',
  );
  // Exported menu: menu-section-editor-toolbar.
  $menus['menu-section-editor-toolbar'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'title' => 'Author Menu: Section Editor',
    'description' => '',
  );
  // Exported menu: menu-section-manager-toolbar.
  $menus['menu-section-manager-toolbar'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'title' => 'Author Menu: Section Manager',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Author Menu: Marketing');
  t('Author Menu: Section Editor');
  t('Author Menu: Section Manager');

  return $menus;
}
