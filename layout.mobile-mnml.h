#define KEYS 48
static Key keys_en[KEYS] = {
        { "ESC", XK_Escape, 1 },
        { 0, XK_q, 1 },
        { 0, XK_w, 1 },
        { 0, XK_e, 1 },
        { 0, XK_r, 1 },
        { 0, XK_t, 1 },
        { 0, XK_y, 1 },
        { 0, XK_u, 1 },
        { 0, XK_i, 1 },
        { 0, XK_o, 1 },
        { 0, XK_p, 1 },
        { "BCK", XK_BackSpace, 1 },

        { 0 }, /* New row */

        { "TAB", XK_Tab, 1 },
        { 0, XK_a, 1 },
        { 0, XK_s, 1 },
        { 0, XK_d, 1 },
        { 0, XK_f, 1 },
        { 0, XK_g, 1 },
        { 0, XK_h, 1 },
        { 0, XK_j, 1 },
        { 0, XK_k, 1 },
        { 0, XK_l, 1 },
        { ";:", XK_colon, 1 },
        { "'\"", XK_apostrophe, 1 },

        { 0 }, /* New row */

        { "SFT", XK_Shift_L, 1 },
        { 0, XK_z, 1 },
        { 0, XK_x, 1 },
        { 0, XK_c, 1 },
        { 0, XK_v, 1 },
        { 0, XK_b, 1 },
        { 0, XK_n, 1 },
        { 0, XK_m, 1 },
        { "↑", XK_Up, 1 },
        { ",<", XK_comma, 1 },
        { ".>", XK_period, 1 },
        { "/?", XK_slash, 1 },

        { 0 }, /* New row */

        { "⇿", XK_Cancel, 1},
        /*{ "Shft", XK_Shift_L, 1 },*/
        /*{ "L", XK_Left, 1 },*/
        { "CTR", XK_Control_L, 1 },
        { "⬢", XK_Super_L, 1 },
        { "ALT", XK_Alt_L, 1 },
        { "", XK_space, 3 },
        { "←", XK_Left, 1 },
        { "↓", XK_Down, 1 },
        { "→", XK_Right, 1 },
        /*{ "R", XK_Right, 1 },*/
        /*{ "Esc", XK_Escape, 1 },*/
        /*{ "Alt", XK_Alt_L, 1 },*/
        /*{ "↲ Enter", XK_Return, 2 },*/
        { "ENTR", XK_Return, 2 },

};


static Key keys_en_min[43] = {
        { 0, XK_q, 1 },
        { 0, XK_w, 1 },
        { 0, XK_e, 1 },
        { 0, XK_r, 1 },
        { 0, XK_t, 1 },
        { 0, XK_y, 1 },
        { 0, XK_u, 1 },
        { 0, XK_i, 1 },
        { 0, XK_o, 1 },
        { 0, XK_p, 1 },

        { 0 }, /* New row */

        { 0, XK_a, 1 },
        { 0, XK_s, 1 },
        { 0, XK_d, 1 },
        { 0, XK_f, 1 },
        { 0, XK_g, 1 },
        { 0, XK_h, 1 },
        { 0, XK_j, 1 },
        { 0, XK_k, 1 },
        { 0, XK_l, 1 },
        { "'\"", XK_apostrophe, 1 },

        { 0 }, /* New row */

        { "SFT", XK_Shift_L, 1 },
        { 0, XK_z, 1 },
        { 0, XK_x, 1 },
        { 0, XK_c, 1 },
        { 0, XK_v, 1 },
        { 0, XK_b, 1 },
        { 0, XK_n, 1 },
        { 0, XK_m, 1 },
        { "BCK", XK_BackSpace, 2 },

        { 0 }, /* New row */

        { "⇿", XK_Cancel, 1},
        /*{ "Shft", XK_Shift_L, 1 },*/
        /*{ "L", XK_Left, 1 },*/
        { "-_", XK_minus, 1 },
        { "←", XK_Left, 1 },
        { ",<", XK_comma, 1 },
        { "", XK_space, 2 },
        { ".>", XK_period, 1 },
        { "→", XK_Right, 1 },
        /*{ "R", XK_Right, 1 },*/
        /*{ "Esc", XK_Escape, 1 },*/
        /*{ "Alt", XK_Alt_L, 1 },*/
        /*{ "↲ Enter", XK_Return, 2 },*/
        { "ENTR", XK_Return, 2 },

};








static Key keys_symbols[41] = {
  { "1!", XK_1, 1 },
  { "2@", XK_2, 1 },
  { "3#", XK_3, 1 },
  { "4$", XK_4, 1 },
  { "5%", XK_5, 1 },
  { "6^", XK_6, 1 },
  { "7&", XK_7, 1 },
  { "8*", XK_8, 1 },
  { "9(", XK_9, 1 },
  { "0)", XK_0, 1 },

  { 0 }, /* New row */

  { "☺", 0x101f642, 1 },
  { "`~", XK_grave, 1 },
  { "-_", XK_minus, 1 },
  { "=+", XK_plus, 1 },
  { "[{", XK_bracketleft, 1 },
  { "]}", XK_bracketright, 1 },
  { "\\|", XK_backslash, 1 },

  { 0 }, /* New row */

  { "SFT", XK_Shift_L|XK_bar, 1 },
  { "⇤", XK_Home, 1 },
  { "⇥", XK_End, 1 },
  { "⇊", XK_Next, 1 },
  { "⇈", XK_Prior, 1 },
  { "BCK", XK_BackSpace, 2 },

  { 0 }, /* New row */

  { "⇿", XK_Cancel, 1},
  { "CTR", XK_Control_L, 1 },
  { "⬢", XK_Super_L, 1 },
  /*{ "L", XK_Left, 1 },*/
  /*{ "R", XK_Right, 1 },*/
  { "", XK_space, 2 },
  /*{ "Alt", XK_Alt_L, 1 },*/
  { "↲ Enter", XK_Return, 2 },
};




static Key keys_dial[19] = {
  { "1!", XK_1, 1 },
  { "2@", XK_2, 1 },
  { "3#", XK_3, 1 },
  { "BCK", XK_BackSpace, 1 },

  { 0 }, /* New row */

  { "4$", XK_4, 1 },
  { "5%", XK_5, 1 },
  { "6^", XK_6, 1 },
  { "=+", XK_plus, 1 },

  { 0 }, /* New row */

  { "7&", XK_7, 1 },
  { "8*", XK_8, 1 },
  { "9(", XK_9, 1 },
  { "SFT", XK_Shift_L|XK_bar, 1 },

  { 0 }, /* New row */

  { "⇿", XK_Cancel, 1},
  { "0)", XK_0, 1 },
  { "ENTR", XK_Return, 2 },
};




Buttonmod buttonmods[] = {
        { XK_Shift_L, Button2 },
        { XK_Alt_L, Button3 },
};

/*#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
        { 0, XK_Cancel },
};
*/

#define OVERLAYS 183
static Key overlay[OVERLAYS] = {
        { 0, XK_a }, //Overlay for a
        //---
        { "ESC", XK_Escape },
        { "à", XK_agrave },
        { "á", XK_aacute },
        { "â", XK_acircumflex },
        { "ä", XK_adiaeresis },
        { "ą", XK_aogonek },
        { "ã", XK_atilde },
        { "ā", XK_amacron },
        { "ă", XK_abreve },
        { "å", XK_aring },
        { "æ", XK_ae },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_e }, //Overlay for e (first item after boundary defines the trigger)
        //---
        { "ESC", XK_Escape },
        { "è", XK_egrave },
        { "é", XK_eacute },
        { "ê", XK_ecircumflex },
        { "ë", XK_ediaeresis },
        { "ę", XK_eogonek },
        { "ē", XK_emacron },
        { "ė", XK_eabovedot },
        { 0, XK_Cancel },
        //--
        { 0, XK_y }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ỳ", XK_ygrave },
        { "ý", XK_yacute },
        { "ŷ", XK_ycircumflex },
        { "ÿ", XK_ydiaeresis },
        { 0, XK_Cancel },
        //--
        { 0, XK_u }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ù", XK_ugrave },
        { "ú", XK_uacute },
        { "û", XK_ucircumflex },
        { "ü", XK_udiaeresis },
        { "ų", XK_uogonek },
        { "ū", XK_umacron },
        { "ů", XK_uring},
        { "ŭ", XK_ubreve},
        { "ű", XK_udoubleacute },
        { 0, XK_Cancel },
        //--
        { 0, XK_i }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ì", XK_igrave },
        { "í", XK_iacute },
        { "î", XK_icircumflex },
        { "ï", XK_idiaeresis },
        { "į", XK_iogonek },
        { "ī", XK_imacron },
        { "ı", XK_idotless },
        { 0, XK_Cancel },
        //--
        { 0, XK_o }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ò", XK_ograve },
        { "ó", XK_oacute },
        { "ô", XK_ocircumflex },
        { "ö", XK_odiaeresis },
        { "ǫ", XK_ogonek },
        { "õ", XK_otilde },
        { "ō", XK_omacron },
        { "ø", XK_oslash },
        { "ő", XK_odoubleacute },
        { "œ", XK_oe },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_d }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ď", XK_dcaron },
        { "ð", XK_eth },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_c }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ç", XK_ccedilla },
        { "ĉ", XK_ccircumflex },
        { "č", XK_ccaron },
        { "ć", XK_cacute },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_s }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ş", XK_scedilla },
        { "ŝ", XK_scircumflex },
        { "š", XK_scaron },
        { "ś", XK_sacute },
        { "ß", XK_ssharp },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //---
        { 0, XK_z }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ž", XK_zcaron },
        { "ż", XK_zabovedot },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_n }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ñ", XK_ntilde },
        { "ń", XK_nacute },
        { "ň", XK_ncaron },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //
        { 0, XK_t }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ț", XK_tcedilla },
        { "ť", XK_tcaron },
        { "þ", XK_thorn },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //----
        { 0, XK_g }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ĝ", XK_gcircumflex },
        { "ğ", XK_gbreve },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //
        { 0, XK_h }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ĥ", XK_hcircumflex },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //
        { 0, XK_j }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ĵ", XK_jcircumflex },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_l }, //New overlay
        //---
        { "ESC", XK_Escape },
        { "ł", XK_lstroke },
        { "ľ", XK_lcaron },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
		//---
        { "🙂", 0x101f642 }, //emoji overlay
        //---
        { "😀", 0x101f600 },
        { "😁", 0x101f601 },
        { "😂", 0x101f602 },
        { "😃", 0x101f603 },
        { "😄", 0x101f604 },
        { "😅", 0x101f605 },
        { "😆", 0x101f606 },
        { "😇", 0x101f607 },
        { "😈", 0x101f608 },
        { "😉", 0x101f609 },
        { "😊", 0x101f60a },
        { "😋", 0x101f60b },
        { "😌", 0x101f60c },
        { "😍", 0x101f60d },
        { "😎", 0x101f60e },
        { "😏", 0x101f60f },
        { "😐", 0x101f610 },
        { "😒", 0x101f612 },
        { "😓", 0x101f613 },
        { "😛", 0x101f61b },
        { "😮", 0x101f62e },
        { "😟", 0x101f61f },
        { "😟", 0x101f620 },
        { "😢", 0x101f622 },
        { "😭", 0x101f62d },
        { "😳", 0x101f633 },
        { "😴", 0x101f634 },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
		{ "/?", XK_slash }, //punctuation overlay
		//--
        { "ESC", XK_Escape },
		{ "1!", XK_1, 1 },
		{ "2@", XK_2, 1 },
		{ "3#", XK_3, 1 },
		{ "4$", XK_4, 1 },
		{ "5%", XK_5, 1 },
		{ "6^", XK_6, 1 },
		{ "7&", XK_7, 1 },
		{ "8*", XK_8, 1 },
		{ "9(", XK_9, 1 },
		{ "0)", XK_0, 1 },
        { "BCK", XK_BackSpace, 1 },
        { "TAB", XK_Tab, 1 },
		{ "`~", XK_grave, 1 },
		{ "£", XK_sterling, 1 },
		{ "€", XK_EuroSign, 1 },
		{ "¥", XK_yen, 1 },
		{ "-_", XK_minus, 1 },
		{ "=+", XK_plus, 1 },
		{ "\\|", XK_backslash, 1 },
		{ "[{", XK_bracketleft, 1 },
		{ "]}", XK_bracketright, 1 },
		{ ";:", XK_colon, 1 },
		{ "'\"", XK_apostrophe, 1 },
        { "SFT", XK_Shift_L, 1 },
        { "😀", 0x101f600 },
        { "😁", 0x101f601 },
        { "😂", 0x101f602 },
        { "😃", 0x101f603 },
        { "😄", 0x101f604 },
        { "😅", 0x101f605 },
        { "😆", 0x101f606 },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
};

#define LAYERS 4
static char* layer_names[LAYERS] = {
    "en",
    "en_min",
    "symbols",
    "dial",
};

static Key* available_layers[LAYERS] = {
    keys_en,
    keys_en_min,
    keys_symbols,
    keys_dial,
};
