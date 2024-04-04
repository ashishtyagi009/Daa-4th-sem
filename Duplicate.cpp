#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
   
  int pivot=arr[high];
  int i=(low-1);
   
  for(int j=low;j<=high;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
 // hi 
            
void quickSort(int arr[],int low,int high)
{
  if(low<high)
  {
     
    int pi=partition(arr,low,high);
     
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int nums[n];
        for(int i = 0;i<n;i++)
        {
            cin>>nums[i];
        }
        quickSort(nums, 0, n-1);
        // vector<int> nums;
        // sort(nums.begin(), nums.end());
        bool dupe = false;
        for(int i = 0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                dupe = true;
                break;
            }
        }
        dupe?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}
