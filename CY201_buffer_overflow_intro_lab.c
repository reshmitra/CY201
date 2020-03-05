#pragma check_stack(off)

#include <string.h>
#include <stdio.h> 

void foo(const char* input)
{
    char buf[10];

    printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n% p\n\n");

    strcpy(buf, input);
    printf("%s\n", buf);

    printf("Now the stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
}

void bar(void)
{
    printf("Augh! I've been hacked!\n");
}

int main(int argc, char* argv[])
{
    // Display the address for both the function calls
    printf("Address of foo = %p\n", foo);
    printf("Address of bar = %p\n", bar);

foo("my sample text");
    return 0;
}
