//
//  ItemToPurchase.hpp
//  OnlineShoppingCart
//
//  Created by Garrett Halstein on 5/25/19.
//  Copyright © 2019 Garrett Halstein. All rights reserved.
//

#ifndef ItemToPurchase_h
#define ItemToPurchase_h
#include <stdio.h>
#include <iostream>
using namespace std;

class ItemToPurchase {
   public:
      ItemToPurchase();
      ItemToPurchase(string name, string description, double price, int quantity);
      void SetName(string name);
      string GetName();
      void SetPrice(double price);
      double GetPrice();
      void SetQuantity(int quantity);
      int GetQuantity();
      void SetDescription(string description);
      string GetDescription();
      void PrintItemDescription();
      void PrintItemCost();
   private:
      string itemName = "none";
      int itemPrice = 0;
      int itemQuantity = 0;
      string itemDescription = "none";
};
#endif /* ItemToPurchase_h */
