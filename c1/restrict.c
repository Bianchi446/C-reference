// The following function copies n bytes from the sotrage referenced by q to
// the storage referenced by p. 

void f(unsigned int n, int * restrict q, int * restrict p) {
    while (n-- > 0) {
        *p++ = *q++; 
    }
}