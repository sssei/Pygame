#include <stdio.h>

int main(void)
{
    int i;
    char a[][5] = {"LISP","C","Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        printf("%s\n",a[i]);
    }

    for (i = 0; i < sizeof(p)/sizeof(p[0]); i++){
        printf("%s\n",p[i]);
    }

    return 0;
}