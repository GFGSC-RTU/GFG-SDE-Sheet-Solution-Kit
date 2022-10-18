#define ll long long
const ll N = 5 * 1e6 + 10;
vector<ll> prime;
vector<ll> isPrime(N, 1);
ll a = N;
void resolvePrime()
{
     for (ll i = 2; i <= min(a,N); i++)
     {
          if (isPrime[i])
          {
               for (ll j = 2 * i; j <= min(a,N); j += i)
               {
                    isPrime[j] = 0;
               }
               prime.push_back(i);
          }
     }
}
class Solution {
public:
    int countPrimes(int n) {
            prime.clear();
               a=n;
               resolvePrime();
        return lower_bound(prime.begin(), prime.end(), n) - prime.begin();
          if (lower_bound(prime.begin(), prime.end(), n) != upper_bound(prime.begin(), prime.end(), n))
          {
               return lower_bound(prime.begin(), prime.end(), n) - prime.begin()+1;
          }
          else
          {
               return lower_bound(prime.begin(), prime.end(), n) - prime.begin();
          }
    }
};
