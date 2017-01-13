//print the first non-repetitive word

#include <stdio.h>
#include <string.h>


void show_nonrepetitive_word(char *p)
{
    int length = strlen(p);
    int i;
    int frequency[256] = {0};
    
    for(i = 0; i < length; i++)
    {
        frequency[p[i]] += 1;
    }
    
    for(i = 0; i < length; i++)
    {
        if(frequency[p[i]] == 1)
        {
            break;
        }
    }
    
    printf("%c\n", p[i]);
}

void main()
{
    char *p;
    scanf("%s", p);
    show_nonrepetitive_word(p);
}
