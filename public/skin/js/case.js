$(function(){
	$(".main .left .childTitle").click(function(){
		var parent=$(this).parent();
		$(".main .left .childContent").not(parent.find(".childContent")).slideUp(500);
		$(".main .left .childTitle img").not($(this).find("img")).removeClass("on");
		parent.find(".childContent").slideToggle(500);
		$(this).find("img").toggleClass("on");
	});
});