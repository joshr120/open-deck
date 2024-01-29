// These arrays are just the default images, uploaded images are stored in SPIFFS.
//Image colours are stored seperatly these are just the bitmaps

//prev page
unsigned char prevPage [] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


//next page
unsigned char nextPage [] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


//Default Home(app) Icon Bitmaps
unsigned char homes [][490]{{},
//Home 1:
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x60, 0xe0, 0x78, 0x0c, 0x0c, 0x3f, 0x80,
0x60, 0xe0, 0xfe, 0x0c, 0x1c, 0x3f, 0x80,
0x60, 0xe1, 0xce, 0x0c, 0x1c, 0x30, 0x00,
0x60, 0xe3, 0x87, 0x0e, 0x1c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x0e, 0x3c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x0e, 0x3c, 0x30, 0x00,
0x7f, 0xe3, 0x03, 0x0b, 0x2c, 0x3f, 0x00,
0x7f, 0xe3, 0x03, 0x0b, 0x6c, 0x3f, 0x00,
0x60, 0xe3, 0x03, 0x09, 0x6c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x09, 0xcc, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x09, 0xcc, 0x30, 0x00,
0x60, 0xe1, 0x87, 0x08, 0xcc, 0x30, 0x00,
0x60, 0xe1, 0xce, 0x08, 0xcc, 0x3f, 0x80,
0x60, 0xe0, 0xfc, 0x08, 0x0c, 0x3f, 0x80,
0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x13, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},
//Home 2:
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0x07, 0x03, 0xc0, 0x60, 0x61, 0xfc,
0x03, 0x07, 0x07, 0xf0, 0x60, 0xe1, 0xfc,
0x03, 0x07, 0x0e, 0x70, 0x60, 0xe1, 0x80,
0x03, 0x07, 0x1c, 0x38, 0x70, 0xe1, 0x80,
0x03, 0x07, 0x18, 0x18, 0x71, 0xe1, 0x80,
0x03, 0x07, 0x18, 0x18, 0x71, 0xe1, 0x80, 
0x03, 0xff, 0x18, 0x18, 0x59, 0x61, 0xf8,
0x03, 0xff, 0x18, 0x18, 0x5b, 0x61, 0xf8, 
0x03, 0x07, 0x18, 0x18, 0x4b, 0x61, 0x80, 
0x03, 0x07, 0x18, 0x18, 0x4e, 0x61, 0x80, 
0x03, 0x07, 0x18, 0x18, 0x4e, 0x61, 0x80, 
0x03, 0x07, 0x0c, 0x38, 0x46, 0x61, 0x80, 
0x03, 0x07, 0x0e, 0x70, 0x46, 0x61, 0xfc, 
0x03, 0x07, 0x07, 0xe0, 0x40, 0x61, 0xfc, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xf3, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xe1, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xc1, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xc1, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},
//Home 3:
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x60, 0xe0, 0x78, 0x0c, 0x0c, 0x3f, 0x80,
0x60, 0xe0, 0xfe, 0x0c, 0x1c, 0x3f, 0x80,
0x60, 0xe1, 0xce, 0x0c, 0x1c, 0x30, 0x00,
0x60, 0xe3, 0x87, 0x0e, 0x1c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x0e, 0x3c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x0e, 0x3c, 0x30, 0x00,
0x7f, 0xe3, 0x03, 0x0b, 0x2c, 0x3f, 0x00,
0x7f, 0xe3, 0x03, 0x0b, 0x6c, 0x3f, 0x00,
0x60, 0xe3, 0x03, 0x09, 0x6c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x09, 0xcc, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x09, 0xcc, 0x30, 0x00,
0x60, 0xe1, 0x87, 0x08, 0xcc, 0x30, 0x00,
0x60, 0xe1, 0xce, 0x08, 0xcc, 0x3f, 0x80, 
0x60, 0xe0, 0xfc, 0x08, 0x0c, 0x3f, 0x80,
0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0xfc, 0x7e, 0x00, 0x00, 0x00,
0x00, 0x00, 0xf8, 0x7e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x30, 0x7f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},
//Home 4:
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x60, 0xe0, 0x78, 0x0c, 0x0c, 0x3f, 0x80,
0x60, 0xe0, 0xfe, 0x0c, 0x1c, 0x3f, 0x80,
0x60, 0xe1, 0xce, 0x0c, 0x1c, 0x30, 0x00,
0x60, 0xe3, 0x87, 0x0e, 0x1c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x0e, 0x3c, 0x30, 0x00, 
0x60, 0xe3, 0x03, 0x0e, 0x3c, 0x30, 0x00,
0x7f, 0xe3, 0x03, 0x0b, 0x2c, 0x3f, 0x00,
0x7f, 0xe3, 0x03, 0x0b, 0x6c, 0x3f, 0x00,
0x60, 0xe3, 0x03, 0x09, 0x6c, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x09, 0xcc, 0x30, 0x00,
0x60, 0xe3, 0x03, 0x09, 0xcc, 0x30, 0x00,
0x60, 0xe1, 0x87, 0x08, 0xcc, 0x30, 0x00,
0x60, 0xe1, 0xce, 0x08, 0xcc, 0x3f, 0x80, 
0x60, 0xe0, 0xfc, 0x08, 0x0c, 0x3f, 0x80,
0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7e, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0xfe, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0xfc, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x01, 0xfc, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00,
0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00,
0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00,
0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00,
0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00,
0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}, 
//Home 5:
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0x07, 0x03, 0xc0, 0x60, 0x61, 0xfc,
0x03, 0x07, 0x07, 0xf0, 0x60, 0xe1, 0xfc,
0x03, 0x07, 0x0e, 0x70, 0x60, 0xe1, 0x80,
0x03, 0x07, 0x1c, 0x38, 0x70, 0xe1, 0x80,
0x03, 0x07, 0x18, 0x18, 0x71, 0xe1, 0x80,
0x03, 0x07, 0x18, 0x18, 0x71, 0xe1, 0x80,
0x03, 0xff, 0x18, 0x18, 0x59, 0x61, 0xf8,
0x03, 0xff, 0x18, 0x18, 0x5b, 0x61, 0xf8,
0x03, 0x07, 0x18, 0x18, 0x4b, 0x61, 0x80, 
0x03, 0x07, 0x18, 0x18, 0x4e, 0x61, 0x80,
0x03, 0x07, 0x18, 0x18, 0x4e, 0x61, 0x80,
0x03, 0x07, 0x0c, 0x38, 0x46, 0x61, 0x80,
0x03, 0x07, 0x0e, 0x70, 0x46, 0x61, 0xfc,
0x03, 0x07, 0x07, 0xe0, 0x40, 0x61, 0xfc,
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x00, 0xe1, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x01, 0x81, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x03, 0xe3, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},
//Home 6:
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0x07, 0x03, 0xc0, 0x60, 0x61, 0xfc,
0x03, 0x07, 0x07, 0xf0, 0x60, 0xe1, 0xfc,
0x03, 0x07, 0x0e, 0x70, 0x60, 0xe1, 0x80,
0x03, 0x07, 0x1c, 0x38, 0x70, 0xe1, 0x80,
0x03, 0x07, 0x18, 0x18, 0x71, 0xe1, 0x80,
0x03, 0x07, 0x18, 0x18, 0x71, 0xe1, 0x80,
0x03, 0xff, 0x18, 0x18, 0x59, 0x61, 0xf8, 
0x03, 0xff, 0x18, 0x18, 0x5b, 0x61, 0xf8,
0x03, 0x07, 0x18, 0x18, 0x4b, 0x61, 0x80,
0x03, 0x07, 0x18, 0x18, 0x4e, 0x61, 0x80,
0x03, 0x07, 0x18, 0x18, 0x4e, 0x61, 0x80,
0x03, 0x07, 0x0c, 0x38, 0x46, 0x61, 0x80,
0x03, 0x07, 0x0e, 0x70, 0x46, 0x61, 0xfc,
0x03, 0x07, 0x07, 0xe0, 0x40, 0x61, 0xfc,
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xf7, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xc1, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xc1, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xc0, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xc1, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xc1, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xf3, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}};
  