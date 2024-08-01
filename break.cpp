#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k=1;
    char a[100];
    printf("Enter a string : ");
    gets(a);
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(a[i]==' ')
            {
                i++;
            }
            cout<<a[i];
            i++;
            if(j==k)
                i--;
        }
        cout<<endl;
        k++;
    }
}
