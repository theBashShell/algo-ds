class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls {}, cows {};
        vector<int> numbers(10);
        
        for(int i = 0; i < secret.size(); ++i) {
            if(secret[i] == guess[i]) ++bulls;
            else {
                if(numbers[secret[i] -'0']++ < 0) ++cows;
                if(numbers[guess[i] - '0']-- > 0) ++cows;
            }
        }
        
         
        return to_string(bulls) + "A" + to_string(cows) + "B";        
    }
}; 
