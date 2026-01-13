#include<stdio.h>
int main(){
	int c,r,i,j;
	int A[100][100];
//	char n;
	
	scanf("%d %d",&c,&r);
	
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			printf("%d ",(A[i][j]+1));
		}
		printf("\n");
	}
	return 0;
}
