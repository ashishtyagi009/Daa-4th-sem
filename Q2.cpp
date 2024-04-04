#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums;
        bool isFound = false;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int i,j;
        for(i = 2;i<n;i++)
        {
            int left = 0, right = i-1;
            while(left<right)
            {
                if(nums[i] == nums[left]+nums[right])
                {
                    isFound = true;
                    cout<<left+1<<" "<<right+1<<" "<<i+1<<endl;
                    break;
                }
                else if(nums[left]+nums[right] < nums[i])
                    left++;
                else
                    right--;
            }
            if(isFound) break;
        }
        if(!isFound)
            cout<<"No Sequence Found"<<endl;
    }
}
