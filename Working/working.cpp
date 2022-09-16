// working.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main() {
    
    char s[] = "string";

    for (char *c = s; *c; c++) {
        printf("c is %c\n", *c);
    }

    return 0;
}
