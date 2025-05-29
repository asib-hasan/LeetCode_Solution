class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp,mp2;

        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        

        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }

        for(auto i:mp){
            if(mp2[i.first]){
                int take = min(mp2[i.first],mp[i.first]);
                while(take--){
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};