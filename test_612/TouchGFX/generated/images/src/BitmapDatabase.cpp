// 4.13.0 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB888 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0xcc3a7814
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <platform/driver/lcd/LCD24bpp.hpp>

extern const unsigned char _bg[]; // BITMAP_BG_ID = 0, Size: 480x272 pixels
extern const unsigned char _radio_button_selected[]; // BITMAP_RADIO_BUTTON_SELECTED_ID = 1, Size: 42x42 pixels
extern const unsigned char _radio_button_selected_pressed[]; // BITMAP_RADIO_BUTTON_SELECTED_PRESSED_ID = 2, Size: 42x42 pixels
extern const unsigned char _radio_button_unselected[]; // BITMAP_RADIO_BUTTON_UNSELECTED_ID = 3, Size: 42x42 pixels
extern const unsigned char _radio_button_unselected_pressed[]; // BITMAP_RADIO_BUTTON_UNSELECTED_PRESSED_ID = 4, Size: 42x42 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _bg, 0, 480, 272, 0, 0, 480, (uint8_t)(touchgfx::Bitmap::RGB888) >> 3, 272, (uint8_t)(touchgfx::Bitmap::RGB888) & 0x7 },
    { _radio_button_selected, 0, 42, 42, 10, 10, 22, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 21, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _radio_button_selected_pressed, 0, 42, 42, 10, 10, 22, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 21, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _radio_button_unselected, 0, 42, 42, 10, 10, 22, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 21, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _radio_button_unselected_pressed, 0, 42, 42, 10, 10, 21, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 22, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
