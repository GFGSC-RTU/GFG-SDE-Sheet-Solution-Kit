#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    fastio;
    int n;
    cin >> n;
    int sq = n * n;
    int sum = 0;
    while (sq != 0)
    {
        int d = sq % 10;
        sum += d;
        sq /= 10;
    }
    if (sum == n)
    {
        cout << "Yes, It's a neon number!!" << endl;
    }
    else
    {
        cout << "No, It's not a neon number!!" << endl;
    }
    return 0;
}
