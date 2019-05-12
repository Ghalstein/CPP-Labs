#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector<int> playersN;
   vector<int> playersR;
   bool quit = false;
   
   for (int i = 0; i < 5; i++) {
      int num;
      cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
      cin >> num;
      playersN.push_back(num); 
      
      int rating;
      cout << "Enter player " << i + 1 << "'s rating:" << endl;
      cin >> rating;
      playersR.push_back(rating);
      cout << endl;
   }
   
   cout << "ROSTER" << endl;
   for (int i = 0; i < playersN.size(); i++) {
      cout << "Player " << i + 1 << " -- Jersey number: " << playersN.at(i) << ", Rating: " << playersR.at(i) << endl; 
   }
   
   cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
      
   while (true) {   
      char userIn;
      cin >> userIn;
      switch (userIn) {
      int num;
      int rating;
         case 'a':
            cout << "Enter a new player's jersey number:" << endl;
            cin >> num;
            playersN.push_back(num); 
            
            cout << "Enter the player's rating:" << endl;
            cin >> rating;
            playersR.push_back(rating);
            cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
            break;
         
         case 'd':
            cout << "Enter a jersey number:" << endl;
            cin >> num;
            for (int i = 0; i < playersN.size(); i++) {
               if (playersN.at(i) == num) {
                  for (int j = i; j < playersN.size() - 1; j++) {
                     playersN.at(j) = playersN.at(j+1);
                     playersR.at(j) = playersR.at(j+1);
                  }
                  playersR.pop_back();
                  playersN.pop_back();
                  cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
                  break;
               }
            }
            cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
            break;
         
         case 'u':
            cout << "Enter a jersey number:" << endl;
            cin >> num;
            for (int i = 0; i < playersN.size(); i++) {
               if (playersN.at(i) == num) {
                  cout << "Enter a new rating for player:" << endl;
                  int rating;
                  cin >> rating;
                  playersR.at(i) = rating;
                  cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
                  break;
               }
            }
            cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
            break;
         
         case 'r':
            cout << "Enter a rating:" << endl << endl;
            cin >> rating;
            cout << "ABOVE " << rating << endl;
            for (int i = 0; i < playersN.size(); i++) {
               if (playersR.at(i) > rating) {
               cout << "Player " << i + 1 << " -- Jersey number: " << playersN.at(i) << ", Rating: " << playersR.at(i) << endl;
               }
            }
            cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
            break;
         case 'o':
            cout << "ROSTER" << endl;
            for (int i = 0; i < playersN.size(); i++) {
               cout << "Player " << i + 1 << " -- Jersey number: " << playersN.at(i) << ", Rating: " << playersR.at(i) << endl; 
            }
            cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl <<  "Choose an option:" << endl;
            break;
         case 'q':
            quit = true;
            return 0;
      }
   }

   return 0;
}