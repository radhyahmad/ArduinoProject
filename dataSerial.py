import serial
import time

arduino = serial.Serial('/dev/ttyUSB0',9600)

def onOffFunction():
    
    command = raw_input("masukkan perintah...:(on/off//blink/bye)");
    
    if command =="on":
        print "Led nyala..."
        time.sleep(0.1)
        arduino.write('A')
        onOffFunction()
     
    elif command == "off":
        print "Led mati..."
        time.sleep(0.1)
        arduino.write('B')
        onOffFunction()
    
    elif command == "blink":
        print "Led blink.."
        time.sleep(0.1)
        arduino.write('C')
        onOffFunction()
    
    elif command == "bye":
        print "See you.."
        time.sleep(1)
        arduino.close()
        
    
    else:
        print "Sorry...type another thing..!"
        onOffFunction()
    
    
time.sleep(2)
onOffFunction()
         
        
