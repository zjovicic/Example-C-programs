#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isvocal (char a);

    // UTROVACKI TRASFORMER
int main() {
    printf("Utrovacki transforer. Example: patike > utikezapanje.\n");
    printf("Enter word up to 27 letters:\n");
    char *word = malloc(30);
    if (word == NULL)
    return 1;
    scanf("%27s", word);
    
    char *first_half= malloc(30);
    if (first_half == NULL)
    return 1;
    
    char *second_half = malloc(30);
    if (second_half == NULL)
    return 1;
    
    int part = 1;
    int counter = 0;
    int i = 0;
    
    while (word[i] != '\0')
    {
        if (part == 1 && !(isvocal(word[i])) )
        {
            first_half[i] = word[i];
        }
        else if (part == 1 && isvocal(word[i]))
        {
            first_half[i] = word[i];
            part = 2;
            counter = i;
        }
        else if (part == 2)
        {
         second_half[i - counter - 1] = word[i];   
        }
        
        i++;
    }
    
    first_half[0] = tolower(first_half[0]);

    printf("In utrovacki your word is u%sza%snje.\n", second_half, first_half);

    free(word);
    free(first_half);
    free(second_half);
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
