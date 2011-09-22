// $Id$
(function ($) {
  
Drupal.behaviors.searchCookie = {
  attach: function (context, settings) {
    $('.search-history', context).once('span', function () {
      $(this).replaceWith($.cookie('Drupal.visitor.recent_search'));
    });
  }
};

})(jQuery);
