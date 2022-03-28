#include <stdio.h>

int main()
{
    int arr[10] = { 10, 2, 5, 9, 3, 1,  6, 7, 8, 4 };
    int i= 0;
    int j= 0;
    
    
    for(int i = 0 ; i < 10 ; i++){
    	printf("%d ,",arr[i]);
	}
	printf("\n");
	for(i =0 ; i < 10-1 ; i++){
		int minIdx = i;
		for(j = i+1 ; j < 10 ; j++ ){
			if(arr[minIdx] > arr[j]){
				minIdx = j;
			}
		}
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = tmp;
		
	}
	
    for(int i = 0 ; i < 10 ; i++){
    	printf("%d ,",arr[i]);
	}
	

    return 0;
}
