#include <iostream>
using namespace std;
int lastOcc(int arr[], int n, int key){
    int s=0; 
    int e=n-1;
    int ans=-1;
     int mid = s+(e-s)/2;

    while (s<=e){
        if (arr[mid]==key){
            ans = mid;
            s=mid+1;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else if (arr[mid]> key){
            e=mid-1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
}

int main (){
    int even[6]={1,2,3,3,3,5};
    
    cout << "last occurence of 3 is " << lastOcc(even, 6, 3);
}