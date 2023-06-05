#include <stdio.h>
#include <stdlib.h>

int maximum69Number(int num) {
    char digits[10]; // Assuming the maximum number of digits is 10
    int length = sprintf(digits, "%d", num);

    for (int i = 0; i < length; i++) {
        if (digits[i] == '6') {
            digits[i] = '9';
            break;
        }
    }

    return atoi(digits);
}

int main() {
    int num;
    
    scanf("%d", &num);

    int max_num = maximum69Number(num);
    printf("%d
", max_num);

    return 0;
}