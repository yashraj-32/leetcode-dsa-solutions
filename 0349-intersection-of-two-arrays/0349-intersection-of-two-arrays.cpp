class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        
    int s1 = nums1.size();
    int s2 = nums2.size();
    vector<int> ans;
  

    
    for (int i = 0 ; i< s1 ; i++){
        for (int j = 0 ; j < s2 ; j++){
            if (nums1[i] == nums2[j]){
           
            if (find(ans.begin(), ans.end(), nums1[i]) == ans.end()) {
                ans.push_back(nums1[i]);
             
             break;
            }}
            
        }
    }
    
    return ans;
}

};