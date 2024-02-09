class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
 int n=nums.size();
        vector<int>lislength(n,1),previndex(n,-1);
        
        int maxlen=0; 
        int index=0; 

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if( (nums[i] % nums[j] ==0 ) && 1+lislength[j]>lislength[i] )
                {
                    lislength[i]=1+lislength[j];
                    previndex[i]=j;
                }
            }

            if(lislength[i]>maxlen)
            {
                maxlen=lislength[i];
                index=i;
            }
        }

       vector<int>ans;
       while(index!=-1)
       {
         ans.push_back(nums[index]);
         index=previndex[index];
       }

      return ans;
    }
};