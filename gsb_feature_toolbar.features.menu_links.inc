<?php
/**
 * @file
 * gsb_feature_toolbar.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gsb_feature_toolbar_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-section-editor:<front>
  $menu_links['menu-section-editor:<front>'] = array(
    'menu_name' => 'menu-section-editor',
    'link_path' => '<front>',
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
  );
  // Exported menu link: menu-section-editor:admin/workbench
  $menu_links['menu-section-editor:admin/workbench'] = array(
    'menu_name' => 'menu-section-editor',
    'link_path' => 'admin/workbench',
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
  );
  // Exported menu link: menu-section-editor:node/add
  $menu_links['menu-section-editor:node/add'] = array(
    'menu_name' => 'menu-section-editor',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
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
    'weight' => -48,
  );
  // Exported menu link: menu-section-editor:user/logout
  $menu_links['menu-section-editor:user/logout'] = array(
    'menu_name' => 'menu-section-editor',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
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
  );
  // Exported menu link: menu-section-manager:<front>
  $menu_links['menu-section-manager:<front>'] = array(
    'menu_name' => 'menu-section-manager',
    'link_path' => '<front>',
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
  );
  // Exported menu link: menu-section-manager:admin/structure/menu
  $menu_links['menu-section-manager:admin/structure/menu'] = array(
    'menu_name' => 'menu-section-manager',
    'link_path' => 'admin/structure/menu',
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
  );
  // Exported menu link: menu-section-manager:admin/workbench
  $menu_links['menu-section-manager:admin/workbench'] = array(
    'menu_name' => 'menu-section-manager',
    'link_path' => 'admin/workbench',
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
  );
  // Exported menu link: menu-section-manager:node/add
  $menu_links['menu-section-manager:node/add'] = array(
    'menu_name' => 'menu-section-manager',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
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
    'weight' => -48,
  );
  // Exported menu link: menu-section-manager:user/logout
  $menu_links['menu-section-manager:user/logout'] = array(
    'menu_name' => 'menu-section-manager',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
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
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content');
  t('Home');
  t('Logout');
  t('Manage Menus');
  t('My Workbench');


  return $menu_links;
}
