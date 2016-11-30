--称号表
 local autoTable = {
	["391001"] = {
		name = "超凡入圣",
		type = "userLv",
		quality = 5,
		rank = 1,
		kind = "userLv",
		describe = "等级经验排名第一名",
	},
	["391002"] = {
		name = "神乎其技",
		type = "userLv",
		quality = 4,
		rank = 2,
		kind = "userLv",
		describe = "等级经验排名第二名",
	},
	["391003"] = {
		name = "天人合一",
		type = "userLv",
		quality = 4,
		rank = 3,
		kind = "userLv",
		describe = "等级经验排名第三名",
	},
	["391004"] = {
		name = "声名鹊起",
		type = "userLv",
		quality = 3,
		min = 4,
		max = 10,
		kind = "userLv",
		describe = "等级经验排名第四至第十名",
	},
	["391005"] = {
		name = "豁然贯通",
		type = "userLv",
		quality = 2,
		min = 11,
		max = 50,
		kind = "userLv",
		describe = "等级经验排名十一至五十名",
	},
	["391006"] = {
		name = "略有小成",
		type = "userLv",
		quality = 1,
		min = 51,
		max = 500,
		kind = "userLv",
		describe = "经验等级排名五十一至五百名",
	},
	["391007"] = {
		name = "无敌战神",
		type = "userForce",
		quality = 5,
		rank = 1,
		kind = "userForce",
		describe = "战斗力排名第一名",
	},
	["391008"] = {
		name = "扬名九州",
		type = "userForce",
		quality = 4,
		rank = 2,
		kind = "userForce",
		describe = "战斗力排名第二名",
	},
	["391009"] = {
		name = "威震八方",
		type = "userForce",
		quality = 4,
		rank = 3,
		kind = "userForce",
		describe = "战斗力排名第三名",
	},
	["391010"] = {
		name = "英雄豪杰",
		type = "userForce",
		quality = 3,
		min = 4,
		max = 10,
		kind = "userForce",
		describe = "战斗力排名第四至第十名",
	},
	["391011"] = {
		name = "出类拔萃",
		type = "userForce",
		quality = 2,
		min = 11,
		max = 50,
		kind = "userForce",
		describe = "战斗力排名十一至五十名",
	},
	["391012"] = {
		name = "潜力新人",
		type = "userForce",
		quality = 1,
		min = 51,
		max = 100,
		kind = "userForce",
		describe = "战斗力排名五十一至一百名",
	},
	["391013"] = {
		name = "女神",
		type = "charm",
		sex = 0,
		quality = 5,
		rank = 1,
		kind = "charm",
		describe = "魅力排行榜第一名",
	},
	["391014"] = {
		name = "九天仙女",
		type = "charm",
		sex = 0,
		quality = 4,
		rank = 2,
		kind = "charm",
		describe = "魅力排行榜第二名",
	},
	["391015"] = {
		name = "鲜花女王",
		type = "charm",
		sex = 0,
		quality = 4,
		rank = 3,
		kind = "charm",
		describe = "魅力排行榜第三名",
	},
	["391016"] = {
		name = "鲜花公主",
		type = "charm",
		sex = 0,
		quality = 3,
		min = 4,
		max = 10,
		kind = "charm",
		describe = "魅力排行榜四至十名",
	},
	["391017"] = {
		name = "花仙子",
		type = "charm",
		sex = 0,
		quality = 2,
		min = 11,
		max = 50,
		kind = "charm",
		describe = "魅力排行榜十一至五十名",
	},
	["391018"] = {
		name = "性感迷人",
		type = "charm",
		sex = 0,
		quality = 1,
		min = 51,
		max = 100,
		kind = "charm",
		describe = "魅力排行榜五十一至一百名",
	},
	["391019"] = {
		name = "花帝",
		type = "charm",
		sex = 1,
		quality = 5,
		rank = 1,
		kind = "charm",
		describe = "魅力排行榜第一名",
	},
	["391020"] = {
		name = "貌赛潘安",
		type = "charm",
		sex = 1,
		quality = 4,
		rank = 2,
		kind = "charm",
		describe = "魅力排行榜第二名",
	},
	["391021"] = {
		name = "翩翩君子",
		type = "charm",
		sex = 1,
		quality = 4,
		rank = 3,
		kind = "charm",
		describe = "魅力排行榜第三名",
	},
	["391022"] = {
		name = "人气天王",
		type = "charm",
		sex = 1,
		quality = 3,
		min = 4,
		max = 10,
		kind = "charm",
		describe = "魅力排行榜四至十名",
	},
	["391023"] = {
		name = "英俊潇洒",
		type = "charm",
		sex = 1,
		quality = 2,
		min = 11,
		max = 50,
		kind = "charm",
		describe = "魅力排行榜十一至五十名",
	},
	["391024"] = {
		name = "温文尔雅 ",
		type = "charm",
		sex = 1,
		quality = 1,
		min = 51,
		max = 100,
		kind = "charm",
		describe = "魅力排行榜五十一至一百名",
	},
	["391025"] = {
		name = "仙童",
		type = "status",
		quality = 4,
		rank = 1,
		kind = "status",
		describe = "仙职达到仙童境界",
	},
	["391026"] = {
		name = "仙官",
		type = "status",
		quality = 4,
		rank = 2,
		kind = "status",
		describe = "仙职达到仙官境界",
	},
	["391027"] = {
		name = "天将",
		type = "status",
		quality = 4,
		rank = 3,
		kind = "status",
		describe = "仙职达到天将境界",
	},
	["391028"] = {
		name = "星君",
		type = "status",
		quality = 4,
		rank = 4,
		kind = "status",
		describe = "仙职达到星君境界",
	},
	["391029"] = {
		name = "正神",
		type = "status",
		quality = 4,
		rank = 5,
		kind = "status",
		describe = "仙职达到正神境界",
	},
	["391030"] = {
		name = "天君",
		type = "status",
		quality = 5,
		rank = 6,
		kind = "status",
		describe = "仙职达到天君境界",
	},
	["391031"] = {
		name = "天王",
		type = "status",
		quality = 5,
		rank = 7,
		kind = "status",
		describe = "仙职达到天王境界",
	},
	["391032"] = {
		name = "大帝",
		type = "status",
		quality = 5,
		rank = 8,
		kind = "status",
		describe = "仙职达到大帝境界",
	},
	["391033"] = {
		name = "天帝",
		type = "status",
		quality = 5,
		rank = 9,
		kind = "status",
		describe = "仙职达到天帝境界",
	},
	["391034"] = {
		name = "天尊",
		type = "status",
		quality = 5,
		rank = 10,
		kind = "status",
		describe = "仙职达到天尊境界",
	},
	["391035"] = {
		name = "不败神话",
		type = "topwin",
		quality = 5,
		rank = 1,
		kind = "arena",
		describe = "最高连胜排名第一",
	},
	["391036"] = {
		name = "最强羽灵",
		type = "archer",
		quality = 5,
		rank = 1,
		kind = "arena",
		describe = "竞技场最强的羽灵",
	},
	["391037"] = {
		name = "最强御魂",
		type = "taoist",
		quality = 5,
		rank = 1,
		kind = "arena",
		describe = "竞技场最强的御魂",
	},
	["391038"] = {
		name = "最强极武",
		type = "warrior",
		quality = 5,
		rank = 1,
		kind = "arena",
		describe = "竞技场最强的极武",
	},
	["391039"] = {
		name = "洪荒霸者",
		type = "toprank",
		quality = 5,
		rank = 1,
		kind = "arena",
		describe = "竞技场排名第一",
	},
	["391040"] = {
		name = "铁匠",
		type = "npc",
		quality = 5,
	},
	["391041"] = {
		name = "酒馆",
		type = "npc",
		quality = 5,
	},
	["391042"] = {
		name = "道具",
		type = "npc",
		quality = 5,
	},
	["391043"] = {
		name = "交易行",
		type = "npc",
		quality = 5,
	},
	["391044"] = {
		name = "军需官",
		type = "npc",
		quality = 5,
	},
	["391045"] = {
		name = "官职竞选",
		type = "npc",
		quality = 5,
	},
	["391046"] = {
		name = "祈福",
		type = "npc",
		quality = 5,
	},
	["391047"] = {
		name = "势力捐献",
		type = "npc",
		quality = 5,
	},
	["391101"] = {
		name = "传奇城主",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个成为城主",
	},
	["391102"] = {
		name = "仙境传说",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个进入太虚仙境",
	},
	["391103"] = {
		name = "登峰造极",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个等级达到100级",
	},
	["391104"] = {
		name = "上古大帝",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个仙职达到天帝境界",
	},
	["391105"] = {
		name = "上古天帝",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个仙职达到天帝境界",
	},
	["391106"] = {
		name = "上古天尊",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个仙职达到天尊境界",
	},
	["391107"] = {
		name = "上古战神",
		type = "honor",
		quality = 5,
		rank = 1,
		kind = "honor",
		describe = "第一个战斗力达到10万",
	},
	["391108"] = {
		name = "上善若水",
		type = "welldoer",
		quality = 5,
		rank = 1,
		kind = "welldoer",
		describe = "在积善成德活动中获得积善第一人的称号",
	},
	["391109"] = {
		name = "大德善人",
		type = "welldoer",
		quality = 5,
		rank = 2,
		kind = "welldoer",
		describe = "在积善成德活动中获得积善第二的称号",
	},
	["391110"] = {
		name = "古道热肠",
		type = "welldoer",
		quality = 5,
		rank = 3,
		kind = "welldoer",
		describe = "在积善成德活动中获得积善第三的称号",
	},
	["391111"] = {
		name = "乐善好施",
		type = "welldoer",
		quality = 5,
		rank = 4,
		kind = "welldoer",
		describe = "在积善成德活动中获得积善第四的称号",
	},
	["391112"] = {
		name = "乐于助人",
		type = "welldoer",
		quality = 5,
		rank = 5,
		kind = "welldoer",
		describe = "在积善成德活动中获得积善第四的称号",
	},
}

function GetTable()
	return autoTable
end