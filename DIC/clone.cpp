#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXWORDLENGTH 45

int main(void)
{
    FILE * fp;
    char word;
    char line[255];
    int MAX_WORD_LENGTH = 100;
    char words[MAX_WORD_LENGTH];
    bool found = false;

    // Open text file
    fp = fopen("word.txt","r");
    if (fp == NULL){
       printf("File cannot be opened\n");
       return 0;
    }

    // Prompt user for word to search
    printf("Enter word to be found: ");
    scanf("%s",words);

    // Search text file for matching words
    while(fgets(line, sizeof(line), fp)){

        // Split string into words
        word = strtok(line, " ");

        while(word != NULL){
            // Compare user input to words in text file
            if(strcmp(word, words) == 0){
                found = true;
            }
            word = strtok(NULL," ");
        }
    }
    fclose(fp);

    if(found){
        printf("The word '%s' was found in the text\n", words);
    }else{
        printf("The word '%s' was not found in the text\n", words);
    }

    return 0;
}
