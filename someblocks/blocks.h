//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Vol: ", "pactl list sinks | grep 'Volume:' | head -n1 | awk '{print $5}'",   3,      0},

	{"Cpu: ", "top -bn1 | awk '/Cpu/ { printf \"%s%%\", $2 }'",	2,		0},

	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},

	{"", "date '+%b %d (%a) %H:%M'",					5,		0},
	


	
	/* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
	/* {"", "date '+%b %d (%a) %I:%M%p'",					0,		10}, */
};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
