//
//  quick_sort.cpp
//  DataStructures
//
//  Created by Suraj on 07/06/20.
//  Copyright © 2020 Suraj. All rights reserved.

// select any element as pivot and find its sorted position such that element to its left are lesser and elements to right of pivot are higher
// best case (n log n) when partioned at exact centre
// worst case (n^2) when pivot at any of the ends of list

#include <iostream>

using namespace std;

int partition()
  {
      
      
  }



int main()
{
     int size;
           
     cout << "Enter the number of elements: ";
     cin >> size;
       
     int arr[size];
       
     cout << "Enter elements:" << endl;
     for(int i = 0; i<size; i++)
     {
      cin >> arr[i];
     }
       
     cout << "Array before Sorting: " << endl;
     display(arr, size);
    
    
    
}
