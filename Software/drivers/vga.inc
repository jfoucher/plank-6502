VIDEO_BASE = $FF80

VIDEO_CTRL = VIDEO_BASE       ;// Formatted as follows |INCR_5|INCR_4|INCR_3|INCR_2|INCR_1|INCR_0|MODE_1|MODE_0|  default to LORES
VIDEO_ADDR_LOW = VIDEO_BASE + 1   ;// also contains the increment ||||ADDR4|ADDR_3|ADDR_2|ADDR_1|ADDR_0|
VIDEO_ADDR_HIGH = VIDEO_BASE + 2
VIDEO_DATA = VIDEO_BASE + 3
VIDEO_IEN = VIDEO_BASE + 4    ;// formatted as follows |VSYNC| | | | | | |HSYNC|
VIDEO_INTR = VIDEO_BASE + 5   ;// formatted as follows |VSYNC| | | | | | |HSYNC|
VIDEO_HSCROLL = VIDEO_BASE + 6
VIDEO_VSCROLL = VIDEO_BASE + 7