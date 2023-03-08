// Website simulator

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int lines[25][70];

void header();
void sidebar();
void navigation();
void footer();
void mytemplate();
void contentarea();
void home();
void about();
void hobbies();
void music();
void contact();
void printcontent();
void resetlines();
void navchoice();
char* choice;

int main()
{
    choice = malloc(10);
    home();
    free(choice);
    return 0;
}

void header()
{
    for (int i = 0; i < 70; i++)
    {
        lines[0][i] = 42;
        lines[4][i] = 42;
    }
    
    char text[50] = "This is super awesome website simulator!";
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        lines[2][i+14] = text[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        lines[i][0] = 42;
        lines[i][69] = 42;
    }
}

void sidebar()
{
    for (int i = 0; i < 70; i++)
    {
        lines[6][i] = 42;
    }
    
    char shome[10] = "1-Home";
    char sabout[10] = "2-About";
    char shobbies[10] = "3-Hobbies";
    char smusic[10] = "4-Music";
    char scontact[10] = "5-Contact";
    
    for (int i = 0, n = strlen(shome); i < n; i++)
    {
        lines[8][i+6] = shome[i];
    }
    for (int i = 0, n = strlen(sabout); i < n; i++)
    {
        lines[11][i+6] = sabout[i];
    }
    for (int i = 0, n = strlen(shobbies); i < n; i++)
    {
        lines[14][i+6] = shobbies[i];
    }
    for (int i = 0, n = strlen(smusic); i < n; i++)
    {
        lines[17][i+6] = smusic[i];
    }
    for (int i = 0, n = strlen(scontact); i < n; i++)
    {
        lines[20][i+6] = scontact[i];
    }
    for (int i = 7; i < 23; i++)
    {
        lines[i][0] = 42;
        lines[i][20] = 42;
    }
}

void navigation()
{
    for (int i = 0; i < 70; i++)
    {
        lines[6][i] = 42;
    }
    
    char text[60] = "1-Home   2-About   3-Hobbies   4-Music   5-Contact";
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        lines[5][i+10] = text[i];
    }
    for (int i = 5; i < 7; i++)
    {
        lines[i][0] = 42;
        lines[i][69] = 42;
    }
}

void contentarea()
{
    for (int i = 7; i < 25; i++)
    {
        lines[i][69] = 42;
    }
}

void footer()
{
    for (int i = 0; i < 70; i++)
    {
        lines[22][i] = 42;
        lines[24][i] = 42;
    }
    char text[60] = "No copyright, this is just for fun! by Z. Jovicic 2023.";
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        lines[23][i+8] = text[i];
    }
    for (int i = 23; i < 25; i++)
    {
        lines[i][0] = 42;
        lines[i][69] = 42;
    }
}

void resetlines()
{
for (int i = 0; i < 25; i++)
{
    for (int j = 0; j < 70; j++)
    {
        lines[i][j] = 32;
    }
}
}

void printcontent()
{
    for (int i = 0; i < 25; i++)
{
    for (int j = 0; j < 70; j++)
    {
        printf("%c", lines[i][j]);
    }
    printf("\n");
}
}

void mytemplate()
{
    resetlines();
    header();
    sidebar();
    footer();
    contentarea();
    navigation();
}

void navchoice()
{
    do
    {
    printf("\nEnter number 1-5 to navigate the website, or 6 to exit the program.\n");
    scanf("%5s", choice);
        if (strcmp(choice, "1") == 0)
        {
            home();
        }
        else if (strcmp(choice, "2") == 0)
        {
            about();
        }
        else if (strcmp(choice, "3") == 0)
        {
            hobbies();
        }
        else if (strcmp(choice, "4") == 0)
        {
            music();
        }
        else if (strcmp(choice, "5") == 0)
        {
            contact();
        }
        else if (strcmp(choice, "6") == 0)
        {
            printf("\nEnding the program...\n");
            printf("Program terminated.");
            free(choice);
            exit(0);
        }
        else
        {
             printf("Wrong input");   
        }
    }while(strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0 && strcmp(choice, "3") != 0 && strcmp(choice, "4") != 0 && strcmp(choice, "5") != 0 && strcmp(choice, "6") != 0);
}

void writecontent(char* content)
{
    int linesi = 8;
    int linesj = 25;
    for(int i = 0, n = strlen(content); i < n; i++)
    {
        lines[linesi][linesj] = content[i];
        linesj++;
        if (linesj > 65)
        {
            linesj = 25;
            linesi++;
        }
    }
}

void home()
{
    mytemplate();
    writecontent("            HOME                         Welcome to website simulator 1.00!!!     Have lots of fun! It's 2023 and we're    simulating websites in C! Hey, in C!     Websites! Simulating! In 2023!");
    printcontent();
    navchoice();
}

void about()
{
    mytemplate();
    writecontent("            ABOUT                        This project is all ABOUT FUN! And       practicing C programming! And exercising templating skills that will hopefully    help me if I get into actual backend     development...");
    printcontent();
    navchoice();
}

void hobbies()
{
    mytemplate();
    writecontent("            HOBBIES                      Some of my hobbies include music, table  tennis, writing humorous definitions,    opening silly topics on Vukajlija and    long bicycle rides... And yeah,          programming too, as I still haven't      earned a single dollar, marka or euro    from it! Not even a dinar. It's a hobby  still!");
    printcontent();
    navchoice();
}

void music()
{
    mytemplate();
    writecontent("            MUSIC                        Music, makes the people come together!  I love most of music from Nirvana to      Silvana... ok, joking... my actual music preferences include hard rock,           psychedelic rock, classical music, reggaeand traditional/folk music from all      around the world. My favorite composer isBeethoven and you can learn more about my likes on https://zjovicic.github.io/playlist.html#music.");
    printcontent();
    navchoice();
}

void contact()
{
    mytemplate();
    writecontent("            CONTACT                      If you're interested in more of my work, feel free to visit my website at         https://zjovicic.github.io/, you can alsocontact me directly at                   zjovicic.jovex@outlook.com");
    printcontent();
    navchoice();
}
