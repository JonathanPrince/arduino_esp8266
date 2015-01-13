/*
	Arduino_esp8266.h - Library for connecting an ESP8266 to a network
	and making HTTP requests using an Arduino.
	Created by Jonathan Prince <jonathan.prince@gmail.com>
*/
#ifndef Arduino_esp8266_h
#define Arduino_esp8266_h

#include "Arduino.h"

class Arduino_esp8266 {
	public:
		Arduino_esp8266();
		void reset();
		void join(char* ssid, char* key);
		void connect(char* proto, char* server);
};

#endif