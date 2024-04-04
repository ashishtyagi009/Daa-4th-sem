#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <int> nums;
        cout<<"Enter the number: ";
        int n;
        cin>>n;
        cout<<"Enter the array: ";
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        unordered_map<int, int> mpp;
        for(int i = 0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        cout<<"Enter the key: ";
        int key;
        cin>>key;
        auto it = mpp.find(key);
        if(it == mpp.end())
            cout<<"Key Not Present";
        else
            cout<<key<<" "<<it->second<<endl;
    }
}
