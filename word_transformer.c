#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isvocal (char letter);

int main() {
    printf("Word transformer! Example: majica > mapajipicapa\n");
 printf("Enter word up to 27 letters: \n");
 char *word = malloc(30);
if (word == NULL)
return 1;

 scanf("%27s", word);
 char *output = malloc(70);
if (output == NULL)
return 1;

 int counter = 0;
 for (int i = 0; i < strlen(word); i++)
 {
     if (isvocal(word[i]))
     {
         output[counter] = word[i];
         output[counter+1] = 'p';
         output[counter+2] = word[i];
         counter += 3;
     }
     else
     {
         output[counter] = word[i];
         counter ++;
     }
 }
 printf("Your transformed word is: %s", output);
 
 free (word);
 free (output);

    return 0;
}

int isvocal (char letter){
    char upper = toupper(letter);
    if (upper == 'A' || upper == 'E' || upper == 'I' || upper == 'O' || upper == 'U')
    {
         return 1;
    }
    return 0;
}
