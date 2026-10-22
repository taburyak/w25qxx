#ifndef _W25QXXCONFIG_H
#define _W25QXXCONFIG_H

#include "main.h"

#define		_W25QXX_SPI				hspi1
#define		_W25QXX_CS_GPIO			W25_CS_GPIO_Port
#define		_W25QXX_CS_PIN			W25_CS_Pin
#define		_W25QXX_USE_FREERTOS	1
#define		_W25QXX_DEBUG			1

extern SPI_HandleTypeDef _W25QXX_SPI;

#endif

