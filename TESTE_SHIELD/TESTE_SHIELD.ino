  #include <AFMotor.h>      // carrega a biblioteca AFMotor
  
  AF_DCMotor motor1(4);     // Define o motor1 ligado a conexao 1
  AF_DCMotor motor2(1);     // Define o motor2 ligado a conexao 4
 
  void setup()
      {}
   
  void loop()
    {
      motor2.setSpeed(200);      // Define a velocidade maxima para os motores 1
      motor1.setSpeed(200);      // Define a velocidade maxima para os motores 1
      motor2.run(FORWARD);       // Aciona o motor 1 no sentido horario
            motor1.run(FORWARD);       // Aciona o motor 1 no sentido horario
            
    }
