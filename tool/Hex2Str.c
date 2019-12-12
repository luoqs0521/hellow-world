#include<stdio.h>
#include<stdlib.h>

int  main(int  argc, char * argv[])
{
    for ( int i = 0 ; i < argc;  i++ )
    {
        printf("%c", (char)strtol(argv[i], NULL, 16));
    }
    printf("\n");
    
    return 0;
}
