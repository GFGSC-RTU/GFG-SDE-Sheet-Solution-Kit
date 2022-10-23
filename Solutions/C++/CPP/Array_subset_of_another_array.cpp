//link to question: https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1

//solution
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> m1,m2;
    for(int i = 0 ; i < n ; i++){
        m1[a1[i]]++;
    }
    
    for(int i = 0 ; i < m ; i++){
        if((m1.find(a2[i]) == m1.end()) or m1[a2[i]] == 0){
            return "No";
        }
        
        m1[a2[i]]--;
    }
    return "Yes";
}
