#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {
   
   string userInput;
   getline(cin, userInput);
   
   if (userInput.find("LOL") != string::npos) {
     cout << "Input an abbreviation:" << endl << "laughing out loud" << endl; 
     return 0;
   }
   
   if (userInput.find("IDK") != string::npos) {
     cout << "Input an abbreviation:" << endl << "I don't know" << endl; 
     return 0;
   }
   
   if (userInput.find("BFF") != string::npos) {
     cout << "Input an abbreviation:" << endl << "best friends forever" << endl; 
     return 0;
   }
   
   if (userInput.find("IMHO") != string::npos) {
     cout << "Input an abbreviation:" << endl << "in my humble opinion" << endl; 
     return 0;
   }
   
   if (userInput.find("TMI") != string::npos) {
     cout << "Input an abbreviation:" << endl << "too much information" << endl; 
     return 0;
   }
   
   cout << "Input an abbreviation:" << endl << "Unknown" << endl;
   
}