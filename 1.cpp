#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		swap(a,b);
	}
	if(b>c){
		swap(b,c);
	}
	printf("%d %d %d",a,b,c);
}

void swap(int *a,int *b){
	int t;
	t = a;
	a = b;
	b = t;
}
