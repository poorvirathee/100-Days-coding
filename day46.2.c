//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

char findFirstRepeating(char *str) {
    int i, j;
    int len = strlen(str);
    char repeating = '\0'; // Initialize to null character

    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if it's a lowercase letter
            for (j = i + 1; j < len; j++) {
                if (str[i] == str[j]) {
                    repeating = str[i];
                    break;
                }
            }
            if (repeating != '\0') {
                break;
            }
        }
    }

    return repeating;
}       