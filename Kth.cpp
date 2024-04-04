#include<bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int> & arr, int k){

      if(k>arr.size())
            return -1;
      priority_queue <int> maxHeap;

      for(int i = 0;i<k;i++)
      {
            maxHeap.push(arr[i]);
      }
      for(int i = k;i<arr.size();++i){
            if(arr[i]<maxHeap.top()){
                  maxHeap.pop();
                  maxHeap.push(arr[i]);
            }
      }
      return maxHeap.top();
}

int main()
{
      int t;
      cin>>t;
      while(t--){
            int size;
            cin>>size;
            vector<int> arr(size);
            for(int i = 0;i<size;i++){
                  cin>>arr[i];
            }
            int k;
            cin>>k;
            int kth = findKthSmallest(arr, k);
            if(kth==-1)
                  cout<<"Not Present"<<endl;
            else
                  cout<<kth<<endl;
      }
}
