<?php
/**
 * @file
 * example_blog_feature.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function example_blog_feature_user_default_roles() {
  $roles = array();

  // Exported role: blog editor
  $roles['blog editor'] = array(
    'name' => 'blog editor',
    'weight' => '4',
  );

  return $roles;
}
