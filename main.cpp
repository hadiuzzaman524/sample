#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

static char squrefild[101][101];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int field=0;
    int n,m;
    while(scanf("%d%d",&n,&m),n)
    {
        for(int i=0;i<n;i++)
            scanf("%s",&squrefild[i]);
            if(field)
                printf("\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(squrefild[i][j]=='*')
                    continue;
                    int temp=0;
                if(i+1<n&&squrefild[i+1][j]=='*')
                    ++temp;
                if(i+1<n&&j+1<m&&squrefild[i+1][j+1]=='*')
                    ++temp;
                if(j+1<m&&squrefild[i][j+1]=='*')
                    ++temp;
                if(j+1<m&&i-1>=0&&squrefild[i-1][j+1]=='*')
                    ++temp;
                if(i-1>=0&&squrefild[i-1][j]=='*')
                    ++temp;
                if(i-1>=0&&j-1>=0&&squrefild[i-1][j-1]=='*')
                    ++temp;
                if(j-1>=0&&squrefild[i][j-1]=='*')
                    ++temp;
                if(i+1<n&&j-1>=0&&squrefild[i+1][j-1]=='*')
                    ++temp;
                squrefild[i][j]=temp+'0';

            }
        }
        printf("Field #%d:\n",++field);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            printf("%c",squrefild[i][j]);
             printf("\n");
        }


    }


return 0;
}
