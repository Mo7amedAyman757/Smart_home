/* 
 * File:   ecu_led.h
 * Author: LEGION
 *
 * Created on September 2, 2024, 9:43 PM
 */

#ifndef ECU_LED_H
#define	ECU_LED_H



/* Section : Includes */
#include "ecu_led_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/*Section : Macro Declaration*/


/*Section : Macro Function Declaration*/

/*Section : Data Type Declaration*/
typedef enum {
    LED_OFF,
    LED_ON
} led_status;

typedef struct {
    uint8 port : 4;
    uint8 pin : 3;
    uint8 led_status : 1;
} led_t;
/*Section : Function Declaration*/
STD_ReturnType led_initialization(const led_t *led);
STD_ReturnType led_turn_on(const led_t *led);
STD_ReturnType led_turn_off(const led_t *led);
STD_ReturnType led_toggle(const led_t *led);
#endif	/* ECU_LED_H */

