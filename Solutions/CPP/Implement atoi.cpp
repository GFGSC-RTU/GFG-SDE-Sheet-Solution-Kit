    int atoi(string s) {
        //Your code here
        int ans = 0;
        bool neg = false;
        int i = 0;
        if(s[i] == '-')
            neg = true, i++;
        for(; i<s.size(); i++){
            if(isdigit(s[i]))
                ans = ans * 10 + s[i] - '0';
            else{
                ans = -1;
                break;
            }
        }
        if(ans == -1)
            return ans;
        return neg ? -ans : ans;
    }