(function ($) {
  'use strict';
  Drupal.behaviors.kultur_events_filtering = {
    attach: function (context, settings) {
      let params = [];

      // Filter categories based on the selected library.
      let libraries_wrapper = $('#edit-og-group-ref-target-id-entityreference-filter-wrapper', context);
      let checked = libraries_wrapper.find(':checkbox:checked');

      // Gathers all checked library items.
      let library_args = 'all';
      if (checked.length > 0) {
        $.each(checked, function () {
          params.push($(this).val());
        });
        library_args = params.join();
      }

      // Keep all checked categories.
      params = [];
      let categories_wrapper = $('#edit-field-ding-event-category-tid-wrapper', context).find(':checkbox:checked');
      if (categories_wrapper.length > 0) {
        $.each(categories_wrapper, function (i, val) {
          params.push($(val).val());
        });
      }

      let category_args = 'all';
      if (params.length > 0) {
        category_args = params.join();
      }

      // Make ajax request and replace div.
      if (libraries_wrapper.length > 0) {
        $.ajax({
          type: 'GET',
          url: `kultur/filter/${library_args}/${category_args}`,
          success: function (data) {
            $.each(data, function (i, value){
              if (value.command === 'insert') {
                $(value.selector).html(value.data);
              }
            });
          }
        });
      }
    }
  };
})(jQuery);
