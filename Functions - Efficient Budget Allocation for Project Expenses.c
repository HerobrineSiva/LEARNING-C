#include <stdio.h>

int OddEvenSum(unsigned int num) {
    int odd_sum = 0;
    int even_sum = 0;

    do {
        unsigned int digit = num % 10;
        if (digit % 2 == 0) {
            even_sum += (int)digit;
        } else {
            odd_sum += (int)digit;
        }
        num /= 10;
    } while (num > 0);

    return odd_sum > even_sum ? odd_sum : even_sum;
}

int main(void) {
    unsigned int num;
    if (scanf("%u", &num) != 1) {
        return 0;
    }

    printf("%d\n", OddEvenSum(num));
    return 0;
}
