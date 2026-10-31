#ifndef __VOFA_H__
#define __VOFA_H__
#include <stdint.h>
#include "main.h"
extern uint8_t ReceiveData[8];
extern float TransmitData[8];
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void Vofa_JustFloat(float *_data, uint8_t _num);
#endif