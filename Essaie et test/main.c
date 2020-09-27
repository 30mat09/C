#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc>1)
        printf("Bienvenue, %s!\n", argv[1]);
    system("pause");
    return 0;
}
