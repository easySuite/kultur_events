(function ($) {
  'use strict';
  Drupal.behaviors.kultur_events_filtering = {
    attach: function (context, settings) {
      var params;
      var values = [];
      // Filter categories based on the selected library.
      var items = $('#edit-og-group-ref-target-id-entityreference-filter-wrapper', context).find(':checkbox');
      if (items.length > 0) {
        $.each(items, function (i, val) {
          $(val).on('click', function () {
            var status = $(val).attr('checked');

            var box_val = $(val).val();
            values.push(box_val);

            if (status === 'checked') {
              params = '/' + values;
            }
            else if (status !== 'checked' && values.length !== 0) {
              params = '/' + values.remove(box_val);
              if (values.length === 0) {
                params = '/all';
              }
            }

            var default_categories = [];
            var categories = $('#edit-field-ding-event-category-tid-wrapper', context).find(':checkbox');
            if (categories.length > 0) {
              $.each(categories, function (i, val) {
                if ($(val).attr('checked')) {
                  default_categories.push($(val).val());
                }
              });
            }

            $.ajax({
              type: 'GET',
              url: 'filter_categories' + params + '/' + default_categories.join(),
              success: function (data) {
                if (data.length > 1) {
                  $('#filter_categories').html(data[1].data);
                }
                else {
                  $('#filter_categories').html('<p>' + Drupal.t('No categories present.') +'</p>');
                }
              }
            });
          });
        });
      }

      // Filter libraries based on the selected categories.
      $('#edit-field-ding-event-category-tid-wrapper', context).once(function(){
        var items = $(this).find(':checkbox');
        $.each(items, function(i, val) {
          $(val).click(function() {
            var status = $(val).attr('checked');

            var box_val = $(val).val();
            values.push(box_val);

            if (status === 'checked') {
              params = '/' + values;
            }
            else if (status !== 'checked' && values.length !== 0) {
              params = '/' + values.remove(box_val);
              if (values.length === 0) {
                params = '/all';
              }
            }
            $.ajax({
              type: 'GET',
              url: 'filter_libraries' + params,
              success: function (data) {
                if (data.length > 1) {
                  $('#filter_libraries').html(data[1].data);
                }
                else {
                  $('#filter_libraries').html('<p>' + Drupal.t('No libraries present.') +'</p>');
                }
              }
            });
          });
        });
      });
    }
  };

  Array.prototype.remove = function () {
    var what, a = arguments, L = a.length, ax;
    while (L && this.length) {
      what = a[--L];
      while ((ax = this.indexOf(what)) !== -1) {
        this.splice(ax, 1);
      }
    }
    return this;
  };
})(jQuery);
