#include <stdio.h>
#include <string.h>

int yanzheng(char*);

int main(){
	int num, i;
	char str[10001];
	scanf("%d", &num);

	for(i = 0; i < num; i++){
		scanf("%s",str);
		if(yanzheng(str))
				printf("%s\n","Yes");
		else
				printf("%s\n", "No");
	}
	return 0;
}

int yanzheng(char *str){
	int len;
	int i, j;
	int flag = 1;
	len = strlen(str);
	if(len % 2)		// 不为偶数直接退出
		return 0;

		for(i = 0; i < len; i++){
			if(str[i] == 1)
				continue;
			flag = 1;

			switch(str[i]){
				case ')':
					j = 1;
					while((str[i-j] == 1) && (j < i))
						j++;
					if(str[i-j] == '('){
						str[i] = str[i-j] = 1;
						flag = 0;
					}
					break;
				case ']':
					j = 1;
					while((str[i-j] == 1) && (j < i))
						j++;
					if(str[i-j] == '['){
						str[i] = str[i-j] = 1;
						flag = 0;
					}
					break;
			}
		}
		if(flag)
			return 0;

	return 1;
}