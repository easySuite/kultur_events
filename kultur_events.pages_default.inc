<?php
/**
 * @file
 * kultur_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function kultur_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_events_kultur_en_';
  $page->task = 'page';
  $page->admin_title = 'Ding events (KulturØen)';
  $page->admin_description = 'Display the events';
  $page->path = 'arrangementer-liste';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_events_kultur_en___panel_context_4fd39123-835b-48fa-aaa6-459d79aa8d00';
  $handler->task = 'page';
  $handler->subtask = 'ding_events_kultur_en_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Ding events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Home
Events
%tid:name',
    'panels_breadcrumbs_paths' => '<front>
events
<none>',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Events | [current-page:pager][site:name]',
        ),
      ),
    ),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'kulturoen_dk' => 'kulturoen_dk',
              'midbib_stg_easysuite_dk' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd49a3b8f-8e68-4ec6-8382-b2d01945b356';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65c1ae87-e0fb-4ac6-90e1-45f01f68a428';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-54d5f52b8dedb6c10b7dceb9c0e7bb1f';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65c1ae87-e0fb-4ac6-90e1-45f01f68a428';
    $display->content['new-65c1ae87-e0fb-4ac6-90e1-45f01f68a428'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-65c1ae87-e0fb-4ac6-90e1-45f01f68a428';
    $pane = new stdClass();
    $pane->pid = 'new-fb32e006-e3f2-4f14-a1a2-0513758f77e8';
    $pane->panel = 'left_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'fb32e006-e3f2-4f14-a1a2-0513758f77e8';
    $display->content['new-fb32e006-e3f2-4f14-a1a2-0513758f77e8'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-fb32e006-e3f2-4f14-a1a2-0513758f77e8';
    $pane = new stdClass();
    $pane->pid = 'new-6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff';
    $pane->panel = 'main_content';
    $pane->type = 'menu_title';
    $pane->subtype = 'menu_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff';
    $display->content['new-6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff'] = $pane;
    $display->panels['main_content'][0] = 'new-6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff';
    $pane = new stdClass();
    $pane->pid = 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'kultur_events-kultur_event_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5d683c57-a79e-4d16-9046-d2dc04a557d5';
    $display->content['new-5d683c57-a79e-4d16-9046-d2dc04a557d5'] = $pane;
    $display->panels['main_content'][1] = 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_events_kultur_en_'] = $page;

  return $pages;

}
