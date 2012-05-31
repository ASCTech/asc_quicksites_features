<?php

/**
 * Implementation of hook_strongarm().
 */
function asc_quicksites_features_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_qs_events';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-4',
    'path' => '6',
    'attachments' => '5',
    'xmlsitemap' => '4',
  );
  $export['content_extra_weights_qs_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_qs_news';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-1',
    'path' => '6',
    'attachments' => '4',
    'custom_breadcrumbs' => '30',
    'xmlsitemap' => '5',
  );
  $export['content_extra_weights_qs_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_qs_people';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '10',
    'author' => '9',
    'options' => '11',
    'menu' => '-3',
    'path' => '12',
    'attachments' => '13',
    'xmlsitemap' => '14',
  );
  $export['content_extra_weights_qs_people'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_qs_appointment';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_qs_appointment'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_qs_events';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_qs_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_qs_news';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_qs_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_qs_people';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_qs_people'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_qs_appointment';
  $strongarm->value = 1;
  $export['upload_qs_appointment'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_qs_events';
  $strongarm->value = 1;
  $export['upload_qs_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_qs_news';
  $strongarm->value = 1;
  $export['upload_qs_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_qs_people';
  $strongarm->value = 1;
  $export['upload_qs_people'] = $strongarm;

  return $export;
}
