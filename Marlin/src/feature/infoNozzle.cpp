#include "../inc/MarlinConfig.h"
#include "../HAL/HAL.h"


#include <Stream.h>
#include <Wire.h>


void infoNozzle_i2c_init() {
  #if MB(MKS_SBASE)
    configure_i2c(16); // Set clock_option to 16 ensure I2C is initialized at 400kHz
  #else
    Wire.begin();
  #endif
}

void infoNozzle_load_Params()
{

    //ID wich Hotend sends data (uint8_t/1Byte), Offset X (float/4Byte), Offset Y (float/4Byte), Offset Z (float/4Byte), MaxTemp (uin16_t/2Byte)
    //equals  15 Byte

    const uint8_t NumRequestedBytes = 15; //Change this if you want to get more than the obve info over the wire

    uint8_t buf[NumRequestedBytes] = {0};

    LOOP_L_N(i, INFONOZZLE_COUNT)
    {
        //Wire.beginTransmission(I2C_ADDRESS(INFONOZZLE_BASE_ADRESS+i));
        Wire.requestFrom(I2C_ADDRESS(INFONOZZLE_BASE_ADRESS+i), NumRequestedBytes);

        uint8_t bufID = 0;
        while(Wire.available())    // slave may send less than requested
        { 
            uint8_t c = Wire.read(); // receive a byte as character
            if (bufID < NumRequestedBytes)
            {
                buf[bufID] = c;
            }
        }

        

    }

    
}