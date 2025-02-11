#include <Arduino.h>
#include <LovyanGFX.hpp>
#include "DisplayWrapper.h"

#ifdef ST7789_DRIVER
#include "ST7789.h"
#include "DialogInput_plain_24.h"
#include "DialogInput_bold_24.h"
#include "DialogInput_plain_30.h"
#include "DialogInput_bold_30.h"
static LGFX lcd;
#elif ILI9341_DRIVER
#include "ILI9341.h"
#include "DialogInput_plain_24.h"
#include "DialogInput_bold_24.h"
#include "DialogInput_plain_30.h"
#include "DialogInput_bold_30.h"
static LGFX lcd;
#else
#include "SSD1306.h"
#define SSD1306_DRIVER
#include "DialogInput_plain_12.h"
#include "DialogInput_bold_12.h"
#include "DialogInput_plain_15.h"
#include "DialogInput_bold_15.h"
static SSD1306 lcd;
#endif

DisplayWrapper::DisplayWrapper() {
	currentFont = NULL;
}

uint16_t DisplayWrapper::getWidth(void) {
	return lcd.width();
}

uint16_t DisplayWrapper::getHeight(void) {
	return lcd.height();
}

bool DisplayWrapper::getTouch(uint16_t *x, uint16_t *y) {
	return lcd.getTouch(x,y);
}
void DisplayWrapper::display(){}

void DisplayWrapper::displayOff(){
  lcd.setBrightness(0);
  lcd.sleep();
}

uint8_t DisplayWrapper::getStringWidth(const String& strUser){
	return lcd.textWidth(strUser);
}

uint8_t DisplayWrapper::getStringHeight(const String& strUser){
	return lcd.fontHeight(currentFont);
}

void DisplayWrapper::drawRect(int16_t x, int16_t y, int16_t width, int16_t height){
	lcd.drawRect(x,y,width,height);
}

void DisplayWrapper::fillRect(int16_t x, int16_t y, int16_t width, int16_t height){
	lcd.fillRect(x,y,width,height);
}
void DisplayWrapper::drawHorizontalLine(int16_t x, int16_t y, int16_t length){
	lcd.drawFastHLine(x,y,length);
}

void DisplayWrapper::drawVerticalLine(int16_t x, int16_t y, int16_t length){
	lcd.drawFastVLine(x,y,length);
}

void DisplayWrapper::drawXbm(int16_t x, int16_t y, int16_t width, int16_t height, const uint8_t *xbm){
	lcd.drawXBitmap(x, y, xbm, width, height, TFT_WHITE, TFT_BLACK);
}

uint16_t DisplayWrapper::drawString(int16_t x, int16_t y, const String &text ){
	lcd.setCursor(x,y);
	return lcd.print(text);
}

void DisplayWrapper::flipScreenVertically(){
	lcd.setRotation(1);
}

bool DisplayWrapper::init(){
#ifdef PIN_VTFT_CTRL
  pinMode(PIN_VTFT_CTRL, OUTPUT);
  digitalWrite(PIN_VTFT_CTRL, LOW);
#endif
	lcd.begin();
	lcd.startWrite();
#ifdef SSD1306_DRIVER
	lcd.setColorDepth(lgfx::palette_1bit);
#endif
	lcd.setRotation(3);
	// lcd.setRotation(2); - ssd1306 m32 normal layout
	//lcd.setFont(&DialogInput_plain_12);
	//lcd.setFont(&fonts::AsciiFont8x16);
	return true;
}
void DisplayWrapper::setTextAlignment(OLEDDISPLAY_TEXT_ALIGNMENT textAlignment){}

void DisplayWrapper::setFont(int index){
	setFontIndex(index);
}

void DisplayWrapper::setFont(const GFXfont *fontData){
	lcd.setFont(fontData);
}

void DisplayWrapper::setFontIndex(int index){
	switch (index) {
#ifdef SSD1306_DRIVER
		case 1:
			lcd.setFont(&GFXDialogInput_bold_12);
			currentFont=&GFXDialogInput_bold_12;
			break;
		case 2:
			lcd.setFont(&GFXDialogInput_plain_15);
			currentFont=&GFXDialogInput_plain_15;
			break;
		case 3:
			lcd.setFont(&GFXDialogInput_bold_15);
			currentFont=&GFXDialogInput_bold_15;
			break;
		default:
			lcd.setFont(&GFXDialogInput_plain_12);
			currentFont=&GFXDialogInput_plain_12;
			break;
#else
		case 1:
			lcd.setFont(&GFXDialogInput_bold_24);
			currentFont=&GFXDialogInput_bold_24;
			break;
		case 2:
			lcd.setFont(&GFXDialogInput_plain_30);
			currentFont=&GFXDialogInput_plain_30;
			break;
		case 3:
			lcd.setFont(&GFXDialogInput_bold_30);
			currentFont=&GFXDialogInput_bold_30;
			break;
		default:
			lcd.setFont(&GFXDialogInput_plain_24);
			currentFont=&GFXDialogInput_plain_24;
			break;

#endif
	}
}

void DisplayWrapper::clear(void){
	lcd.fillScreen(TFT_BLACK);
}

void DisplayWrapper::setBrightness(uint8_t brightness){
	lcd.setBrightness(brightness);
}

void DisplayWrapper::setColor(OLEDDISPLAY_COLOR color) {
	this->color = colorConvert(color);
	if (color == WHITE) {
		lcd.setColor(TFT_WHITE);
		lcd.setTextColor(TFT_WHITE, TFT_BLACK);
	}
	else {
		lcd.setTextColor(TFT_BLACK, TFT_WHITE);
		lcd.setColor(TFT_BLACK);
	}
}

int DisplayWrapper::colorConvert(OLEDDISPLAY_COLOR color) {
	switch (color) {
		WHITE:	
			return TFT_WHITE;
		RED:	
			return TFT_RED;
		GREEN:	
			return TFT_GREEN;
		BLUE:	
			return TFT_BLUE;
		default:
      return TFT_BLACK;
	}
}

