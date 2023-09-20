
#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isprime(ll n) {	// O( sqrt(n)

    if(n == 2) 				return true;

    if(n < 2 || n%2 == 0) 	return false;


    for(ll i=3; i*i <= n; i+=2)
    {
    	if(n%i == 0)
    		return false;
    }
    return true;
}
int countPrimesInRange_sieve(int n)	// Backward thinking
{
	vector<bool> isPrime(n+1, true);	// set all of them to primes
	isPrime[0] = isPrime[1] = 0;		// 0, 1 are not primes

    for (ll i = 2; i*i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= n; j += i)
            	isPrime[j] = 0;
        }
    }

    int cnt = 0;

    for (int i = 0; i < (int)isPrime.size(); ++i)
    	if(isPrime[i])
    		cnt++;

    return cnt;
}

vector<ll>prime_factorization(ll n)
{
    vector<ll>prime_factors;
    while(n%2 == 0)
    {
        prime_factors.push_back(2); n/=2;
    }

    for(int i = 3; i*i <= n; i+=2)
    {
        while(n%i == 0)
            prime_factors.push_back(i), n/=i;
    }

    if(n>1)
        prime_factors.push_back(n);
    return prime_factors;
}

vector<ll>range_factorizationNotPrime(ll n)
{
    vector<ll>num_factors(n+1, 1);//all divisible by 1

    for(int i = 2; i <= n; i++)
    {
        for(int k = i; k <= n; k+=i)
            num_factors[k]++;
    }
    return num_factors;
}

int main()
{
    vector<ll> primes = prime_factorization(8);
    vector<ll> factors = range_factorizationNotPrime(90);
    for(auto&i:primes) cout << i << " ";
    cout << '\n';
    cout << factors[24];
}
