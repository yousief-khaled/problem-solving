class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,vector<int>> mp;
      for(int i=0;i<nums.size();i++)
      { 
      
           mp[nums[i]].push_back(i);
         
          
      }

    for(int i=0;i<nums.size();i++)
    {
        int dif =target - nums[i];
        if(dif==nums[i]&&mp[dif].size()>=2)
        {
            int i1=mp[dif].back();
            mp[dif].pop_back();
            int i2= mp[dif].back();
            return {i2,i1};
             
        }
        else if(dif!=nums[i]) 
        {
                if(mp.count(dif))
                {
                    return {mp[dif].back(),i};
                }
        }
    }
      return {};
        
    }
};