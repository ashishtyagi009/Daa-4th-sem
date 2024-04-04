#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int swap = 0, comparison = 0;
        int n;
        cin>>n;
        vector<int> nums;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int ind = 0;
        for(int i = 0;i<n-1;i++)
        {
            int minInd = i+1;
            for(int j = i+1;j<n;j++)
            {
                comparison++;
                if(nums[j]<nums[minInd])
                {
                    minInd = j;
                }
            }
            int temp = nums[minInd];
            nums[minInd] = nums[i];
            nums[i] = temp;
            swap++;
        }
        for(int i = 0;i<n;i++)
            cout<<nums[i]<<" ";
        cout<<endl;
        cout<<"Comparison: "<<comparison<<endl<<"Swaps: "<<swap<<endl;
    }
}
