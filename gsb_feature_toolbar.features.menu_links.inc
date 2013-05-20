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
  // Exported menu link: menu-marketing:admin/workbench/create
  $menu_links['menu-marketing:admin/workbench/create'] = array(
    'menu_name' => 'menu-marketing',
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
    'weight' => 0,
  );
  // Exported menu link: menu-marketing:node/add/business-insight
  $menu_links['menu-marketing:node/add/business-insight'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'node/add/business-insight',
    'router_path' => 'node/add/business-insight',
    'link_title' => 'Business Insight',
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
  // Exported menu link: menu-marketing:node/add/gsb-video
  $menu_links['menu-marketing:node/add/gsb-video'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'node/add/gsb-video',
    'router_path' => 'node/add/gsb-video',
    'link_title' => 'Video',
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
  // Exported menu link: menu-marketing:node/add/media-mention
  $menu_links['menu-marketing:node/add/media-mention'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'node/add/media-mention',
    'router_path' => 'node/add/media-mention',
    'link_title' => 'Media Mention',
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
  // Exported menu link: menu-marketing:node/add/news
  $menu_links['menu-marketing:node/add/news'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
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
  // Exported menu link: menu-marketing:node/add/publication
  $menu_links['menu-marketing:node/add/publication'] = array(
    'menu_name' => 'menu-marketing',
    'link_path' => 'node/add/publication',
    'router_path' => 'node/add/publication',
    'link_title' => 'Publication',
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
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
  // Exported menu link: menu-section-editor-toolbar:admin/workbench/create
  $menu_links['menu-section-editor-toolbar:admin/workbench/create'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
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
  // Exported menu link: menu-section-editor-toolbar:node/add/event
  $menu_links['menu-section-editor-toolbar:node/add/event'] = array(
    'menu_name' => 'menu-section-editor-toolbar',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
  t('Business Insight');
  t('Home');
  t('Logout');
  t('Manage Menus');
  t('Media Mention');
  t('My Edits');
  t('My Workbench');
  t('News');
  t('Publication');
  t('Video');


  return $menu_links;
}
