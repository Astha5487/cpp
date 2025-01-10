#include<iostream>
#include<vector>
using namespace std;

vector<int> Union(int arr1[],int arr2[],int n , int m){
    int i =0;
    int j =0;
    vector<int> v;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
           if(v.size()==0||v.back()!=arr1[i])
           v.push_back(arr1[i]);
           i++; 
        }
        else{
             if(v.size()==0||v.back()!=arr2[j])
             v.push_back(arr2[j]);
             j++;
        }
    }
    while(i<n){
           if(v.size()==0||v.back()!=arr1[i])
           v.push_back(arr1[i]);
           i++; 
        }  
  
  while(j<m){
      if(v.size()==0||v.back()!=arr2[j])
             v.push_back(arr2[j]);
             j++;
  }
  return v;
}

int main(){
    int arr1[] = {1,2,3,3};
    int arr2[] = {2,3,4};
    int n =4;
    int m = 3;
   vector<int> v =  Union(arr1,arr2,n,m);
//     for(auto &st:v){
//    cout<<st<<" ";
// } 
for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
}
    }