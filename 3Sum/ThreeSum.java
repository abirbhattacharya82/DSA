class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        //Declare a answer arrayList
        List<List<Integer>> ans = new ArrayList<>();
        //Sort the Array
        Arrays.sort(nums);
        int n =nums.length;
        for(int i=0;i<n-2;i++){
            if(i==0 || i>0 && nums[i]!=nums[i-1]){
            //Take low variable and initialise it to next of i
            int low = i+1;
            //Take high variable and initialise it to end of array
            int high = n-1;
            while(low<high){
                int sum= nums[i] + nums[low] + nums[high];
                if(sum==0){
                    ans.add(Arrays.asList(nums[i], nums[low], nums[high]));
                    //check for duplicates
                     while(low<high && nums[low]==nums[low+1]) low++;
                     while(low<high && nums[high]==nums[high-1]) high--;
                         
                    low++;
                    high--;
                    
                }
                else if(sum<0) low++;
                else high--;
            }
            
           }
        }
        return ans;
     }
    }
