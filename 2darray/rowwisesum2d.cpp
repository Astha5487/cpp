#include <iostream>
using namespace std;
void printSum(int arr[][3], int row, int col){
    cout << " printing the sum " << endl;
    for(int row=0; row<3; row++){
      int sum=0;
      for(int col=0; col<3; col++){
        sum += arr[row][col];
      }
      cout << sum << " ";
    }
    cout << endl;
}

int largestRowsum(int arr[][3],int row, int col ){
    int maxi = INT_MIN;
    int rowIndex =-1;
      for(int row=0; row<3; row++){
      int sum=0;
      for(int col=0; col<3; col++){
        sum += arr[row][col];
      }
      if(sum > maxi){
        maxi = sum;  
        rowIndex = row;
      }
    }
    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;


}

int main (){
    int arr[3][3];
 cout << "enter the elements " << endl;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    //print 
    cout << " printing the elements " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr, 3,3 );
    int ans = largestRowsum(arr, 3, 3);
    cout << " laregst sum index " << ans << endl;

     return 0;
}

