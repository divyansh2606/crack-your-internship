class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n1=nums.size();
        int sum=0;
        for(int i=0;i<n1;i++)
        {
          sum=sum+nums[i];
        }
        int n2=(n1*(n1+1))/2;
        
    return n2-sum;
    }
};