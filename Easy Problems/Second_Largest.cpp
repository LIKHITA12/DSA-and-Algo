// To find the second largest element in an array using array manipulation

#include <iostream>
using namespace std;

int largestElementIndex(int arr[], int size){
  int max = INT_MIN;
  int maxindex = -1;
  for(int i=0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
      maxindex = i;
    }
  }
  return maxindex;
}

int main(){
  int arr[] = {1,2,3,4,5};
  int indexlargest = largestElementIndex(arr, 5);
  // arr[indexlargest] = -1; - for unique array

  int largestelement = arr[indexlargest]
  for(int i=0; i<5; i++){
    if(arr[i] == largestelement){
      arr[i] = -1; // dupicate values in array
    }
  }

  int secondlargestindex = largestElementIndex(arr, 5);
  cout<<arr[secondlargestindex];
  return 0;
}
