<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function asc_quicksites_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: display site configuration menu
  $permissions['display site configuration menu'] = array(
    'name' => 'display site configuration menu',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'superuser',
    ),
  );

  return $permissions;
}
