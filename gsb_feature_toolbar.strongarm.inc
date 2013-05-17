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
  $strongarm->value = 'a:9:{i:1;s:1:"0";i:2;s:1:"0";i:3;s:1:"0";i:4;s:19:"menu-section-editor-toolbar";i:5;s:20:"menu-section-manager-toolbar";i:7;s:1:"0";i:6;s:1:"0";i:8;s:1:"0";i:9;s:1:"0";}';
  $export['quickbar_role_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_role_weights';
  $strongarm->value = 'a:9:{i:1;s:2:"-2";i:2;s:2:"-3";i:3;s:3:"-10";i:4;s:2:"-4";i:5;s:2:"-6";i:7;s:2:"-5";i:6;s:2:"-9";i:8;s:2:"-8";i:9;s:2:"-7";}';
  $export['quickbar_role_weights'] = $strongarm;

  return $export;
}
