<?php
/**
 * @file
 * gsb_feature_toolbar.features.uuid_menu_links.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links().
 */
function gsb_feature_toolbar_uuid_menu_default_menu_links() {
  $uuid_menu_links = array();

  // Exported menu link: menu-section-editor:<front>
  $uuid_menu_links['menu-section-editor:<front>'] = array(
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid_link_path' => '<front>',
    'uuid_menu_name' => 'menu-section-editor',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-editor:admin/workbench
  $uuid_menu_links['menu-section-editor:admin/workbench'] = array(
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid_link_path' => 'admin/workbench',
    'uuid_menu_name' => 'menu-section-editor',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-manager:<front>
  $uuid_menu_links['menu-section-manager:<front>'] = array(
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid_link_path' => '<front>',
    'uuid_menu_name' => 'menu-section-manager',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-manager:admin/structure/menu
  $uuid_menu_links['menu-section-manager:admin/structure/menu'] = array(
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Manage Menus',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid_link_path' => 'admin/structure/menu',
    'uuid_menu_name' => 'menu-section-manager',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-manager:admin/workbench
  $uuid_menu_links['menu-section-manager:admin/workbench'] = array(
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid_link_path' => 'admin/workbench',
    'uuid_menu_name' => 'menu-section-manager',
    'uuid_parent_path' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Manage Menus');
  t('My Workbench');


  return $uuid_menu_links;
}
