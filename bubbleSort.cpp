//
//  bubbleSort.cpp
//  DataStructures
//
//  Created by Suraj on 07/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
  

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
    
        if (arr[j] > arr[j+1])
        swap(arr[j], arr[j+1]);
    
}

void display(int A[], int size)
  {
      for (int i=0; i < size; i++)
      {
          cout << A[i] << " ";
      }
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
     
     bubbleSort(arr, size);
     cout <<"\n""Array after sorting: " <<endl;
     display(arr, size);
    
    
}
