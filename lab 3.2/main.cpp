#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<double> weights;   
   
   for (int i = 0; i < 5; i++) {
      double weight;
      cout << "Enter weight " << i + 1 << ":" << endl;
      cin >> weight;
      weights.push_back(weight);
   }
   
   cout << "You entered: ";
   for (int i = 0; i < weights.size(); i++) {
      cout << weights.at(i) << " ";    
   }
   cout << endl;
   cout << endl;
   
   double totalW = 0;
   for (int i = 0; i < weights.size(); i++) {
      totalW += weights.at(i);
   }
   cout << "Total weight: " << totalW << endl;
   
   cout << "Average weight: " << totalW / 5 << endl;
   
   double maxW = weights.at(0);
   for (int i = 1; i < weights.size(); i++) {
      if (maxW < weights.at(i)) {
         maxW = weights.at(i);   
      }
   }
   cout << "Max weight: " << maxW << endl;
   
   return 0;
}