#include <vector>
#include <iostream>
using namespace std;

int singleNumber(vector<int>& nums) {
    int temp = nums[0];
    for(int i = 1;i < nums.size();i++){
        temp ^= nums[i];
    }
    return temp;
}  
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    int ans = singleNumber(v);
    cout<<ans;
    return 0;
} 
