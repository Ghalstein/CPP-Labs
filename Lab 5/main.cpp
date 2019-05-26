//
//  main.cpp
//  OnlineShoppingCart
//
//  Created by Garrett Halstein on 5/25/19.
//  Copyright © 2019 Garrett Halstein. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;
string userInputStr;

void PrintMenu(ShoppingCart cart) {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
   cout << endl;

   while (true) {
      cout << "Choose an option:" << endl;
      char userInput;
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInput;
      switch(userInput) {
         case 'a': {
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            string itemName = "";
            getline(cin, itemName);
            cout << "Enter the item description:" << endl;
            string itemDescription = "";
            getline(cin, itemDescription);
            cout << "Enter the item price:" << endl;
            double price = 0;
            getline(cin,userInputStr);
            istringstream(userInputStr) >> price;
            cout << "Enter the item quantity:" << endl;
            int quantity = 0;
            getline(cin, userInputStr);
            istringstream(userInputStr) >> quantity;
            ItemToPurchase newItem(itemName, itemDescription, price, quantity);
            cart.AddItem(newItem);
            cout << endl;
            cout << "MENU" << endl;
            cout << "a - Add item to cart" << endl;
            cout << "d - Remove item from cart" << endl;
            cout << "c - Change item quantity" << endl;
            cout << "i - Output items' descriptions" << endl;
            cout << "o - Output shopping cart" << endl;
            cout << "q - Quit" << endl;
            cout << endl;
            break;
         }
         case 'd':{
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            string itemName = "";
            getline(cin, itemName);
            cart.RemoveItem(itemName);
            cout << endl;
            cout << "MENU" << endl;
            cout << "a - Add item to cart" << endl;
            cout << "d - Remove item from cart" << endl;
            cout << "c - Change item quantity" << endl;
            cout << "i - Output items' descriptions" << endl;
            cout << "o - Output shopping cart" << endl;
            cout << "q - Quit" << endl;
            cout << endl;
            break;
         }
         case 'c':{
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            string itemName = "";
            getline(cin, itemName);
            cart.ModifyItem(itemName);
            cout << endl;
            cout << "MENU" << endl;
            cout << "a - Add item to cart" << endl;
            cout << "d - Remove item from cart" << endl;
            cout << "c - Change item quantity" << endl;
            cout << "i - Output items' descriptions" << endl;
            cout << "o - Output shopping cart" << endl;
            cout << "q - Quit" << endl;
            cout << endl;
            break;
         }
         case 'i':{
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescription();
            cout << endl;
            cout << "MENU" << endl;
            cout << "a - Add item to cart" << endl;
            cout << "d - Remove item from cart" << endl;
            cout << "c - Change item quantity" << endl;
            cout << "i - Output items' descriptions" << endl;
            cout << "o - Output shopping cart" << endl;
            cout << "q - Quit" << endl;
            cout << endl;
            break;
         }
         case 'o':{
            cout << "OUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
            cout << endl;
            cout << "MENU" << endl;
            cout << "a - Add item to cart" << endl;
            cout << "d - Remove item from cart" << endl;
            cout << "c - Change item quantity" << endl;
            cout << "i - Output items' descriptions" << endl;
            cout << "o - Output shopping cart" << endl;
            cout << "q - Quit" << endl;
            cout << endl;
            break;
         }
         case 'q':{
            return;
            break;
         }
      }
   }
}

int main() {
   string customerInput;
   string dateInput;
   cout << "Enter customer's name:" << endl;
   getline(cin, customerInput);
   cout << "Enter today's date:" << endl;
   getline(cin, dateInput);
   cout << endl;

   ShoppingCart newCustomer(customerInput, dateInput);

   cout << "Customer name: " << newCustomer.GetCustomerName() << endl;
   cout << "Today's date: " << newCustomer.GetDate() << endl;
   cout << endl;

   PrintMenu(newCustomer);


   return 0;
}

