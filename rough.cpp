#include<iostream>
using namespace std;

int sum(int &a ,int &b){
    int ans = a + b;
    return ans;
}

int main(){
    int a = 5;
    int b = 5;
    int ans = sum(a,b);
    cout<<ans<<" ";
}