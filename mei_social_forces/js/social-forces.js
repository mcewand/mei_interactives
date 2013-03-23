(function($) {

    $(window).ready( function(){        
        //hide internal parts of the view
        $('.view-social-forces2 .internal').hide(); 

        //offset of first element
        var first = $('.view-social-forces2 .container:first').offset().left;
        var offset = 0;
        var count = 0;
        var windowRow = 1;

       $('.container').each(function () {

           //get offset            
           offset = $(this).offset().left;
           if(count > 0 && offset == first)
           {
              //add display window after first break
              $('.view-social-forces2 .container:nth-child(' + count + ')').after('<div id="sf-full-'+  windowRow + '"><div class="sf-close">close</div><div id="inner"></div></div>');
              windowRow++;
           }
           count++;
        }); 

        $(function(){
            $('.view-social-forces2 .container').hover(function() {
                if (!$(this).hasClass('clickActive')) {
                    $('.view-social-forces2 .container').not(this).css({opacity: 0.5});
                    $(this).find('.target').animate({"margin-top":"15px"}, "slow");
                }
            }, function(){
                if (!$(this).hasClass('clickActive')) {
                    $(this).find('.target').animate({"margin-top":"145px"}, "slow");
                }
                $('.view-social-forces2 .container').not(this).css({opacity: 1});        
            });
        });

        $(function(){
            $('.view-social-forces2 .container').bind('click', function(){          
                $('.container.clickActive').find('.target').animate({"margin-top":"145px"}, "slow");
                $('.container').not(this).removeClass('clickActive');
                      
                $(this).addClass('clickActive');            

                // slide out the container if it isn't already                
                if($('#sf-full-1').css('height') == '0px') {
                    $('#sf-full-1').show().animate({"height":"400px"}, "slow");
                }
                
                $('#sf-full-1 #inner').children().remove();
                
                // clone the loaded views data and add it to the container
                $('#sf-full-1 #inner').append($(this).clone().children('.internal'));
                $('#sf-full-1 #inner').find('div').show();

                //add accordion handler after object has loaded
                $(function(){
                    var allPanels = $('.accordion > div').hide();
                    $('#sf-full-1 .accordion h3').bind('click', function(){
                        $this = $(this);
                        $target =  $this.next();

                        if(!$target.hasClass('active')){
                           allPanels.removeClass('active').slideUp();
                           $target.addClass('active').slideDown();
                        }
                        
                        return false;
                    });
                }); 

                return false;
            });
        });
        
        $(function(){
            $('#sf-full-1 .sf-close').bind('click', function(){ 
             
                $('.container.clickActive').find('.target').animate({"margin-top":"145px"}, "slow");
                $('.container').removeClass('clickActive');
                          
                $('#sf-full-1').animate({"height":"0px"}, "slow").slideUp();
            });
        });    



    });

}(jQuery));

