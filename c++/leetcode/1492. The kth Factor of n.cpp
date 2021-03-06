class Solution {
public:
    int kthFactor(int n, int k) {
        int ans {-1};
        
        for(int i = 1; i <= n; ++i) {
            const auto j = n % i;
            if(j == 0) --k;
            
            if(k == 0) 
                return i;            
        }
        
        return ans;        
    }
};
