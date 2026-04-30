#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    // Writing into file
    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter text to write in file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Data written successfully.\n");

    // Reading from file
    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("\nReading from file:\n");

    while (fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}