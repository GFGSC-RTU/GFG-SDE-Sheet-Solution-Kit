    int minIndexChar(string str, string patt)
    {
        // Your code here
        unordered_map<char, bool> visited;
        for(int i=0; i<str.size(); i++){
            if(!visited[str[i]]){
                for(int j=0; j<patt.size(); j++){
                    if(str[i] == patt[j])
                        return i;
                    else
                        visited[str[i]] = true;
                }
            }
        }
        return -1;
    }