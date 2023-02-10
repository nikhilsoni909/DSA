#include <stdio.h>

int main()
{
    
    int a;
    FILE *ptr ,*ptr2;
    ptr = fopen("k.txt", "r");
     
    fscanf(ptr,"%d",&a);
        printf("%d", a*2);

    ptr2=fopen("k.txt", "w");
    fprintf(ptr2,"%d", a*2);
    fclose(ptr);
    fclose(ptr2);


    return 0;
}