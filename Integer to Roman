class Solution {
public:
    string intToRoman(int n) {
    vector<pair<int, string>> m = {{1000, "M"},{900, "CM"} , {500, "D"},{400, "CD"} , {100, "C"} , {90, "XC"}, {50, "L"}, {40, "XL"},{10, "X"}, {9, "IX"},{5, "V"} , {4, "IV"},{1, "I"} };
       
        string ans = "";
        while(n > 0){
            for(auto x : m){
                if(n >= x.first){
                    ans += x.second;
                    n = n - x.first;
                    break;
                }
            }
        }
        
        return ans;
    }
};
