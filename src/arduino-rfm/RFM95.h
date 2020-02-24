/******************************************************************************************
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************************/
/****************************************************************************************
* File:     Encrypt.cpp
* Author:   Eduardo Contreras
* Company:  Beelan
****************************************************************************************/
/****************************************************************************************
* Created on:		  23-02-2020
****************************************************************************************/

#ifndef RFM95_H
#define RFM95_H

/*
********************************************************************************************
* INCLUDES
********************************************************************************************
*/

#include "Struct.h"

/*
*****************************************************************************************
* TYPE DEFINITIONS
*****************************************************************************************
*/

typedef enum {NO_MESSAGE,NEW_MESSAGE,CRC_OK,MIC_OK,ADDRESS_OK,MESSAGE_DONE,TIMEOUT,WRONG_MESSAGE} message_t;

/*
*****************************************************************************************
* FUNCTION PROTOTYPES
*****************************************************************************************
*/

bool RFM_Init();
void RFM_Send_Package(sBuffer *RFM_Tx_Package, sSettings *LoRa_Settings);
message_t RFM_Single_Receive(sSettings *LoRa_Settings);
void RFM_Continuous_Receive(sSettings *LoRa_Settings);
message_t RFM_Get_Package(sBuffer *RFM_Rx_Package);
void RFM_Write(unsigned char RFM_Address, unsigned char RFM_Data);
void RFM_Switch_Mode(unsigned char Mode);

#endif

