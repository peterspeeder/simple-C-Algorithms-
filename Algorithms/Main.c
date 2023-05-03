#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_SIZE 50


int bubbleSort(int a[], int len){	// bubble sort
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len - 1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < len; i++){
		printf("%d\n", a[i]);
	}	
	return 0;	
}	


int selectionSort(int arry[], int len){		// selection sort
	int min_pos;
	for(int i = 0; i < len - 1; i++){
		min_pos = i;	//stating current element is lowest number
		for(int j = 0; j < len; j++){
			if(arry[j] < arry[min_pos]){
				min_pos = j;
			}
		}

		if(min_pos != i){
			int temp = arry[i];
			arry[i] = arry[min_pos];
			arry[min_pos] = temp;
		}

		for(int i = 0; i < len; i++){
			printf("%d\n", arry[i]);
		}
	}	

	return 0;
}

int insertionSort(int arr[], int len){		// insertion sort
    int j, i, key;

    for(j = 1; j < len; j++){
        key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }

    for(int i = 0; i < len; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}


	


int main(){

	// Create an array containing numbers from 1-50 (50 total n).
	
	
	int arr[NUMBER_SIZE];
	int i, j, temp;

	for(int i = 0; i < NUMBER_SIZE; i++){
		arr[i] = i+1;
	}

	srand(time(NULL));
	for(i = NUMBER_SIZE - 1; i > 0; i--){
		j = rand() % (i + 1);
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	 printf("The shuffled array is: ");
    for (i = 0; i < NUMBER_SIZE; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    printf("\n");
    printf("The sorted array is:\n");
	
	



	// Using algorithms ----------------------------------------


	
	int len = sizeof(arr)/sizeof(arr[0]);
	int sorted_arry = insertionSort(arr, len);

	printf("%d\n", sorted_arry);
	

	return 0;
}
