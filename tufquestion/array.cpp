#include<iostream>
using namespace std;
int countOdd(int arr[], int n){
int count =0; 
for(int i=0; i<n; i++){
    if(arr[i]%2!=0){
        count++;
    }
    
}
return count;
}

int main(){

    int arr[5]={1,2,3,4,5};
   int  n= sizeof(arr)/sizeof(arr[0]);
   cout <<" count number " << countOdd( arr, 5) << endl;

   return 0;
    

}