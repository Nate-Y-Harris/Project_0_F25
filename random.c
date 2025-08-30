// editing to see git add -p
#include <stdlib.h>
void rand_string(char* s, size_t size) {
    for(int i = 0; i < size; i++) {
        s[i] = (char)rand();
    }
}
