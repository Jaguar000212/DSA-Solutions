//
// Created by Jaguar000212 on 11-08-2025.
//

#include <vector>
using namespace std;


vector<int> digits(int n) {
    vector<int> result;
    while (n > 0) {
        result.push_back(n % 10);
        n /= 10;
    }
    return result;
}

vector<int> digitsReverse(int n) {
    vector<int> result;
    while (n > 0) {
        result.insert(result.begin(), n % 10);
        n /= 10;
    }
    return result;
}

int digitsCount(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int digitsSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}