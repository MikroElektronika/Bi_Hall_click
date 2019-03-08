/*
Example for BI_HALL Click

    Date          : Oct 2018.
    Author        : Nenad Filipovic

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.3.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG, set INT pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of BI HALL Click board.
     Detect the south & north pole magnetic fields near the BI HALL Click.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart when magnetic field is detected.

Additional Functions :

- UART

*/

#include "Click_BI_HALL_types.h"
#include "Click_BI_HALL_config.h"


uint8_t bihallState = 0;
uint8_t bihallStateOld = 0;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );

    mikrobus_logInit( _MIKROBUS2, 9600 );

    Delay_100ms();
}

void applicationInit()
{
    bihall_gpioDriverInit( (T_BIHALL_P)&_MIKROBUS1_GPIO );
    
    mikrobus_logWrite( "---------------------------", _LOG_LINE );
    mikrobus_logWrite( "       Initialization      ", _LOG_LINE );
    mikrobus_logWrite( "---------------------------", _LOG_LINE );
    mikrobus_logWrite( " Detecting magnetic fields ", _LOG_LINE );
    mikrobus_logWrite( "---------------------------", _LOG_LINE );

    Delay_100ms();
}

void applicationTask()
{
    bihallState = bihall_detectingMagneticFields();

    if ( bihallState == 1 && bihallStateOld == 0 )
    {
        bihallStateOld = 1;
        mikrobus_logWrite( "         ~ SOUTH ~         ", _LOG_LINE );
        mikrobus_logWrite( "", _LOG_LINE );
    }

    if ( bihallState == 0 && bihallStateOld == 1 )
    {
        mikrobus_logWrite( "         ~ NORTH ~         ", _LOG_LINE );
        mikrobus_logWrite( "", _LOG_LINE );
        bihallStateOld = 0;
    }
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}