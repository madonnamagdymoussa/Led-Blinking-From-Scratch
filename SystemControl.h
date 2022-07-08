
#ifndef SYSTEMCONTROL_H_
#define SYSTEMCONTROL_H_

#include "lstd.h"
#include "SystemControl_config.h"
#include "gpio_config.h"

#define PRECISION_INTERNAL_OSC               (16000000)
#define LOW_FREQUENCY_INTERNAL_OSC           (30000)
#define PRECISION_INTERNAL_OSC_DIV4          (4000000)
#define HIBERNATION_OSC                      (32768)
#define MAIN_OSC                             (5000000)


u32_t SC_GetSystemClock_RCC(void);
void SystemControlInitialization_RCC(SystemControlConfig_t*ptConfig);

void SC_GPIOEnableRunModeClockGateControl(PortNum_t num);
void SC_GPIODisableRunModeClockGateControl(PortNum_t num);

#endif /* SYSTEMCONTROL_H_ */
