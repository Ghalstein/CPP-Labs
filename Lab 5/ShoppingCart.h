//
//  ShoppingCart.hpp
//  OnlineShoppingCart
//
//  Created by Garrett Halstein on 5/25/19.
//  Copyright © 2019 Garrett Halstein. All rights reserved.
//

#ifndef ShoppingCart_h
#define ShoppingCart_h

#include <stdio.h>
#include <iostream>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
public:
   ShoppingCart();
   ShoppingCart(string customerName, string date);
   string GetCustomerName();
   string GetDate();
   void AddItem(ItemToPurchase item);
   void RemoveItem(string itemName);
   void ModifyItem(string itemName);
   long GetNumItemsInCart();
   double GetCostOfCart();
   void PrintTotal();
   void PrintDescription();

private:
   string customerName = "none";
   string currentDate = "January 1, 2016";
   vector<ItemToPurchase> cartItems;
};
#endif /* ShoppingCart_h */
