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
      void SetName(string name);
      string GetName();
      void SetPrice(double price);
      double GetPrice();
      void SetQuantity(int quantity);
      int GetQuantity();
   private:
      string itemName = "none";
      int itemPrice = 0;
      int itemQuantity = 0;
};
#endif /* ItemToPurchase_h */
