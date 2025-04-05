// C++ code
// owner: Saleh Sadid Mir
// CSE , KUET

/*Title: 4*4 Keypad Interfacing with Arduino Uno */

#include <Keypad.h>

const byte ROWS=4; //keypad no of row and column
const byte COLS=4;

//keypad mapping
char keys[ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

//pins connected with arduino 
byte rowPins[ROWS]={9,8,7,6};
byte colPins[COLS]={5,4,3,2};

//obj of keypad class
//converts the keys into a usable format
Keypad kypd = Keypad(makeKeymap(keys),rowPins, colPins, ROWS, COLS);


void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  char pressedKey; //for storing the pressed key in a variable 

  pressedKey= kypd.getKey(); //Get the pressed Key
  //print the key if preesed
  if(pressedKey){
    Serial.print("Key pressed: ");
    Serial.println(pressedKey);
 
  }          
}
