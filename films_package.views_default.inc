<?php
/**
 * @file
 * films_package.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function films_package_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coming_soon';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Coming Soon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coming Soon';
  $handler->display->display_options['css_class'] = 'films-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Poster */
  $handler->display->display_options['fields']['field_poster']['id'] = 'field_poster';
  $handler->display->display_options['fields']['field_poster']['table'] = 'field_data_field_poster';
  $handler->display->display_options['fields']['field_poster']['field'] = 'field_poster';
  $handler->display->display_options['fields']['field_poster']['label'] = '';
  $handler->display->display_options['fields']['field_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Run Date - end date (field_run_date:value2) */
  $handler->display->display_options['sorts']['field_run_date_value2']['id'] = 'field_run_date_value2';
  $handler->display->display_options['sorts']['field_run_date_value2']['table'] = 'field_data_field_run_date';
  $handler->display->display_options['sorts']['field_run_date_value2']['field'] = 'field_run_date_value2';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'film' => 'film',
  );
  /* Filter criterion: Content: Run Date -  start date (field_run_date) */
  $handler->display->display_options['filters']['field_run_date_value']['id'] = 'field_run_date_value';
  $handler->display->display_options['filters']['field_run_date_value']['table'] = 'field_data_field_run_date';
  $handler->display->display_options['filters']['field_run_date_value']['field'] = 'field_run_date_value';
  $handler->display->display_options['filters']['field_run_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_run_date_value']['default_date'] = 'now + 3 days';

  /* Display: Coming Soon */
  $handler = $view->new_display('page', 'Coming Soon', 'page_1');
  $handler->display->display_options['path'] = 'films/coming-soon';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Coming Soon';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Films';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Coming Soon Block */
  $handler = $view->new_display('block', 'Coming Soon Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-films-slider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['optionset'] = 'filmslider';
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_poster' => 0,
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['coming_soon'] = $view;

  $view = new view();
  $view->name = 'featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Run Date */
  $handler->display->display_options['fields']['field_run_date']['id'] = 'field_run_date';
  $handler->display->display_options['fields']['field_run_date']['table'] = 'field_data_field_run_date';
  $handler->display->display_options['fields']['field_run_date']['field'] = 'field_run_date';
  $handler->display->display_options['fields']['field_run_date']['label'] = '';
  $handler->display->display_options['fields']['field_run_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_run_date']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Trailer Url */
  $handler->display->display_options['fields']['field_trailer_url']['id'] = 'field_trailer_url';
  $handler->display->display_options['fields']['field_trailer_url']['table'] = 'field_data_field_trailer_url';
  $handler->display->display_options['fields']['field_trailer_url']['field'] = 'field_trailer_url';
  $handler->display->display_options['fields']['field_trailer_url']['label'] = '';
  $handler->display->display_options['fields']['field_trailer_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_trailer_url']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_trailer_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trailer_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_trailer_url']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'film' => 'film',
    'film_series' => 'film_series',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'featured';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Featured';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'home';
  $export['featured'] = $view;

  $view = new view();
  $view->name = 'film_series';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Film Series';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Series Span -  start date (field_series_span) */
  $handler->display->display_options['sorts']['field_series_span_value']['id'] = 'field_series_span_value';
  $handler->display->display_options['sorts']['field_series_span_value']['table'] = 'field_data_field_series_span';
  $handler->display->display_options['sorts']['field_series_span_value']['field'] = 'field_series_span_value';
  /* Sort criterion: Content: Series Span - end date (field_series_span:value2) */
  $handler->display->display_options['sorts']['field_series_span_value2']['id'] = 'field_series_span_value2';
  $handler->display->display_options['sorts']['field_series_span_value2']['table'] = 'field_data_field_series_span';
  $handler->display->display_options['sorts']['field_series_span_value2']['field'] = 'field_series_span_value2';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'film_series' => 'film_series',
  );
  /* Filter criterion: Content: Series Span -  start date (field_series_span) */
  $handler->display->display_options['filters']['field_series_span_value']['id'] = 'field_series_span_value';
  $handler->display->display_options['filters']['field_series_span_value']['table'] = 'field_data_field_series_span';
  $handler->display->display_options['filters']['field_series_span_value']['field'] = 'field_series_span_value';
  $handler->display->display_options['filters']['field_series_span_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_series_span_value']['default_date'] = 'now';
  /* Filter criterion: Content: Series Span - end date (field_series_span:value2) */
  $handler->display->display_options['filters']['field_series_span_value2']['id'] = 'field_series_span_value2';
  $handler->display->display_options['filters']['field_series_span_value2']['table'] = 'field_data_field_series_span';
  $handler->display->display_options['filters']['field_series_span_value2']['field'] = 'field_series_span_value2';
  $handler->display->display_options['filters']['field_series_span_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_series_span_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Looks like we don\'t have any film series going on right now. Check back later to see what we have in store.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'foundation_editor';
  $handler->display->display_options['path'] = 'films/series';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Series';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Film Series';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $export['film_series'] = $view;

  $view = new view();
  $view->name = 'films';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Now Playing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Films';
  $handler->display->display_options['css_class'] = 'films-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Poster */
  $handler->display->display_options['fields']['field_poster']['id'] = 'field_poster';
  $handler->display->display_options['fields']['field_poster']['table'] = 'field_data_field_poster';
  $handler->display->display_options['fields']['field_poster']['field'] = 'field_poster';
  $handler->display->display_options['fields']['field_poster']['label'] = '';
  $handler->display->display_options['fields']['field_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Run Date -  start date (field_run_date) */
  $handler->display->display_options['sorts']['field_run_date_value']['id'] = 'field_run_date_value';
  $handler->display->display_options['sorts']['field_run_date_value']['table'] = 'field_data_field_run_date';
  $handler->display->display_options['sorts']['field_run_date_value']['field'] = 'field_run_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'film' => 'film',
  );
  /* Filter criterion: Content: Run Date -  start date (field_run_date) */
  $handler->display->display_options['filters']['field_run_date_value']['id'] = 'field_run_date_value';
  $handler->display->display_options['filters']['field_run_date_value']['table'] = 'field_data_field_run_date';
  $handler->display->display_options['filters']['field_run_date_value']['field'] = 'field_run_date_value';
  $handler->display->display_options['filters']['field_run_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_run_date_value']['default_date'] = 'now + 3 days';
  /* Filter criterion: Content: Run Date - end date (field_run_date:value2) */
  $handler->display->display_options['filters']['field_run_date_value2']['id'] = 'field_run_date_value2';
  $handler->display->display_options['filters']['field_run_date_value2']['table'] = 'field_data_field_run_date';
  $handler->display->display_options['filters']['field_run_date_value2']['field'] = 'field_run_date_value2';
  $handler->display->display_options['filters']['field_run_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_run_date_value2']['default_date'] = 'now';

  /* Display: Now Playing Block */
  $handler = $view->new_display('block', 'Now Playing Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-films-slider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['optionset'] = 'filmslider';
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_poster' => 0,
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Now Playing */
  $handler = $view->new_display('page', 'Now Playing', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Now Playing';
  $handler->display->display_options['path'] = 'films/now-playing';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Now Playing';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Films';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['films'] = $view;

  $view = new view();
  $view->name = 'showtimes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Showtimes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Showtimes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, we couldn\'t find showtimes for this selection.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['relationships']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['delta'] = '-1';
  /* Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Time */
  $handler->display->display_options['fields']['field_showtime_1']['id'] = 'field_showtime_1';
  $handler->display->display_options['fields']['field_showtime_1']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_showtime_1']['label'] = '';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['text'] = '[field_showtime_1-value]';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_showtime_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_showtime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['sorts']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['sorts']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['sorts']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'film' => 'film',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Showtime (field_showtime) */
  $handler->display->display_options['filters']['field_showtime_value']['id'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['filters']['field_showtime_value']['field'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['filters']['field_showtime_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_showtime_value']['expose']['operator_id'] = 'field_showtime_value_op';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['description'] = ' ';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['operator'] = 'field_showtime_value_op';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['identifier'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_showtime_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_showtime_value']['default_date'] = 'now';

  /* Display: Showtimes by Day */
  $handler = $view->new_display('block', 'Showtimes by Day', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['relationships']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'location' => 'location',
    'tags' => 0,
  );

  /* Display: Showtimes by Film */
  $handler = $view->new_display('block', 'Showtimes by Film', 'by_film');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'film-showtimes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_showtime',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    2 => array(
      'field' => 'field_showtime_2',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    3 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Day */
  $handler->display->display_options['fields']['field_showtime']['id'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_showtime']['label'] = '';
  $handler->display->display_options['fields']['field_showtime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_showtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Weekday */
  $handler->display->display_options['fields']['field_showtime_2']['id'] = 'field_showtime_2';
  $handler->display->display_options['fields']['field_showtime_2']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime_2']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime_2']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime_2']['ui_name'] = 'Weekday';
  $handler->display->display_options['fields']['field_showtime_2']['label'] = '';
  $handler->display->display_options['fields']['field_showtime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_showtime_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_showtime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_showtime_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_2']['settings'] = array(
    'format_type' => 'short_weekday',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Time */
  $handler->display->display_options['fields']['field_showtime_1']['id'] = 'field_showtime_1';
  $handler->display->display_options['fields']['field_showtime_1']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_showtime_1']['label'] = '';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['text'] = '[field_showtime_1-value]';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_showtime_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_showtime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'film' => 'film',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Showtime (field_showtime) */
  $handler->display->display_options['filters']['field_showtime_value']['id'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['filters']['field_showtime_value']['field'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['filters']['field_showtime_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_showtime_value']['default_date'] = 'today';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_location' => 'field_location',
    'title' => 'title',
    'field_showtime_1' => 'field_showtime_1',
    'nothing' => 'nothing',
    'field_showtime' => 'field_showtime',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_showtime_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_showtime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Date */
  $handler->display->display_options['fields']['field_showtime']['id'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime']['ui_name'] = 'Date';
  $handler->display->display_options['fields']['field_showtime']['label'] = '';
  $handler->display->display_options['fields']['field_showtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Time */
  $handler->display->display_options['fields']['field_showtime_1']['id'] = 'field_showtime_1';
  $handler->display->display_options['fields']['field_showtime_1']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_showtime_1']['label'] = '';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['text'] = '[field_showtime_1-value]';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_showtime_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_showtime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Showtime (field_showtime) */
  $handler->display->display_options['sorts']['field_showtime_value']['id'] = 'field_showtime_value';
  $handler->display->display_options['sorts']['field_showtime_value']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['sorts']['field_showtime_value']['field'] = 'field_showtime_value';
  $handler->display->display_options['sorts']['field_showtime_value']['relationship'] = 'field_film_showtimes_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'film' => 'film',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Showtime (field_showtime) */
  $handler->display->display_options['filters']['field_showtime_value']['id'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['filters']['field_showtime_value']['field'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['filters']['field_showtime_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_showtime_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_showtime_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'films';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Films';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['showtimes'] = $view;

  return $export;
}
