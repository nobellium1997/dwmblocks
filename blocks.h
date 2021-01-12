//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},

	{"", "acpi | cut -d' ' -f3-",					60,		0},

	{"", "nmcli -t -f name connection show --active",					60,		0},

	{"Load Avg: ", "cat /proc/loadavg | awk -F ' ' '{print $1}'",					60,		0},

	{"", "~/micmute.sh",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
