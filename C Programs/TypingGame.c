#include <stdio.h>
#include <string.h>
void main()
{
    char typ[100], a1[100] = "The quick brown fox jumps over the lazy dog", a2[100] = "Mary enjoys cooking.", a3[100] = "She likes bananas.", a4[100] = "They speak English at work.", a5[100] = "The train does not leave at 12 AM.", a6[100] = "I have no money at the moment.", a7[100] = "Do they talk a lot ?", a8[100] = "Does she drink coffee?", a9[100] = "You run to the party.", a10[100] = "You have some schoolwork to do.", a11[100] = "The train leaves in ten minutes.";
    int i;
    printf("\n%s\n", a1);
    gets(typ);
        cont:
    if (strcmp(a1, typ) == 0)
    {
        printf("\n%s\n",a2);
        gets(typ);
        if(strcmp(a2,typ)==0)
        {
            printf("\n%s\n",a3);
            gets(typ);
            if(strcmp(a3,typ)==0)
        {
            printf("\n%s\n",a4);
            gets(typ);
            if(strcmp(a4,typ)==0)
        {
            printf("\n%s\n",a5);
            gets(typ);
            if(strcmp(a5,typ)==0)
        {
            printf("\n%s\n",a6);
            gets(typ);
            if(strcmp(a6,typ)==0)
        {
            printf("\n%s\n",a7);
            gets(typ);
             if(strcmp(a7,typ)==0)
        {
            printf("\n%s\n",a8);
            gets(typ);
             if(strcmp(a8,typ)==0)
        {
            printf("\n%s\n",a9);
            gets(typ);
             if(strcmp(a9,typ)==0)
        {
            printf("\n%s\n",a10);
            gets(typ);
             if(strcmp(a10,typ)==0)
        {
            printf("\n%s\n",a11);
            gets(typ);
            if(strcmp(a11,typ)==0)
            printf("\n\nYooHoo Nice Job!!");
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    else 
    printf("Try Again...");
    goto cont;
}