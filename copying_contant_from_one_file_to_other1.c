#include<stdio.h>

int main()
 {
FILE*ptr1;
FILE*ptr2;
ptr1=fopen("a.txt","r");
ptr2=fopen("b.txt","w");
char c=getc(ptr1);
while (c!=EOF)
{putc(c,ptr2);

c=getc(ptr1);
    
} c=getc(ptr1);
while (c!=EOF)
{putc(c,ptr2);

c=getc(ptr1);
    
}




fclose(ptr1);
fclose(ptr2);
return 0;
} 
