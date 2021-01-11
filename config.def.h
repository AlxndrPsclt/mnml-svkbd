static const Bool wmborder = False;
static int fontsize = 28;
static double overlay_delay = 0.5;
static int heightfactor = 12; //one row of keys takes up 1/x of the screen height
static const char *fonts[] = {
	"Iosevka:bold:size=28"
};
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d8dee9", "#2e3440" },
	[SchemePress] = { "#4c566a", "#81a1c1" },
	[SchemeHighlight] = { "#d8dee9", "#3b4252" },
};
