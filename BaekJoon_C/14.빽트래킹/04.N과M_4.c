/*
	N과 M (4)
	자연수 N과 M이 주어졌을때 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램 작성

	1. 1부터 N까지 자연수 중에서 M개를 고른 수열
	2. 같은 수를 여러번 골라도 된다
	3. 고른 수열은 비내림 차순이어야 한다
*/
#include <stdio.h>

int check[9], result[9];

void func_sequence(int k, int N, int M);

int main(void){
	
	int N, M;
	scanf("%d %d",&N, &M);

	func_sequence(0, N, M);

	return 0;
}

void func_sequence(int k, int N, int M){
	
	if(k ==M){
		for(int i=0; i<M; i++)
			printf("%d ",result[i]);
		printf("\n");
	}

	else{
		for(int i=1; i<=N; i++){
			if(k == 0){
				result[k] = i;
				check[i] = 1;
				func_sequence(k+1, N, M);
				check[i] = 0;
			}
			else if(result[k-1] <= i){
				result[k] = i;
				check[i] = 1;
				func_sequence(k+1, N, M);
				check[i] = 0;

			}
		}
	}
}
