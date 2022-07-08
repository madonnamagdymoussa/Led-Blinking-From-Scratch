#ifndef SYSTEMCONTROL_CONFIG_H_
#define SYSTEMCONTROL_CONFIG_H_


typedef enum{

    MainOscillator,
    PrecisionInternalOscillator,
    PrecisionInternalOscillatorDIV4,
    LowFrequencyInternalOscillator

}OscillatorSource_t;


typedef enum{

    _5MHz_USB  = 0x09,
    _6MHz_USB  = 0x0B,
    _7_3728MHz = 0x0D,
    _8MHz_USB  = 0x0E,
    _10MHz_USB = 0x10,


}CrystalValue_t;

typedef enum{
    PLL_Output,
    OSC_Output

}BypassValue_OutputSource_t;

typedef enum {
    DisableSystemDiv,
    EnableSystemDiv
}SystemDivider_mode;

typedef enum{

    DIV1=0x0,
    DIV2=0x1,
    DIV3=0x2,
    DIV4=0x3,
    DIV5=0x4,
    DIV6=0x5,
    DIV7=0x6,
    DIV8=0x7,
    DIV9=0x8,
    DIV10=0x9,
    DIV11=0xA,
    DIV12=0xB,
    DIV13=0xC,
    DIV14=0xD,
    DIV15=0xE,
    DIV16=0xF


}SystemDivider_t;


typedef struct{

    OscillatorSource_t         OscillatorSource;
    CrystalValue_t             CrystalValue;
    BypassValue_OutputSource_t OutputSource;
    //SystemDivider_mode         DividerMode;
    SystemDivider_t            SystemDivider;


}SystemControlConfig_t;



/************************************** Creating instances of typedef Structure *****************************************************************************************/
extern SystemControlConfig_t config1;

extern SystemControlConfig_t config2;

extern SystemControlConfig_t config3;

#endif /* SYSTEMCONTROL_CONFIG_H_ */
