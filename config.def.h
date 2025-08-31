#ifndef config_def_h_INCLUDED
#define config_def_h_INCLUDED

#define DEFAULT_FONT "Jost* 12"
#define DEFAULT_ROUNDING 5
static const int transparency = 255;

struct clr_scheme schemes[] = {
    {
        /* colors */
        .bg = {.bgra = {32, 32, 32, transparency}},
        .fg = {.bgra = {59, 40, 36, transparency}},
        .high = {.bgra = {214, 177, 169, transparency}},
        .swipe = {.bgra = {100, 255, 100, 64}},
        .text = {.color = UINT32_MAX},
        .font = DEFAULT_FONT,
        .rounding = DEFAULT_ROUNDING,
    },
    {
        /* colors */
        .bg = {.bgra = {32, 32, 32, transparency}},
        .fg = {.bgra = {38, 27, 26, transparency}},
        .high = {.bgra = {214, 177, 169, transparency}},
        .swipe = {.bgra = {100, 255, 100, 64}},
        .text = {.color = UINT32_MAX},
        .font = DEFAULT_FONT,
        .rounding = DEFAULT_ROUNDING,
    }};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
    Simple,  // First layout is the default layout on startup
    Cyrillic,
    NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
    Simple,  // First layout is the default layout on startup
    Cyrillic,
    NumLayouts // signals the last item, may not be omitted
};

#endif // config_def_h_INCLUDED
