class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        
        roman.insert(pair<char, int> ('I', 1));
        roman.insert(pair<char, int> ('V', 5));
        roman.insert(pair<char, int> ('X', 10));
        roman.insert(pair<char, int> ('L', 50));
        roman.insert(pair<char, int> ('C', 100));
        roman.insert(pair<char, int> ('D', 500));
        roman.insert(pair<char, int> ('M', 1000));
        
        int num {0};
        int sum {0};
        
        int i {0};
        
        int len = s.size();
        
        while(i<len){
            
            if((i == len-1) || (roman[s[i]] >= roman[s[i+1]])){
                num = roman[s[i]];
                i++;
            }else{
                num = roman[s[i+1]] - roman[s[i]];
                i = i+2;
            }
            sum += num;
        }
        
        return sum;
    }
};
