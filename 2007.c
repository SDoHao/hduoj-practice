#include<stdio.h>
int main()
{
    long int x,y;
    while(scanf("%ld %ld",&x,&y)!=EOF)
    {
        long int i=x,even_pro = 0,odd_pro = 0;
        if(i%2==0)
        {
            even_pro=i*i;
            i++;
        }
        while(i<=y)
        {
            odd_pro+=i*i*i;
            i++;
            if(i>y)break;
            even_pro+=i*i;
            i++;
        }
        printf("%ld %ld\n",even_pro,odd_pro);
    }

    return 0;
}
