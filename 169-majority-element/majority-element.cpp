// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int  c=0;
//             for(int j=0;j<n;j++){
                
//                 if(nums[i]==nums[j]){
//                     c++;
//                 }
//                 if(c>(n/2)){
//                     return nums[i];
//                 }
//             }
//         }return 0;
//     }
// };
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        
        return candidate;
    }
};
