// C++ code
// owner: Saleh Sadid Mir
// CSE , KUET

/*Title: Arduino Calculator using 4*4 keypad and LCD display*/

#include <Keypad.h>
#include <LiquidCrystal.h> //library for lcd display

LiquidCrystal  lcd(13,12,11,10,9,8); // creating a object of lcd class

// declaring variables for calculations
long first =0;
long second =0;
double total = 0; 


char pressedKey; //for storing the pressed key in a variable 
const byte ROWS=4; //keypad row and column
const byte COLS=4;

//keypad mapping
char keys[ROWS][COLS]={
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};

//pins connected with arduino 
byte rowPins[ROWS]={7,6,5,4};
byte colPins[COLS]={3,2,1,0};

//obj of keypad class
//converts the keys into a usable format
Keypad customKeypad = Keypad(makeKeymap(keys),rowPins, colPins, ROWS, COLS);


void setup()
{
  lcd.begin(16,2); // Initializes the LCD (16 columns, 2 rows).
  
  lcd.setCursor(0,0);
  lcd.print("Calculator"); //Displays "Calculator" on the first row.
  
  lcd.setCursor(0,1);
  lcd.print("Enter numbers");// Displays "Enter numbers" on the second row.
  delay(4000);
  
  lcd.clear(); // Clears the screen
  lcd.setCursor(0,0); 
}

void loop()
{
  pressedKey= customKeypad.getKey(); //Get the pressed Key
  
  switch(pressedKey){ 
    
    case '0' ... '9':
      lcd.setCursor(0,0);
      first= first * 10 + (pressedKey -'0'); //Converts multiple key presses into a multi-digit number.
									         //here '0' is subtracted to get the integer value of the character by subtracting it from 0's ASCII value
      lcd.print(first);
      break;
    
    case '+':
      first=(total != 0 ?total : first); //Useing previous total if it exists
      lcd.print("+");
      second= secondNumber() ; //calling function to get the value of 2nd num
      total= first + second; // addition operation
      lcd.setCursor(0,3);
	  lcd.print(total);
      first=0, second=0;
      break;
    
    case '-':
      first=(total !=0 ? total : first);
      lcd.print("-");
      second= secondNumber() ;
      total= first - second; //subtraction
      lcd.setCursor(0,3);
	  lcd.print(total);
      first=0, second=0;
      break;
    
    case '*':
      first=(total != 0 ? total : first);
      lcd.print("*");
      second= secondNumber() ;
      total= first * second;//multiplication
      lcd.setCursor(0,3);
	  lcd.print(total);
      first=0, second=0;
      break;
    
    case '/':
      first= (total != 0 ? total : first);
      lcd.print("/");
      second= secondNumber() ;
      lcd.setCursor(0,3);
    
      second == 0 ? lcd.print("Invalid") : total= (float)first/second;
	  //check if it is divisible . If 2nd num is 0 then not divisible  
      lcd.print(total);
      first=0, second=0;
      break;
    
    case 'C': //clears the data and screen
      total = 0;
      lcd.clear();
      break;
  }          
}

long secondNumber(){
  while(1){
  	pressedKey= customKeypad.getKey(); //storing the 2nd pressed key 
    
    if(pressedKey>= '0' &&pressedKey<='9'){
      
    	second = second *10 + (pressedKey -'0');
        lcd.setCursor(7,0);  
        lcd.print(second);
    }
    if(pressedKey =='=') break; // breaks only when '=' is pressed
  }
  return second;
}