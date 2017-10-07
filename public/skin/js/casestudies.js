
function caseTop(id){
	
	 var top=parseInt($("#case"+id).offset().top);

	 var headerTop=parseInt($(".header").css("height"));
	 top=top-headerTop;
	
	 $('html,body').animate({scrollTop:top+"px"},200);
}