class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<vector<int>>v;
        vector<int>tmp;
        set<int>s1,s2;
        for(int i=0;i<n;i++)
        {
           s1.insert(nums1[i]);
        }
         for(int i=0;i<m;i++)
        {
           s2.insert(nums2[i]);
        }
        
        for(auto it : s1)
        {   if(s2.find(it)==s2.end())
            {
                 tmp.push_back(it);
            }
           
        }
        v.push_back(tmp);
        tmp.clear();
        
         for(auto it : s2)
        {
             if(s1.find(it)==s1.end())
            {
                 tmp.push_back(it);
            }
        }
        
        v.push_back(tmp);
        
        return v;
    }
};