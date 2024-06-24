#ifndef _EUSART1_H
#define _EUSART1_H
#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#ifdef __cplusplus  
#endif
#define EUSART1_DataReady  (PIR1bits.RC1IF)
void EUSART1_Initialize(void); // Function prototype to initialize the EUSART1 module
uint8_t EUSART1_Read(void); // Function prototype to read a byte of data from EUSART1
void EUSART1_Write(uint8_t txData); // Function prototype to write a byte of data to EUSART1
void put_string(const unsigned char* str); // Function prototype to send a string via EUSART1
void UART_RxString(char *string_ptr); // Function prototype to receive a string via EUSART1 
#ifdef __cplusplus  
#endif
#endif 
