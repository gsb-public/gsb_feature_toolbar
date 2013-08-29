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

  // Exported menu link: menu-marketing:<front>
  $uuid_menu_links['menu-marketing:<front>'] = array(
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
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/11/configure
  $uuid_menu_links['menu-marketing:admin/structure/block/manage/block/11/configure'] = array(
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
    'uuid_link_path' => 'admin/structure/block/manage/block/11/configure',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/16/configure
  $uuid_menu_links['menu-marketing:admin/structure/block/manage/block/16/configure'] = array(
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
    'uuid_link_path' => 'admin/structure/block/manage/block/16/configure',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/6/configure
  $uuid_menu_links['menu-marketing:admin/structure/block/manage/block/6/configure'] = array(
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
    'uuid_link_path' => 'admin/structure/block/manage/block/6/configure',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/fieldable-panels-panes/view/3036/edit
  $uuid_menu_links['menu-marketing:admin/structure/fieldable-panels-panes/view/3036/edit'] = array(
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
    'uuid_link_path' => 'admin/structure/fieldable-panels-panes/view/3036/edit',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/fieldable-panels-panes/view/3041/edit
  $uuid_menu_links['menu-marketing:admin/structure/fieldable-panels-panes/view/3041/edit'] = array(
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
    'uuid_link_path' => 'admin/structure/fieldable-panels-panes/view/3041/edit',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/menu
  $uuid_menu_links['menu-marketing:admin/structure/menu'] = array(
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
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-marketing:admin/structure/mini-panels
  $uuid_menu_links['menu-marketing:admin/structure/mini-panels'] = array(
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
    'uuid_link_path' => 'admin/structure/mini-panels',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-marketing:admin/workbench
  $uuid_menu_links['menu-marketing:admin/workbench'] = array(
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
    'uuid_link_path' => 'admin/workbench',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-marketing:admin/workbench/content/all
  $uuid_menu_links['menu-marketing:admin/workbench/content/all'] = array(
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
    'uuid_link_path' => 'admin/workbench/content/all',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-marketing:admin/workbench/content/edited
  $uuid_menu_links['menu-marketing:admin/workbench/content/edited'] = array(
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
    'uuid_link_path' => 'admin/workbench/content/edited',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-marketing:toolbar/manage-homepage
  $uuid_menu_links['menu-marketing:toolbar/manage-homepage'] = array(
    'router_path' => 'toolbar/manage-homepage',
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
    'uuid_link_path' => 'toolbar/manage-homepage',
    'uuid_menu_name' => 'menu-marketing',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-editor-toolbar:<front>
  $uuid_menu_links['menu-section-editor-toolbar:<front>'] = array(
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
    'uuid_menu_name' => 'menu-section-editor-toolbar',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench
  $uuid_menu_links['menu-section-editor-toolbar:admin/workbench'] = array(
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
    'uuid_link_path' => 'admin/workbench',
    'uuid_menu_name' => 'menu-section-editor-toolbar',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/content/all
  $uuid_menu_links['menu-section-editor-toolbar:admin/workbench/content/all'] = array(
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
    'uuid_link_path' => 'admin/workbench/content/all',
    'uuid_menu_name' => 'menu-section-editor-toolbar',
    'uuid_parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/content/edited
  $uuid_menu_links['menu-section-editor-toolbar:admin/workbench/content/edited'] = array(
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
    'uuid_link_path' => 'admin/workbench/content/edited',
    'uuid_menu_name' => 'menu-section-editor-toolbar',
    'uuid_parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-manager-toolbar:<front>
  $uuid_menu_links['menu-section-manager-toolbar:<front>'] = array(
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
    'uuid_menu_name' => 'menu-section-manager-toolbar',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/structure/menu
  $uuid_menu_links['menu-section-manager-toolbar:admin/structure/menu'] = array(
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
    'uuid_menu_name' => 'menu-section-manager-toolbar',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench
  $uuid_menu_links['menu-section-manager-toolbar:admin/workbench'] = array(
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
    'uuid_link_path' => 'admin/workbench',
    'uuid_menu_name' => 'menu-section-manager-toolbar',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/content/all
  $uuid_menu_links['menu-section-manager-toolbar:admin/workbench/content/all'] = array(
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
    'uuid_link_path' => 'admin/workbench/content/all',
    'uuid_menu_name' => 'menu-section-manager-toolbar',
    'uuid_parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/content/edited
  $uuid_menu_links['menu-section-manager-toolbar:admin/workbench/content/edited'] = array(
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
    'uuid_link_path' => 'admin/workbench/content/edited',
    'uuid_menu_name' => 'menu-section-manager-toolbar',
    'uuid_parent_path' => 'admin/workbench',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All Recent Content');
  t('Alumni News');
  t('Home');
  t('Image CTA');
  t('Impact of Giving');
  t('Latest Articles');
  t('Manage Home Page');
  t('Manage Menus');
  t('Mini Panels');
  t('My Edits');
  t('My Workbench');
  t('Slideshow');


  return $uuid_menu_links;
}
