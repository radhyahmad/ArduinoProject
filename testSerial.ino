char lastSerial;

//The setup function is called once at startup of the sketch
void setup()
{
	pinMode(13,OUTPUT);
	Serial.begin(9600);
	//Serial.flush();
// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{
	char serialListener;

	if(Serial.available()){

		serialListener = Serial.read();
	}

	else serialListener = lastSerial;

	if(serialListener == 'A'){

		lastSerial = 'A';
		digitalWrite(13,HIGH);
	}

	else if(serialListener == 'B'){

		lastSerial = 'B';
		digitalWrite(13,LOW);
	}

	else if(serialListener == 'C'){

		lastSerial = 'C';
		digitalWrite(13,HIGH);
		delay(1000);
		digitalWrite(13,LOW);
		delay(1000);
	}


//Add your repeated code here
}


