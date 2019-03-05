// animals.c -- 使用switch语句
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    
    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letters.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch=getchar()) != '#') {
        if ('\n'==ch)
            continue;
        if (islower(ch))
            switch(ch)
        {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                
            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                
            case 'c':
                printf("coati, racoonlike mammal\n");
                
            case 'd':
                printf("desman, aquatic, molelike critter\n");
                
            case 'e':
                printf("echidna, the spiny anteater\n");
                
            case 'f':
                printf("fisher, brownish marten\n");
                
            default:
                printf("That's a stumper!\n");
        }
        else 
            printf("I recognize only lowercase letters:\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}
