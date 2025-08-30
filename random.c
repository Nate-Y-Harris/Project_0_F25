// editing to see git add -p
// did this on my personal account by accident!
#include <stdlib.h>

void rand_string(char* s, size_t size) {
    for(int i = 0; i < size-1; i++) {
        s[i] = (char)(rand()%25 + 'a') ;
    }
    s[size-1] = '\0';
}
