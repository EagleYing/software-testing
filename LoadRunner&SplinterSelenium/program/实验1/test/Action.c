Action()
{

	web_add_cookie("kqNd_2132_sid=Qi4I76; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_saltkey=gYb7KlyQ; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastvisit=1513735775; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_lastact=1513739375%09home.php%09misc; DOMAIN=my.nuaa.edu.cn");

	web_add_cookie("kqNd_2132_sendmail=1; DOMAIN=my.nuaa.edu.cn");


	web_url("portal.php",
		"URL=http://my.nuaa.edu.cn/portal.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/template/newzfj/images/bgimg.jpg", ENDITEM,
		"URL=/template/newzfj/images/toptb.png", ENDITEM,
		"URL=/template/newzfj/images/search.png", ENDITEM,
		"URL=/static/image/common/px.png", ENDITEM,
		"URL=/static/image/common/newarow.gif", ENDITEM,
		"URL=/template/newzfj/images/weather.png", ENDITEM,
		"URL=/static/image/common/qmenu.png", ENDITEM,
		"URL=/data/cache/common_extra.js?hkZ", ENDITEM,
		"URL=/static/image/common/dot.gif", ENDITEM,
		"URL=/static/image/common/scrolltop.png", ENDITEM,
		LAST);

	web_url("none",
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://my.nuaa.edu.cn/portal.php",
		"Mode=HTML",
		EXTRARES,
		"URL=/favicon.ico", ENDITEM,
		LAST);

	web_url("sso",
		"URL=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://my.nuaa.edu.cn/portal.php",
		"Snapshot=t2.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=resources/js/base64.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", ENDITEM,
		"URL=resources/js/ieBetter.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", ENDITEM,
		"URL=resources/js/html5.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", ENDITEM,
		"URL=resources/js/classList.min.js", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", ENDITEM,
		"URL=../template/zfj4.0/images/bg.png", "Referer=http://my.nuaa.edu.cn/sso/?page=login&redirect_uri=L3BsdWdpbi5waHA/aWQ9c3lubG9naW46bG9naW5jaGVjayZyZWRpcmVjdF91cmk9TDNCdmNuUmhiQzV3YUhBPQ==", ENDITEM,
		LAST);

	lr_think_time(13);

	lr_start_transaction("login");

	lr_rendezvous("login");
	web_submit_form("sso_2",
		"Ordinal=1",
		"Snapshot=t3.inf",
		ITEMDATA,
		"Name=username", "Value={NewParam}", ENDITEM,
		"Name=password", "Value={NewParam_2}", ENDITEM,
		LAST);

	web_find("web_find",
		"What=»ý·Ö",
		LAST);
	web_add_cookie("kqNd_2132_lastact=1513739429%09portal.php%09; DOMAIN=my.nuaa.edu.cn");

	web_url("plugin.php",
		"URL=http://my.nuaa.edu.cn/plugin.php?id=synlogin:logincheck&redirect_uri=L3BvcnRhbC5waHA=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t4.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/template/newzfj/images/switch_style.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/common/arrwd.gif", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/template/newzfj/images/setup.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/template/newzfj/images/myrepeats.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/template/newzfj/images/extra.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/template/newzfj/images/logout.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/common/ico_notice.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/common/close.gif", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/mark_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/task_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/friend_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/template/newzfj/images/notice_pm.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/Qdao.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/magic_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/favorite_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/feed/medal_b.png", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		"URL=/static/image/common/user_online.gif", "Referer=http://my.nuaa.edu.cn/portal.php", ENDITEM,
		LAST);

	web_url("none_2",
		"URL=http://my.nuaa.edu.cn/template/newzfj/images/none",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://my.nuaa.edu.cn/portal.php",
		"Mode=HTML",
		LAST);

	lr_end_transaction("login", LR_AUTO);

return 0;
}
