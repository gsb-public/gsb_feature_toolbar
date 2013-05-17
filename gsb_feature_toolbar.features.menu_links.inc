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

  // Exported menu link: menu-section-editor-toolbar:<front>
  $menu_links['menu-section-editor-toolbar:<front>'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
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
  // Exported menu link: menu-section-editor-toolbar:admin/workbench
  $menu_links['menu-section-editor-toolbar:admin/workbench'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
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
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/content/all
  $menu_links['menu-section-editor-toolbar:admin/workbench/content/all'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'admin/workbench/content/all',
    'router_path' => 'admin/workbench/content/all',
    'link_title' => 'All Recent Content',
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
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/content/edited
  $menu_links['menu-section-editor-toolbar:admin/workbench/content/edited'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'admin/workbench/content/edited',
    'router_path' => 'admin/workbench/content/edited',
    'link_title' => 'My Edits',
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
    'weight' => -50,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-editor-toolbar:node/add
  $menu_links['menu-section-editor-toolbar:node/add'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
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
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-section-editor-toolbar:node/add/event
  $menu_links['menu-section-editor-toolbar:node/add/event'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Add Event',
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
    'weight' => -50,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-section-editor-toolbar:user/logout
  $menu_links['menu-section-editor-toolbar:user/logout'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
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
  // Exported menu link: menu-section-manager-toolbar:<front>
  $menu_links['menu-section-manager-toolbar:<front>'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
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
  // Exported menu link: menu-section-manager-toolbar:admin/structure/menu
  $menu_links['menu-section-manager-toolbar:admin/structure/menu'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
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
  // Exported menu link: menu-section-manager-toolbar:admin/workbench
  $menu_links['menu-section-manager-toolbar:admin/workbench'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
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
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/content/all
  $menu_links['menu-section-manager-toolbar:admin/workbench/content/all'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/workbench/content/all',
    'router_path' => 'admin/workbench/content/all',
    'link_title' => 'All Recent Content',
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
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/content/edited
  $menu_links['menu-section-manager-toolbar:admin/workbench/content/edited'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/workbench/content/edited',
    'router_path' => 'admin/workbench/content/edited',
    'link_title' => 'My Edits',
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
    'weight' => -50,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/create
  $menu_links['menu-section-manager-toolbar:admin/workbench/create'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/workbench/create',
    'router_path' => 'admin/workbench/create',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-section-manager-toolbar:node/add/event
  $menu_links['menu-section-manager-toolbar:node/add/event'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Add Event',
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
    'weight' => -50,
    'parent_path' => 'admin/workbench/create',
  );
  // Exported menu link: menu-section-manager-toolbar:node/add/msx-fellows
  $menu_links['menu-section-manager-toolbar:node/add/msx-fellows'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add/msx-fellows',
    'router_path' => 'node/add/msx-fellows',
    'link_title' => 'Add MSx Fellows',
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
    'parent_path' => 'admin/workbench/create',
  );
  // Exported menu link: menu-section-manager-toolbar:node/add/page
  $menu_links['menu-section-manager-toolbar:node/add/page'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Add Page',
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
    'parent_path' => 'admin/workbench/create',
  );
  // Exported menu link: menu-section-manager-toolbar:node/add/phd-candidate
  $menu_links['menu-section-manager-toolbar:node/add/phd-candidate'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add/phd-candidate',
    'router_path' => 'node/add/phd-candidate',
    'link_title' => 'Add PhD Candidate',
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
    'parent_path' => 'admin/workbench/create',
  );
  // Exported menu link: menu-section-manager-toolbar:node/add/staff
  $menu_links['menu-section-manager-toolbar:node/add/staff'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add/staff',
    'router_path' => 'node/add/staff',
    'link_title' => 'Add Staff',
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
    'parent_path' => 'admin/workbench/create',
  );
  // Exported menu link: menu-section-manager-toolbar:node/add/webform
  $menu_links['menu-section-manager-toolbar:node/add/webform'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Add Webform',
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
    'weight' => -45,
    'parent_path' => 'admin/workbench/create',
  );
  // Exported menu link: menu-section-manager-toolbar:user/logout
  $menu_links['menu-section-manager-toolbar:user/logout'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
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
  t('Add Event');
  t('Add MSx Fellows');
  t('Add Page');
  t('Add PhD Candidate');
  t('Add Staff');
  t('Add Webform');
  t('All Recent Content');
  t('Home');
  t('Logout');
  t('Manage Menus');
  t('My Edits');
  t('My Workbench');


  return $menu_links;
}
