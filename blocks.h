//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{"", 		"bash $SCR/getupd", 		3600,			3},

	{"", 		"bash $SCR/getnet", 		60,			0},

	{"", 		"bash $SCR/getvol t",		0,			2},

	{"", 		"bash $SCR/spsong",		1,			1},

	{"", 		"bash $SCR/getdate",		60,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 2;
