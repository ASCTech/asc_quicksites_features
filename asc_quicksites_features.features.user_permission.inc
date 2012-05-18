<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function asc_quicksites_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: create qs_appointment content
  $permissions['create qs_appointment content'] = array(
    'name' => 'create qs_appointment content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: create qs_events content
  $permissions['create qs_events content'] = array(
    'name' => 'create qs_events content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: create qs_news content
  $permissions['create qs_news content'] = array(
    'name' => 'create qs_news content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: create qs_people content
  $permissions['create qs_people content'] = array(
    'name' => 'create qs_people content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: delete any qs_appointment content
  $permissions['delete any qs_appointment content'] = array(
    'name' => 'delete any qs_appointment content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: delete any qs_events content
  $permissions['delete any qs_events content'] = array(
    'name' => 'delete any qs_events content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: delete any qs_news content
  $permissions['delete any qs_news content'] = array(
    'name' => 'delete any qs_news content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: delete any qs_people content
  $permissions['delete any qs_people content'] = array(
    'name' => 'delete any qs_people content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: delete own qs_appointment content
  $permissions['delete own qs_appointment content'] = array(
    'name' => 'delete own qs_appointment content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: delete own qs_events content
  $permissions['delete own qs_events content'] = array(
    'name' => 'delete own qs_events content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: delete own qs_news content
  $permissions['delete own qs_news content'] = array(
    'name' => 'delete own qs_news content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: delete own qs_people content
  $permissions['delete own qs_people content'] = array(
    'name' => 'delete own qs_people content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: edit any qs_appointment content
  $permissions['edit any qs_appointment content'] = array(
    'name' => 'edit any qs_appointment content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: edit any qs_events content
  $permissions['edit any qs_events content'] = array(
    'name' => 'edit any qs_events content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: edit any qs_news content
  $permissions['edit any qs_news content'] = array(
    'name' => 'edit any qs_news content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: edit any qs_people content
  $permissions['edit any qs_people content'] = array(
    'name' => 'edit any qs_people content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: edit own qs_appointment content
  $permissions['edit own qs_appointment content'] = array(
    'name' => 'edit own qs_appointment content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: edit own qs_events content
  $permissions['edit own qs_events content'] = array(
    'name' => 'edit own qs_events content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: edit own qs_news content
  $permissions['edit own qs_news content'] = array(
    'name' => 'edit own qs_news content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  // Exported permission: edit own qs_people content
  $permissions['edit own qs_people content'] = array(
    'name' => 'edit own qs_people content',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Site Administrator',
    ),
  );

  return $permissions;
}
