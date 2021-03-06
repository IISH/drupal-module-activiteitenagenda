<?php
/**
 * @file
 * iishagenda_event.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iishagenda_event_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-agenda_evenement-toevoegen:node/add/event
  $menu_links['menu-agenda_evenement-toevoegen:node/add/event'] = array(
    'menu_name' => 'menu-agenda',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Evenement toevoegen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-agenda_evenement-toevoegen:node/add/event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Evenement toevoegen');

  return $menu_links;
}
