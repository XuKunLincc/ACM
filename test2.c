#include<stdio.h>
int main()
{int n,m,x,y,z,num,t;
scanf("%d\n",&n);//输入n组数据 
while(n--){

scanf("%d\n",&m);//每组数据里有m个长方形 
int s[m][3];
for(int i=0;i<m;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&s[i][j]);
if(s[i][1]<s[i][2])
{
t=s[i][1];
s[i][1]=s[i][2];
s[i][2]=t;
}
}




for(int i=0;i<m-1;i++)
{
for(int j=i+1;j<m;j++)
{
if (s[i][0]>s[j][0])
{x=s[i][0];y=s[i][1];z=s[i][2];
s[i][0]=s[j][0];s[i][1]=s[j][1];s[i][2]=s[j][2];
s[j][0]=x;s[j][1]=y;s[j][2]=z;
}
if(s[i][0]==s[j][0])
{
if (s[i][1]>s[j][1])
{y=s[i][1];z=s[i][2];
s[i][1]=s[j][1];s[i][2]=s[j][2];
s[j][1]=y;s[j][2]=z;
}
if(s[i][1]==s[j][1])
{ if (s[i][2]>s[j][2])
{z=s[i][2];
s[i][2]=s[j][2];
s[j][2]=z;}
if(s[i][2]==s[j][2])
{
s[j][0]=0;
s[j][1]=0;
s[j][2]=0;
}
}
} 

}
} 


for(int i=1;i<m;i++)
{
if(s[i][0]==0){

for(int j=i;j<m;j++)

{s[j][0]=s[j+1][0];
s[j][1]=s[j+1][1];
s[j][2]=s[j+1][2];
}
s[m][0]=0;
i--;
m--;
}


}


for(int i=0;i<m;i++)
{
for(int j=0;j<3;j++) 
printf("%d\t",s[i][j]);
printf("\n");} 


}

} 