#include<stdio.h>
int main(){
	int c,r,i,j;
	int A[100][100];
	
	scanf("%d %d",&c,&r);
	
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			scanf("%d",&A[i][j]);
		}
	}
	int min = A[0][0];
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			if(A[i][j] < min){
				min = A[i][j];	
			}
			printf("%d ",(A[i][j]+1));
		}
		printf("\n");
	}
	printf("min : %d",min);
	
	return 0;
}
