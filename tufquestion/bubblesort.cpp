class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n= nums.size();
       for(int i=1; i<n; i++){
        //for round 1 to n-1
        for(int j=0; j<n-i; j++){
            if(nums[j]> nums[j+1]){
                swap (nums[j], nums[j+1]);
            }
        }
    }
return nums;
    }
};
