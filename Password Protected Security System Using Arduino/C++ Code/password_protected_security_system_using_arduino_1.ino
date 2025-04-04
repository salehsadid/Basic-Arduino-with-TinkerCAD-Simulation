// C++ code
//Owner:  Saleh Sadid Mir
//CSE , KUET

/*Title: Password Protected Security System Using Arduino */

#include<Keypad.h> 
// adding keypad library

const byte row=4;
const byte col=4;
const int RED =12;
const int GREEN=11;
const int PIEZO=10; //buzzer

char numpad[row][col]={
  						{'1','2','3'},{'4','5','6'},
					   	{'7','8','9'},{'*','0','#'}
					  };

byte rowPin[row]= {9,8,7,6};
byte colPin[col]= {5,4,3,2};

String password="12345"; // the given password 
String str=""; // a empty string

Keypad key_pad = Keypad(makeKeymap(numpad), rowPin, colPin,row, col);
//declaring the class keypad 

//for unlocking tone
const int frequency[] = {
  340, 623, 523, 440, 623 // Simple "beep" pattern
};

// Define the duration of each tone (in milliseconds)
const int delay_time[] = {
  200, 200, 200, 250,150 // 100ms for each note
};

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(PIEZO, OUTPUT);
  digitalWrite(RED, HIGH);
  Serial.begin(9600);
  Serial.print("Enter Password: ");
  
}

void loop()
{
  char key= key_pad.getKey(); //inputs the key from keypad 
  if(key){
    tone(PIEZO, 300);
    delay(50);
    noTone(PIEZO);
  }
  if(key){
    if(str.length()<5){  // do it for 5 times 
      
      Serial.print("*");
      str += key; //the pressed key is added with str string
    }
  }
  if(str.length()==5){ // if 5 key is pressed then check once
    delay(1000);
    if(password== str){ //if given pin and user input matches
      Serial.println("\nEnter");
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, HIGH);
      unlktone();
      
     }
     else{
      Serial.println("\n\tWrong Password\n\tPlease Try Again!!");
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, LOW);
       
       
      tone(PIEZO, 1000);
      delay(500);
      tone(PIEZO, 1000);
      delay(500);
      noTone(PIEZO);
       
       
     }
     delay(1000);
	 str="";
     Serial.println("---------------------------\nEnter Password: ");
     digitalWrite(RED, HIGH);
     digitalWrite(GREEN, LOW);
   }          
}

void unlktone(){
  for (int i = 0; i < 5; i++) {
      // Play the tone at the specified frequency
      tone(PIEZO, frequency[i]);
      // Wait for the note to finish (duration in milliseconds)
      delay(delay_time[i]);
      // Stop the tone after the note duration
      noTone(PIEZO);

      delay(20); 
    }
}