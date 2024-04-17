int IN1 = 38;
int IN2 = 36;
int IN3 = 34;
int IN4 = 32;

void hbridge_setup()
{
// Set the output pins

pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
}

void hbridge_loop() {
// Rotate the Motor A clockwise
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
delay(2000);
// Motor A
digitalWrite(IN1, HIGH);
digitalWrite(IN2, HIGH);
delay(500);
// Rotate the Motor B clockwise
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
delay(2000);
// Motor B
digitalWrite(IN3, HIGH);
digitalWrite(IN4, HIGH);
delay(500);
// Rotates the Motor A counter-clockwise
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
delay(2000);
// Motor A
digitalWrite(IN1, HIGH);
digitalWrite(IN2, HIGH);
delay(500);
// Rotates the Motor B counter-clockwise
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
delay(2000);
// Motor B
digitalWrite(IN3, HIGH);
digitalWrite(IN4, HIGH);
delay(500);
}

void move_forward() {

// Move  Motors CCW - Forward
digitalWrite(IN1, LOW); //Left
digitalWrite(IN2, HIGH); // Left 
digitalWrite(IN3, LOW); // Right 
digitalWrite(IN4, HIGH); // Right 

}

void move_backward() {

// Move Motors CW - Backwards
digitalWrite(IN1, HIGH); //Left 
digitalWrite(IN2, LOW);  // Left 
digitalWrite(IN3, HIGH); // Right 
digitalWrite(IN4, LOW); // Right 
}

void stop_moving() {

// Stop Both Motors 
digitalWrite(IN1, HIGH);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, HIGH);

}
