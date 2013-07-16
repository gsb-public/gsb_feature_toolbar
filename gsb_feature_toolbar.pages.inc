<?php

/**
 * @file
 * Page callbacks for the toolbar.
 */

/**
 * Page callback: Displays links for Manage Home Page menu items.
 *
 * @see gsb_feature_toolbar_menu()
 */
function gsb_feature_toolbar_manage_homepage_page() {

  $menu_trail = menu_set_active_trail();

  $path = $menu_trail[1]['href'];
  $parent = menu_link_get_preferred($path);
  $parameters = array(
      'active_trail' => array($parent['plid']),
      'only_active_trail' => FALSE,
      'min_depth' => $parent['depth']+1,
      'max_depth' => $parent['depth']+1,
      'conditions' => array('plid' => $parent['mlid']),
    );

  $children = menu_build_tree($parent['menu_name'], $parameters);

  return theme('gsb_feature_toolbar_homepage_list', array('content' => $children));

} 

/**
 * Returns HTML for a list of home page items that can be edited.
 *
 * @param $variables
 *   An associative array containing:
 *   - content: An array of home page items.
 *
 * @ingroup themeable
 */
function theme_gsb_feature_toolbar_homepage_list($variables) {

  $content = $variables['content'];
  $output = '';

  if ($content) {
    $output = '<dl class="hompage-list-item">';
    foreach ($content as $item) {
      $link = $item['link'];
      $output .= '<dt>' . l($link['link_title'], $link['href'], $link['localized_options']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($link['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    $output = '<p>' . 'You do not have permission to manage the Home page items' . '</p>';
  }

  return $output;
}


