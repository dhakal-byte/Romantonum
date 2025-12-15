#include <stdio.h>
#include <string.h>

int value(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return 0;
}
int romanToInt(char s[]) {
    int total = 0;
    int len = strlen(s);
    int i;

    for (i = 0; i < len - 1; i++) {
        if (value(s[i]) < value(s[i + 1]))
            total -= value(s[i]);
        else
            total += value(s[i]);
    }

    total += value(s[len - 1]);
    return total;
}


int main() {
    char s[20];

    printf("Enter Roman Numeral: ");
    scanf("%s", s);

    printf("Integer value: %d\n", romanToInt(s));

    return 0;
}

