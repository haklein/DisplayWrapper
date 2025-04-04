#include <LovyanGFX.hpp>

class LGFX : public lgfx::LGFX_Device
{
  lgfx::Panel_ST7789      _panel_instance;
  lgfx::Bus_SPI        _bus_instance;
  lgfx::Light_PWM     _light_instance;
  public:
    LGFX(void)
    {
      {
        auto cfg = _bus_instance.config();
        cfg.spi_host = SPI2_HOST;
        cfg.spi_mode = 0;
        cfg.freq_write = 40000000;
        cfg.freq_read  = 40000000;
        cfg.spi_3wire  = true;
        cfg.use_lock   = true;
        cfg.dma_channel = SPI_DMA_CH_AUTO;
        cfg.pin_sclk = TFT_SCLK;
        cfg.pin_mosi = TFT_MOSI;
        cfg.pin_miso = TFT_MISO;
        cfg.pin_dc   = TFT_DC;
        _bus_instance.config(cfg);
        _panel_instance.setBus(&_bus_instance);
      }

      {
        auto cfg = _panel_instance.config();
        cfg.pin_cs           =    TFT_CS;
        cfg.pin_rst          =    TFT_RST;
        cfg.pin_busy         =    -1;
        cfg.panel_width      =   TFT_WIDTH;
        cfg.panel_height     =   TFT_HEIGHT;
#ifdef TFT_OFFSET_X
        cfg.offset_x         =     TFT_OFFSET_X;
#else
        cfg.offset_x         =     0;
#endif
        cfg.offset_y         =     0;
        cfg.offset_rotation  =     0; // 0-7 (4-7 are upside down)
        cfg.dummy_read_pixel =     8;
        cfg.dummy_read_bits  =     1;
        cfg.readable         =  true;  // データ読出しが可能な場合 trueに設定
        cfg.invert           = true;
        cfg.rgb_order        = false; // swap red/blue?
        cfg.dlen_16bit       = false;
        cfg.bus_shared       =  true;  // share with SD card?
        _panel_instance.config(cfg);
    }

    {
      auto cfg = _light_instance.config();
      cfg.pin_bl = TFT_BL;
      cfg.invert = false;
      cfg.freq   = 44100; // PWM frequency
      cfg.pwm_channel = 7; // PWM channel to use
      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance); // map backlight to panel
    }
    setPanel(&_panel_instance);
  }
};
