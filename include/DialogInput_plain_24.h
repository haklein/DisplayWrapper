// Created by https://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t DialogInput_plain_24Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xDB,0x6D,0xB6,0xDB,0x60,0x06,0xD8, // '!'
	0xCD,0x9B,0x36,0x6C,0xD9,0xB3,0x00, // '"'
	0x03,0x30,0x04,0x60,0x18,0xC0,0x31,0x80,0x62,0x0F,0xFF,0x9F,0xFF,0x06,0x30,0x0C,0x40,0x19,0x80,0x23,0x07,0xFF,0xCF,0xFF,0x83,0x30,0x04,0x60,0x18,0xC0,0x31,0x80,0x66,0x00, // '#'
	0x04,0x00,0x40,0x04,0x01,0xF8,0x7F,0xCE,0x44,0xC4,0x0C,0x40,0xC4,0x07,0xC0,0x3F,0x80,0x7C,0x04,0xE0,0x46,0x04,0x68,0x4E,0xFF,0xC7,0xF0,0x04,0x00,0x40,0x04,0x00,0x40, // '$'
	0x38,0x00,0xF8,0x03,0x18,0x06,0x30,0x0C,0x60,0x0F,0x83,0x0E,0x0C,0x00,0x70,0x01,0x80,0x0C,0x00,0x70,0x01,0x83,0x86,0x0F,0x80,0x31,0x80,0x63,0x00,0xC6,0x00,0xF8,0x00,0xE0, // '%'
	0x0F,0x00,0x3F,0x00,0xE2,0x01,0x80,0x03,0x00,0x06,0x00,0x06,0x00,0x0E,0x00,0x3C,0x00,0xCC,0x1B,0x0C,0x36,0x1C,0x6C,0x1D,0xD8,0x1F,0x38,0x1C,0x38,0x7C,0x3F,0xD8,0x3F,0x38, // '&'
	0xDB,0x6D,0xB0, // '''
	0x18,0xC3,0x18,0x61,0x8C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x18,0x61,0x83,0x0C,0x18, // '('
	0xC1,0x86,0x0C,0x30,0xC1,0x86,0x18,0x61,0x86,0x18,0x61,0x8C,0x30,0xC6,0x18,0xC0, // ')'
	0x04,0x00,0x40,0xC4,0x67,0x5C,0x1F,0x01,0xF0,0x75,0xCC,0x46,0x04,0x00,0x40, // '*'
	0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x7F,0xFB,0xFF,0xC0,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00, // '+'
	0x73,0x9C,0xE6,0x73,0x00, // ','
	0xFD,0xF8, // '-'
	0xEE,0xEE, // '.'
	0x00,0x60,0x0C,0x00,0xC0,0x18,0x01,0x80,0x18,0x03,0x00,0x30,0x06,0x00,0x60,0x0C,0x00,0xC0,0x18,0x01,0x80,0x30,0x03,0x00,0x30,0x06,0x00,0x60,0x0C,0x00, // '/'
	0x1F,0x03,0xF8,0x71,0xC6,0x0C,0xE0,0xCC,0x06,0xC0,0x6C,0x06,0xCE,0x6C,0xE6,0xC0,0x6C,0x06,0xC0,0x6E,0x0C,0x60,0xC7,0x1C,0x3F,0x81,0xF0, // '0'
	0x3C,0x1F,0x83,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0xFF,0xDF,0xF8, // '1'
	0x3F,0x0F,0xF8,0xC0,0xC0,0x06,0x00,0x60,0x06,0x00,0x60,0x0E,0x01,0xC0,0x18,0x03,0x00,0x60,0x0E,0x01,0x80,0x30,0x06,0x00,0xFF,0xEF,0xFE, // '2'
	0x1F,0x07,0xFC,0x40,0xC0,0x06,0x00,0x60,0x06,0x00,0x60,0x1C,0x1F,0x81,0xF8,0x01,0xC0,0x06,0x00,0x60,0x06,0x00,0x68,0x1C,0xFF,0xC7,0xF0, // '3'
	0x01,0xC0,0x1E,0x00,0xB0,0x0D,0x80,0xCC,0x06,0x60,0x63,0x03,0x18,0x30,0xC3,0x06,0x18,0x31,0x81,0x8F,0xFF,0x7F,0xF8,0x03,0x00,0x18,0x00,0xC0,0x06,0x00, // '4'
	0x7F,0xC7,0xFC,0x60,0x06,0x00,0x60,0x06,0x00,0x7F,0x07,0xF8,0x41,0xC0,0x0E,0x00,0x60,0x06,0x00,0x60,0x06,0x00,0xE8,0x1C,0xFF,0x87,0xF0, // '5'
	0x0F,0x83,0xFC,0x38,0x46,0x00,0x60,0x0C,0x00,0xCF,0x0D,0xFC,0xF1,0xCE,0x0E,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0x60,0xE7,0x1C,0x3F,0xC1,0xF0, // '6'
	0xFF,0xEF,0xFE,0x00,0xC0,0x0C,0x01,0xC0,0x18,0x01,0x80,0x30,0x03,0x00,0x70,0x06,0x00,0x60,0x0C,0x00,0xC0,0x1C,0x01,0x80,0x18,0x03,0x00, // '7'
	0x1F,0x07,0xFC,0xE0,0xCC,0x06,0xC0,0x6C,0x06,0xC0,0x66,0x0C,0x3F,0x83,0xF8,0x60,0xCC,0x06,0xC0,0x6C,0x06,0xC0,0x6E,0x0E,0x7F,0xC1,0xF0, // '8'
	0x1F,0x07,0xF8,0x71,0xCE,0x0C,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xE0,0xE6,0x1E,0x7F,0x61,0xE6,0x00,0x60,0x0C,0x00,0xC4,0x18,0x7F,0x83,0xE0, // '9'
	0xEE,0xEE,0x00,0x00,0xEE,0xEE, // ':'
	0x73,0x9C,0xE0,0x00,0x00,0x73,0x9C,0xE6,0x73,0x00, // ';'
	0x00,0x10,0x07,0x80,0xF8,0x1F,0x07,0xC0,0x78,0x03,0xC0,0x0F,0x80,0x0F,0x80,0x1F,0x00,0x3C,0x00,0x20, // '<'
	0xFF,0xF7,0xFF,0x80,0x00,0x00,0x00,0x00,0x7F,0xFB,0xFF,0xC0, // '='
	0x80,0x07,0x80,0x1F,0x00,0x3E,0x00,0x3E,0x00,0x78,0x03,0xC0,0x7C,0x1F,0x03,0xE0,0x3C,0x01,0x00,0x00, // '>'
	0x3E,0x1F,0xCC,0x3A,0x06,0x01,0x80,0x60,0x30,0x1C,0x0E,0x07,0x01,0x80,0x60,0x18,0x00,0x00,0x00,0x60,0x18,0x06,0x00, // '?'
	0x07,0xE0,0x1F,0xE0,0xF0,0xE1,0x80,0xE6,0x00,0xCC,0x3D,0xB0,0xFF,0x63,0x8E,0xC6,0x0D,0x8C,0x1B,0x18,0x36,0x30,0x6C,0x71,0xDC,0x7F,0x98,0x7B,0x38,0x00,0x38,0x00,0x38,0x00,0x3F,0xC0,0x1F,0x80, // '@'
	0x06,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x0C,0xC0,0x66,0x03,0x30,0x39,0x81,0x86,0x0C,0x30,0x61,0x87,0xFE,0x3F,0xF1,0x81,0x8C,0x0C,0xC0,0x36,0x01,0x80, // 'A'
	0xFE,0x0F,0xF8,0xC1,0xCC,0x0C,0xC0,0xCC,0x0C,0xC0,0xCC,0x18,0xFF,0x8F,0xF8,0xC0,0xCC,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x0E,0xFF,0xCF,0xF0, // 'B'
	0x0F,0xC1,0xFE,0x38,0x26,0x00,0x60,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x06,0x00,0x60,0x03,0x82,0x1F,0xE0,0xFC, // 'C'
	0xFE,0x0F,0xF0,0xC3,0x8C,0x0C,0xC0,0xCC,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x0C,0xC0,0xCC,0x38,0xFF,0x0F,0xE0, // 'D'
	0xFF,0xEF,0xFE,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xFF,0xCF,0xFC,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xFF,0xEF,0xFE, // 'E'
	0xFF,0xEF,0xFE,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xFF,0xCF,0xFC,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00, // 'F'
	0x0F,0xC0,0xFF,0x0E,0x08,0xC0,0x06,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x0F,0xB0,0x7D,0x80,0x6C,0x03,0x30,0x19,0x80,0xC7,0x06,0x1F,0xF0,0x7E,0x00, // 'G'
	0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xFF,0xEF,0xFE,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06, // 'H'
	0xFF,0xDF,0xF8,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0xFF,0xDF,0xF8, // 'I'
	0x0F,0xC1,0xF8,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0xA0,0x36,0x0C,0xFF,0x8F,0xE0, // 'J'
	0xC0,0x76,0x07,0x30,0x71,0x87,0x0C,0x70,0x67,0x03,0x70,0x1F,0x00,0xFC,0x07,0x70,0x31,0x81,0x86,0x0C,0x38,0x60,0xC3,0x03,0x18,0x1C,0xC0,0x66,0x01,0x80, // 'K'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xFF,0xEF,0xFE, // 'L'
	0xE0,0x77,0x03,0xBC,0x3D,0xE1,0xED,0x0B,0x6C,0xDB,0x66,0xD9,0x26,0xCF,0x36,0x79,0xB1,0x8D,0x8C,0x6C,0x03,0x60,0x1B,0x00,0xD8,0x06,0xC0,0x36,0x01,0x80, // 'M'
	0xE0,0x6E,0x06,0xF0,0x6F,0x06,0xD8,0x6D,0x86,0xD8,0x6C,0xC6,0xCC,0x6C,0x66,0xC6,0x6C,0x36,0xC3,0x6C,0x36,0xC1,0xEC,0x1E,0xC0,0xEC,0x0E, // 'N'
	0x1F,0x81,0xFE,0x1C,0x38,0xC0,0xCE,0x06,0x60,0x1B,0x00,0xD8,0x06,0xC0,0x36,0x01,0xB0,0x0D,0x80,0x6C,0x03,0x70,0x31,0x81,0x8E,0x1C,0x3F,0xC0,0xF8,0x00, // 'O'
	0xFF,0x0F,0xFC,0xC1,0xCC,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x1C,0xFF,0xCF,0xF0,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00, // 'P'
	0x1F,0x81,0xFE,0x1C,0x38,0xC0,0xCE,0x06,0x60,0x1B,0x00,0xD8,0x06,0xC0,0x36,0x01,0xB0,0x0D,0x80,0x6C,0x03,0x70,0x39,0x81,0x8E,0x1C,0x3F,0xC0,0x7C,0x00,0x70,0x01,0xC0,0x04,0x00, // 'Q'
	0xFF,0x03,0xFF,0x0C,0x1C,0x30,0x18,0xC0,0x63,0x01,0x8C,0x06,0x30,0x30,0xFF,0x83,0xFE,0x0C,0x18,0x30,0x30,0xC0,0xE3,0x01,0x8C,0x06,0x30,0x0C,0xC0,0x33,0x00,0x60, // 'R'
	0x1F,0x87,0xFC,0x60,0x4C,0x00,0xC0,0x0C,0x00,0xC0,0x07,0x00,0x7E,0x01,0xF8,0x01,0xC0,0x0E,0x00,0x60,0x06,0x00,0x6C,0x0C,0xFF,0xC7,0xF0, // 'S'
	0xFF,0xF7,0xFF,0x81,0x80,0x0C,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x00, // 'T'
	0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x66,0x0C,0x7F,0xC1,0xF0, // 'U'
	0xC0,0x36,0x01,0x98,0x18,0xC0,0xC6,0x06,0x38,0x70,0xC3,0x06,0x18,0x30,0xC1,0xCE,0x06,0x60,0x33,0x01,0x98,0x07,0xC0,0x3C,0x01,0xE0,0x0F,0x00,0x30,0x00, // 'V'
	0xC0,0x0D,0x80,0x1B,0x00,0x37,0x00,0xE6,0x01,0x8C,0x63,0x19,0xE6,0x33,0xCC,0x67,0x98,0xCF,0x31,0xD2,0xE1,0xE7,0x83,0xCF,0x07,0x9E,0x0E,0x1C,0x1C,0x38,0x38,0x70,0x70,0xE0, // 'W'
	0xE0,0x73,0x03,0x1C,0x38,0x61,0x81,0x98,0x0C,0xC0,0x3C,0x01,0xE0,0x06,0x00,0x78,0x03,0xC0,0x37,0x01,0x98,0x18,0xE0,0xC3,0x0C,0x1C,0x60,0x66,0x01,0x80, // 'X'
	0xE0,0x1C,0xC0,0x30,0xC0,0xE1,0x81,0x81,0x86,0x03,0x9C,0x03,0x30,0x03,0xC0,0x07,0x80,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x06,0x00, // 'Y'
	0xFF,0xF7,0xFF,0x80,0x1C,0x01,0xC0,0x0C,0x00,0xE0,0x0E,0x00,0x60,0x07,0x00,0x70,0x03,0x00,0x38,0x03,0x80,0x18,0x01,0x80,0x1C,0x00,0xFF,0xF7,0xFF,0x80, // 'Z'
	0xFB,0xEC,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x3E,0xF8, // '['
	0xC0,0x06,0x00,0x60,0x03,0x00,0x30,0x03,0x00,0x18,0x01,0x80,0x0C,0x00,0xC0,0x06,0x00,0x60,0x03,0x00,0x30,0x01,0x80,0x18,0x01,0x80,0x0C,0x00,0xC0,0x06, // '\'
	0xFB,0xE1,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0xBE,0xF8, // ']'
	0x07,0x00,0x3E,0x01,0xDC,0x06,0x30,0x30,0x61,0x80,0xCE,0x03,0x80, // '^'
	0xFF,0xFD,0xFF,0xF8, // '_'
	0xE0,0x60,0x60,0x60, // '`'
	0x3F,0x07,0xFC,0x40,0xE0,0x06,0x00,0x61,0xFE,0x7F,0xEE,0x06,0xC0,0x6C,0x0E,0xE1,0xE7,0xF6,0x3E,0x60, // 'a'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0xF0,0xFF,0x8F,0x1C,0xE0,0xEC,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xE0,0xEF,0x1C,0xFF,0x8C,0xF0, // 'b'
	0x0F,0x87,0xF9,0xC1,0x30,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x0C,0x01,0xC1,0x1F,0xE1,0xF8, // 'c'
	0x00,0x60,0x06,0x00,0x60,0x06,0x00,0x61,0xE6,0x3F,0xE7,0x1E,0xE0,0xEC,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xE0,0xE7,0x1E,0x3F,0xE1,0xE6, // 'd'
	0x1F,0x03,0xFC,0x70,0xCE,0x06,0xC0,0x6F,0xFE,0xFF,0xEC,0x00,0xC0,0x0E,0x00,0x70,0x43,0xFC,0x1F,0x80, // 'e'
	0x03,0xE0,0x7E,0x0C,0x00,0xC0,0x0C,0x0F,0xFE,0xFF,0xE0,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0, // 'f'
	0x1E,0x63,0xFE,0x71,0xEE,0x0E,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6E,0x0E,0x71,0xE3,0xFE,0x1E,0x60,0x06,0x00,0x64,0x0C,0x7F,0x83,0xF0, // 'g'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0xF8,0xDF,0xCF,0x0E,0xE0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06, // 'h'
	0x0C,0x01,0x80,0x30,0x00,0x00,0x00,0xF8,0x1F,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0xFF,0xDF,0xF8, // 'i'
	0x06,0x06,0x06,0x00,0x00,0x7E,0x7E,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0xFC,0xF8, // 'j'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x1C,0xC3,0x8C,0x70,0xCE,0x0D,0xC0,0xFC,0x0F,0xC0,0xE6,0x0C,0x70,0xC3,0x0C,0x18,0xC1,0xCC,0x0E, // 'k'
	0xFC,0x0F,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xE0,0x07,0xE0,0x3E, // 'l'
	0xDC,0xE7,0xFF,0x31,0x8D,0x8C,0x6C,0x63,0x63,0x1B,0x18,0xD8,0xC6,0xC6,0x36,0x31,0xB1,0x8D,0x8C,0x6C,0x63,0x00, // 'm'
	0xCF,0x8D,0xFC,0xF0,0xEE,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x60, // 'n'
	0x1F,0x03,0xF8,0x71,0xCE,0x0E,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6E,0x0E,0x71,0xC3,0xF8,0x1F,0x00, // 'o'
	0xCF,0x0F,0xF8,0xF1,0xCE,0x0E,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6E,0x0E,0xF1,0xCF,0xF8,0xCF,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00, // 'p'
	0x1E,0x63,0xFE,0x71,0xEE,0x0E,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6E,0x0E,0x71,0xE3,0xFE,0x1E,0x60,0x06,0x00,0x60,0x06,0x00,0x60,0x06, // 'q'
	0xCF,0x37,0xEF,0x0B,0x80,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x00, // 'r'
	0x3F,0x87,0xFC,0xE0,0x4C,0x00,0xE0,0x0F,0xE0,0x3F,0xC0,0x3E,0x00,0x60,0x06,0xC0,0xEF,0xFC,0x3F,0x00, // 's'
	0x0C,0x00,0xC0,0x0C,0x00,0xC0,0xFF,0xEF,0xFE,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0E,0x00,0x7E,0x03,0xE0, // 't'
	0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x0E,0xE1,0xE7,0xF6,0x3E,0x60, // 'u'
	0xC0,0x6E,0x0E,0x60,0xC6,0x0C,0x71,0xC3,0x18,0x31,0x83,0xB8,0x1B,0x01,0xB0,0x1F,0x00,0xE0,0x0E,0x00, // 'v'
	0xC0,0x0D,0x80,0x19,0x80,0x63,0x00,0xC6,0x31,0x8C,0x63,0x1D,0xEE,0x1B,0xD8,0x34,0xB0,0x69,0x60,0xF3,0xC0,0xC3,0x01,0x86,0x00, // 'w'
	0xE0,0xE7,0x1C,0x31,0x83,0xB8,0x1F,0x00,0xE0,0x0E,0x00,0xE0,0x1B,0x03,0xB8,0x31,0x86,0x0C,0xE0,0xE0, // 'x'
	0xC0,0x66,0x0C,0x60,0xC6,0x0C,0x31,0x83,0x18,0x39,0x81,0xB0,0x1B,0x01,0xF0,0x0E,0x00,0xE0,0x06,0x00,0xC0,0x0C,0x01,0xC0,0x78,0x07,0x00, // 'y'
	0xFF,0xEF,0xFE,0x00,0xC0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0x60,0x0F,0xFE,0xFF,0xE0, // 'z'
	0x07,0x83,0xE0,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x07,0x0F,0x83,0xE0,0x1C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0F,0x81,0xE0, // '{'
	0xDB,0x6D,0xB6,0xDB,0x6D,0xB6,0xDB,0x6D,0xB6, // '|'
	0xF0,0x3E,0x01,0x80,0x60,0x18,0x06,0x01,0x80,0x60,0x18,0x07,0x00,0xF8,0x3E,0x1C,0x06,0x01,0x80,0x60,0x18,0x06,0x01,0x80,0x60,0xF8,0x3C,0x00 // '}'
};
const GFXglyph DialogInput_plain_24Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   2,   1,  15,    0,   -1 }, // ' '
	  {     1,   3,  18,  15,    6,  -18 }, // '!'
	  {     8,   7,   7,  15,    4,  -18 }, // '"'
	  {    15,  15,  18,  15,    0,  -18 }, // '#'
	  {    49,  12,  22,  15,    2,  -18 }, // '$'
	  {    82,  15,  18,  15,    0,  -18 }, // '%'
	  {   116,  15,  18,  15,    1,  -18 }, // '&'
	  {   150,   3,   7,  15,    6,  -18 }, // '''
	  {   153,   6,  21,  15,    5,  -18 }, // '('
	  {   169,   6,  21,  15,    4,  -18 }, // ')'
	  {   185,  12,  10,  15,    2,  -18 }, // '*'
	  {   200,  13,  12,  15,    1,  -14 }, // '+'
	  {   220,   5,   7,  15,    5,   -4 }, // ','
	  {   225,   7,   2,  15,    4,   -8 }, // '-'
	  {   227,   4,   4,  15,    6,   -4 }, // '.'
	  {   229,  12,  20,  15,    1,  -18 }, // '/'
	  {   259,  12,  18,  15,    2,  -18 }, // '0'
	  {   286,  11,  18,  15,    3,  -18 }, // '1'
	  {   311,  12,  18,  15,    2,  -18 }, // '2'
	  {   338,  12,  18,  15,    2,  -18 }, // '3'
	  {   365,  13,  18,  15,    1,  -18 }, // '4'
	  {   395,  12,  18,  15,    2,  -18 }, // '5'
	  {   422,  12,  18,  15,    2,  -18 }, // '6'
	  {   449,  12,  18,  15,    2,  -18 }, // '7'
	  {   476,  12,  18,  15,    2,  -18 }, // '8'
	  {   503,  12,  18,  15,    2,  -18 }, // '9'
	  {   530,   4,  12,  15,    6,  -12 }, // ':'
	  {   536,   5,  15,  15,    5,  -12 }, // ';'
	  {   546,  13,  12,  15,    1,  -13 }, // '<'
	  {   566,  13,   7,  15,    1,  -11 }, // '='
	  {   578,  13,  12,  15,    1,  -13 }, // '>'
	  {   598,  10,  18,  15,    3,  -18 }, // '?'
	  {   621,  15,  20,  15,    1,  -16 }, // '@'
	  {   659,  13,  18,  15,    1,  -18 }, // 'A'
	  {   689,  12,  18,  15,    1,  -18 }, // 'B'
	  {   716,  12,  18,  15,    1,  -18 }, // 'C'
	  {   743,  12,  18,  15,    1,  -18 }, // 'D'
	  {   770,  12,  18,  15,    1,  -18 }, // 'E'
	  {   797,  12,  18,  15,    1,  -18 }, // 'F'
	  {   824,  13,  18,  15,    1,  -18 }, // 'G'
	  {   854,  12,  18,  15,    1,  -18 }, // 'H'
	  {   881,  11,  18,  15,    2,  -18 }, // 'I'
	  {   906,  11,  18,  15,    1,  -18 }, // 'J'
	  {   931,  13,  18,  15,    1,  -18 }, // 'K'
	  {   961,  12,  18,  15,    1,  -18 }, // 'L'
	  {   988,  13,  18,  15,    1,  -18 }, // 'M'
	  {  1018,  12,  18,  15,    1,  -18 }, // 'N'
	  {  1045,  13,  18,  15,    1,  -18 }, // 'O'
	  {  1075,  12,  18,  15,    1,  -18 }, // 'P'
	  {  1102,  13,  21,  15,    1,  -18 }, // 'Q'
	  {  1137,  14,  18,  15,    1,  -18 }, // 'R'
	  {  1169,  12,  18,  15,    1,  -18 }, // 'S'
	  {  1196,  13,  18,  15,    1,  -18 }, // 'T'
	  {  1226,  12,  18,  15,    1,  -18 }, // 'U'
	  {  1253,  13,  18,  15,    1,  -18 }, // 'V'
	  {  1283,  15,  18,  15,    0,  -18 }, // 'W'
	  {  1317,  13,  18,  15,    1,  -18 }, // 'X'
	  {  1347,  15,  18,  15,    0,  -18 }, // 'Y'
	  {  1381,  13,  18,  15,    1,  -18 }, // 'Z'
	  {  1411,   6,  21,  15,    5,  -18 }, // '['
	  {  1427,  12,  20,  15,    1,  -18 }, // '\'
	  {  1457,   6,  21,  15,    4,  -18 }, // ']'
	  {  1473,  14,   7,  15,    1,  -18 }, // '^'
	  {  1486,  15,   2,  15,    0,    4 }, // '_'
	  {  1490,   7,   4,  15,    3,  -19 }, // '`'
	  {  1494,  12,  13,  15,    2,  -13 }, // 'a'
	  {  1514,  12,  18,  15,    2,  -18 }, // 'b'
	  {  1541,  11,  13,  15,    2,  -13 }, // 'c'
	  {  1559,  12,  18,  15,    2,  -18 }, // 'd'
	  {  1586,  12,  13,  15,    2,  -13 }, // 'e'
	  {  1606,  12,  18,  15,    2,  -18 }, // 'f'
	  {  1633,  12,  18,  15,    2,  -13 }, // 'g'
	  {  1660,  12,  18,  15,    2,  -18 }, // 'h'
	  {  1687,  11,  18,  15,    2,  -18 }, // 'i'
	  {  1712,   8,  23,  15,    2,  -18 }, // 'j'
	  {  1735,  12,  18,  15,    2,  -18 }, // 'k'
	  {  1762,  12,  18,  15,    1,  -18 }, // 'l'
	  {  1789,  13,  13,  15,    2,  -13 }, // 'm'
	  {  1811,  12,  13,  15,    2,  -13 }, // 'n'
	  {  1831,  12,  13,  15,    2,  -13 }, // 'o'
	  {  1851,  12,  18,  15,    2,  -13 }, // 'p'
	  {  1878,  12,  18,  15,    2,  -13 }, // 'q'
	  {  1905,  10,  13,  15,    4,  -13 }, // 'r'
	  {  1922,  12,  13,  15,    2,  -13 }, // 's'
	  {  1942,  12,  17,  15,    1,  -17 }, // 't'
	  {  1968,  12,  13,  15,    2,  -13 }, // 'u'
	  {  1988,  12,  13,  15,    2,  -13 }, // 'v'
	  {  2008,  15,  13,  15,    0,  -13 }, // 'w'
	  {  2033,  12,  13,  15,    2,  -13 }, // 'x'
	  {  2053,  12,  18,  15,    2,  -13 }, // 'y'
	  {  2080,  12,  13,  15,    2,  -13 }, // 'z'
	  {  2100,  10,  22,  15,    2,  -18 }, // '{'
	  {  2128,   3,  24,  15,    6,  -18 }, // '|'
	  {  2137,  10,  22,  15,    3,  -18 } // '}'
};
const GFXfont GFXDialogInput_plain_24 PROGMEM = {
(uint8_t  *)DialogInput_plain_24Bitmaps,(GFXglyph *)DialogInput_plain_24Glyphs,0x20, 0x7E, 29};
