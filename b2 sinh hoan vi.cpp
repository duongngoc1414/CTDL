#include <bits/stdc++.h>
using namespace std;

int n, check, a[100];
void khoitao(){
	for(int i = 1; i <=n; i++){
		a[i]=i;
	}
}

void sinh(){
	int i = n-1;
	while(i<=n && a[i]>a[i+1]){
		--i;
	}
	if(i == 0){
	check = false;
	}
	else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i], a[j]);
		sort(a+i+1 , a + n+1);
	}
}
int main(){
	cin >> n;
	khoitao();
	check= true;
	while(check){
		for(int i = 1; i <=n; i++){
			cout<<a[i]<<" ";
		}
		cout<< endl;
		sinh();
	}
	return 0;	
}
