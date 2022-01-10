# count-digits-seperatly
find the occurrence  of digits 1 to 9 by input a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    int num=0,a;
    printf("Enter a number :'");
    scanf("%d",&num);


    for( ; ; ){

            if (num==0){
                break;
            }
        a=num%10;
        switch(a)
        {
               case 0:
                  c0++;
                  break;

                case 1:
                  c1++;
                  break;

                  case 2:
                  c2++;
                  break;

                  case 3:
                  c3++;
                  break;

                  case 4:
                  c4++;
                  break;

                  case 5:
                  c5++;
                  break;

                  case 6:
                  c6++;
                  break;

                  case 7:
                  c7++;
                  break;

                  case 8:
                  c8++;
                  break;

                  case 9:
                  c9++;
                  break;
        }
        num=num/10;
    }

    printf("0=%d\n,1=%d\n,2=%d\n,3=%d\n,4=%d\n,5=%d\n,6=%d\n,7=%d\n,8=%d\n,9=%d  ",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    return 0;
}
