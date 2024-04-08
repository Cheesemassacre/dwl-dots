// use ipc functionality
static bool ipc = true;
// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = false;
// hide vacant tags
static bool hide_vacant = true;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 1;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = false;
// use title space as status text element
static bool custom_title = false;
// scale
static uint32_t buffer_scale = 1;
// font
static char *fontstr = { "SourceCodePro:pixelsize=14:antialias=true:autohint=true:style=SemiBold" };
// tag names
static char *tags_names[] = { "TTY", "WWW", "FMG", "MUS", "SOC", "VSC", "WS7", "WS8", "WS9" };

// set 16-bit colors for bar
// 8-bit color can be converted to 16-bit color by simply duplicating values e.g
// 0x55 -> 0x5555, 0xf1 -> 0xf1f1
static pixman_color_t active_fg_color = { .red = 0xeeee, /*EE*/ .green = 0xeeee, /*EE*/ .blue = 0xeeee, /*EE*/ .alpha = 0xffff, }; // RGB: #EEEEEE
static pixman_color_t active_bg_color = { .red = 0x002A * 0x101, /*2A*/ .green = 0x003D * 0x101, /*3D*/ .blue = 0x005A * 0x101, /*5A*/ .alpha = 0xffff, }; // RGB: #40679E
static pixman_color_t occupied_fg_color = { .red = 0xeeee, /*EE*/ .green = 0xeeee, /*EE*/ .blue = 0xeeee, /*EE*/ .alpha = 0xffff, }; // RGB: #EEEE
static pixman_color_t occupied_bg_color = { .red = 0x0000, /*00*/ .green = 0x0000, /*00*/ .blue = 0x0000, /*00*/ .alpha = 0xffff, }; // RGB: #000000
static pixman_color_t inactive_fg_color = { .red = 0xbbbb, /*BB*/ .green = 0xbbbb, /*BB*/ .blue = 0xbbbb, /*BB*/ .alpha = 0xffff, }; // RGB: #BBBB
static pixman_color_t inactive_bg_color = { .red = 0x0000, /*00*/ .green = 0x0000, /*00*/ .blue = 0x0000, /*00*/ .alpha = 0xffff, }; // RGB: #000000
static pixman_color_t urgent_fg_color = { .red = 0x2222, /*22*/ .green = 0x2222, /*22*/ .blue = 0x2222, /*22*/ .alpha = 0xffff, }; // RGB: #2222
static pixman_color_t urgent_bg_color = { .red = 0xeeee, /*EE*/ .green = 0xeeee, /*EE*/ .blue = 0xeeee, /*EE*/ .alpha = 0xffff, }; // RGB: #EEEE
static pixman_color_t middle_bg_color = { .red = 0x0000, /*00*/ .green = 0x0000, /*00*/ .blue = 0x0000, /*00*/ .alpha = 0xffff, }; // RGB: #000000
static pixman_color_t middle_bg_color_selected = { .red = 0x002A * 0x101, /*2A*/ .green = 0x003D * 0x101, /*3D*/ .blue = 0x005A * 0x101, /*5A*/ .alpha = 0xffff,}; // RGB: #40679E
