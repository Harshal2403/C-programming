#include <stdio.h>

int main()
{
    int a = 10, b = 4;
    if ((a == b) && printf("GeeksQuiz")) //short circuit &&
    {
        printf("&&");
    }

    if ((a != b) || printf("GeeksQuiz")) // shoet circuit ||
    {
        printf("||");
    }

    return 0;
}