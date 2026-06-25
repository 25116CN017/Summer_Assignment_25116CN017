#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, l;

    printf("Enter a string: ");
    scanf("%s", str);

    l = strlen(str);

    printf("Reversed string is: ");

    for(i = l - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
