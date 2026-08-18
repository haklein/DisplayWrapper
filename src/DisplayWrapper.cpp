#include <Arduino.h>
#include <LovyanGFX.hpp>
#include "DisplayWrapper.h"

#if defined(ST7789_DRIVER) || defined(ILI9341_DRIVER)
#ifdef ST7789_DRIVER
#include "ST7789.h"
#elif ILI9341_DRIVER
#include "ILI9341.h"
#endif
#include "DialogInput_plain_24.h"
#include "DialogInput_bold_24.h"
#include "DialogInput_plain_30.h"
#include "DialogInput_bold_30.h"
#include "IntelOneMono_Regular12pt8b.h"
#include "IntelOneMono_Regular15pt8b.h"
#include "IntelOneMono_Bold12pt8b.h"
#include "IntelOneMono_Bold15pt8b.h"
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
	useTheme = false;
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

// uint16_t, not uint8_t: LovyanGFX's textWidth() returns int32_t, and a string
// only has to reach 256 px to wrap. On a 320 px panel that is ~15 characters of
// a 18 px monospace font, which is well inside one line - so the truncation was
// reachable with ordinary text, and silent.
uint16_t DisplayWrapper::getStringWidth(const String& strUser){
	return lcd.textWidth(strUser);
}

// Reports the height of the font that is actually selected. currentFont is
// maintained by BOTH setFont() overloads; before the first setFont() call it is
// still NULL, so fall back to the metric LovyanGFX holds for the live font
// rather than dereferencing a null IFont*.
uint16_t DisplayWrapper::getStringHeight(const String& strUser){
	return currentFont ? lcd.fontHeight(currentFont) : lcd.fontHeight();
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
	lcd.drawXBitmap(x, y, xbm, width, height, useTheme ? fg : TFT_WHITE, useTheme ? bg : TFT_BLACK);
}

// Map the ThingPulse alignment enum onto a LovyanGFX datum. CENTER centres
// horizontally on x and keeps the top edge at y; CENTER_BOTH centres on both
// axes - the same meaning the OLED library this wrapper emulates gives them.
static lgfx::textdatum_t datumFor(OLEDDISPLAY_TEXT_ALIGNMENT a) {
	switch (a) {
		case TEXT_ALIGN_RIGHT:       return lgfx::top_right;
		case TEXT_ALIGN_CENTER:      return lgfx::top_center;
		case TEXT_ALIGN_CENTER_BOTH: return lgfx::middle_center;
		case TEXT_ALIGN_LEFT:
		default:                     return lgfx::top_left;
	}
}

uint16_t DisplayWrapper::drawString(int16_t x, int16_t y, const String &text) {
	lcd.setTextDatum(datumFor(textAlign));
	lcd.drawString(text.c_str(), x, y);
	return lcd.textWidth(text.c_str());
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
	// lcd.startWrite();// As an additional note, when startWrite is used, LovyanGFX occupies the SPI bus and operates.
#ifdef SSD1306_DRIVER
	lcd.setColorDepth(lgfx::palette_1bit);
#endif
	lcd.setRotation(3);
	// lcd.setRotation(2); - ssd1306 m32 normal layout
	//lcd.setFont(&DialogInput_plain_12);
	//lcd.setFont(&fonts::AsciiFont8x16);
	return true;
}

#if defined(ST7789_DRIVER) || defined(ILI9341_DRIVER)
lgfx::LGFX_Device* DisplayWrapper::getLGFX(){
	return &lcd;
}
#endif

// Was an empty stub, so TEXT_ALIGN_CENTER / _RIGHT / _CENTER_BOTH were silently
// drawn left-aligned; drawString() applies the stored alignment now.
void DisplayWrapper::setTextAlignment(OLEDDISPLAY_TEXT_ALIGNMENT textAlignment){
	textAlign = textAlignment;
}

void DisplayWrapper::setFont(int index){
	setFontIndex(index);
}

void DisplayWrapper::setFont(const GFXfont *fontData){
	lcd.setFont(fontData);
	currentFont = fontData;		// keep getStringHeight() in step
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
                        lcd.setFont(&IntelOneMono_Bold12pt8b);
                        currentFont=&IntelOneMono_Bold12pt8b;
                        break;
                case 2:
                        lcd.setFont(&IntelOneMono_Regular15pt8b);
                        currentFont=&IntelOneMono_Regular15pt8b;
                        break;
                case 3:
                        lcd.setFont(&IntelOneMono_Bold15pt8b);
                        currentFont=&IntelOneMono_Bold15pt8b;
                        break;
                default:
                        lcd.setFont(&IntelOneMono_Regular12pt8b);
                        currentFont=&IntelOneMono_Regular12pt8b;
                        break;
#endif
	}
}

void DisplayWrapper::clear(void){
	if (!useTheme)
		lcd.fillScreen(TFT_BLACK);
	else
		lcd.fillScreen(bg);
}

void DisplayWrapper::setBrightness(uint8_t brightness){
	lcd.setBrightness(brightness);
}

void DisplayWrapper::setColor(OLEDDISPLAY_COLOR color) {
	if (!useTheme) {
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
	else {
		if (color == WHITE) {
			lcd.setColor(fg);
			lcd.setTextColor(fg, bg);
		}
		else {
			lcd.setTextColor(bg, fg);
			lcd.setColor(bg);
		}
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

void DisplayWrapper::setTheme(uint16_t f, uint16_t b) {
if (f==b) {
    useTheme = false;
}
else {
    useTheme = true;
    fg = f; bg = b;
  }
}
