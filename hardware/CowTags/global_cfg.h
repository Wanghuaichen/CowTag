/*
 * global_cfg.h
 * 
 *  Created on: March 9th, 2017
 *      Author: Steven Hall
 * 
 */

#ifndef GLOBAL_CFG_H
#define GLOBAL_CFG_H

// Configuration Options

// [0] = Beta
// [1] = Alpha
// [2] = NOT USED
// [3] = Gateway
// Specifies the Tag Type being used
#define TAG_TYPE 0

// Original value: 6
// Specifies the number of retries for send
#define RADIO_SEND_MAX_RETRIES 6

// Original value: 6
// Specifies the number of retries for receive
#define RADIO_RECEIVE_MAX_RETRIES 6

// Original value: (500)
// Specifies the timeout for send and receive in milliseconds
#define RADIO_SEND_ACK_TIMEOUT_TIME_MS (500)

// Original value: (500)
// Specifies the timeout for send and receive in milliseconds
#define RADIO_RECEIVE_ACK_TIMEOUT_TIME_MS (500)

#define HOUR_SLEEP_TICKS 3600000000
#define MINUTE_SLEEP_TICKS 60000000

#define MAX_EEPROM_ADDRESS 0x7FFF
#define MIN_EEPROM_ADDRESS 0x0000

#endif // GLOBAL_CFG_H
