#include "hamming.h"

int compute(const char *lhs, const char *rhs){

    if (!lhs || !rhs)
        return -1;

    int hamming = 0;

    for(; *lhs && *rhs; lhs++, rhs++){
        if (*lhs != *rhs)
            hamming++;
    }
    return (*lhs || *rhs) ? -1 : hamming;
}
