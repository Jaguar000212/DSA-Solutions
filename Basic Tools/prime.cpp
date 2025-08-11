#include <vector>
using namespace std;
//
// Created by Jaguar000212 on 11-08-2025.
//
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

vector<int> allPrimes(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    return primes;
}

vector<int> sieveOfErat(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j += i) isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}