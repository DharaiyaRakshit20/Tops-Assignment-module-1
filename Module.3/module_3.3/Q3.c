#include <stdio.h>
void reves()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reves();
        printf("%c", c);
    }
}
int main()
{

    printf("Enter a sentence: ");
    reves();

    return 0;
}