#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);
    for(int i =0;i<5;i++){
        cin>>v[i];
    }
    for(int i =0;i<5;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    cout<<v.size()<<endl;
    v.push_back(6);
    cout<<"2nd size"<<v.size()<<endl;
}