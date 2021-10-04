class Solution {
    public int missingNumber(int[] nums) {
        
        int l = nums.length,j=-1;
        
        for(int i=0;i<l;i++)
        {

         if(Math.abs(nums[i])<l)
         {
            if(nums[Math.abs(nums[i])]==0)
                j=0;
             
                nums[Math.abs(nums[i])] *=-1;
         }

        }
        
        for(int i=0;i<l;i++)
        {
            if(nums[i]==0 && j==-1)
                return i;
            
            if(nums[i]>0)
                return i;
        }
        
        return l;
    }
}
