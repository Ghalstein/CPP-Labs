//
//  ItemToPurchase.cpp
//  OnlineShoppingCart
//
//  Created by Garrett Halstein on 5/25/19.
//  Copyright © 2019 Garrett Halstein. All rights reserved.
//

#include "ItemToPurchase.h"
#include <iostream>
using namespace std;

ItemToPurchase::ItemToPurchase() {
}
ItemToPurchase::ItemToPurchase(string name, string description, double price, int quantity){
   this->itemName = name;
   this->itemPrice = price;
   this->itemQuantity = quantity;
   this->itemDescription = description;
}
void SetName(string name);
void ItemToPurchase::SetName(string name){
   this->itemName = name;
}
string ItemToPurchase::GetName() {
   return itemName;
}
void ItemToPurchase::SetPrice(double price) {
   this->itemPrice = price;
}
double ItemToPurchase::GetPrice() {
   return itemPrice;
}
void ItemToPurchase::SetQuantity(int quantity) {
   this->itemQuantity = quantity;
}
int ItemToPurchase::GetQuantity() {
   return itemQuantity;
}
void ItemToPurchase::SetDescription(string description) {
   this->itemDescription = description;
}
string ItemToPurchase::GetDescription() {
   return this->itemDescription;
}
void ItemToPurchase::PrintItemDescription() {
   cout << GetName() << ": " << GetDescription() << endl;
}
void ItemToPurchase::PrintItemCost() {
   cout << GetName() << " " << GetQuantity() << " @ $" <<
   GetPrice() << " = $" << GetPrice() * GetQuantity() << endl;
}
