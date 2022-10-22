#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;
  
    vector<int> count(range), output(arr.size());
    for (int i = 0; i < arr.size(); i++)
        count[arr[i] - min]++;
  
    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];
  
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
  
    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
}

void pring(vector<int> v){
  for(auto x: v){
    cout<<x<<" ";
  }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("counting.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
  
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i< n; i++){
        int num; cin>>num;
        v.push_back(num);
    }

    countingSort(v);
    print(v);
return 0;
}

