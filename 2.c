#include <stdio.h>
#include <conio.h>

int main()
{
    char text[30];
    int i = 2, a = 0;

    printf("\nWrite a C Program to Identify Whether a Given Line is a Comment or Not.");
    printf("\n\nEnter Text: ");
    fgets(text, sizeof(text), stdin);

    if (text[0] == '/')
    {
        if (text[1] == '/')
        {
            printf("\nIt is a Comment.");
        }
        else if (text[1] == '*')
        {
            for (i = 2; text[i] != '\0'; i++)
            {
                if (text[i] == '*' && text[i + 1] == '/')
                {
                    printf("\nIt is a Comment.");
                    a = 1;
                    break;
                }
            }
            if (a == 0)
            {
                printf("\nIt is Not a Comment.");
            }
        }
    }
    else
    {
        printf("\nIt is Not a Comment.");
    }
    getch();
    return 0;

}
