//
// Created by Jaguar000212 on 11-08-2025.
//

bool isArmstrong(int n) {
    int num = n, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum == n;
}