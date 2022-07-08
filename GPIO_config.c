
#include "gpio_config.h"


/*
 *
    typedef struct{
    u8_t SenseType;
    u8_t NumEdgeDetection;
    u8_t Event;
    u8_t maskEnable;

}GPIO_EXTI_Config;





 */

GPIO_EXTI_Config EXTI_Channel6_Config ={

           (0<<6),
           (0<<6),
           (0<<6)



};

//           (0<<3), /* Detect edges*/
 //          (0<<3), /* Interrupt generation is controlled by the  Interrupt Event register*/                                                                                      (GPIOIEV) register*/
 //          (1<<3), /* A rising edge triggers an interrupt*/
 //


 GPIO_EXTI_Config EXTI_Channel3_Config ={

          (0<<3),
          (0<<3),
          (1<<3)

};
