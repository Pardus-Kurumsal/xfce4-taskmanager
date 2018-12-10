/* automatically generated from process-window.ui */
#ifdef __SUNPRO_C
#pragma align 4 (process_window_ui)
#endif
#ifdef __GNUC__
static const char process_window_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char process_window_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><object class=\"Gt"
  "kWindow\" id=\"process-window\"><property name=\"can_focus\">False</pro"
  "perty><property name=\"title\" translatable=\"yes\">Task Manager</prope"
  "rty><property name=\"default_width\">490</property><property name=\"def"
  "ault_height\">465</property><property name=\"icon_name\">utilities-syst"
  "em-monitor</property><child><object class=\"GtkVBox\" id=\"process-vbox"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property><child><object class=\"GtkToolbar\" id=\"process-too"
  "lbar\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property><property name=\"show_arrow\">False</property><p"
  "roperty name=\"icon_size\">1</property><child><object class=\"GtkToolBu"
  "tton\" id=\"toolbutton-about\"><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">False</property><property name=\"use_act"
  "ion_appearance\">False</property><property name=\"use_underline\">True<"
  "/property><property name=\"stock_id\">gtk-about</property></object><pac"
  "king><property name=\"expand\">False</property><property name=\"homogen"
  "eous\">True</property></packing></child><child><object class=\"GtkToolI"
  "tem\" id=\"filter-toolitem\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"border_wi"
  "dth\">2</property><property name=\"use_action_appearance\">False</prope"
  "rty><child><object class=\"GtkAlignment\" id=\"alignment1\"><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">False</prop"
  "erty><property name=\"xalign\">1</property><property name=\"xscale\">0."
  "5</property><child><object class=\"GtkEntry\" id=\"filter-entry\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"invisible_char\">\342\200\242</property><pro"
  "perty name=\"invisible_char_set\">True</property><property name=\"prima"
  "ry_icon_stock\">gtk-find</property><property name=\"secondary_icon_stoc"
  "k\">gtk-clear</property><property name=\"primary_icon_activatable\">Tru"
  "e</property><property name=\"secondary_icon_activatable\">True</propert"
  "y><property name=\"primary_icon_sensitive\">True</property><property na"
  "me=\"secondary_icon_sensitive\">False</property></object></child></obje"
  "ct></child></object><packing><property name=\"expand\">True</property><"
  "/packing></child></object><packing><property name=\"expand\">False</pro"
  "perty><property name=\"fill\">True</property><property name=\"position\""
  ">0</property></packing></child><child><object class=\"GtkVBox\" id=\"ro"
  "ot-warning-box\"><property name=\"can_focus\">False</property><child><o"
  "bject class=\"GtkEventBox\" id=\"root-warning-ebox\"><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">False</property><c"
  "hild><object class=\"GtkLabel\" id=\"root-warning-label\"><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">False</proper"
  "ty><property name=\"xpad\">6</property><property name=\"ypad\">3</prope"
  "rty><property name=\"label\" translatable=\"yes\">Warning, you are usin"
  "g the root account, you may harm your system.</property></object></chil"
  "d></object><packing><property name=\"expand\">False</property><property"
  " name=\"fill\">False</property><property name=\"position\">0</property>"
  "</packing></child><child><object class=\"GtkHSeparator\" id=\"root-warn"
  "ing-separator\"><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">False</property></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"fill\">True</property><property n"
  "ame=\"position\">1</property></packing></child></object><packing><prope"
  "rty name=\"expand\">False</property><property name=\"fill\">False</prop"
  "erty><property name=\"position\">1</property></packing></child><child><"
  "object class=\"GtkVPaned\" id=\"mainview-vpaned\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">True</property><prope"
  "rty name=\"position\">100</property><property name=\"position_set\">Tru"
  "e</property><child><object class=\"GtkVBox\" id=\"graph-vbox\"><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">False</p"
  "roperty><child><object class=\"GtkHBox\" id=\"graph-hbox\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">False</prope"
  "rty><child><object class=\"GtkToolItem\" id=\"graph-cpu\"><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">False</proper"
  "ty><property name=\"border_width\">2</property><property name=\"use_act"
  "ion_appearance\">False</property><child><placeholder/></child></object>"
  "<packing><property name=\"expand\">True</property><property name=\"fill"
  "\">True</property><property name=\"position\">0</property></packing></c"
  "hild><child><object class=\"GtkToolItem\" id=\"graph-mem\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">False</prope"
  "rty><property name=\"border_width\">2</property><property name=\"use_ac"
  "tion_appearance\">False</property><child><placeholder/></child></object"
  "><packing><property name=\"expand\">True</property><property name=\"fil"
  "l\">True</property><property name=\"position\">1</property></packing></"
  "child></object><packing><property name=\"expand\">True</property><prope"
  "rty name=\"fill\">True</property><property name=\"position\">-1</proper"
  "ty></packing></child><child><placeholder/></child></object><packing><pr"
  "operty name=\"resize\">False</property><property name=\"shrink\">False<"
  "/property></packing></child><child><object class=\"GtkVBox\" id=\"mainv"
  "iew-vbox\"><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">False</property><property name=\"spacing\">6</property><chil"
  "d><object class=\"GtkScrolledWindow\" id=\"scrolledwindow\"><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">True</prope"
  "rty><property name=\"hscrollbar_policy\">automatic</property><property "
  "name=\"vscrollbar_policy\">automatic</property><child><placeholder/></c"
  "hild></object><packing><property name=\"expand\">True</property><proper"
  "ty name=\"fill\">True</property><property name=\"position\">0</property"
  "></packing></child></object><packing><property name=\"resize\">True</pr"
  "operty><property name=\"shrink\">True</property></packing></child></obj"
  "ect><packing><property name=\"expand\">True</property><property name=\""
  "fill\">True</property><property name=\"position\">2</property></packing"
  "></child></object></child></object></interface>"
};

static const unsigned process_window_ui_length = 6076u;

