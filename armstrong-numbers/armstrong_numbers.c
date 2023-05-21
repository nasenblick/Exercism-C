#include "armstrong_numbers.h"
#include <stdio.h>
#include <math.h>
bool is_armstrong_number(int candidate) {
    int check = 0;
    //int len = log10(candidate) + 1;
    
    int len = 0;
    int candi_tmp = candidate;
    while (candi_tmp > 0) {
        candi_tmp = candi_tmp / 10;
        len ++;
    }
    
    for (int i = 0; i < len; i++) {
        int digit = candidate / (int)pow(10, i) % 10;
        check += (int)pow(digit, len);
    }
        return candidate == check;
}