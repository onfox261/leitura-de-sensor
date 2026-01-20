#include <AFMotor.h>
 
AF_DCMotor motor(1); //Seleciona o motor 1
AF_DCMotor motor1(2); //Seleciona o motor 1 
void setup()
{}
 
void loop()
{
motor.setSpeed(255); //Define a velocidade maxima
motor.run(FORWARD); //Gira o motor sentido horario
motor1.setSpeed(255); //Define a velocidade maxima
motor1.run(FORWARD); //Gira o motor sentido horario
delay(2000);

motor.setSpeed(0);
motor.run(RELEASE); //Desliga o motor
motor1.setSpeed(0);
motor1.run(RELEASE); //Desliga o motor
delay(1000);

motor.setSpeed(255); //Define velocidade baixa
motor.run(BACKWARD); //Gira o motor sentido anti-horario
motor1.setSpeed(255); //Define velocidade baixa
motor1.run(BACKWARD); //Gira o motor sentido anti-horario
delay(2000);

motor.setSpeed(0);
motor.run(RELEASE); //Desliga o motor
motor1.setSpeed(0);
motor1.run(RELEASE); //Desliga o motor
delay(2000); //Aguarda 5 segundos e repete o processo

}
