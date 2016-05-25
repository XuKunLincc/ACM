/***************************
** ACM练习 一种排序
** 作者： ckl
****************************/
#include <stdio.h>
int array[1000][3];
void insert(int, int*, int);
void display(int);
int a;

int main(){
	int arr_num = 0;
	int tmp[3];
	int col_num = 0;
	int count = -1;
	int len = 0;
	int i;
	int max,min,max2,min2;
	char flag;
	scanf("%d", &arr_num);
	for(; arr_num > 0; arr_num-- ){
		
		len = 0;
		count = -1;
	
		scanf("%d", &col_num);
		// input array
		for(int j = 0; j < col_num; j++){
			for(i = 0; i < 3; i++)
				scanf("%d", &tmp[i]);
			flag = 1;
			for(i = count; i >= 0; i--){
				if(array[i][0] <= tmp[0]){
					while(array[i][0] == tmp[0]){
						(array[i][1] > array[i][2]) ? (max = array[i][1],min = array[i][2]) : (max = array[i][2], min = array[i][1]);
						(tmp[1] > tmp[2]) ? (max2 = tmp[1],min2 = tmp[2]) : (max2 = tmp[2], min2 = tmp[1]);
						if(max2 == max){
							if(min == min2){
								flag = 0;
								break;
							}else if(min2 > min)
								break;
						}else if(max2 > max)
							break;
						i--;
					}
					break;
				}
			}		
			if(flag){
				insert(i+1, tmp, len);
				len++;
				count++;
			}
		}
		
		display(len);
	}
}

void insert(int index, int *value, int len){
	for(int i = len; i > index; i--){
		array[i][0] = array[i - 1][0];
		array[i][1] = array[i - 1][1];
		array[i][2] = array[i - 1][2];
	}
	
	array[index][0] = value[0];
	if(value[1] > value[2]){
		array[index][1] = value[1];
		array[index][2] = value[2];
	}else{
		array[index][2] = value[1];
		array[index][1] = value[2];
	}
	
}

void display(int col){
	for(int j = 0; j < col; j++){
		for(int i = 0; i < 3; i++){
			printf("%d\t",array[j][i]);
		}
		printf("\n");
	}
}
