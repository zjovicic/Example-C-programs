#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_spaces(int number);
int main() {

//1 - READING STRING AND INITIAL SETTINGS
printf("- Printing an eight direction star from the word you enter. -\n");

char *s = malloc (30);
if (s == NULL)
return 1;

printf("Enter word up to 27 letters: ");
scanf("%27s", s);
int length = strlen(s);
int intro = 3;
for (int i = 0; i < length; i++)
{
    s[i] = toupper(s[i]);
}

//2 - HEADER
for (int i = 0; i < 1 + intro + 2 * length - 1; i++)
{
    printf ("#");
}

printf("\n");
printf("#\n");

//3 - UPPER HALF
for (int i = 0; i < length - 1; i++)
{
    printf("#");
    print_spaces(intro);
    print_spaces(i);
    printf("%c", s[length - i - 1]);
    print_spaces(length - 2 - i);
    printf("%c", s[length - i - 1]);
    print_spaces(length - 2 - i);
    printf("%c", s[length - i - 1]);
    printf("\n");
}

//4 - CENTRAL ROW
    printf("#");
    print_spaces(intro);
for (int i = 0; i < length; i++)
{
    printf("%c", s[length - i - 1]);
}
for (int i = 1; i < length; i++)
{
    printf("%c", s[i]);
}
printf("\n");

//5 - LOWER HALF
for (int i = 0; i < length - 1; i++)
{
    printf("#");
    print_spaces(intro);
    print_spaces(length - 2 - i);
    printf("%c", s[i+1]);
    print_spaces(i);
    printf("%c", s[i+1]);
    print_spaces(i);
    printf("%c", s[i+1]);
    printf("\n");
}
//6 - FREEING MEMORY AND RETURNING 0
    free(s);
    return 0;
}

// FUNCTION FOR PRINTING SPACES
void print_spaces(int number)
{
    for (int i = 0; i < number; i++)
    {
        printf(" ");
    }
}
