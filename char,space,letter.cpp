#include<bits/stdc++.h>

using namespace std;
int main()
{
  char str[100];
  printf("Enter a string : ");
  gets(str);
    int cl=0,cs=0,cx=0,cn=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==' ') cs++;
        else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')) cl++;
        else if((str[i]>='0' && str[i]<='9')) cn++;
        else  cx++;
    }
  cout<<"Total Number of Character: "<<cl<<endl;
  cout<<"Total Number of Space: "<<cs<<endl;
  cout<<"Total Number of Number: "<<cn<<endl;
  cout<<"Total Number of Special Character: "<<cx<<endl;
  cout<<"Total Sting Size: "<<len;
    return 0;
}
