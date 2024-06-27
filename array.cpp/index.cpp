#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
  int count =0;
  for(int i =0;i<n; i++){
    if(arr[i]==key){
      count++;
    }
  }
  cout<<"The first occurence of the key is at index "<<count<<endl;
  return count;
}

int main()
{
  int key=2;
  int arr[]= {1,1,2,2,2,2,3};
  int size =7;
  cout<<" neeche dekho"<<endl;
   int num = firstOcc(arr, size, key);
  cout<<num<<endl;
  
    
}
