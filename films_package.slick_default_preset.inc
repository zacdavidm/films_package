<?php
/**
 * @file
 * films_package.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function films_package_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'filmslider';
  $preset->label = 'Film Slider';
  $preset->breakpoints = 1;
  $preset->skin = 'default';
  $preset->options = array(
    'general' => array(
      'normal' => '',
      'template_class' => '',
      'goodies' => array(
        'pattern' => 0,
        'arrow-down' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'accessibility' => 1,
      'autoplay' => 0,
      'pauseOnHover' => 1,
      'pauseOnDotsHover' => 0,
      'autoplaySpeed' => '3000',
      'arrows' => 1,
      'appendArrows' => '$(element)',
      'prevArrow' => '<button type="button" class="slick-prev">Previous</button>',
      'nextArrow' => '<button type="button" class="slick-next">Next</button>',
      'centerMode' => 0,
      'centerPadding' => '50px',
      'cssEase' => 'ease',
      'dots' => 0,
      'dotsClass' => 'slick-dots',
      'draggable' => 1,
      'easing' => 'linear',
      'fade' => 0,
      'infinite' => 1,
      'lazyLoad' => 'ondemand',
      'slide' => 'div',
      'slidesToShow' => '4',
      'slidesToScroll' => '4',
      'speed' => '300',
      'swipe' => 1,
      'touchMove' => 1,
      'touchThreshold' => '5',
      'useCSS' => 1,
      'vertical' => 0,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => '650',
          'settings' => array(
            'accessibility' => 1,
            'autoplay' => 0,
            'pauseOnHover' => 1,
            'pauseOnDotsHover' => 0,
            'autoplaySpeed' => '3000',
            'arrows' => 1,
            'centerMode' => 0,
            'centerPadding' => '50px',
            'cssEase' => 'ease',
            'dots' => 0,
            'draggable' => 1,
            'easing' => 'linear',
            'fade' => 0,
            'infinite' => 1,
            'slidesToShow' => '2',
            'slidesToScroll' => '2',
            'speed' => '300',
            'swipe' => 1,
            'touchMove' => 1,
            'touchThreshold' => '5',
            'useCSS' => 1,
            'vertical' => 0,
          ),
        ),
      ),
    ),
    'options__active_tab' => 'edit-options-general',
  );
  $export['filmslider'] = $preset;

  return $export;
}
