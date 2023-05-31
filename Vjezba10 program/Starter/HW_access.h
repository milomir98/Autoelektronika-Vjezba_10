#ifndef _HW_ACCESS_H
#define _HW_ACCESS_H

#include <stdint.h>

/*
 * LED BAR SECTION
 */

int init_LED_comm(void);
int close_LED_comm(void);
int set_LED_BAR(uint8_t b, uint8_t d);
int get_LED_BAR(uint8_t b, uint8_t* d);


/*
 * 7-SEG DISPLAY SECTION
 */

int init_7seg_comm(void);
int close_7seg_comm(void);
int select_7seg_digit(uint8_t d);
int set_7seg_digit(uint8_t d);


/*
 * FULL SERIAL COMM SECTION
 */

int init_serial_uplink(uint8_t c);
int close_serial_uplink(uint8_t c);
int init_serial_downlink(uint8_t c);
int close_serial_downlink(uint8_t c);
int send_serial_character(uint8_t c, uint8_t d);
int get_serial_character(uint8_t c, uint8_t* d);

#endif