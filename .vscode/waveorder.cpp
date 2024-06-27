#include <iostream>
using namespace std;
void wavePrint( int arr[][3], int nRows, int mCols){
    for (int col=0; col <mCols; col++){

        if (col % 2!=0){
            //odd index ..bottom to top.
            for (int row = nRows - 1; row>=0; row--){
                cout << arr[row][col] << " ";
                
            }
        }
        else 
        {
            //0 or even index -- top to bottom;
            for(int row=0; row< nRows; row++){
                cout << arr[row][col] << " ";
                
            }
        }
    }
}
int main (){
    int arr[3][3];

    cout << " enter the elements " << endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
cout << "printing elements " << endl;
        for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "printing the elements in wave order " << endl;
 wavePrint( arr , 3, 3);
 cout << endl;


 return 0;
}

