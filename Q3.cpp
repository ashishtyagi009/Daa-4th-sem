#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector <int> nums(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        bool isFound = false; 
        for (int i = n-1; i > 0; i--) 
        { 
            for(int j = i-1;j>0;j--)
            {
                if(find(nums.begin(), nums.end(), nums[i]-nums[j]) != nums.end())
                {
                    cout<<i+1<<" "<<j+1<<" "<<find(nums.begin(), nums.end(), nums[i]-nums[j])-nums.begin()+1<<endl;
                    isFound = true;
                    break;
                }
            }
            if (isFound) break; 
        } 
        
        if (!isFound) 
            cout << "No Sequence Found" << endl; 
    } 
return 0; 
}
