#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct my_time{
    char c_time[25];

};

struct my_time Ctime[1];

int main()
{
    time_t current_time;
    char * time_string;

    // Get current time and save to file1.txt
    current_time = time(NULL);
    time_string = ctime(&current_time);
    FILE *fp1 = fopen("file1.txt", "w");
    fprintf(fp1, " %s", time_string);
    fclose(fp1);

    printf("Current time is --> %s \n", time_string);

    FILE * fptr2;
    fptr2 = fopen("file1.txt", "r");
    char c = fgetc(fptr2);
    //printf("--> %c \n",c);

    int time_space_counter = 0;
    int anti_space_counter = 0;

    int index =0;

    Ctime[0].c_time[index]='-';
    index++;

    while (!feof(fptr2)){

        if( c==' '){

            time_space_counter++;

            if(time_space_counter == 1){
                Ctime[0].c_time[index]='!';
                c = fgetc(fptr2);
                index++;
            } else if(time_space_counter==4){
                Ctime[0].c_time[index]='@';
                c = fgetc(fptr2);
                index++;
            } else{
                Ctime[0].c_time[index]='-';
                c = fgetc(fptr2);
                index++;
            }

        } else{

            Ctime[0].c_time[index]=c;
            c = fgetc(fptr2);
            index++;
        }
    }

    //ctime

    //printf(" not space --> %d\n",time_space_counter);
    //printf(" space--> %d \n",anti_space_counter);

    return 0;
}
