
#include "lstd.h"
#include "GPIO.h"
#include "Interrupt_driver.h"
#include "SystemControl.h"

void Delay(void){

    u32_t volatile DelayTime =1000000;

    while (DelayTime){

        DelayTime--;
    }
}

void  CallbackFunc1_PortF(void){

    //rising edge triggers interrupt

    Delay();

    GPIO_TogglePinValue(PortF, Channel_3);

    Delay();

    GPIO_EXTIClearInterrupt(PortF, Channel_3);


}



int main(void)
{

    RegisterCallbackFunction(PortF,CallbackFunc1_PortF);


    //SystemControlInitialization_RCC(&config3);

   /**********************************************STEP1***************************************************/
    SC_GPIOEnableRunModeClockGateControl(PortF); //Enable the clock to the specified port
    Delay(); //allow time for the clock to start

    GPIO_ConfigureCommit(PortF, Channel_3, DisableLock);

    GPIO_ConfigureCommit(PortF, Channel_3, EnableLock);
  /**********************************************STEP2***************************************************/
    GPIO_ConfigureAnalogModeSelect(PortF, Channel_3 , Disable_AMSEL);

   /**********************************************STEP3***************************************************/

    GPIO_ConfigurePortControl(PortF , Channel_3, MuxValue_0 );

    /**********************************************STEP4***************************************************/
    GPIO_SetPinStatus(PortF, Channel_3, Output ); //Set the direction

    /**********************************************STEP5***************************************************/
    GPIO_ConfigureAlternateFunctionSelect(PortF, Channel_3 , Disable_AFSEL);

    /**********************************************STEP6***************************************************/
    GPIO_ConfigureDigitalEnable(PortF, Channel_3, EnableDigitalFunction);

    GPIO_SetData(PortF , Channel_3, OutputHigh); /* initial value to the pin*/

    /**********************************************STEP7***************************************************/
    GPIO_EXTI_Initialization(&EXTI_Channel3_Config, PortF, Channel_3);


    //GPIO_ConfigureInterruptMask(PortF,Channel_3 ,Enable_InterruptMask);


    //NVIC_SetPriorityGrouping(GroupPriority8_Sub1);
    //NVIC_AssignPriority(GroupPriority0, SubGroupPriority0 , EXTI_PORTF_INTERRUPTNUM);

    //NVIC_Enable_Interrupt(EXTI_PORTF_INTERRUPTNUM);




    for(; ;){
		
		Delay();

        GPIO_SetData(PortF , Channel_3, OutputHigh);
		
		Delay();
					
		GPIO_SetData(PortF , Channel_3, OutputLow);
	   
        
    }



}

