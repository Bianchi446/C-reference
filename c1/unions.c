#include <stdio.h>

union {
    struct {
        int type; 
    } n;
    struct {
        int type;
        int intnode;
    } ni;
    struct {
        int type; 
        double doublenode;
    } nf;
} u; 

int main(void) {
    u.nf.type = 1; 
    u.nf.doublenode = 3.14;

    printf("type: %d, doublenode: %.2f\n", u.nf.type, u.nf.doublenode);
    return 0;
}
