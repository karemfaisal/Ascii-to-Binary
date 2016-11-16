#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int convert (char A)
{
    int binary[8];
    int x ,i , l;
    x=A;
    for(i=7;i>=0;i--)
    {
   l=log2(x);
if (i==l){
    binary[i]=1;
 x-=pow(2,i);
}
    else
        binary[i]=0;
    }
    for(i=7;i>=0;i--)
printf("%d",binary[i]);

}
 main()
{
    convert('a');

}
