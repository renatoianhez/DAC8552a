/************************************************************************
** Library for Digital to Analogic Converter by Texas Instruments      **
** DAC8552 (two channels) on Arduino, whithout power down.             **
** By Renato Ianhez                                                    **
*************************************************************************/
#ifndef DAC8552a_H
#define DAC8552a_H

	#include "Arduino.h"
	#include "SPI.h"

		class DAC8552a
		{
			public:
				DAC8552a();
				void setPins(int DIN, int SCK, int SYNC);
				void setChanValue(int chan, int value);
				void initializeDAC8552a();

			private:
				int _DIN;
				int _SCK;
				int _SYNC;
				
		};
#endif
