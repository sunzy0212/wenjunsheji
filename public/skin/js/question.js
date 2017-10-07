$(function(){
	$(".main .content .child .childIcon").click(function(){
		$(this).toggleClass("on");
		$(this).parent().parent().find(".childContent").stop(false,true).slideToggle(100);
	});
	$(".main .mainNav .child").click(function(){
		var index=$(".main .mainNav .child").index($(this));
		$(".main .content").not($(".main .content:eq("+index+")")).hide();
		$(".main .content:eq("+index+")").fadeIn(500);
		$(".main .mainNav .child").not($(this)).removeClass("on");
		$(this).addClass("on");
	});
});