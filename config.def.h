#define HEX_COLOR(hex)				\
	{ .red   = ((hex >> 24) & 0xff) * 257,	\
	  .green = ((hex >> 16) & 0xff) * 257,	\
	  .blue  = ((hex >> 8) & 0xff) * 257,	\
	  .alpha = (hex & 0xff) * 257 }

// use ipc functionality
static bool ipc = true;
// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = false;
// hide vacant tags
static bool hide_vacant = true;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 2;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = false;
// use title space as status text element
static bool custom_title = false;
// title color use active colors
static bool active_color_title = true;
// scale
static uint32_t buffer_scale = 2;
// font
static char *fontstr = "Iosevka Etoile:size=13";
static char *tags_names[] = { "1", "2", "3", "4", "5", "6" };

// Moonfly Colorscheme (Vim)
// moonflyFg:      #b2b2b2
// moonflyBg:      #171717
// moonflyBlue:    #606060
// moonflyAqua:    #36c692
// moonflyRed:     #b21818
// moonflyYellow:  #e3c78a
// moonflyMagenta: #cf87e8
// moonflyOrange:  #e09876
// moonflyGray:    #444444

static pixman_color_t active_fg_color = HEX_COLOR(0xb2b2b2ff);      // moonflyFg
static pixman_color_t active_bg_color = HEX_COLOR(0x171717ff);      // moonflyBg

static pixman_color_t occupied_fg_color = HEX_COLOR(0x606060ff);    // moonflyBlue
static pixman_color_t occupied_bg_color = HEX_COLOR(0x171717ff);    // moonflyBg

static pixman_color_t inactive_fg_color = HEX_COLOR(0x444444ff);    // moonflyGray
static pixman_color_t inactive_bg_color = HEX_COLOR(0x171717ff);    // moonflyBg

static pixman_color_t urgent_fg_color = HEX_COLOR(0xb21818ff);      // moonflyRed
static pixman_color_t urgent_bg_color = HEX_COLOR(0xcf87e8ff);      // moonflyMagenta

static pixman_color_t middle_bg_color = HEX_COLOR(0x171717ff);      // moonflyBg
static pixman_color_t middle_bg_color_selected = HEX_COLOR(0x171717ff); // moonflyGray
