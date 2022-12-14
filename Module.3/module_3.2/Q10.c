    Q1.
    #include <stdio.h>
    int main()
    {
        int day;
        printf("\n");
        printf("\n1.Monday");
        printf("\n2.Tuesday");
        printf("\n3.Wednesday");
        printf("\n4.Thursday");
        printf("\n5.Friday");
        printf("\n6.Saturday");
        printf("\n7.Sunday");
        printf("\nEnter a day:");
        scanf("%d",&day);
        switch(day)
        {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default :
                printf("Invalid Input\n");
                break;
        }
        return 0;
    }

    Q2.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}