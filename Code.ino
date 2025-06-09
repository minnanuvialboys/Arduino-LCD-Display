#include <LiquidCrystal.h> 
 
// LCD pin mapping: RS, E, D4, D5, D6, D7 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
 
String message = "Ee Saala Cup Namdu   "; // Extra spaces for smooth scroll 
 
void setup() { 
  lcd.begin(16, 2);         // Initialize 16x2 LCD 
  lcd.print(message);       // Print initial part 
} 
 
void loop() { 
  lcd.scrollDisplayLeft();  // Scroll one position to the left (or) scrollDisplayRight() if needed 
  delay(300);               // Delay between scrolls 
}
