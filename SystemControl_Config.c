
#include "SystemControl_config.h"


 SystemControlConfig_t config1={

      PrecisionInternalOscillator,
      _5MHz_USB,
      OSC_Output,
      DIV8

 };

 /*
  *  config1 for unit testing with Testing ID = 1.3.1.1 (part 1 )
  */



 SystemControlConfig_t config2={

     MainOscillator,
     _5MHz_USB,
     PLL_Output,
     DIV5

 };

 /*
  *  config2 for unit testing with Testing ID = 1.3.1.1 (part 2 )
  */

 SystemControlConfig_t config3={

     PrecisionInternalOscillator,
     _5MHz_USB,
     OSC_Output,
     DIV3
 };
