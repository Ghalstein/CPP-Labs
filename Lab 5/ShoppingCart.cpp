//
//  ShoppingCart.cpp
//  OnlineShoppingCart
//
//  Created by Garrett Halstein on 5/25/19.
//  Copyright © 2019 Garrett Halstein. All rights reserved.
//

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <iostream>
#include <sstream>
using namespace std;
string userInStr = "";

ShoppingCart::ShoppingCart() {
}
ShoppingCart::ShoppingCart(string customerName, string date) {
   this->customerName = customerName;
   this->currentDate = date;
}
string ShoppingCart::GetCustomerName() {
   return this->customerName;
}
string ShoppingCart::GetDate() {
   return this->currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase item) {
   cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string itemName) {
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      if (cartItems[i].GetName().compare(itemName) == 0) {
         cartItems.erase(cartItems.begin() + i);
         return;
      }
   }
   cout << "Item not found in cart. Nothing removed." << endl;
}
void ShoppingCart::ModifyItem(string itemName) {
   cout << "Enter the new quantity:" << endl;
   int newQuantity = 0;
   getline(cin, userInStr);
   istringstream(userInStr) >> newQuantity;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      if (cartItems[i].GetName().compare(itemName) == 0) {
         cartItems[i].SetQuantity(newQuantity);
      }
   }
   cout << "Item not found in cart. Nothing modified." << endl;
}
long ShoppingCart::GetNumItemsInCart() {
   return cartItems.size();
}
double ShoppingCart::GetCostOfCart() {
   double sum = 0;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      sum += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
   }
   return sum;
}
void ShoppingCart::PrintTotal() {
   cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
   int total = 0;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      total += cartItems[i].GetQuantity();
   }
   cout << "Number of Items: " << total << endl;
   cout << endl;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      cartItems[i].PrintItemCost();
   }
   if (total == 0) {
      cout << "SHOPPING CART IS EMPTY" << endl;
   }
   cout << endl;
   cout << "Total: $" << GetCostOfCart() << endl;
}
void ShoppingCart::PrintDescription() {
   cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
   cout << endl;
   cout << "Item Descriptions" << endl;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription() << endl;
   }
}
