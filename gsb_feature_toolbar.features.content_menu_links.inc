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
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-marketing:admin/config/gsb
  $menu_links['menu-marketing:admin/config/gsb'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/config/gsb',
    'router_path' => 'admin/config/gsb',
    'link_title' => 'Site Configuration',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-marketing:admin/config/gsb/connecting-link
  $menu_links['menu-marketing:admin/config/gsb/connecting-link'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/config/gsb/connecting-link',
    'router_path' => 'admin/config/gsb/connecting-link',
    'link_title' => 'Connecting Links',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'admin/config/gsb',
  );
  // Exported menu link: menu-marketing:admin/config/gsb/fpp-xray
  $menu_links['menu-marketing:admin/config/gsb/fpp-xray'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/config/gsb/fpp-xray',
    'router_path' => 'admin/config/gsb/fpp-xray',
    'link_title' => 'FPP X-Ray',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'admin/config/gsb',
  );
  // Exported menu link: menu-marketing:admin/config/gsb/insights
  $menu_links['menu-marketing:admin/config/gsb/insights'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/config/gsb/insights',
    'router_path' => 'admin/config/gsb/insights',
    'link_title' => 'Insights',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'admin/config/gsb',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/11/configure
  $menu_links['menu-marketing:admin/structure/block/manage/block/11/configure'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/block/manage/block/11/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Alumni News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/16/configure
  $menu_links['menu-marketing:admin/structure/block/manage/block/16/configure'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/block/manage/block/16/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Impact of Giving',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/block/manage/block/6/configure
  $menu_links['menu-marketing:admin/structure/block/manage/block/6/configure'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/block/manage/block/6/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Latest Articles',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/fieldable-panels-panes/view/3041/edit
  $menu_links['menu-marketing:admin/structure/fieldable-panels-panes/view/3041/edit'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/fieldable-panels-panes/view/3041/edit',
    'router_path' => 'admin/structure/fieldable-panels-panes/view/%/edit',
    'link_title' => 'Image CTA',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_path' => 'toolbar/manage-homepage',
  );
  // Exported menu link: menu-marketing:admin/structure/menu
  $menu_links['menu-marketing:admin/structure/menu'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Manage Menus',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-marketing:admin/structure/mini-panels
  $menu_links['menu-marketing:admin/structure/mini-panels'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini Panels',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-marketing:admin/workbench
  $menu_links['menu-marketing:admin/workbench'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-marketing:admin/workbench/content/all
  $menu_links['menu-marketing:admin/workbench/content/all'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/workbench/content/all',
    'router_path' => 'admin/workbench/content/all',
    'link_title' => 'All Recent Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-marketing:admin/workbench/content/edited
  $menu_links['menu-marketing:admin/workbench/content/edited'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/workbench/content/edited',
    'router_path' => 'admin/workbench/content/edited',
    'link_title' => 'My Edits',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-marketing:node/add
  $menu_links['menu-marketing:node/add'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-marketing:saml-logout
  $menu_links['menu-marketing:saml-logout'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'saml-logout',
    'router_path' => 'saml-logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-marketing:toolbar/manage-homepage
  $menu_links['menu-marketing:toolbar/manage-homepage'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'toolbar/manage-homepage',
    'router_path' => 'toolbar/manage-homepage',
    'link_title' => 'Manage Home Page',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-marketing_pr-contacts:admin/structure/taxonomy/pr_contact
  $menu_links['menu-marketing_pr-contacts:admin/structure/taxonomy/pr_contact'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'admin/structure/taxonomy/pr_contact',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'PR Contacts',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'admin/config/gsb',
  );
  // Exported menu link: menu-section-editor-toolbar:<front>
  $menu_links['menu-section-editor-toolbar:<front>'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench
  $menu_links['menu-section-editor-toolbar:admin/workbench'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/content/all
  $menu_links['menu-section-editor-toolbar:admin/workbench/content/all'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'admin/workbench/content/all',
    'router_path' => 'admin/workbench/content/all',
    'link_title' => 'All Recent Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/content/edited
  $menu_links['menu-section-editor-toolbar:admin/workbench/content/edited'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'admin/workbench/content/edited',
    'router_path' => 'admin/workbench/content/edited',
    'link_title' => 'My Edits',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-editor-toolbar:node/add
  $menu_links['menu-section-editor-toolbar:node/add'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-section-editor-toolbar:saml-logout
  $menu_links['menu-section-editor-toolbar:saml-logout'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'saml-logout',
    'router_path' => 'saml-logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-section-manager-toolbar:<front>
  $menu_links['menu-section-manager-toolbar:<front>'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/structure/menu
  $menu_links['menu-section-manager-toolbar:admin/structure/menu'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Manage Menus',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench
  $menu_links['menu-section-manager-toolbar:admin/workbench'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/content/all
  $menu_links['menu-section-manager-toolbar:admin/workbench/content/all'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/workbench/content/all',
    'router_path' => 'admin/workbench/content/all',
    'link_title' => 'All Recent Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-manager-toolbar:admin/workbench/content/edited
  $menu_links['menu-section-manager-toolbar:admin/workbench/content/edited'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'admin/workbench/content/edited',
    'router_path' => 'admin/workbench/content/edited',
    'link_title' => 'My Edits',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_path' => 'admin/workbench',
  );
  // Exported menu link: menu-section-manager-toolbar:node/add
  $menu_links['menu-section-manager-toolbar:node/add'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-section-manager-toolbar:saml-logout
  $menu_links['menu-section-manager-toolbar:saml-logout'] = array(
    'menu_name' => 'menu-section-manager-toolbar',
    'link_path' => 'saml-logout',
    'router_path' => 'saml-logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content');
  t('All Recent Content');
  t('Alumni News');
  t('Connecting Links');
  t('FPP X-Ray');
  t('Home');
  t('Image CTA');
  t('Impact of Giving');
  t('Insights');
  t('Latest Articles');
  t('Logout');
  t('Manage Home Page');
  t('Manage Menus');
  t('Mini Panels');
  t('My Edits');
  t('My Workbench');
  t('PR Contacts');
  t('Site Configuration');


  return $menu_links;
}
