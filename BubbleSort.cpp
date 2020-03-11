#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *ab, int *zb)  
{  
    int temp = *ab;  
    *ab = *zb;  
    *zb = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
     
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
  // function to print sorted array
int main()  
{  
    int arr[] = {43,31,23,10,21,9,100,104,57,32,38,57,20,1,8,5,3,2,4,7,};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  

