//
//  main.cpp
//  OnlineShoppingCart
//
//  Created by Garrett Halstein on 5/25/19.
//  Copyright © 2019 Garrett Halstein. All rights reserved.
//

#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

int main() {
   string userIn;
   double itemPrice;
   int itemQuant;

   cout << "Item 1" << endl << "Enter the item name:" << endl;
   getline(cin, userIn);
   ItemToPurchase item1;
   item1.SetName(userIn);

   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   item1.SetPrice(itemPrice);

   cout << "Enter the item quantity:" << endl;
   cin >> itemQuant;
   item1.SetQuantity(itemQuant);

   cin.ignore();
   cout << endl;

   cout << "Item 2" << endl << "Enter the item name:" << endl;
   getline(cin, userIn);
   ItemToPurchase item2;
   item2.SetName(userIn);

   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   item2.SetPrice(itemPrice);

   cout << "Enter the item quantity:" << endl;
   cin >> itemQuant;
   item2.SetQuantity(itemQuant);
   cout << endl;

   double total1 = item1.GetPrice() * item1.GetQuantity();
   double total2 = item2.GetPrice() * item2.GetQuantity();

   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" <<
   item1.GetPrice() << " = $" << total1 << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" <<
   item2.GetPrice() << " = $" << total2 << endl;
   cout << endl;
   cout << "Total: $" << total1 + total2 << endl;


   
   
   return 0;
}
