#include<iostream>
using namespace std;
int main ()
{
    int key=-2;
    int arr[5]= {0,-1,2,-3,1};
    for(int i=0; i<=4; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i]+arr[j]==key){
                cout << "yes";
            }
            
        }
    }
    cout<<"no"<<endl;
    
}