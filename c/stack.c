#include <stdio.h>

#include "stack.h"

int main(int argc, char* argv[])
{
    stack s = { .top = -1 };

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    printf("%d ", pop(&s));
    printf("%d ", pop(&s));
    printf("%d ", pop(&s));
    printf("%d ", pop(&s));
}