class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n = nums.size();
        int l = 0, h = n-1;
        while(l<h)
        {
            if(nums[l] <= nums[h])  return nums[l];
            int mid = l + (h-l)/2;
            if(nums[l] > nums[mid])
                h = mid;
            else if(nums[mid] > nums[h])
                l = mid+1;
        }
        if(nums[l] <= nums[h])  return nums[l];
        return -1;
    }
};
