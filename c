--[[
 .____                  ________ ___.    _____                           __                
 |    |    __ _______   \_____  \\_ |___/ ____\_ __  ______ ____ _____ _/  |_  ___________ 
 |    |   |  |  \__  \   /   |   \| __ \   __\  |  \/  ___// ___\\__  \\   __\/  _ \_  __ \
 |    |___|  |  // __ \_/    |    \ \_\ \  | |  |  /\___ \\  \___ / __ \|  | (  <_> )  | \/
 |_______ \____/(____  /\_______  /___  /__| |____//____  >\___  >____  /__|  \____/|__|   
         \/          \/         \/    \/                \/     \/     \/                   
          \_Welcome to LuaObfuscator.com   (Alpha 0.2.8) ~  Much Love, Ferib 

]]--

do local v0=tonumber;local v1=string.byte;local v2=string.char;local v3=string.sub;local v4=string.gsub;local v5=string.rep;local v6=table.concat;local v7=table.insert;local v8=math.ldexp;local v9=getfenv or function()return _ENV;end ;local v10=setmetatable;local v11=pcall;local v12=select;local v13=unpack or table.unpack ;local v14=tonumber;local function v15(v16,v17,...)local v18=1;local v19;v16=v4(v3(v16,5),"..",function(v30)if (v1(v30,2)==79) then local v81=0;while true do if (v81==0) then v19=v0(v3(v30,1,1));return "";end end else local v82=v2(v0(v30,16));if v19 then local v88=0;local v89;while true do if (v88==1) then return v89;end if (v88==0) then v89=v5(v82,v19);v19=nil;v88=1;end end else return v82;end end end);local function v20(v31,v32,v33)if v33 then local v83=(v31/((5 -3)^(v32-(2 -1))))%(((880 -(282 + 595)) -1)^(((v33-(2 -1)) -(v32-(620 -(555 + 64)))) + (932 -(857 + 74)))) ;return v83-(v83%((2206 -(1523 + 114)) -(367 + 181 + 20))) ;else local v84=(929 -(214 + 713))^(v32-(1 + 0)) ;return (((v31%(v84 + v84))>=v84) and 1) or (0 + 0) ;end end local function v21()local v34=v1(v16,v18,v18);v18=v18 + 1 ;return v34;end local function v22()local v35,v36=v1(v16,v18,v18 + (2 -0) );v18=v18 + (1067 -(68 + 997)) ;return (v36 * 256) + v35 ;end local function v23()local v37,v38,v39,v40=v1(v16,v18,v18 + ((3036 -1763) -(226 + 1044)) );v18=v18 + (121 -(32 + 85)) ;return (v40 * (16441815 + 335401)) + (v39 * (14533 + 51003)) + (v38 * (1213 -(892 + 65))) + v37 ;end local function v24()local v41=v23();local v42=v23();local v43=1 -0 ;local v44=(v20(v42,1 -0 ,370 -(87 + 263) ) * ((182 -(67 + 113))^(24 + 8))) + v41 ;local v45=v20(v42,51 -30 ,(814 -(368 + 423)) + 8 );local v46=((v20(v42,32)==(3 -2)) and  -1) or (953 -(802 + 150)) ;if (v45==(0 -(0 -0))) then if (v44==(0 -0)) then return v46 * ((18 -(10 + 8)) + 0) ;else local v90=(3835 -2838) -(915 + 82) ;while true do if (v90==(0 -0)) then v45=1 + 0 ;v43=0 -0 ;break;end end end elseif (v45==(3234 -(1069 + 118))) then return ((v44==(0 -0)) and (v46 * ((1 -(442 -(416 + 26)))/(0 + 0)))) or (v46 * NaN) ;end return v8(v46,v45-(1817 -794) ) * (v43 + (v44/(2^(52 + 0)))) ;end local function v25(v47)local v48;if  not v47 then local v85=0 -0 ;while true do if (v85==(0 + 0)) then v47=v23();if (v47==(438 -(145 + 293))) then return "";end break;end end end v48=v3(v16,v18,(v18 + v47) -((431 -(44 + 386)) -0) );v18=v18 + v47 ;local v49={};for v65=1, #v48 do v49[v65]=v2(v1(v3(v48,v65,v65)));end return v6(v49);end local v26=v23;local function v27(...)return {...},v12("#",...);end local function v28()local v50=0 + 0 ;local v51;local v52;local v53;local v54;local v55;local v56;local v57;local v58;while true do if (v50~=(1290 -(993 + 295))) then else v55=nil;v56=nil;v50=3;end if (v50==(1 + 3)) then while true do if (v51~=(1173 -(418 + 753))) then else local v97=0 + 0 ;local v98;while true do if ((0 + 0)~=v97) then else v98=0 + 0 ;while true do if (0==v98) then local v106=0;while true do if (v106~=1) then else v98=1 + 0 ;break;end if (v106~=0) then else v56=nil;v57=nil;v106=1;end end end if (v98~=1) then else v51=3;break;end end break;end end end if (v51~=3) then else v58=nil;while true do local v103=529 -(406 + 123) ;while true do if (v103~=1) then else if (v52~=1) then else local v107=1769 -(1749 + 20) ;local v108;local v109;while true do if (v107~=0) then else v108=0;v109=nil;v107=1 + 0 ;end if (v107==(1323 -(1249 + 73))) then while true do if (v108==0) then v109=0 + 0 ;while true do if (v109==(1145 -(466 + 679))) then v56={v53,v54,nil,v55};v57=v23();v109=1;end if (v109~=1) then else v58={};v52=1 + 1 ;break;end end break;end end break;end end end if (v52~=(1 + 1)) then else local v110=0;local v111;local v112;while true do if (v110==(0 -0)) then v111=0 -0 ;v112=nil;v110=115 -(4 + 110) ;end if (v110~=(585 -(57 + 527))) then else while true do if (v111~=0) then else v112=1427 -(41 + 1386) ;while true do if (v112==(104 -(17 + 86))) then for v159=1,v23() do local v160=0;local v161;while true do if (v160==0) then v161=v21();if (v20(v161,1 + 0 ,1)==0) then local v170=0 -0 ;local v171;local v172;local v173;local v174;while true do if (v170==1) then v173=nil;v174=nil;v170=5 -3 ;end if (v170==0) then v171=166 -(122 + 44) ;v172=nil;v170=1;end if (v170==(2 -0)) then while true do if (v171~=0) then else local v179=0 -0 ;while true do if (v179~=0) then else v172=v20(v161,2 + 0 ,3);v173=v20(v161,4,6);v179=1;end if (v179~=1) then else v171=1 + 0 ;break;end end end if (v171~=(3 -1)) then else local v180=65 -(30 + 35) ;local v181;while true do if (v180~=(0 + 0)) then else v181=0;while true do if (v181~=0) then else local v191=1257 -(1043 + 214) ;while true do if (v191==0) then if (v20(v173,3 -2 ,1)==1) then v174[1214 -(323 + 889) ]=v58[v174[5 -3 ]];end if (v20(v173,582 -(361 + 219) ,2)~=(321 -(53 + 267))) then else v174[1 + 2 ]=v58[v174[3]];end v191=1;end if (v191==1) then v181=1;break;end end end if (v181~=(414 -(15 + 398))) then else v171=985 -(18 + 964) ;break;end end break;end end end if (v171==3) then if (v20(v173,3,11 -8 )~=(1 + 0)) then else v174[4]=v58[v174[3 + 1 ]];end v53[v159]=v174;break;end if (v171~=1) then else local v183=0;local v184;while true do if (v183~=0) then else v184=850 -(20 + 830) ;while true do if (v184==(0 + 0)) then local v192=0;while true do if (v192==0) then v174={v22(),v22(),nil,nil};if (v172==(738 -(542 + 196))) then local v200=0 -0 ;local v201;local v202;while true do if (v200~=1) then else while true do if (v201==0) then v202=0;while true do if (v202~=0) then else v174[3]=v22();v174[4]=v22();break;end end break;end end break;end if (v200~=(0 + 0)) then else local v204=0 + 0 ;while true do if (v204==(0 + 0)) then v201=0 -0 ;v202=nil;v204=1;end if (v204~=1) then else v200=2 -1 ;break;end end end end elseif (v172==(1552 -(1126 + 425))) then v174[3]=v23();elseif (v172==2) then v174[408 -(118 + 287) ]=v23() -(2^(62 -46)) ;elseif (v172==(1124 -(118 + 1003))) then local v206=0;local v207;local v208;while true do if (v206~=(2 -1)) then else while true do if (v207==(377 -(142 + 235))) then v208=0;while true do if (v208==0) then v174[13 -10 ]=v23() -(2^(4 + 12)) ;v174[981 -(553 + 424) ]=v22();break;end end break;end end break;end if (v206~=(0 -0)) then else v207=0;v208=nil;v206=1 + 0 ;end end end v192=1;end if (v192~=(1 + 0)) then else v184=1 + 0 ;break;end end end if (v184~=1) then else v171=1 + 1 ;break;end end break;end end end end break;end end end break;end end end v52=3;break;end if (v112==0) then local v154=0 + 0 ;while true do if (v154==1) then v112=2 -1 ;break;end if (v154==0) then for v163=1,v57 do local v164=0 -0 ;local v165;local v166;local v167;local v168;local v169;while true do if (1==v164) then v167=nil;v168=nil;v164=2;end if (v164==(0 -0)) then v165=0;v166=nil;v164=1;end if (v164==2) then v169=nil;while true do if (v165~=2) then else while true do if (v166==(1 + 0)) then v169=nil;while true do if (0~=v167) then else local v189=0;while true do if (0==v189) then local v193=0 -0 ;local v194;while true do if (v193~=0) then else v194=0;while true do if (v194==0) then v168=v21();v169=nil;v194=754 -(239 + 514) ;end if (v194==(1 + 0)) then v189=1330 -(797 + 532) ;break;end end break;end end end if ((1 + 0)~=v189) then else v167=1;break;end end end if (v167==(1 + 0)) then if (v168==1) then v169=v21()~=(0 -0) ;elseif (v168==(1204 -(373 + 829))) then v169=v24();elseif (v168==(734 -(476 + 255))) then v169=v25();end v58[v163]=v169;break;end end break;end if (v166==0) then local v185=1130 -(369 + 761) ;local v186;while true do if (0~=v185) then else v186=0 + 0 ;while true do if (v186==0) then local v195=0;while true do if (v195==(1 -0)) then v186=1 -0 ;break;end if (v195~=(238 -(64 + 174))) then else v167=0 + 0 ;v168=nil;v195=1;end end end if (v186==(1 -0)) then v166=337 -(144 + 192) ;break;end end break;end end end end break;end if (v165~=0) then else local v176=0;while true do if (v176~=(217 -(42 + 174))) then else v165=1 + 0 ;break;end if (0==v176) then v166=0 + 0 ;v167=nil;v176=1;end end end if (v165~=(1 + 0)) then else v168=nil;v169=nil;v165=1506 -(363 + 1141) ;end end break;end end end v56[3]=v21();v154=1;end end end end break;end end break;end end end break;end if (v103~=0) then else local v104=1580 -(1183 + 397) ;local v105;while true do if (v104~=0) then else v105=0 -0 ;while true do if ((1 + 0)~=v105) then else v103=1;break;end if (v105==0) then local v143=0 + 0 ;while true do if (0==v143) then if (v52~=0) then else local v155=0;local v156;while true do if (v155==(1975 -(1913 + 62))) then v156=0 + 0 ;while true do if (v156~=1) then else v55={};v52=2 -1 ;break;end if ((1933 -(565 + 1368))==v156) then v53={};v54={};v156=3 -2 ;end end break;end end end if (v52~=(1664 -(1477 + 184))) then else local v157=0;local v158;while true do if (v157==0) then v158=0 -0 ;while true do if (v158==(0 + 0)) then local v175=856 -(564 + 292) ;while true do if (v175~=(0 -0)) then else for v177=2 -1 ,v23() do v54[v177-1 ]=v28();end return v56;end end end end break;end end end v143=1;end if ((305 -(244 + 60))==v143) then v105=1 + 0 ;break;end end end end break;end end end end end break;end if (v51==(476 -(41 + 435))) then local v99=0;local v100;while true do if ((1001 -(938 + 63))~=v99) then else v100=0 + 0 ;while true do if ((1126 -(936 + 189))~=v100) then else v51=1 + 0 ;break;end if (0==v100) then local v113=1613 -(1565 + 48) ;while true do if (v113~=(1 + 0)) then else v100=1139 -(782 + 356) ;break;end if (v113~=0) then else v52=267 -(176 + 91) ;v53=nil;v113=1;end end end end break;end end end if (v51==(2 -1)) then local v101=0 -0 ;local v102;while true do if (v101~=0) then else v102=0;while true do if (v102==0) then local v114=1092 -(975 + 117) ;while true do if ((1876 -(157 + 1718))~=v114) then else v102=1 + 0 ;break;end if (v114~=0) then else v54=nil;v55=nil;v114=1;end end end if (v102==(3 -2)) then v51=2;break;end end break;end end end end break;end if (v50~=(0 -0)) then else v51=0;v52=nil;v50=1019 -(697 + 321) ;end if (v50==3) then v57=nil;v58=nil;v50=10 -6 ;end if (v50==1) then v53=nil;v54=nil;v50=2;end end end local function v29(v59,v60,v61)local v62=v59[1];local v63=v59[2];local v64=v59[3];return function(...)local v67=v62;local v68=v63;local v69=v64;local v70=v27;local v71=1;local v72= -1;local v73={};local v74={...};local v75=v12("#",...) -1 ;local v76={};local v77={};for v86=0,v75 do if (v86>=v69) then v73[v86-v69 ]=v74[v86 + 1 ];else v77[v86]=v74[v86 + 1 ];end end local v78=(v75-v69) + 1 ;local v79;local v80;while true do local v87=0;while true do if (v87==1) then if (v80<=9) then if (v80<=4) then if (v80<=1) then if (v80==0) then v77[v79[2]]={};else local v116=v79[2];local v117=v77[v116];for v131=v116 + 1 ,v79[3] do v7(v117,v77[v131]);end end elseif (v80<=2) then do return;end elseif (v80==3) then do return;end else local v132=v79[2];local v133=v77[v132];local v134=v79[3];for v144=1,v134 do v133[v144]=v77[v132 + v144 ];end end elseif (v80<=6) then if (v80>5) then if (v77[v79[2]]==v79[4]) then v71=v71 + 1 ;else v71=v79[3];end else local v118=v79[2];do return v13(v77,v118,v118 + v79[3] );end end elseif (v80<=7) then v71=v79[3];elseif (v80==8) then do return v77[v79[2]];end else v77[v79[2]]=v79[3];end elseif (v80<=14) then if (v80<=11) then if (v80==10) then v77[v79[2]]=v61[v79[3]];else v77[v79[2]]={};end elseif (v80<=12) then v61[v79[3]]=v77[v79[2]];elseif (v80==13) then v71=v79[3];else v61[v79[3]]=v77[v79[2]];end elseif (v80<=16) then if (v80==15) then local v125=0;local v126;local v127;local v128;while true do if (1==v125) then v128=v79[3];for v150=1,v128 do v127[v150]=v77[v126 + v150 ];end break;end if (v125==0) then v126=v79[2];v127=v77[v126];v125=1;end end else do return v77[v79[2]];end end elseif (v80<=17) then v77[v79[2]]=v79[3];elseif (v80>18) then if (v77[v79[2]]==v79[4]) then v71=v71 + 1 ;else v71=v79[3];end else v77[v79[2]]=v61[v79[3]];end v71=v71 + 1 ;break;end if (0==v87) then v79=v67[v71];v80=v79[1];v87=1;end end end end;end return v29(v28(),{},v17)(...);end v15("LOL!0C3O00028O0003043O006B657973030F3O005865467257584B6A4E6B55724B4A6F030F3O004F46336B77567138724A38376A4F55030F3O006C79725272314C68496A73584E4651030F3O006F396F3341425132687931766B5158030F3O00625754697870526953713656335742030F3O0056745143304B75483972506B4F6D4A030F3O00616E314338504577387746434F7544030F3O004C346B74414F4C31425A486730466D030F3O004E32696F627A794E6C643467304754030F3O004267596151327948514A556361425500143O0012113O00013O0026063O0001000100010004073O000100012O000B0001000A3O001211000200033O001211000300043O001211000400053O001211000500063O001211000600073O001211000700083O001211000800093O0012110009000A3O001211000A000B3O001211000B000C4O000F0001000A000100120E000100023O002O12000100024O0008000100023O0004073O000100012O00033O00017O00",v9(),...);end
