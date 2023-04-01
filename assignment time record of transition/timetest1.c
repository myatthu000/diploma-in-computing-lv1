#include <stdio.h>
#include <time.h>

struct my_time{
    char c_time[25];

};

struct my_time Ctime[1];

void get_time();

int main(){

    get_time();
    return 0;
}



void get_time(){
    time_t tm;
    time(&tm);

    printf("Current time =%s\n", ctime(&tm));

    FILE *fptr = fopen("myTime.txt","w");
    fprintf(fptr,"%s", ctime(&tm));

    fclose(fptr);

    int index=0;
    int time_space_counter=0;

    Ctime[0].c_time[index]='-';
    index++;

    FILE *fptr2 = fopen("myTime.txt","r");
    char c = fgetc(fptr2);

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

}
