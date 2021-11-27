#include <stdio.h>

int main()
{
    int len;
    len = 50;
    char str[len];//len이 안들어가지네
    int i;
    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Output> %s\n", str);



    return 0;
}