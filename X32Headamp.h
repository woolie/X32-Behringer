/*
 * X32Headamp.h
 *
 *  Created on: 4 févr. 2015
 *      Author: patrick
 */

#ifndef X32HEADAMP_H_
#define X32HEADAMP_H_

X32command Xheadamp[] = {
		{"/headamp",							{HAMP}, F_FND, {0}},
		{"/headamp/000",						{HAMP}, F_FND, {0}},
		{"/headamp/000/gain",				{F32}, F_XET, {0}},
		{"/headamp/000/phantom",			{I32}, F_XET, {0}},
		{"/headamp/001",						{HAMP}, F_FND, {0}},
		{"/headamp/001/gain",				{F32}, F_XET, {0}},
		{"/headamp/001/phantom",			{I32}, F_XET, {0}},
		{"/headamp/002",						{HAMP}, F_FND, {0}},
		{"/headamp/002/gain",				{F32}, F_XET, {0}},
		{"/headamp/002/phantom",			{I32}, F_XET, {0}},
		{"/headamp/003",						{HAMP}, F_FND, {0}},
		{"/headamp/003/gain",				{F32}, F_XET, {0}},
		{"/headamp/003/phantom",			{I32}, F_XET, {0}},
		{"/headamp/004",						{HAMP}, F_FND, {0}},
		{"/headamp/004/gain",				{F32}, F_XET, {0}},
		{"/headamp/004/phantom",			{I32}, F_XET, {0}},
		{"/headamp/005",						{HAMP}, F_FND, {0}},
		{"/headamp/005/gain",				{F32}, F_XET, {0}},
		{"/headamp/005/phantom",			{I32}, F_XET, {0}},
		{"/headamp/006",						{HAMP}, F_FND, {0}},
		{"/headamp/006/gain",				{F32}, F_XET, {0}},
		{"/headamp/006/phantom",			{I32}, F_XET, {0}},
		{"/headamp/007",						{HAMP}, F_FND, {0}},
		{"/headamp/007/gain",				{F32}, F_XET, {0}},
		{"/headamp/007/phantom",			{I32}, F_XET, {0}},
		{"/headamp/008",						{HAMP}, F_FND, {0}},
		{"/headamp/008/gain",				{F32}, F_XET, {0}},
		{"/headamp/008/phantom",			{I32}, F_XET, {0}},
		{"/headamp/009",						{HAMP}, F_FND, {0}},
		{"/headamp/009/gain",				{F32}, F_XET, {0}},
		{"/headamp/009/phantom",			{I32}, F_XET, {0}},

		{"/headamp/010",						{HAMP}, F_FND, {0}},
		{"/headamp/010/gain",				{F32}, F_XET, {0}},
		{"/headamp/010/phantom",			{I32}, F_XET, {0}},
		{"/headamp/011",						{HAMP}, F_FND, {0}},
		{"/headamp/011/gain",				{F32}, F_XET, {0}},
		{"/headamp/011/phantom",			{I32}, F_XET, {0}},
		{"/headamp/012",						{HAMP}, F_FND, {0}},
		{"/headamp/012/gain",				{F32}, F_XET, {0}},
		{"/headamp/012/phantom",			{I32}, F_XET, {0}},
		{"/headamp/013",						{HAMP}, F_FND, {0}},
		{"/headamp/013/gain",				{F32}, F_XET, {0}},
		{"/headamp/013/phantom",			{I32}, F_XET, {0}},
		{"/headamp/014",						{HAMP}, F_FND, {0}},
		{"/headamp/014/gain",				{F32}, F_XET, {0}},
		{"/headamp/014/phantom",			{I32}, F_XET, {0}},
		{"/headamp/015",						{HAMP}, F_FND, {0}},
		{"/headamp/015/gain",				{F32}, F_XET, {0}},
		{"/headamp/015/phantom",			{I32}, F_XET, {0}},
		{"/headamp/016",						{HAMP}, F_FND, {0}},
		{"/headamp/016/gain",				{F32}, F_XET, {0}},
		{"/headamp/016/phantom",			{I32}, F_XET, {0}},
		{"/headamp/017",						{HAMP}, F_FND, {0}},
		{"/headamp/017/gain",				{F32}, F_XET, {0}},
		{"/headamp/017/phantom",			{I32}, F_XET, {0}},
		{"/headamp/018",						{HAMP}, F_FND, {0}},
		{"/headamp/018/gain",				{F32}, F_XET, {0}},
		{"/headamp/018/phantom",			{I32}, F_XET, {0}},
		{"/headamp/019",						{HAMP}, F_FND, {0}},
		{"/headamp/019/gain",				{F32}, F_XET, {0}},
		{"/headamp/019/phantom",			{I32}, F_XET, {0}},

		{"/headamp/020",						{HAMP}, F_FND, {0}},
		{"/headamp/020/gain",				{F32}, F_XET, {0}},
		{"/headamp/020/phantom",			{I32}, F_XET, {0}},
		{"/headamp/021",						{HAMP}, F_FND, {0}},
		{"/headamp/021/gain",				{F32}, F_XET, {0}},
		{"/headamp/021/phantom",			{I32}, F_XET, {0}},
		{"/headamp/022",						{HAMP}, F_FND, {0}},
		{"/headamp/022/gain",				{F32}, F_XET, {0}},
		{"/headamp/022/phantom",			{I32}, F_XET, {0}},
		{"/headamp/023",						{HAMP}, F_FND, {0}},
		{"/headamp/023/gain",				{F32}, F_XET, {0}},
		{"/headamp/023/phantom",			{I32}, F_XET, {0}},
		{"/headamp/024",						{HAMP}, F_FND, {0}},
		{"/headamp/024/gain",				{F32}, F_XET, {0}},
		{"/headamp/024/phantom",			{I32}, F_XET, {0}},
		{"/headamp/025",						{HAMP}, F_FND, {0}},
		{"/headamp/025/gain",				{F32}, F_XET, {0}},
		{"/headamp/025/phantom",			{I32}, F_XET, {0}},
		{"/headamp/026",						{HAMP}, F_FND, {0}},
		{"/headamp/026/gain",				{F32}, F_XET, {0}},
		{"/headamp/026/phantom",			{I32}, F_XET, {0}},
		{"/headamp/027",						{HAMP}, F_FND, {0}},
		{"/headamp/027/gain",				{F32}, F_XET, {0}},
		{"/headamp/027/phantom",			{I32}, F_XET, {0}},
		{"/headamp/028",						{HAMP}, F_FND, {0}},
		{"/headamp/028/gain",				{F32}, F_XET, {0}},
		{"/headamp/028/phantom",			{I32}, F_XET, {0}},
		{"/headamp/029",						{HAMP}, F_FND, {0}},
		{"/headamp/029/gain",				{F32}, F_XET, {0}},
		{"/headamp/029/phantom",			{I32}, F_XET, {0}},

		{"/headamp/030",						{HAMP}, F_FND, {0}},
		{"/headamp/030/gain",				{F32}, F_XET, {0}},
		{"/headamp/030/phantom",			{I32}, F_XET, {0}},
		{"/headamp/031",						{HAMP}, F_FND, {0}},
		{"/headamp/031/gain",				{F32}, F_XET, {0}},
		{"/headamp/031/phantom",			{I32}, F_XET, {0}},
		{"/headamp/032",						{HAMP}, F_FND, {0}},
		{"/headamp/032/gain",				{F32}, F_XET, {0}},
		{"/headamp/032/phantom",			{I32}, F_XET, {0}},
		{"/headamp/033",						{HAMP}, F_FND, {0}},
		{"/headamp/033/gain",				{F32}, F_XET, {0}},
		{"/headamp/033/phantom",			{I32}, F_XET, {0}},
		{"/headamp/034",						{HAMP}, F_FND, {0}},
		{"/headamp/034/gain",				{F32}, F_XET, {0}},
		{"/headamp/034/phantom",			{I32}, F_XET, {0}},
		{"/headamp/035",						{HAMP}, F_FND, {0}},
		{"/headamp/035/gain",				{F32}, F_XET, {0}},
		{"/headamp/035/phantom",			{I32}, F_XET, {0}},
		{"/headamp/036",						{HAMP}, F_FND, {0}},
		{"/headamp/036/gain",				{F32}, F_XET, {0}},
		{"/headamp/036/phantom",			{I32}, F_XET, {0}},
		{"/headamp/037",						{HAMP}, F_FND, {0}},
		{"/headamp/037/gain",				{F32}, F_XET, {0}},
		{"/headamp/037/phantom",			{I32}, F_XET, {0}},
		{"/headamp/038",						{HAMP}, F_FND, {0}},
		{"/headamp/038/gain",				{F32}, F_XET, {0}},
		{"/headamp/038/phantom",			{I32}, F_XET, {0}},
		{"/headamp/039",						{HAMP}, F_FND, {0}},
		{"/headamp/039/gain",				{F32}, F_XET, {0}},
		{"/headamp/039/phantom",			{I32}, F_XET, {0}},

		{"/headamp/040",						{HAMP}, F_FND, {0}},
		{"/headamp/040/gain",				{F32}, F_XET, {0}},
		{"/headamp/040/phantom",			{I32}, F_XET, {0}},
		{"/headamp/041",						{HAMP}, F_FND, {0}},
		{"/headamp/041/gain",				{F32}, F_XET, {0}},
		{"/headamp/041/phantom",			{I32}, F_XET, {0}},
		{"/headamp/042",						{HAMP}, F_FND, {0}},
		{"/headamp/042/gain",				{F32}, F_XET, {0}},
		{"/headamp/042/phantom",			{I32}, F_XET, {0}},
		{"/headamp/043",						{HAMP}, F_FND, {0}},
		{"/headamp/043/gain",				{F32}, F_XET, {0}},
		{"/headamp/043/phantom",			{I32}, F_XET, {0}},
		{"/headamp/044",						{HAMP}, F_FND, {0}},
		{"/headamp/044/gain",				{F32}, F_XET, {0}},
		{"/headamp/044/phantom",			{I32}, F_XET, {0}},
		{"/headamp/045",						{HAMP}, F_FND, {0}},
		{"/headamp/045/gain",				{F32}, F_XET, {0}},
		{"/headamp/045/phantom",			{I32}, F_XET, {0}},
		{"/headamp/046",						{HAMP}, F_FND, {0}},
		{"/headamp/046/gain",				{F32}, F_XET, {0}},
		{"/headamp/046/phantom",			{I32}, F_XET, {0}},
		{"/headamp/047",						{HAMP}, F_FND, {0}},
		{"/headamp/047/gain",				{F32}, F_XET, {0}},
		{"/headamp/047/phantom",			{I32}, F_XET, {0}},
		{"/headamp/048",						{HAMP}, F_FND, {0}},
		{"/headamp/048/gain",				{F32}, F_XET, {0}},
		{"/headamp/048/phantom",			{I32}, F_XET, {0}},
		{"/headamp/049",						{HAMP}, F_FND, {0}},
		{"/headamp/049/gain",				{F32}, F_XET, {0}},
		{"/headamp/049/phantom",			{I32}, F_XET, {0}},

		{"/headamp/050",						{HAMP}, F_FND, {0}},
		{"/headamp/050/gain",				{F32}, F_XET, {0}},
		{"/headamp/050/phantom",			{I32}, F_XET, {0}},
		{"/headamp/051",						{HAMP}, F_FND, {0}},
		{"/headamp/051/gain",				{F32}, F_XET, {0}},
		{"/headamp/051/phantom",			{I32}, F_XET, {0}},
		{"/headamp/052",						{HAMP}, F_FND, {0}},
		{"/headamp/052/gain",				{F32}, F_XET, {0}},
		{"/headamp/052/phantom",			{I32}, F_XET, {0}},
		{"/headamp/053",						{HAMP}, F_FND, {0}},
		{"/headamp/053/gain",				{F32}, F_XET, {0}},
		{"/headamp/053/phantom",			{I32}, F_XET, {0}},
		{"/headamp/054",						{HAMP}, F_FND, {0}},
		{"/headamp/054/gain",				{F32}, F_XET, {0}},
		{"/headamp/054/phantom",			{I32}, F_XET, {0}},
		{"/headamp/055",						{HAMP}, F_FND, {0}},
		{"/headamp/055/gain",				{F32}, F_XET, {0}},
		{"/headamp/055/phantom",			{I32}, F_XET, {0}},
		{"/headamp/056",						{HAMP}, F_FND, {0}},
		{"/headamp/056/gain",				{F32}, F_XET, {0}},
		{"/headamp/056/phantom",			{I32}, F_XET, {0}},
		{"/headamp/057",						{HAMP}, F_FND, {0}},
		{"/headamp/057/gain",				{F32}, F_XET, {0}},
		{"/headamp/057/phantom",			{I32}, F_XET, {0}},
		{"/headamp/058",						{HAMP}, F_FND, {0}},
		{"/headamp/058/gain",				{F32}, F_XET, {0}},
		{"/headamp/058/phantom",			{I32}, F_XET, {0}},
		{"/headamp/059",						{HAMP}, F_FND, {0}},
		{"/headamp/059/gain",				{F32}, F_XET, {0}},
		{"/headamp/059/phantom",			{I32}, F_XET, {0}},

		{"/headamp/060",						{HAMP}, F_FND, {0}},
		{"/headamp/060/gain",				{F32}, F_XET, {0}},
		{"/headamp/060/phantom",			{I32}, F_XET, {0}},
		{"/headamp/061",						{HAMP}, F_FND, {0}},
		{"/headamp/061/gain",				{F32}, F_XET, {0}},
		{"/headamp/061/phantom",			{I32}, F_XET, {0}},
		{"/headamp/062",						{HAMP}, F_FND, {0}},
		{"/headamp/062/gain",				{F32}, F_XET, {0}},
		{"/headamp/062/phantom",			{I32}, F_XET, {0}},
		{"/headamp/063",						{HAMP}, F_FND, {0}},
		{"/headamp/063/gain",				{F32}, F_XET, {0}},
		{"/headamp/063/phantom",			{I32}, F_XET, {0}},
		{"/headamp/064",						{HAMP}, F_FND, {0}},
		{"/headamp/064/gain",				{F32}, F_XET, {0}},
		{"/headamp/064/phantom",			{I32}, F_XET, {0}},
		{"/headamp/065",						{HAMP}, F_FND, {0}},
		{"/headamp/065/gain",				{F32}, F_XET, {0}},
		{"/headamp/065/phantom",			{I32}, F_XET, {0}},
		{"/headamp/066",						{HAMP}, F_FND, {0}},
		{"/headamp/066/gain",				{F32}, F_XET, {0}},
		{"/headamp/066/phantom",			{I32}, F_XET, {0}},
		{"/headamp/067",						{HAMP}, F_FND, {0}},
		{"/headamp/067/gain",				{F32}, F_XET, {0}},
		{"/headamp/067/phantom",			{I32}, F_XET, {0}},
		{"/headamp/068",						{HAMP}, F_FND, {0}},
		{"/headamp/068/gain",				{F32}, F_XET, {0}},
		{"/headamp/068/phantom",			{I32}, F_XET, {0}},
		{"/headamp/069",						{HAMP}, F_FND, {0}},
		{"/headamp/069/gain",				{F32}, F_XET, {0}},
		{"/headamp/069/phantom",			{I32}, F_XET, {0}},

		{"/headamp/070",						{HAMP}, F_FND, {0}},
		{"/headamp/070/gain",				{F32}, F_XET, {0}},
		{"/headamp/070/phantom",			{I32}, F_XET, {0}},
		{"/headamp/071",						{HAMP}, F_FND, {0}},
		{"/headamp/071/gain",				{F32}, F_XET, {0}},
		{"/headamp/071/phantom",			{I32}, F_XET, {0}},
		{"/headamp/072",						{HAMP}, F_FND, {0}},
		{"/headamp/072/gain",				{F32}, F_XET, {0}},
		{"/headamp/072/phantom",			{I32}, F_XET, {0}},
		{"/headamp/073",						{HAMP}, F_FND, {0}},
		{"/headamp/073/gain",				{F32}, F_XET, {0}},
		{"/headamp/073/phantom",			{I32}, F_XET, {0}},
		{"/headamp/074",						{HAMP}, F_FND, {0}},
		{"/headamp/074/gain",				{F32}, F_XET, {0}},
		{"/headamp/074/phantom",			{I32}, F_XET, {0}},
		{"/headamp/075",						{HAMP}, F_FND, {0}},
		{"/headamp/075/gain",				{F32}, F_XET, {0}},
		{"/headamp/075/phantom",			{I32}, F_XET, {0}},
		{"/headamp/076",						{HAMP}, F_FND, {0}},
		{"/headamp/076/gain",				{F32}, F_XET, {0}},
		{"/headamp/076/phantom",			{I32}, F_XET, {0}},
		{"/headamp/077",						{HAMP}, F_FND, {0}},
		{"/headamp/077/gain",				{F32}, F_XET, {0}},
		{"/headamp/077/phantom",			{I32}, F_XET, {0}},
		{"/headamp/078",						{HAMP}, F_FND, {0}},
		{"/headamp/078/gain",				{F32}, F_XET, {0}},
		{"/headamp/078/phantom",			{I32}, F_XET, {0}},
		{"/headamp/079",						{HAMP}, F_FND, {0}},
		{"/headamp/079/gain",				{F32}, F_XET, {0}},
		{"/headamp/079/phantom",			{I32}, F_XET, {0}},

		{"/headamp/080",						{HAMP}, F_FND, {0}},
		{"/headamp/080/gain",				{F32}, F_XET, {0}},
		{"/headamp/080/phantom",			{I32}, F_XET, {0}},
		{"/headamp/081",						{HAMP}, F_FND, {0}},
		{"/headamp/081/gain",				{F32}, F_XET, {0}},
		{"/headamp/081/phantom",			{I32}, F_XET, {0}},
		{"/headamp/082",						{HAMP}, F_FND, {0}},
		{"/headamp/082/gain",				{F32}, F_XET, {0}},
		{"/headamp/082/phantom",			{I32}, F_XET, {0}},
		{"/headamp/083",						{HAMP}, F_FND, {0}},
		{"/headamp/083/gain",				{F32}, F_XET, {0}},
		{"/headamp/083/phantom",			{I32}, F_XET, {0}},
		{"/headamp/084",						{HAMP}, F_FND, {0}},
		{"/headamp/084/gain",				{F32}, F_XET, {0}},
		{"/headamp/084/phantom",			{I32}, F_XET, {0}},
		{"/headamp/085",						{HAMP}, F_FND, {0}},
		{"/headamp/085/gain",				{F32}, F_XET, {0}},
		{"/headamp/085/phantom",			{I32}, F_XET, {0}},
		{"/headamp/086",						{HAMP}, F_FND, {0}},
		{"/headamp/086/gain",				{F32}, F_XET, {0}},
		{"/headamp/086/phantom",			{I32}, F_XET, {0}},
		{"/headamp/087",						{HAMP}, F_FND, {0}},
		{"/headamp/087/gain",				{F32}, F_XET, {0}},
		{"/headamp/087/phantom",			{I32}, F_XET, {0}},
		{"/headamp/088",						{HAMP}, F_FND, {0}},
		{"/headamp/088/gain",				{F32}, F_XET, {0}},
		{"/headamp/088/phantom",			{I32}, F_XET, {0}},
		{"/headamp/089",						{HAMP}, F_FND, {0}},
		{"/headamp/089/gain",				{F32}, F_XET, {0}},
		{"/headamp/089/phantom",			{I32}, F_XET, {0}},

		{"/headamp/090",						{HAMP}, F_FND, {0}},
		{"/headamp/090/gain",				{F32}, F_XET, {0}},
		{"/headamp/090/phantom",			{I32}, F_XET, {0}},
		{"/headamp/091",						{HAMP}, F_FND, {0}},
		{"/headamp/091/gain",				{F32}, F_XET, {0}},
		{"/headamp/091/phantom",			{I32}, F_XET, {0}},
		{"/headamp/092",						{HAMP}, F_FND, {0}},
		{"/headamp/092/gain",				{F32}, F_XET, {0}},
		{"/headamp/092/phantom",			{I32}, F_XET, {0}},
		{"/headamp/093",						{HAMP}, F_FND, {0}},
		{"/headamp/093/gain",				{F32}, F_XET, {0}},
		{"/headamp/093/phantom",			{I32}, F_XET, {0}},
		{"/headamp/094",						{HAMP}, F_FND, {0}},
		{"/headamp/094/gain",				{F32}, F_XET, {0}},
		{"/headamp/094/phantom",			{I32}, F_XET, {0}},
		{"/headamp/095",						{HAMP}, F_FND, {0}},
		{"/headamp/095/gain",				{F32}, F_XET, {0}},
		{"/headamp/095/phantom",			{I32}, F_XET, {0}},
		{"/headamp/096",						{HAMP}, F_FND, {0}},
		{"/headamp/096/gain",				{F32}, F_XET, {0}},
		{"/headamp/096/phantom",			{I32}, F_XET, {0}},
		{"/headamp/097",						{HAMP}, F_FND, {0}},
		{"/headamp/097/gain",				{F32}, F_XET, {0}},
		{"/headamp/097/phantom",			{I32}, F_XET, {0}},
		{"/headamp/098",						{HAMP}, F_FND, {0}},
		{"/headamp/098/gain",				{F32}, F_XET, {0}},
		{"/headamp/098/phantom",			{I32}, F_XET, {0}},
		{"/headamp/099",						{HAMP}, F_FND, {0}},
		{"/headamp/099/gain",				{F32}, F_XET, {0}},
		{"/headamp/099/phantom",			{I32}, F_XET, {0}},

		{"/headamp/100",						{HAMP}, F_FND, {0}},
		{"/headamp/100/gain",				{F32}, F_XET, {0}},
		{"/headamp/100/phantom",			{I32}, F_XET, {0}},
		{"/headamp/101",						{HAMP}, F_FND, {0}},
		{"/headamp/101/gain",				{F32}, F_XET, {0}},
		{"/headamp/101/phantom",			{I32}, F_XET, {0}},
		{"/headamp/102",						{HAMP}, F_FND, {0}},
		{"/headamp/102/gain",				{F32}, F_XET, {0}},
		{"/headamp/102/phantom",			{I32}, F_XET, {0}},
		{"/headamp/103",						{HAMP}, F_FND, {0}},
		{"/headamp/103/gain",				{F32}, F_XET, {0}},
		{"/headamp/103/phantom",			{I32}, F_XET, {0}},
		{"/headamp/104",						{HAMP}, F_FND, {0}},
		{"/headamp/104/gain",				{F32}, F_XET, {0}},
		{"/headamp/104/phantom",			{I32}, F_XET, {0}},
		{"/headamp/105",						{HAMP}, F_FND, {0}},
		{"/headamp/105/gain",				{F32}, F_XET, {0}},
		{"/headamp/105/phantom",			{I32}, F_XET, {0}},
		{"/headamp/106",						{HAMP}, F_FND, {0}},
		{"/headamp/106/gain",				{F32}, F_XET, {0}},
		{"/headamp/106/phantom",			{I32}, F_XET, {0}},
		{"/headamp/107",						{HAMP}, F_FND, {0}},
		{"/headamp/107/gain",				{F32}, F_XET, {0}},
		{"/headamp/107/phantom",			{I32}, F_XET, {0}},
		{"/headamp/108",						{HAMP}, F_FND, {0}},
		{"/headamp/108/gain",				{F32}, F_XET, {0}},
		{"/headamp/108/phantom",			{I32}, F_XET, {0}},
		{"/headamp/109",						{HAMP}, F_FND, {0}},
		{"/headamp/109/gain",				{F32}, F_XET, {0}},
		{"/headamp/109/phantom",			{I32}, F_XET, {0}},

		{"/headamp/110",						{HAMP}, F_FND, {0}},
		{"/headamp/110/gain",				{F32}, F_XET, {0}},
		{"/headamp/110/phantom",			{I32}, F_XET, {0}},
		{"/headamp/111",						{HAMP}, F_FND, {0}},
		{"/headamp/111/gain",				{F32}, F_XET, {0}},
		{"/headamp/111/phantom",			{I32}, F_XET, {0}},
		{"/headamp/112",						{HAMP}, F_FND, {0}},
		{"/headamp/112/gain",				{F32}, F_XET, {0}},
		{"/headamp/112/phantom",			{I32}, F_XET, {0}},
		{"/headamp/113",						{HAMP}, F_FND, {0}},
		{"/headamp/113/gain",				{F32}, F_XET, {0}},
		{"/headamp/113/phantom",			{I32}, F_XET, {0}},
		{"/headamp/114",						{HAMP}, F_FND, {0}},
		{"/headamp/114/gain",				{F32}, F_XET, {0}},
		{"/headamp/114/phantom",			{I32}, F_XET, {0}},
		{"/headamp/115",						{HAMP}, F_FND, {0}},
		{"/headamp/115/gain",				{F32}, F_XET, {0}},
		{"/headamp/115/phantom",			{I32}, F_XET, {0}},
		{"/headamp/116",						{HAMP}, F_FND, {0}},
		{"/headamp/116/gain",				{F32}, F_XET, {0}},
		{"/headamp/116/phantom",			{I32}, F_XET, {0}},
		{"/headamp/117",						{HAMP}, F_FND, {0}},
		{"/headamp/117/gain",				{F32}, F_XET, {0}},
		{"/headamp/117/phantom",			{I32}, F_XET, {0}},
		{"/headamp/118",						{HAMP}, F_FND, {0}},
		{"/headamp/118/gain",				{F32}, F_XET, {0}},
		{"/headamp/118/phantom",			{I32}, F_XET, {0}},
		{"/headamp/119",						{HAMP}, F_FND, {0}},
		{"/headamp/119/gain",				{F32}, F_XET, {0}},
		{"/headamp/119/phantom",			{I32}, F_XET, {0}},

		{"/headamp/120",						{HAMP}, F_FND, {0}},
		{"/headamp/120/gain",				{F32}, F_XET, {0}},
		{"/headamp/120/phantom",			{I32}, F_XET, {0}},
		{"/headamp/121",						{HAMP}, F_FND, {0}},
		{"/headamp/121/gain",				{F32}, F_XET, {0}},
		{"/headamp/121/phantom",			{I32}, F_XET, {0}},
		{"/headamp/122",						{HAMP}, F_FND, {0}},
		{"/headamp/122/gain",				{F32}, F_XET, {0}},
		{"/headamp/122/phantom",			{I32}, F_XET, {0}},
		{"/headamp/123",						{HAMP}, F_FND, {0}},
		{"/headamp/123/gain",				{F32}, F_XET, {0}},
		{"/headamp/123/phantom",			{I32}, F_XET, {0}},
		{"/headamp/124",						{HAMP}, F_FND, {0}},
		{"/headamp/124/gain",				{F32}, F_XET, {0}},
		{"/headamp/124/phantom",			{I32}, F_XET, {0}},
		{"/headamp/125",						{HAMP}, F_FND, {0}},
		{"/headamp/125/gain",				{F32}, F_XET, {0}},
		{"/headamp/125/phantom",			{I32}, F_XET, {0}},
		{"/headamp/126",						{HAMP}, F_FND, {0}},
		{"/headamp/126/gain",				{F32}, F_XET, {0}},
		{"/headamp/126/phantom",			{I32}, F_XET, {0}},
		{"/headamp/127",						{HAMP}, F_FND, {0}},
		{"/headamp/127/gain",				{F32}, F_XET, {0}},
		{"/headamp/127/phantom",			{I32}, F_XET, {0}},
};
int Xheadamp_max = sizeof(Xheadamp) / sizeof(X32command);

#endif /* X32HEADAMP_H_ */
