#include<bits/stdc++.h>
using namespace std;

pair<int,int> twoSum(vector<int> nums, int target){
      for(int i = 0;i<nums.size();i++){
            if(find(nums.begin(), nums.end(), target-nums[i])!= nums.end()){
                  return make_pair(nums[i], *find(nums.begin(), nums.end(), target-nums[i]));
            }
      }
      return make_pair(-1,-1);
}

int main(){
      int t;
      cin>>t;
      while(t--){
            int size;
            cin>>size;
            vector<int> nums(size);
            for(int i = 0;i<size;i++){
                  cin>>nums[i];
            }
            int target;
            cin>>target;
            pair<int, int> sol = twoSum(nums, target);
            if(sol.first == -1)
                  cout<<"No Such Elements Exist"<<endl;
            else
                  cout<<sol.first<<" "<<sol.second<<endl;
      }
}
