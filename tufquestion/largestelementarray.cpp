#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int>& nums){
int n= nums.size();
int max= INT_MIN;
for (int i = 0; i < n; i++)
{
    if(nums[i]> max){
        max= nums[i];
    }
    
}
return max;
}




int main(){

}