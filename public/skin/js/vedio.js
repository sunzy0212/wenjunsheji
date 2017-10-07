$(function(){
	$(".mainContent:eq(0)").show();
	$(".mainHead .child").click(function(){
		var index=$(".mainHead .child").index($(this));
		$(".mainHead .child").not($(".mainHead .child:eq("+index+")")).removeClass("on");
		$(this).addClass("on");
		$(".mainContent").not($(".mainContent:eq("+index+")")).slideUp(500);
		$(".mainContent:eq("+index+")").slideDown(500);
	});
});