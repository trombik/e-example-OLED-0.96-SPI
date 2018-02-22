#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <U8g2lib.h>

#define RESET_PIN 9 /* RES */
#define SS_PIN 10 /* CS */
#define MOSI_PIN 11 /* D1 */
#define MISO_PIN 12 /* DC */
#define SCLK_PIN 13 /* D0 */

// U8G2_SH1106_128X64_NONAME_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset])
U8G2_SH1106_128X64_NONAME_2_4W_SW_SPI u8g2(U8G2_R0, SCLK_PIN, MOSI_PIN, SS_PIN, MISO_PIN, RESET_PIN);

void
setup() {
    u8g2.begin();
}

void
loop() {
    u8g2.firstPage();
    do {
        u8g2.setFont(u8g2_font_ncenB14_tr);
        u8g2.drawStr(0,24,"Hello World!");
    } while ( u8g2.nextPage() );
}
