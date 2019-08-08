#include "GPIO.h"
#include "GPIO_Cfg.h"

// Array {R0,R1,R2,R3,Col0.Col1,Col2,Col3}
const GPIO_CfgType GPIO_ConfigParam [GPIO_GROUPS_NUMBER] =
		{
			{
				0,
				0x01,
				0xff,
				0xff
			},
			{
				0,
				0x02,
				0xff,
				0xff
			},
			{
				0,
				0x04,
				0xff,
				0xff
			},
			{
				0,
				0x08,
				0xff,
				0xff
			},
				{
						0,
						0x10,
						0x00,
						0xff
			    },
				{
					0,
					0x20,
					0x00,
					0xff
				},
				{
					0,
					0x40,
					0x00,
					0xff
				},
				{
					0,
					0x80,
					0x00,
					0xff
				},
				
				//************************LCD
				
				{
					1,
					1<<0,
					0xff,
					0xff
				},
				{
					1,
					1<<1,
					0xff,
					0xff
				},
				{
					1,
					1<<2,
					0xff,
					0xff
				},
				{
					1,
					1<<3,
					0xff,
					0xff
				},
				{
					1,
					1<<4,
					0xff,
					0xff
				},
				{
					1,
					1<<5,
					0xff,
					0xff
				},
				{
					1,
					1<<6,
					0xff,
					0xff
				},
				{
					2,
					1<<0,
					0xff,
					0xff
				},
				
				{
					3,
					1<<2,
					0x00,
					0xff
				}
				
		};
