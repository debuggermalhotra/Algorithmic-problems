// Online judge: HackerRank

//Problem: Write a program that prints a staircase of size n.

/*  E.g for n=4:  #
                 ##
                ###
               ####   */





#include<stdio.h>
 
int main() 
{
    int N,i,k,j;
     
    /* get the number from the user */
    scanf("%d",&N);
     
    /* print the pattern of staircase */
    for(i=2;i<=N+1;i++)
        {
            k=0;
         for(j=1;j<=(N-i)+1;j++)
         {
             printf(" ");
         }
         
         while(k!=(((2*i)-1)/2))
            {
             printf("#");
             k++;
         }
         printf("\n");
     }
    return 0;
}
