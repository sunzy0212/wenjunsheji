$(function(){
	$(".main .head .banner img:eq(0)").show();
	$(".main .head .childs .child").click(function(){
		var index=$(".main .head .childs .child").index($(this));
		$(".main .head .banner img").not($(".main .head .banner img:eq("+index+")")).hide();
		$(".main .head .banner img:eq("+index+")").fadeIn(500);
	});
	
	$(".main .content .left li").click(function(){
		var index=$(".main .content .left li").index($(this));
		$(".main .content .right .child").not($(".main .content .right .child:eq("+index+")")).hide();
		$(".main .content .right .child:eq("+index+")").show();
	});
});