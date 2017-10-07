<?php
$z[0]=Array("global","",264,290);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",334,364);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",450,477);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("channelartlist","\r\n    <li class=\"child\"> <a href=\"{dede:field name='typeurl'/}\">\r\n      <p class=\"title\">{dede:field name='typename'/}</p>\r\n      </a>\r\n      <ul class=\"childContent\">\r\n        {dede:channel type='son' noself='yes'} <a href=\"[field:typeurl/]\">\r\n        <li class=\"childContentLi\">[field:typename/]</li>\r\n        </a> {/dede:channel}\r\n      </ul>\r\n      <img class=\"wapNavPointer\" src=\"/skin/images/wapnavpointer.jpg\" /> </li>\r\n    ",2462,2949);
$z[3][4]['typeid']="top";
$z[4]=Array("global","",3228,3253);
$z[4][4]['name']="cfg_cmsurl";
$z[5]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),700)'/]\r\n        ",6238,6389);
$z[5][4]['sql']="Select content from dede_arctype where id=24";
$z[6]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),700)'/]\r\n        ",6779,6929);
$z[6][4]['sql']="Select content from dede_arctype where id=1";
$z[7]=Array("arclist"," <a href=\"[field:arcurl/]\">\r\n    <div class=\"child\" id=\"work[field:global name=autoindex runphp=\"yes\"]@me=@me+1;[/field:global]\"> <img class=\"childImg\" src=\"[field:picname/]\" />\r\n      <p class=\"childTitle\">[field:title/]</p>\r\n      <img class=\"childFoot\" src=\"/skin/images/projectfixed.png\" /> <img class=\"childRight\" src=\"/skin/images/projecticon.png\" />\r\n      <div class=\"childHide\"></div>\r\n      <img class=\"childSearch\" src=\"/skin/images/projectsearch.png\" />\r\n      <div class=\"childSearchBg\"></div>\r\n    </div>\r\n    </a> ",9918,10506);
$z[7][4]['row']="6";
$z[7][4]['titlelen']="32";
$z[7][4]['typeid']="20";
$z[8]=Array("arclist"," <a href=\"[field:arcurl/]\">\r\n    <div class=\"child\" id=\"work[field:global name=autoindex runphp=\"yes\"]@me=@me+1;[/field:global]\"> <img class=\"childImg\" src=\"[field:picname/]\" />\r\n      <p class=\"childTitle\">[field:title/]</p>\r\n      <img class=\"childFoot\" src=\"/skin/images/projectfixed.png\" /> <img class=\"childRight\" src=\"/skin/images/projecticon.png\" />\r\n      <div class=\"childHide\"></div>\r\n      <img class=\"childSearch\" src=\"/skin/images/projectsearch.png\" />\r\n      <div class=\"childSearchBg\"></div>\r\n    </div>\r\n    </a> ",10689,11277);
$z[8][4]['row']="6";
$z[8][4]['titlelen']="32";
$z[8][4]['typeid']="26";
$z[9]=Array("include","",11333,11370);
$z[9][4]['filename']="footer.htm";

?>