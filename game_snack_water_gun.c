#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int swg(char com, char you)
{
    if (you == com)
    {
        return 0;
    }
    else if (you == 's' && com == 'w')
    {
        return 1;
    }
    else if (you == 'w' && com == 's')
    {
        return -1;
    }
    else if (you == 'g' && com == 'w')
    {
        return -1;
    }
    else if (you == 'w' && com == 'g')
    {
        return 1;
    }
    else if (you == 'g' && com == 's')
    {
        return -1;
    }
    else if (you == 's' && com == 'g')
    {
        return 1;
    }
}
int main()
{
    char com, you;
    srand(time(0));
    int random = rand() % 100 + 1;
    if (random <= 33)
    {
        com = 's';
    }
    else if (random > 33 && random <= 66)
    {
        com = 'w';
    }
    else
    {
        com = 'g';
    }
    printf("enter s for chosing snack\nenter w for chosing water \nenter g for chosing gun");
    scanf("%c", &you);
    

        int result = swg(com, you);

        if (result == 1)
        {
            printf("you chose %c and computer chose %c\n", you, com);
            printf("you win hurrah!!!!");
        }

        else if (result == -1)
        {
            printf("you chose %c and computer chose %c\n", you, com);
            printf("com win this round ");
        }
        else if (result = 0)
        {
            printf("you chose %c and computer chose %c\n", you, com);
            printf("both won round");
        }
    


return 0;
}