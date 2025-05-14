#include <bits/stdc++.h>
using namespace std;

int n, k, A[20], check;
void khoitao(){
	for(int i = 1; i <= k; i ++){
		A[i] = i;
	}
} 

void sinh(){
	int i = k;
	while(i >= 1 && A[i] == n - k + i){
		i--;
	}
	if(i==0) check = false;
	else{
		A[i] += 1;
		for(int j = i + 1; j <= k; j++){
			A[j] = A[j-1] + 1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
	
	cin >> n >> k;
	khoitao();
	check = true;
	while(check){
		for(int i = 1; i <= k; i++){
			cout << A[i] << " ";
		}
		cout << endl;
		sinh ();
	}
}
	
}
