#include "isogram.h"
#include <ctype.h>

bool is_isogram(const char phrase[]) {
    if (!phrase)
        return false;

    bool check[26] = { false };

    while (*phrase) {
        char letter = *phrase++;
        if (!isalpha(letter))
            continue;

        int index = tolower(letter) - 'a';
        if (check[index])
            return false;

        check[index] = true;
    }

    return true;
}