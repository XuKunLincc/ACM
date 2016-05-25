#include <stdio.h> 

int main(){
char ch[10001];
int i;
int n;
scanf("%d",&n);
getchar();//丢弃第一个回车 
int j;
for(j=0;j<n;j++){
i=0;
scanf("%c",&ch[i]);
i++;
while(1){
scanf("%s",&ch[i]);
if(ch[i]=='['||ch[i]=='('){
i++;
}
else if(ch[i]==']'&&ch[i-1]=='['){
i--;
}
else if(ch[i]==')'&&ch[i-1]=='('){
i--;
}
else{
if(ch[i]=='\n')break;
if((ch[i]==']'||ch[i]==')')&&i==0) i--;
while(getchar()!='\n');//清空缓存 
break;
}
}
if(i==0){
printf("Yes\n");
}
else{
printf("No\n");
}
}
}