#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=0;
    int ans=0;
    char c;
    while(1)
    {
        c=getchar();
        if(c>='0'&&c<='9')
        {
            ans=c-'0';
            num=num*10+ans;
        }
        else if(c=='\n')
        {
            break;
        }
        else
        {
            printf("Invalid!\n");
            while(getchar()!='\n');
            return main();
        }
    }
    printf("num=%d\n",num);
    return main();
}
