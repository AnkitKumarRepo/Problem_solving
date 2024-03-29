class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxElement=0;

        for(auto it : nums){
            maxElement=max(it,maxElement);
        }
        int first=0,last=0;
        long long ans=0;
        unordered_map<int , int> mpp;
        while(first<n){
            mpp[nums[first]]++;

            while(mpp[maxElement]>=k){
                mpp[nums[last]]--;
                ans+=(n-1)-first+1;
                last++;
            }

            first++;
        }

        return ans;

    }
};