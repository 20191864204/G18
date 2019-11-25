// 10.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[3][80];
    int upper, lower, num, space, other, i, j;
    for (i=0; i<3; i++){
        cout<<"Please enter row "<<i+1<<" string: ";
        gets(str[i]);
    }
    for (i=0; i<3; i++){
        for (j=0, upper=0, lower=0, num=0, space=0, other=0; str[i][j]!='\0'; j++){
            if (str[i][j]>='A'&&str[i][j]<='Z') upper++;
            else if (str[i][j]>='a'&&str[i][j]<='z') lower++;
            else if (str[i][j]>='0'&&str[i][j]<='9') num++;
            else if (str[i][j]==' '||str[i][j]=='\t') space++;
            else other++;
        }
        cout<<str[i]<<"\nUpper= "<<upper<<" Lower= "<<lower<<" Number= "<<num<<" Space="<<space<<" Ohter="<<other<<endl;
    }
    system("pause");
    return 0;
}

