// Different name for tag and typedef 

typedef struct tnode tnode; 
struct node {
    int count;
    struct tnode *left;
    struct tnode *right;
} node; 

// Type definitions can improve redability with structures 

typedef void fv(int), (*pfv)(int);
void (*signal(int, void (*)(int)))(int);
fv *signal(int, fv *);
pfv signal(int, pfv); 
