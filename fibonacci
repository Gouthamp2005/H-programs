#include <stdio.h>
void fib(int n) {
    unsigned long long first = 0, second = 1, next;

    printf("Fibonacci sequence (iterative) for %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%llu ", next);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fib(number);
    }

    return 0;
}
