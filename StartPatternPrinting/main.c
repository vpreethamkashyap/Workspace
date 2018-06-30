#include <stdio.h>
#include <stdlib.h>

char* stringpattern(unsigned int n){

    char* allocate = (char*)malloc(n*(n-1));

    int i,j,k=0;

    for(i=n; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            allocate[k++] = 'x';
        }
        allocate[k++] = ' ';
    }

    return allocate;

}

int main()
{
    //printf("Hello World");
    char* pattern = stringpattern(5);
    printf("%s", pattern );

    return 0;
}
