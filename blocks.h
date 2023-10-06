//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			          /*Update Interval*/	/*Update Signal*/
	{"", 		"bash $SCR/getupd", 		  3600,			        2},

	{"v:", 		"bash $SCR/getvol t",		  0,			        1},

	{"", 		"date '+%a %d %b %H:%M'",	  60,			        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
