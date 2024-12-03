#include <iostream>
using namespace std;
void rearrange(int arr[], int size){
    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            if(i!=j)
            swap(arr[i], arr[j]);
            j++;
        }
      
    }
}
void printArray(int arr[], int size){
for (int i=0; i<size; i++)
cout<< arr[i] << " ";
}



 
int main()
{
  int arr[]={-1,2,-3,4,5,6,-7,8,9};
  int size = 9;

  rearrange(arr, size);
 printArray(arr, size);
//  for (int i=0; i<size; i++)
//     cout << arr[i] << " ";
  return 0;

}