<?php
/**
 * @file
 * gsb_feature_toolbar.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function gsb_feature_toolbar_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-marketing:<front>
  $menu_links['menu-marketing:<front>'] = array(
    'menu_name' => 'menu-marketing',
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
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/11/configure
  $menu_links['menu-marketing:admin/structure/block/manage/block/11/configure'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/block/manage/block/11/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Alumni News',
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
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/16/configure
  $menu_links['menu-marketing:admin/structure/block/manage/block/16/configure'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/block/manage/block/16/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Impact of Giving',
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
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/6/configure
  $menu_links['menu-marketing:admin/structure/block/manage/block/6/configure'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/block/manage/block/6/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Latest Articles',
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
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/fieldable-panels-panes/view/3036/edit
  $menu_links['menu-marketing:admin/structure/fieldable-panels-panes/view/3036/edit'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/fieldable-panels-panes/view/3036/edit',
    'router_path' => 'admin/structure/fieldable-panels-panes/view/%/edit',
    'link_title' => 'Slideshow',
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
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/fieldable-panels-panes/view/3041/edit
  $menu_links['menu-marketing:admin/structure/fieldable-panels-panes/view/3041/edit'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/fieldable-panels-panes/view/3041/edit',
    'router_path' => 'admin/structure/fieldable-panels-panes/view/%/edit',
    'link_title' => 'Image CTA',
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
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/menu
  $menu_links['menu-marketing:admin/structure/menu'] = array(
    'menu_name' => 'menu-marketing',
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
  // Exported menu link: menu-marketing:admin/structure/mini-panels
  $menu_links['menu-marketing:admin/structure/mini-panels'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini Panels',
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
  );
  // Exported menu link: menu-marketing:admin/workbench
  $menu_links['menu-marketing:admin/workbench'] = array(
    'menu_name' => 'menu-marketing',
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
  // Exported menu link: menu-marketing:admin/workbench/content/all
  $menu_links['menu-marketing:admin/workbench/content/all'] = array(
    'menu_name' => 'menu-marketing',
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
  // Exported menu link: menu-marketing:admin/workbench/content/edited
  $menu_links['menu-marketing:admin/workbench/content/edited'] = array(
    'menu_name' => 'menu-marketing',
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
  // Exported menu link: menu-marketing:node/add
  $menu_links['menu-marketing:node/add'] = array(
    'menu_name' => 'menu-marketing',
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
  // Exported menu link: menu-marketing:toolbar/manage-homepage
  $menu_links['menu-marketing:toolbar/manage-homepage'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'toolbar/manage-homepage',
    'router_path' => 'admin/structure/pages/%/operation/%',
    'link_title' => 'Manage Home Page',
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
    'weight' => -46,
  );
  // Exported menu link: menu-marketing:user/logout
  $menu_links['menu-marketing:user/logout'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
      'alter' => TRUE,
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
  // Exported menu link: menu-section-manager-toolbar:node/add
  $menu_links['menu-section-manager-toolbar:node/add'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
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
      'alter' => TRUE,
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
  t('All Recent Content');
  t('Alumni News');
  t('Home');
  t('Image CTA');
  t('Impact of Giving');
  t('Latest Articles');
  t('Logout');
  t('Manage Home Page');
  t('Manage Menus');
  t('Mini Panels');
  t('My Edits');
  t('My Workbench');
  t('Slideshow');


  return $menu_links;
}
