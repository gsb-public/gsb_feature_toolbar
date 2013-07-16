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
  
  $item = menu_get_item();
  dpm($item);
  $content = system_admin_menu_block($item);
  dpm($content);
  return theme('gsb_feature_toolbar_homepage_list', array('content' => $content));

} 

/**
 * Returns HTML for a list of home page items that can be edited.
 *
 * @param $variables
 *   An associative array containing:
 *   - content: An array of content types.
 *
 * @ingroup themeable
 */
function theme_gsb_feature_toolbar_homepage_list($variables) {

  $content = $variables['content'];
  $output = '';

  if ($content) {
    $output = '<dl class="node-type-list">';
    foreach ($content as $item) {
      $output .= '<dt>' . l($item['title'], $item['href'], $item['localized_options']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($item['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    $output = '<p>' . t('You have not created any content types yet. Go to the <a href="@create-content">content type creation page</a> to add a new content type.', array('@create-content' => url('admin/structure/types/add'))) . '</p>';
  }
  return $output;
}


