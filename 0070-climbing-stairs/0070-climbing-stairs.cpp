class Solution {
public:
   
    int climbStairs(int n) {
        
        int arr[n+1];

        for (int i = 0 ; i < n + 1; i++){
            arr[i] = -1;
        }
        return momo( n,arr);
        }
      int momo(int n , int arr[]){
            if (n == 0 ){return 1;}
            else if (n < 0)return 0;
            if(arr[n] != -1){
                return arr[n];
            }

            if(arr[n] == -1)

                {
                int j1 = momo(n - 1,arr);
                int j2 = momo(n - 2,arr);
                arr[n]=j1 + j2;
                }

            return arr[n];
        }
            

 
};