#include<bits/stdc++.h>
using namespace std;
/*To generate random numbers from 1 to 6*/
int roll_dice()
{
    int a, b;
    a=rand()%7;
    b=rand()%7;
    return a+b;
}
/* pre_count holds the value from the previous roll. If there is no previous
 roll or game starting from new, the default value of pre_count=0.*/
int play_game(int pre_count, int wins, int loses)
{
    int dice=roll_dice();
    /* The condition of win, either score 7 on the first run (when pre_count==0), score
     11 or score the same value as in the previous run (pre_count==dice)*/
    if(pre_count == dice || (pre_count == 0 && dice == 7) || dice == 11)
    {
        printf("\nYou win");
        wins++;
        char inp;
        printf("\nplay again? ");
        scanf("%c", &inp);
        /*If you play again, call the same function again and pass the pre_count as 0 (since
         you are starting a new game), and wins and loses as they are to make sure consistent
         counts of wins and loses throughout the entire play.*/
        if (toupper(inp)=='Y')
        {
            return play_game(0, wins, loses);
        }
        else
        {
            printf("\nNumber of wins: %d", wins);
            printf("\nNumber of loses: %d", loses);
            exit(0);

        }
    }
    /* The condition of losing the game. Either score 6 or 12
     on the first run or score 7 on any run (when pre_count!=0)*/
    else if((pre_count == 0 && dice == 6) || (pre_count == 0 && dice == 12) || (pre_count != 0 && dice == 7))
    {
        printf("\nYou lose");
        loses++;
        char inp;
        printf("\nplay again? ");
        scanf("%c", &inp);
        if (toupper(inp)=='Y')
        {
            return play_game(0, wins, loses);
        }
        else
        {
            printf("\nNumber of wins: %d", wins);
            printf("\nNumber of loses: %d", loses);
            exit(0);
        }

    }
    else
        /* Otherwise, take the dice value as score, which will be the pre_count
        on the next value.*/
    {
        printf("\nYour score: %d", dice);
        char inp;
        /* After showing the score, prompt user to hit enter to roll the dice.
        Then the game is played again (by recalling play_game()) and the dice
        value becomes the pre_count on the next dice roll.*/
        scanf("%c", &inp);
        if(inp==10)
                return play_game(dice, wins, loses);

        }
    }

main()
{
    printf("Press enter to roll dice: ");
    srand(time(NULL));
    while(1)
    {
        char ch;
        scanf("%c", &ch);
        if(ch==10)
        /* The game is started with pre_count=0, wins=0, loses=0*/
            play_game(0,0,0);
    }

}
