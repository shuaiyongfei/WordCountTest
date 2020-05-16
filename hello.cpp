#include<stdio.h>
#include<string.h>
int w(char* file)
{
    char c;
    int count = 1;
    FILE* fp = NULL;
    fp = fopen(file, "r");
    c = fgetc(fp);
    while (c != EOF)
    {
        c = fgetc(fp);
		if(c==' ')
			count++;
    }
    return count;
}
int c(char* file)
{
    char c;
    int count = 0;
    FILE* fp = NULL;
    fp = fopen(file, "r");
    c = fgetc(fp);
    while (c != EOF)
    {
        c = fgetc(fp);
        count++;
    }
    return count;
}
int main(int argc, char* argv[])
{
    int count = 0;
    if (argc == 3)
    {
        if (strcmp(argv[1], "-w"))
            count = w(argv[2]);
        if (strcmp(argv[1], "-c"))
            count = c(argv[2]);
    }
    printf("%d\n", count);
    return  0;
}


