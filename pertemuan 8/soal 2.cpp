#include <iostream>
using namespace std;

void bubble (int arr [] , int n)
{
    for (int i = 0 ; i < n-1 ; i++)
    {
        for (int j = 0 ; j < n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selection(int arr[], int n) {
   int i, j, mini;
   for (i = 0; i < n-1; i++) {
      mini = i;
      for (j = i+1; j < n; j++) {
         if (arr[j] > arr[mini]) {
            mini = j;
         }
      }
      swap(arr[mini], arr[i]);
   }
}

int main() {
   cout << endl << endl;
    //bubble
   int arr[] = {9, 5, 8, 1, 0, 4, 7};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubble(arr, n);
   cout << "bubble sort: ";
   for (int i=0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl << endl;
   //select
   int abb[] = {11, 5, 4, 7, 9, 6, 2};
   int x = sizeof(abb)/sizeof(abb[0]);
   selection(abb, x);
   cout << "selection sort: ";
   for (int i=0; i < x; i++) {
      cout << abb[i] << " ";
   }
   cout << endl << endl;

   return 0;
}
