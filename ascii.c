#include <stdio.h>

int main(){
	int i, j, k;
	char buf[3];
	char tmp;
	scanf("%d", &j);
	for(i = 0;  i < j; i++){
		scanf("%s", buf);
		for(k = 0; k < 3; k++){
			for(int t = k; t < 3; t++){
				if(buf[k] > buf[t])
				{
					tmp = buf[k];
					buf[k] = buf[t];
					buf[t] = tmp;
				}
			}
		}
		for( k = 0; k < 3; k++){
			printf("%c ",buf[k]);
		}
		printf("\n");
	}
	return 0;
}