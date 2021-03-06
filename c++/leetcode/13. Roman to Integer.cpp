class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mapping {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
         
        int sum {0};
        
        auto prev = mapping[s[0]];
        
        for(const auto& i : s)  {
            const auto val = mapping[i];    
            
            if(val > prev) {
                sum -= (2 * prev);
            }
            sum += val;
            prev = val;
        }
           
        return sum;
    }
};
