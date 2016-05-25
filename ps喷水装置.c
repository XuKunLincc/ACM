#include <stdio.h>
#include <math.h>

void sort(float *buf, const int count){
	float tmp;
	for(int i = 0; i < count; i++){
		for(int j = i; j < count; j++)
		{
			if(buf[i] < buf[j]){
				tmp = buf[i];
				buf[i] = buf[j];
				buf[j] = tmp;
			}
		}
	}
}

void printf_list(float *buf, const int count){
	double len = 0;
	int i = 0;
	int index = 0;
	for( ; i < count; i++){
		len += (sqrt(buf[i]*buf[i] - 1) * 2);
		index ++;
		if(len >= 20)
			break;
	}
	printf("%d\n",index);
}

int main(){
	float buf[999];
	int size, count;
	float tmp;
	
	scanf("%d",&size);
	for(int i = 0; i < size; i++){
		scanf("%d", &count);
		for(int j = 0; j < count; j++){
			scanf("%f", &tmp);
			buf[j] = tmp;
		}
		//ÅÅÐò
		sort(buf, count);
		printf_list(buf, count);
	}
	return 0;
}
