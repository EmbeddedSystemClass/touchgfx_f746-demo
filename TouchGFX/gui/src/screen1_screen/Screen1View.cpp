#include <gui/screen1_screen/Screen1View.hpp>
#ifndef SIMULATOR
#include "stm32746g_discovery.h"

#include <stdio.h>
#include <string.h>

/* UART handler declaration */
UART_HandleTypeDef UartHandle;

uint8_t aTxStartMessage[] = "\n\r Ceci est le driver de la communication UART avec interruption(Envoyez une donnee):\n\r";
uint8_t aTxEndMessage[] = "\n\r la donnee recue est : \n\r";

#define TXENDMESSAGESIZE      30 // have to be count the message size, but I'm lazy to implanet "countof" funciton / macro

/* Buffer used for reception */
//uint8_t aRxBuffer[RXBUFFERSIZE];

/* Private function prototypes -----------------------------------------------*/

//void SendBTMessage(uint8 len1,uint8* data1,uint8  len2,uint8* data2);
void ReadBTMessage( void );
/*----------------------------------------------------------------------------*/

#endif



void Screen1View::initUART(){
#ifndef SIMULATOR
  /* UART configuration */
    UartHandle.Instance        = USART1;
    UartHandle.Init.BaudRate   = 9600;
    UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
    UartHandle.Init.StopBits   = UART_STOPBITS_1;
    UartHandle.Init.Parity     = UART_PARITY_NONE;
    UartHandle.Init.HwFlowCtl  = UART_HWCONTROL_NONE;
    UartHandle.Init.Mode       = UART_MODE_TX;

    /* Initialize UART peripheral */
    HAL_UART_Init(&UartHandle);

    /* Configures COM1 port */
    BSP_COM_Init(COM1, &UartHandle);
#endif
}
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


/* uart init button */
void Screen1View::button3click(){
	touchgfx_printf("inint uart\n");

#ifndef SIMULATOR
	initUART();

#endif
}

void Screen1View::button2click()
{
	touchgfx_printf("hello and send uart text\n");
#ifndef SIMULATOR

	BSP_LED_On(LED_GREEN);
	/* Place your implementation of fputc here */
	  /* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
	 // HAL_UART_Transmit(&UartHandle, (uint8_t *)&ch, 1, 0xFFFF);
	 HAL_UART_Transmit(&UartHandle, (uint8_t*)aTxEndMessage,  TXENDMESSAGESIZE, 0xFF);
	  //HAL_UART_Transmit(&UartHandle, (uint8_t*)aRxBuffer, 4, 0xFF);


#endif
}
