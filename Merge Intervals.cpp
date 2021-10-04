class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        vector<vector<int>> combined;
        
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<intervals.size();i++)
        {
            vector<int> v =intervals[i];
            
            if(combined.size()>0)
            {
                int l = combined.size();
                int f =0;
                for(int j=0;j<l;j++)
                {
                if(v[0]>=combined[j][0] && v[0]<=combined[j][1])
                {
                   int mx = max(v[1],combined[j][1]); 
                   combined[j][1]=mx;
                    f=1;
                }
                }
                if(f==0)
                {
                    combined.push_back(intervals[i]);
                }
            }
            else
            {
                combined.push_back(intervals[i]);
            }
        }
        return combined;
    }
};
