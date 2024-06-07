// #include<bits/stdc++.h>
// using namespace std;
// int fun(int a , int b){
//     if(a-b)
//         return a+b;
//     else
//         return a*b;
// }
// int main(int argc, char const *argv[])
// {
//     int ans = 0;
//     for(int i=1;i*i<=20 ; i++){
//         ans+=fun(i,i);
//     }
//     cout<<ans;
//     return 0;
// }
// <<<<<<<<<<<<<<  ✨ Codeium Command ⭐ >>>>>>>>>>>>>>>>
// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> num_map;
//     for (int i = 0; i < nums.size(); i++) {
//         int complement = target - nums[i];
//         if (num_map.find(complement) != num_map.end()) {
//             return { num_map[complement], i };
//         }
//         num_map[nums[i]] = i;
//     }
//     return {};
// }
// <<<<<<<  fa770b1b-27a8-4bbd-bf02-ba44623f440f  >>>>>>> 