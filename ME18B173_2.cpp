#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

#define mod 1000000007
#define forn for(int i=0;i<n;i++)
#define vi vector<int>
#define ll long long
#define vll vector<ll>

void func1(int N, int s[]) 
{ 
    // Create a boolean array "prime[0..n]" and 
    // initialize all entries in it as false. 
    vector <bool> prime(N+1, false); 
  
    // Initializing smallest factor equal to 2 
    // for all the even numbers 
    for (int i=2; i<=N; i+=2) 
        s[i] = 2; 
  
    // For odd numbers less then equal to n 
    for (int i=3; i<=N; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            // s(i) for a prime is the number itself 
            s[i] = i; 
  
            // For all multiples of current prime number 
            for (int j=i; j*i<=N; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
  
                    // i is the smallest prime factor for 
                    // number "i*j". 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
  
// Function to generate prime factors and its power 
int primefact(int N) 
{ 
    // s[i] is going to store smallest prime factor 
    // of i. 
    int s[N+1],ans=0; 
  
    // Filling values in s[] using sieve 
    func1(N, s); 
  
    int current = s[N];  // Current prime factor of N 
    int cnt = 1;   // Power of current prime factor 
  
    // Printing prime factors and their powers 
    while (N > 1) 
    { 
        N /= s[N]; 
  
        // N is now N/s[N].  If new N als has smallest 
        // prime factor as curr, increment power 
        if (current == s[N]) 
        { 
            cnt++; 
            continue; 
        } 
  
        ans+=current*cnt;
  
        // Update current prime factor as s[N] and 
        // initializing count as 1. 
        current = s[N]; 
        cnt = 1; 
    }
    return ans;
} 

int main()
{
    int a;
    cin >> a;
    int ans = primefact(a);
    cout << ans << endl;
    return 0;
}