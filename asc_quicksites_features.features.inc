<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function asc_quicksites_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_custom_formatters_defaults().
 */
function asc_quicksites_features_custom_formatters_defaults() {
  $formatters = array();

  // Newline to BR.
  $formatters['newline_to_br'] = array(
    'name' => 'newline_to_br',
    'label' => 'Newline to BR',
    'field_types' => 'a:1:{i:0;s:4:"text";}',
    'multiple' => '0',
    'description' => '',
    'mode' => 'advanced',
    'code' => 'return str_replace("\\n", "<br/>", $element[\'#item\'][\'value\']);',
    'status' => '1',
    'source' => 'module',
  );

  // Phone Number.
  $formatters['phone'] = array(
    'name' => 'phone',
    'label' => 'Phone Number',
    'field_types' => 'a:1:{i:0;s:4:"text";}',
    'multiple' => '0',
    'description' => '',
    'mode' => 'advanced',
    'code' => '$phone = $element[\'#item\'][\'value\'];

$default_area_code = "614";
$phone_split = array();
preg_match(\'/((\\(?([0-9]{3})\\)?[. -]?)?([0-9]{3})[. -]?([0-9]{4}))/\', $phone, $phone_split);

if($phone_split[4] && $phone_split[5] && $phone_split[3] || count($default_area_code)){
    if($phone_split[3]){
        $area_code = $phone_split[3].\' \';
    }else{
        $area_code = $default_area_code.\' \';
    }

	$phone_split4 = $phone_split[4];
	$phone_split5 = $phone_split[5];

	if ($phone_split4 == \'\' && $phone_split5 == \'\') {
		$phone = \'\';
	}
	else {
		$phone = $area_code.$phone_split4.\'-\'.$phone_split5;
	}
}

return $phone;',
    'status' => '1',
    'source' => 'module',
  );

  return $formatters;

}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function asc_quicksites_features_imagecache_default_presets() {
  $items = array(
    'events_thumb' => array(
      'presetname' => 'events_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '70',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'news-events_large_thumb' => array(
      'presetname' => 'news-events_large_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '120',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'news_thumb' => array(
      'presetname' => 'news_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '79',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'news_tiny_thumb' => array(
      'presetname' => 'news_tiny_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '40',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_med_thumb' => array(
      'presetname' => 'person_med_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '56',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_small_thumb' => array(
      'presetname' => 'person_small_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '60',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_thumb' => array(
      'presetname' => 'person_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '90',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_tiny_thumb' => array(
      'presetname' => 'person_tiny_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '46',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function asc_quicksites_features_node_info() {
  $items = array(
    'qs_appointment' => array(
      'name' => t('Appointment'),
      'module' => 'features',
      'description' => t('Appointments for People'),
      'has_title' => '1',
      'title_label' => t('Appointment Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'qs_events' => array(
      'name' => t('Events'),
      'module' => 'features',
      'description' => t('Add events for the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'qs_news' => array(
      'name' => t('News'),
      'module' => 'features',
      'description' => t('Add news for the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'qs_people' => array(
      'name' => t('People'),
      'module' => 'features',
      'description' => t('Add people for the site.'),
      'has_title' => '1',
      'title_label' => t('Last Name'),
      'has_body' => '1',
      'body_label' => t('Narrative Biography'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function asc_quicksites_features_views_api() {
  return array(
    'api' => '2',
  );
}
