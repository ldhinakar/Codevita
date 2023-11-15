#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;cin>>n;
    char cons[3][n];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        cin>>cons[i][j];
    }
    for(int i=0;i<n-2;i++)
    {
        if(cons[0][i]=='#') {cout<<"#";continue;}
        if(cons[0][i]=='.' && cons[0][i+1]=='*' && cons[0][i+2]=='.')
        {
            if(cons[1][i]=='*' && co[1][i+1]=='*' && cons[1][i+2]=='*')
            if(cons[2][i]=='*' and co[2][i+1]=='.' and cons[2][i+2]=='*')
            cout<<"A";i+=2;continue;
        }
        if(cons[0][i]=='*' and cons[0][i+1]=='*' and cons[0][i+2]=='*')
        {
            if (cons[1][i]=='*' and cons[1][i+1]=='*' and cons[1][i+2]=='*')
            {
                if (cons[2][i]=='*' and cons[2][i+1]=='*' and cons[2][i+2]=='*')
                {cout<<"E";i+=2;continue;}
            }
            else if(cons[1][i]=='.' and cons[1][i+1]=='*' and cons[1][i+2]=='.')
            {
                 if (cons[2][i]=='*' and cons[2][i+1]=='*' and cons[2][i+2]=='*')
                 {cout<<"I";i+=2;continue;}
            }
            else if(cons[1][i]=='*' and cons[1][i+1]=='.' and cons[1][i+2]=='*')
            {
                if(cons[2][i]=='*' and cons[2][i+1]=='*' and cons[2][i+2]=='*')
                {cout<<"O";i+=2;continue;}
            }
        }
        if(cons[0][i]=='*' and cons[0][i+1]=='.' and cons[0][i+2]=='*')
        if(cons[1][i]=='*' and cons[1][i+1]=='.' and cons[1][i+2]=='*')
        if(cons[2][i]=='*' and cons[2][i+1]=='*' and cons[2][i+2]=='*')
        {cout<<"U";i+=2;continue;}
    }
}
