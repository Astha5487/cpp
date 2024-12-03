#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){

            if(arr[j]> temp){
                //shift

                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr.size(), arr);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}