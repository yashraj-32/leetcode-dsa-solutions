class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int siz = arr.size();
        vector<int> ans;
        for(int i = 0 ; i < siz ; i++ ){
            if(arr[i] ==  0 ){
                ans.push_back(0);
                ans.push_back(0);
                siz--;
                continue;
            }
            ans.push_back(arr[i]);

        }
        siz = arr.size();
         for(int i = 0 ; i < siz ; i++ ){
            arr[i] = ans[i];
         }

        
        
    }
};