#include <stdio.h>

int romanToInt(char* s) 
{
    int res = 0;

    int i = 0;
    while (s[i] != '\0') {
        switch (s[i]) {
        case 'I':
            if (s[i+1] == 'V') {
                res += 4;
                i += 2;
            } else if (s[i+1] == 'X') {
                res += 9;
                i += 2;
            } else {
                res += 1;
                i += 1;
            }
            break;
        case 'X':
            if (s[i+1] == 'L') {
                res += 40;
                i += 2;
            } else if (s[i+1] == 'C') {
                res += 90;
                i += 2;
            } else {
                res += 10;
                i += 1;
            }
            break;
        case 'C':
            if (s[i+1] == 'D') {
                res += 400;
                i += 2;
            } else if (s[i+1] == 'M') {
                res += 900;
                i += 2;
            } else {
                res += 100;
                i += 1;
            }
            break;
        case 'V':
            res += 5;
            i += 1;
            break;
        case 'L':
            res += 50;
            i += 1;
            break;
        case 'D':
            res += 500;
            i += 1;
            break;
        case 'M':
            res += 1000;
            i += 1;
            break;
        default:
            break;
        }
    }

    return res;
}

int main()
{
    char* s[] = {"III", "LVIII", "MCMXCIV", "DCXXI"};
    int len = sizeof(s)/sizeof(s[0]);
    
    for (int i = 0; i < len; ++i) {
        printf("%s = %d\n", s[i], romanToInt(s[i]));
    }

    return 0;
}