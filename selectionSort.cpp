//
//  selectionSort.cpp
//  DataStructures
//
//  Created by Suraj on 05/06/20.
//  Copyright © 2020 Suraj. All rights reserved.

// select the starting position and find the minimum element and swap it with current one

// time O (n^2)

#include <iostream>

using namespace std;

void swap(int *a, int *b)
 {
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
 }

void selectionSort(int arr[], int size)
{
       int i, j, min;
    
       for(i = 0; i<size-1; i++)
       {
          min = i;
           
          for(j = i+1; j<size; j++)
             if (arr[j] < arr[min])
                min = j;
             
             swap(arr[i], arr[min]);
       }
}
    
    void display(int arr[], int size)
    {
          for(int i = 0; i<size; i++)
              cout << arr[i] << " " ;
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
    
       selectionSort(arr, size);
       cout << "\n""Array after Sorting: " << endl;
       
       display(arr, size);
}
    
    



