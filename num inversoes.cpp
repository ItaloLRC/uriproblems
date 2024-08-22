#include <iostream>

using namespace std;


#define MAXN 100100

int n, vetor[MAXN], aux[MAXN];

long long int merge_sort(int ini, int fim){

	if(ini==fim) return 0;

	long long int invers = merge_sort(ini, (ini+fim)/2) + merge_sort((ini+fim)/2+1, fim);

	int tam=0, j=(ini+fim)/2+1;

	for(int i=ini; i<=(ini+fim)/2; i++){

		while(j<=fim && vetor[j]<vetor[i]){
			aux[tam]=vetor[j];
			tam++;
			j++;
			invers+=(ini+fim)/2-i+1;
		}
		aux[tam]=vetor[i];
		tam++;
	}

	while(j<=fim){

		aux[tam]=vetor[j];
		tam++;
		j++;
	}

	for(int i=ini; i<=fim; i++) vetor[i]=aux[i-ini];

	return invers;
}

int main(){

	cin >> n;

	for(int i=1; i<=n; i++) cin >> vetor[i];

	cout << merge_sort(1, n);

	return 0;
}
