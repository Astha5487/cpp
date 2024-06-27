#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int s=0;
    int e= size-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main (){
    int even[6]={2,4,6,8,12,18};
    int index = BinarySearch(even, 6, 18);
    cout << "index of 18 is " << index << endl;

}