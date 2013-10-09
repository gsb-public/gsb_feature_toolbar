<?php
/**
 * @file
 * gsb_feature_toolbar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_toolbar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
