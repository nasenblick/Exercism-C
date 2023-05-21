#include "square_root.h"

int square_root (int number){
    for (int root = 0; root * root <= number; root++) {
        if (root * root == number)
            return root;
    }
    return -1;
}
