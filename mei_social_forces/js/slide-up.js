(function($) {
    $(function(){
        $('.view-social-forces .container').hover(function() {
            $('.view-social-forces .container').not(this).css({opacity: 0.5});
            $(this).find('.target').animate({"margin-top":"-=200"}, "slow");
        }, function(){
            $(this).find('.target').animate({"margin-top":"+=200"}, "slow");
            $('.view-social-forces .container').not(this).css({opacity: 1});
        });
    });
    $(function(){
        $('.view-social-forces h2.target').bind('click', function(){          
            $(this).find('a.lightbox-processed').click();    
        });    
       
    });
}(jQuery));
