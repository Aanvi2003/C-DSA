#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int max_Sub_arraySum(vector<int> & nums){
        int max_Sub_array = INT_MIN;
        int curr_Sum = 0;
        for(int i=0; i<nums.size(); i++){
            curr_Sum += nums[i];
            if(curr_Sum > max_Sub_array){
                max_Sub_array = curr_Sum;
            }if(curr_Sum < 0){
                curr_Sum = 0;
            }
        }
         return max_Sub_array;
        
    }
};
int main() {

    Solution obj;

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << obj.max_Sub_arraySum(nums);

    return 0;
}
