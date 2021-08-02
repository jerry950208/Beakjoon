/*
	수 정렬하기2
	시간 복잡도가 O인 정렬 알고리즘으로 풀 수 있습니다(병합정렬,힙 정렬)

	N개의 수가 주어졌을때 이를 오름차순으로 정렬하는 프로그램을 작성
*/
#include <iostream>

using namespace std;
int compare(const void*, const void*);

int main(void){
	
	int arr[1000000],N;
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> arr[i];

	qsort(arr,N,sizeof(int),compare);

	for(int i=0; i<N; i++)
		cout << arr[i] << "\n";
}

int compare(const void* a, const void* b){
	
	if(*(int*)a < *(int*)b)
		return -1;

	else if(*(int*)a > *(int*)b)
		return 1;

	else
		return 0;
}
