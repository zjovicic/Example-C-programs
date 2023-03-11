#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int kilometers;
int score;
int cities;
int mode;
int money;
char *choice;
int moscowtimes;
int londontimes;
int newyorktimes;
int riotimes;
int berlintimes;
int tokyotimes;
int sydneytimes;
int rometimes;
int paristimes;
int isparis;
int going;


void rome();
void london();
void newyork();
void riodejaneiro();
void moscow();
void berlin();
void paris();
void sydney();
void tokyo();
void shortestpath();
void excursion();
void modeselection();
void status();
void times(char *cityname, int howmany);

int main() {
    
moscowtimes = 0;
londontimes = 0;
newyorktimes = 0;
riotimes = 0;
berlintimes = 0;
tokyotimes = 0;
sydneytimes = 0;
rometimes = 0;
paristimes = 0;
isparis = 0;
money = 10000;
going = 1;

printf("Welcome to the game TELEPORT! \n");
printf("\n");
printf("Your mission is to test our new cutting edge teleportation device.\n");
printf("Teleportation devices are installed in just 9 cities in the world so far:\n");
printf("New York, Paris, Rome, Moscow, Tokyo, Sydney, Rio de Janeiro, Berlin, and London.\n");
printf("However as the costs of teleportation are still astronomically high, from each city\n");
printf("you can only teleport to two cities most distant from the city you're currently in.\n");
printf("The only exception is the city of Sydney from which you might be able to teleport to\n");
printf("more than two cities (though still not to all the cities).\n");
printf("This exception has been made, because otherwise\nit would be impossible to teleport to some of the cities.");
printf("\n\nThere are two modes of play: in the first (called Shortest Path) you start in Tokyo,\n");
printf("and your goal is to arrive to Paris in as little steps as possible.\n");

printf("You start with $10000 and each teleportation costs $2500.\n");
printf("If you spend all the money without arriving to Paris, you lose the game.");
printf("\n");
printf("\nIn the second (called Excursion), you can start in any city, and your goal is to visit all the cities.\n");
printf("For each city you visit you earn one point.\n");
printf("However if you visit a city again, you lose 2 points.\n");
printf("You win the game if you visit all the cities, you lose the game if your score becomes negative.");
printf("\n");
choice = malloc(10);
do
{
printf("\nSelect the type of play: enter 1 for Shortest Path, enter 2 for Excursion!\n");
scanf("%5s", choice);
if (strcmp(choice, "1") == 0)
{
    kilometers = 0;
    mode = 1;
    cities = 0;
    printf ("Welcome to Shortest Path game!\nYour goal is to arrive to Paris before spending all money\n");
    printf("Remember: each teleportation costs $2500!\n");
    tokyo();
}
else if(strcmp(choice, "2") == 0)
{
    kilometers = 0;
    score = 0;
    mode = 2;
    cities = 0;
    printf ("Welcome to Excursion game!\nYour goal is to visit all cities before your score turns negative!\n");
    do
    {
    printf ("\nSelect the starting city. Enter 1 for New York, 2 for London, 3 for Paris, 4 for Berlin\n");
    printf("5 for Rome, 6 for Moscow, 7 for Tokyo, 8 for Sydney or 9 for Rio de Janeiro:\n");
    scanf("%5s", choice);
    if (strcmp(choice, "1") == 0)
    {
        newyork();
    }
    else if(strcmp(choice, "2") == 0)
    {
        london();
    }
    else if(strcmp(choice, "3") == 0)
    {
        paris();
    }
    else if(strcmp(choice, "4") == 0)
    {
        berlin();
    }
    else if(strcmp(choice, "5") == 0)
    {
        rome();
    }
        else if(strcmp(choice, "6") == 0)
    {
    moscow();
    }
        else if(strcmp(choice, "7") == 0)
    {
        tokyo();
    }
    else if(strcmp(choice, "8") == 0)
    {
        sydney();
    }
    else if(strcmp(choice, "9") == 0)
    {
        riodejaneiro();
    }
    else
    {
        printf("Wrong input!");
    }
    } while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0 && strcmp(choice, "3") != 0 && strcmp(choice, "4") != 0
    && strcmp(choice, "5") != 0 && strcmp(choice, "6") != 0 && strcmp(choice, "7") != 0 && strcmp(choice, "8") != 0 && strcmp(choice, "9") != 0);
}
else {
    printf("Wrong input!");
}
} while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);

    free(choice);
    return 0;
}


void rome()
{
    rometimes++;
    if (rometimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Rome\n");
    times("Rome", rometimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
    printf("From Rome you can teleport to 2 cities\n");
    do
    {
        printf("To go to Tokyo, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 9881;
            money -= 2500;
            if (tokyotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            tokyo();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 16320;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void london()
{
    londontimes++;
    if (londontimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to London\n");
    times("London", londontimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
        printf("From London you can teleport to 2 cities\n");
    do
    {
        printf("To go to Tokyo, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 9586;
            money -= 2500;
            if (tokyotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            tokyo();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 16989;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void newyork()
{
    newyorktimes++;
    if (newyorktimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to New York\n");
    times("New York", newyorktimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
        printf("From New York you can teleport to 2 cities\n");
    do
    {
        printf("To go to Tokyo, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 10868;
            money -= 2500;
            if (tokyotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            tokyo();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 15990;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void riodejaneiro()
{
    riotimes++;
    if(riotimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Rio de Janeiro\n");
    times("Rio de Janeiro", riotimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
        printf("From Rio de Janeiro you can teleport to 2 cities\n");
    do
    {
        printf("To go to Tokyo, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 18561;
            money -= 2500;
            if (tokyotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            tokyo();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 13540;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void moscow()
{
    moscowtimes++;
    if(moscowtimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Moscow\n");
    times("Moscow", moscowtimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
        printf("From Moscow you can teleport to 2 cities\n");
    do
    {
        printf("To go to Rio de Janeiro, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 11529;
            money -= 2500;
            if (riotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            riodejaneiro();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 14484;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void berlin()
{
    berlintimes++;
    if (berlintimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Berlin\n");
    times("Berlin", berlintimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
        printf("From Berlin you can teleport to 2 cities\n");
    do
    {
        printf("To go to Rio de Janeiro, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 9988;
            money -= 2500;
            if (riotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            riodejaneiro();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 16088;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void paris()
{
    isparis = 1;
    paristimes++;
    if (paristimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Paris\n");
    times("Paris", paristimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
        printf("From Paris you can teleport to 2 cities\n");
    do
    {
        printf("To go to Tokyo, enter 1, to go to Sydney, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 9740;
            money -= 2500;
            if (tokyotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            tokyo();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 16959;
            money -= 2500;
            if (sydneytimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            sydney();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void sydney()
{
    sydneytimes++;
    if (sydneytimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Sydney\n");
    times("Sydney", sydneytimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
    printf("From Sydney you can teleport to 5 cities\n");
    do
    {
        printf("To go to Rome, enter 1, to go to Paris, enter 2\n");
        printf("To go to London, enter 3, to go to Moscow, enter 4, to go to Berlin enter 5.\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 16320;
            money -= 2500;
            if (rometimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            rome();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 16959;
            money -= 2500;
            if (paristimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            paris();
        }
        else if(strcmp(choice, "3") == 0)
        {
            kilometers += 16989;
            money -= 2500;
            if (londontimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            london();
        }
        else if(strcmp(choice, "4") == 0)
        {
            kilometers += 14484;
            money -= 2500;
            if (moscowtimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            moscow();
        }
        else if(strcmp(choice, "5") == 0)
        {
            kilometers += 16088;
            money -= 2500;
            if (berlintimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            berlin();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0 && strcmp(choice, "3") != 0 && strcmp(choice, "4") != 0 && strcmp(choice, "5") != 0);
}
void tokyo()
{
    tokyotimes++;
    if (tokyotimes < 2)
    {
        cities++;
    }
    printf("\n");
    printf("Welcome to Tokyo\n");
    times("Tokyo", tokyotimes);
    modeselection();
    status();
    if (going == 0)
    {
        exit(0);
    }
    printf("From Tokyo you can teleport to 2 cities\n");
    do
    {
        printf("To go to New York, enter 1, to go to Rio de Janeiro, enter 2\n");
        scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            kilometers += 9881;
            money -= 2500;
            if (newyorktimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            newyork();
        }
        else if(strcmp(choice, "2") == 0)
        {
            kilometers += 16320;
            money -= 2500;
            if (riotimes > 0)
            {
                score -=2;
            }
            else
            {
                score++;
            }
            riodejaneiro();
        }
        else
        {
            printf("Wrong input!\n");
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0);
}
void shortestpath()
{
    printf("Money: %i, Kilometers traveled: %i, Unique cities visited: %i\n", money, kilometers, cities);
}
void excursion()
{
    printf("Score: %i, Kilometers traveled: %i, Unique cities visited: %i\n", score, kilometers, cities);
}
void modeselection()
{
    if(mode == 1)
    {
        shortestpath();
    }
    else if (mode == 2)
    {
        excursion();
    }
}
void status()
{
    if((mode == 1 && isparis == 1) || (mode == 2 && cities == 9))
    {
        printf("Congratulations, you won the game!");
        going = 0;
    }
    
    if(mode == 1 && money <= 0)
    {
        printf("Game over! You've run out of money - you've lost the game!");
        going = 0;
    }
    
    if(mode == 2 && score < 0)
    {
        printf("Game over! Your score turned negative, you've lost the game!");
        going = 0;
    }
}

void times(char *cityname, int howmany)
{
       if (howmany == 1)
       {
           printf("This is your first visit to %s!\n", cityname);
       }
       else
       {
           printf("Nice to see you again! ");
           if(howmany % 10 == 1 && howmany % 11 != 0)
           {
               printf("This is your %ist visit to %s!\n", howmany, cityname);
           }
           else if(howmany % 10 == 2)
           {
               printf("This is your %ind visit to %s!\n", howmany, cityname);
           }
           else if(howmany % 10 == 3)
           {
               printf("This is your %ird visit to %s!\n", howmany, cityname);
           }
           else
           {
               printf("This is your %ith visit to %s!\n", howmany, cityname);
           }
       }
}
