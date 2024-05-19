// To find the number present in a vector 

class Solution {
public:
    int FindUnique(vector<int>& nums) {

        int unique = 0;
        for(int i=0; i<nums.size();i++){
            for (int j=i+1; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    nums[i] = nums[j] = -1;
                }  
            }
        }
        for(int i=0; i<nums.size(); i++){
          if(nums[i] > 0){
            unique = nums[i];
          }
        }
        return unique;

    }
};
