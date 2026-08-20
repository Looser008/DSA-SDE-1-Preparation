class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i = 2; i < n; i++)
        {
            int m = arr1.size();
            int k = arr2.size();
            if(arr1[m-1] > arr2[k-1]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        vector<int> result;
        for(auto arr : arr1){
            result.push_back(arr);
        }
        for(auto arr : arr2){
            result.push_back(arr);
        }
        return result;
    }
};