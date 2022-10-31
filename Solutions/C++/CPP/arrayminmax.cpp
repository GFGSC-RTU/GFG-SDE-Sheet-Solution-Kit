#include <bits/stdc++.h>
using namespace std;
void Rearr_Max_Min(int arr[], int size){
   int max = size - 1;
   int min = 0;
   int max_val = arr[size - 1] + 1;
   for (int i = 0; i < size; i++){
      if (i % 2 == 0){
         arr[i] += (arr[max] % max_val) * max_val;
         max--;
      }
      else{
         arr[i] += (arr[min] % max_val) * max_val;
         min++;
      }
   }
   for(int i = 0; i < size; i++){
      arr[i] = arr[i] / max_val;
   }
}
int main(){
   //input an array
      int arr[] = {7, 5, 2, 3, 4, 9, 10, 5 };
      int size = sizeof(arr) / sizeof(arr[0]);
      //sort an array
      sort(arr, arr + size);
      //print the original Array after sorting
      cout<<"Array before Arrangement: ";
      for (int i = 0; i < size; i++){
         cout << arr[i] << " ";
      }
      //calling the function to rearrange the array
      Rearr_Max_Min(arr, size);
      //print the array after rearranging the values
      cout<<"Rearrangement of an array in maximum minimum form is: ";
      for(int i = 0; i < size; i++){
         cout<< arr[i] << " ";
      }
   return 0;
}