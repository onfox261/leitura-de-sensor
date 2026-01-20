
      //quanto menor o valor, mais luz infravermelha chega ao sensor
      
      int sensorA4 = A7;  //EM QUAL PINO O SENSOR ESTÁ 
      int valorSensorA4 = 0;  //PEGAR OS VALORES DO SENSOR 
      
     
    void setup() 
      {
        Serial.begin(9600);   //inicio
      }
      
      void loop() 
      {
          valorSensorA4 = analogRead(sensorA4);     //Sensor 2
         
         Serial.print("Valor do Sensor A4: ");    //Sensor 2
         Serial.println(valorSensorA4);           //Sensor 2

         
         delay(250); // delay 250
      }

