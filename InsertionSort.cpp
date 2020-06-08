//
//  InsertionSort.cpp
//  DataStructures
//
//  Created by Suraj on 05/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//
#include <iostream>
using namespace std;
  

void insertionSort(int arr[], int n)
{
    int key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }
       
    }
}
  

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  

int main()
{
    int arr[] = { 312, 221, 54, 15, 2, 3, 77, 125, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    insertionSort(arr, n);
    printArray(arr, n);
  
    return 0;
}
