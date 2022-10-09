class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // unordered_map (key: value , mapped: index)
        unordered_map<int,int> map;
        
        // a vector to store indices as the  answer       
        vector<int> ans;

        // getting size of he input    
        int n = nums.size();

        // iterating over the input
        for(int i=0; i<n; i++){
            // here we check taking an element from nums and subtracting it from the target
            // a + b = target => target - a = b; 
            // thus if b is found then push their indices to ans vector
            if(map.find(target - nums[i]) != map.end()){
                
                ans.push_back(i);
                ans.push_back(map[target - nums[i]]);
            }
            // else give the index of the value in the map.
            else {
                map[nums[i]] = i;
            }
        }
        // returning the ans vector
        return ans; 
    } 
};