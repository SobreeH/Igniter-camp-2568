int LEFT_WHEELS = 2;
int LEFT_WHEELS_SPEED = 5;
int RIGHT_WHEELS = 4;
int RIGHT_WHEELS_SPEED = 6; 

void setup() {
    pinMode(LEFT_WHEELS, OUTPUT);
    pinMode(LEFT_WHEELS_SPEED, OUTPUT);
    pinMode(RIGHT_WHEELS, OUTPUT);
    pinMode(RIGHT_WHEELS_SPEED, OUTPUT);
}

void car_forward(int left_speed, int right_speed) 
{
    digitalWrite(LEFT_WHEELS, HIGH);
    analogWrite(LEFT_WHEELS_SPEED, left_speed);
    digitalWrite(RIGHT_WHEELS, LOW);
    analogWrite(RIGHT_WHEELS_SPEED, right_speed);
}

void car_backward(int left_speed, int right_speed) 
{
    digitalWrite(LEFT_WHEELS, LOW);
    analogWrite(LEFT_WHEELS_SPEED, left_speed);
    digitalWrite(RIGHT_WHEELS, HIGH);
    analogWrite(RIGHT_WHEELS_SPEED, right_speed);
}

void car_right(int left_speed, int right_speed) 
{
    digitalWrite(LEFT_WHEELS, HIGH);
    analogWrite(LEFT_WHEELS_SPEED, left_speed);
    digitalWrite(RIGHT_WHEELS, HIGH);
    analogWrite(RIGHT_WHEELS_SPEED, right_speed);
}


void car_left(int left_speed, int right_speed) 
{
    digitalWrite(LEFT_WHEELS, LOW);
    analogWrite(LEFT_WHEELS_SPEED, left_speed);
    digitalWrite(RIGHT_WHEELS, LOW);
    analogWrite(RIGHT_WHEELS_SPEED, right_speed);
}

void loop() {
  car_forward(100,100);
  delay(1000);
  car_left(100,100);
  delay(1000);
  car_right(100,100);
  delay(1000);
  car_backward(100,100);
  delay(1000);

}
