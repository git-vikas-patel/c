#include <stdio.h>

int main()
{

    FILE *fp = NULL;
    char cc;
    char str[20];
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("There Is an Problem To Opeaning the File");
    }
    else
    {
        // fgets(str,10,fp);
        // printf("%s\n",str);     
        while (!feof(fp))
        {
            cc = fgetc(fp);
            printf("%c", cc);
        }
    }
    fclose(fp);
    return (0);
}
