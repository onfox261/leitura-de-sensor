
      //quanto menor o valor, mais luz infravermelha chega ao sensor
      
      #define sensorA0 33       //EM QUAL PINO O SENSOR ESTÁ 
      int valorSensorA0 = 0;  //PEGAR OS VALORES DO SENSOR 
      #define sensorA1 31       //EM QUAL PINO O SENSOR ESTÁ 
      int valorSensorA1 = 0;  //PEGAR OS VALORES DO SENSOR 
      

            
    void setup() 
      {
        Serial.begin(9600);   //inicio
      }
      
      void loop() 
      {
         valorSensorA0 = digitalRead(sensorA0);     //Sensor 2
         Serial.print("Valor do Sensor direita: ");     //Sensor 2
         Serial.println(valorSensorA0);            //Sensor 2
         valorSensorA1 = digitalRead(sensorA1);     //Sensor 2
         Serial.print("Valor do Sensor esquerda: ");     //Sensor 2
         Serial.println(valorSensorA1);            //Sensor 2
         delay(250);                               // delay 250
      }
