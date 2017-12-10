#include <stdio.h>
#include <stdlib.h>
#include "./conio.h"

int main()
{
    int password = 0, number = 0,price = 58,i = 0;
    printf("\n ==== This is a Number guess game!====\n ");
    while(password != 1234)
    {
        if( i >= 3 )
        {
            printf("\n please input the right password!\n");
            return;
        }
        i++;
        puts("please input password: ");
        scanf("%d",&password);
    }
    i = 0;
    while(number != price)
    {
        do{
            puts("please intput a number between 1 and100: ");
            scanf("%d",&number);
            printf("YOUr input number is %d\n",number);
        }
        while(!(number >=1 && number<=100));
        if(number >= 90)
        {
            printf("TOO bigger!press any key to try again!\n");
        }
        else if(number >= 70 && number < 90)
        {
            printf("bigger!\n");
        }
        else if(number >= 1 && number < 30)
        {
            printf("TOO small!press any key to try again!\n");
        }
        else if(number > 30 && number <= 50)
        {
            printf("Samll!press any key to try again!\n");
        }
        else
        {
            if(number == price)
            {
                printf("OK,you are right! 88\n");
            }
            else if(number < price )
            {
                printf("Sorry,Only a littly amsller! press any key to try again\n");
            }
            else if(number >price)
                printf("sorry, ONly a little bigger! pree any key to try again!\n");
        }
      
    }
}
