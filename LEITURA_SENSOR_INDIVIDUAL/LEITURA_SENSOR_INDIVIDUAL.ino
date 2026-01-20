
      //quanto menor o valor, mais luz infravermelha chega ao sensor
      int sensorA1 = A0;
      int valorSensorA1 = 0;

    
      void setup() 
      {
        Serial.begin(9600);   //inicio

      }
      
      void loop() 
      {
         valorSensorA1 = analogRead(sensorA1);
         
         Serial.print("Valor do Sensor A1: ");    
         Serial.println(valorSensorA1);           


         delay(250); // delay 250 
         }
