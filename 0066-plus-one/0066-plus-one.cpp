class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() ;
         add( digits,size - 1);
      
      return digits;
    }
    int add(vector<int>& digits ,int i){
        
        digits[i] += 1;
        if(digits[i] == 10){
            
        digits[i] = 0;
        if(i == 0){
               digits.insert(digits.begin(),1);
                return 1;
            }
        add(digits, i  - 1);
        }return 1;
      }
};