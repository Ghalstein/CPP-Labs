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
