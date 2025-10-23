#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int ch;
    int player, computer = rand() % 3;
    printf("0-Gun\n1-Sank\n2-Water\n");
    printf("What do you Choile: ");
    scanf("%d", &ch);

    if (player == 0 && computer == 0)
    {
        printf("The Match is Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lost\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lost\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("The Macth is Draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Lost\n");
    }
    else if (player == 2 && computer == 1)
    {

        printf("You win\n");
    }
    else if (player == 2 && computer == 2)
    {

        printf("The Macth is Draw\n");
    }

    system("Pause");

    return 0;
}