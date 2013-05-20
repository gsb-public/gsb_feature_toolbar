<?php
/**
 * @file
 * gsb_feature_toolbar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_toolbar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_role_menus';
  $strongarm->value = 'a:10:{i:1;s:1:"0";i:2;s:1:"0";i:3;s:1:"0";i:4;s:27:"menu-section-editor-toolbar";i:5;s:28:"menu-section-manager-toolbar";i:7;s:1:"0";i:6;s:1:"0";i:8;s:1:"0";i:9;s:14:"menu-marketing";i:10;s:1:"0";}';
  $export['quickbar_role_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_role_weights';
  $strongarm->value = 'a:10:{i:1;s:1:"0";i:2;s:1:"0";i:3;s:1:"0";i:4;s:1:"0";i:5;s:1:"0";i:7;s:1:"0";i:6;s:1:"0";i:8;s:1:"0";i:9;s:1:"0";i:10;s:1:"0";}';
  $export['quickbar_role_weights'] = $strongarm;

  return $export;
}
