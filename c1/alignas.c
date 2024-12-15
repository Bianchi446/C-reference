#include <stdio.h>

struct S {
    int i; double d; char c;
};

int main(void) {
    unsigned char bad_stuff[sizeof(struct S)];
    _Alignas(struct S) unsigned char good_stuff[sizeof(struct S)];

    struct S *bad_stuff_ptr = (struct S *)bad_stuff;
    struct S *good_stuff_ptr = (struct S *)good_stuff;
}

