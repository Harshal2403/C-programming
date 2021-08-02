#include <stdio.h>
#include <conio.h>
void main()
{
    char s[1000];
    int key, i = 0, lt;
    printf("Enter any simple or plain text : ");
    scanf("%[^\n]s", s);
    printf("Enter the key : ");
    scanf("%d", &key);
    if (key == 0)
        printf("IN-VALID INPUT");
    else
    {
        while (s[i] != '\0')
        {
            if (s[i] >= 48 && s[i] <= 57)
            {
                if (s[i] + key <= 57)
                {
                    s[i] += key;
                }
                else
                {
                    lt = (s[i] + key) - 57;
                    s[i] = 47 + lt;
                }
            }
            else if (s[i] >= 65 && s[i] <= 90)
            {
                if (s[i] + key <= 90)
                {
                    s[i] += key;
                }
                else
                {
                    lt = (s[i] + key) - 90;
                    s[i] = 64 + lt;
                }
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                if (s[i] + key <= 122)
                {
                    s[i] += key;
                }
                else
                {
                    lt = (s[i] + key) - 122;
                    s[i] = 96 + lt;
                }
            }
            i++;
        }
        printf("The encrypted text is : %s", s);
    }
    getch();
}