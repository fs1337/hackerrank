/*Numbers ending in 3 have at least one multiple having all ones. 
for eg., 3 and 13 have amultiples like 111 and 111111 respectively. Given such 
a no. , find the smallest such multiple of that number. The multiple can 
exceed the range of int, long. You cannot use any complex data structure.*/


#include<stdio.h>
#include<stdlib.h>

void  print_multiple_of_all_ones(int num)
{
    int count=1,rem=1;

    while(rem)
    {
        rem = ( rem*10 + 1 ) % num;
        count++;
    }

    while(count--)
        printf("1");

    printf("\n");
}

int main()
{
    int num;
    scanf("%d",&num);
    print_multiple_of_all_ones(num);
    return 0;
}
