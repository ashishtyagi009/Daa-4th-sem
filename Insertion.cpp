#include<bits/stdc++.h>
using namespace std;
int main()
{
    // hi
    int t;
    cin>>t;
    while(t--)
    {
        int n, comparison = 0, shift = 0;
        cin>>n;
        vector <int> a;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            int ind = 0;
            for(ind = 0;ind<a.size();ind++)
            {
                // cout<<1<<endl;
                comparison++;
                if(a[ind] > x)
                    break;
            }
            a.push_back(0);
            for(int j = a.size()-1;j>= ind;j--)
            {
                // cout<<2<<endl;
                // if(j==a.size()-1)
                //     a.push_back(0);
                a[j+1] = a[j];
                shift++;
            }
            a[ind] = x;
        }

        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        cout<<"Comparisons = "<<comparison<<endl<<"Shifts = "<<shift<<endl;
    }
}
