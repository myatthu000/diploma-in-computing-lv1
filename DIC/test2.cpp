#include <stdio.h>



int main()
{
    FILE *f;
    f = fopen("file.txt", "w");
    fprintf(f, "Reading data from a file is a common feature of file handling.\n");
    fclose(f);

    char arr[50];
    f = fopen("file.txt", "r");
    while(fscanf(f, "%s", arr)!=EOF){
        printf("%s ", arr);
    }
    fclose(f);

    return 0;
}
