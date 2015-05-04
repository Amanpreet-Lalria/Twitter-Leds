// Amanpreet Lalria 2015

// Setup a variable so we can refer to the LED easier
int led = 13;

// This code executes once
void setup(){
  // Setup the Serial connection using 9600 baud
  Serial.begin(9600);
  //Setup the LED to be an output
  pinMode(led, OUTPUT);
  
  // Send instructions to the computer
  Serial.write("Power On\n");
  Serial.write("Send either a 1 or a 2\n");
}

// This code executes in a continuous loop
void loop(){
  
  // Check if we sent input from the computer
  if (Serial.available()){
    char c = Serial.read();
    
    // Check what we sent from the computer
    if (c == '1'){
      Serial.write("Once\n");
      flash(1);
    }else if (c == '2'){
      Serial.write("Twice\n");
      flash(2);
    }else{
      Serial.write("Invalid Input");
    }
    
    // Delay for 10ms before the next check
    delay(10);
  }
}

// Flashes the LED on for 400ms and off for 200ms
// Flashes for the number of times given
void flash(int times){
  
  for(int i = 0; i < times; i++){
    digitalWrite(led, HIGH);
    delay(400);
    digitalWrite(led, LOW);
    delay(200);
  }
}
