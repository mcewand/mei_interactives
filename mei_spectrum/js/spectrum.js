(function($) {
    $(window).ready( function(){        
        //hide point titles
        $('.view-political-parties .point .views-field-title').hide(); 
        //fade in points     
        $('.view-political-parties .point').show(3000);

        elements = $('.view-political-parties .view-content').children();
        elements.each( function () {
            pos = $(this).attr("class")
            distance = parseInt(pos.match(/(\d+(?=\-[w]))/g));
            $(this).animate({"margin-left":distance + "%"}, 4000);
        });

        $(function(){
            var allNodes = $('.spectrum-item').hide();
            $('.point').click(function() {                  
                allClasses = $(this).attr("class")
                nid = allClasses.match(/(\d+(?=\-[nid]))/g);

                target = '#' + nid + '-nid';
                //$(target).toggle();
               
                if(!$(target).hasClass('active')){
                   allNodes.removeClass('active').hide(1000);
                   $(target).addClass('active').show(1000);
                }
                
                
                return false;
            });
        });
        
        //coalition checkbox handler
        $(function(){
            $('.view-political-parties #coalitions span').click(function() {
                $(this).addClass('active').css({opacity: 1});
                //dim all others
                $('#coalitions span').not($(this)).removeClass('active').css({opacity: .6});
                             
                var target = $(this).attr('id');
                if (target == "coalition-all") {
                    $('.point').animate({"opacity": "1"},700).show();                
                } else {
                  $('.' + target).animate({"opacity": "1"},700).show();
                  $('.point').not('.' + target).animate({"opacity": ".1"},700).hide();
                }
                
            });
        });

        // accordion handler for issues, quotes, and key figures
        $(function(){
            var allPanels = $('.accordion > div').hide();
            $('.accordion > h3').click(function() {
                $this = $(this);
                $target =  $this.next();

                if(!$target.hasClass('active')){
                   allPanels.removeClass('active').slideUp();
                   $target.addClass('active').slideDown();
                }
                
                return false;
            });
        });
        $(function(){
            $('.view-political-parties .point').hover(function() {
                $(this).children('.views-field-title').show();
                $('.view-political-parties .point').not(this).animate({"opacity": "0.5"},100);
                $('.view-political-parties .point').not(this).css({"z-index": "1"});
                
            }, function(){
                 $(this).children('.views-field-title').hide();
                $('.view-political-parties .point').not(this).animate({"opacity": "1"},400);
                $('.view-political-parties .point').not(this).css({"z-index": "2"});
            });
        });


    });
}(jQuery));


