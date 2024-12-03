#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for(int i=1; i<n; i++){
        //for round 1 to n-1
        for(int j=0; j<n-i; j++){
            if(arr[j]> arr[j+1]){
                swap (arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    vector <int> arr;
    arr.push_back(3);
    arr.push_back(8);
    arr.push_back(19);
    arr.push_back(5);
    arr.push_back(25);
    arr.push_back(15);
    bubbleSort(arr, arr.size());

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
    
    }