![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# BI_HALL Click

---

- **CIC Prefix**  : BIHALL
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Oct 2018.

---

### Software Support

We provide a library for the BI_HALL Click on our [LibStock](https://libstock.mikroe.com/projects/view/1076/bi-hall-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control BI HALL Click board.
BI HALL click communicates with the target board through the INT line. 
This library detecting boath pole ( south & north ) magnetic fields status and returns the state of the INT pin.

Key functions :

- ``` uint8_t bihall_detectingMagneticFields(); ``` - Detecting south & north pole magnetic fields status function


**Examples Description**

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG, set INT pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of BI HALL Click board.
     Detect the south & north pole magnetic fields near the BI HALL Click.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart when magnetic field is detected.


```.c

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

```



The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/1076/bi-hall-click-example) page.

Other mikroE Libraries used in the example:

- UART


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
