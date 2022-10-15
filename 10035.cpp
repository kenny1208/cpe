#include <stdio.h>

int main()
{
    long a,b;
    int carry,count,sum;
    scanf("%ld %ld",&a,&b);
    while(a||b)
    {
        carry=0;
        count=0;
        while(a||b)
        {
            sum=a%10+b%10+carry;
            if(sum>9)
            {
                carry=1;
            }
            count+=carry;
            carry = 0;
            printf("%d\n",count);
            a/=10;
            b/=10;
        }

        if(count==0)
        {
            printf("No carry operation.");
        }
        else if(count==1)
        {
            printf("1 carry operation.");
        }
        else
        {
            printf("%d carry operations.",count);

        }
        scanf("%ld %ld",&a,&b);

    }

}
