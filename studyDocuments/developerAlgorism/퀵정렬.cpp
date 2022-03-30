#include <stdio.h>
 
int main()
{
    int arr[10] = { 10, 2, 5, 9, 3, 1,  6, 7, 8, 4 };
    int i= 0;
    int j= 0;
    
    
    for( i = 0 ; i < 10-1 ; i++){
    	printf("%d ,",arr[i]);
	}
	printf("\n ");
	//ÇÔ¼ö  
	
	for ( i = 1 ; i < 10-1 ; i++  ){
		j = i ;
		for( j = i ; j >= 0 ; j--   ){
			if(arr[j] > arr[j+1]){
				int tmp = 0;
				tmp =  arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				
			}
		}
	}
	
	
	
    for(i = 0 ; i < 10-1 ; i++){
    	printf("%d ,",arr[i]);
	}
	

    return 0;
}
