#include<iostream>
using namespace std;

void myString(char *&p,int N){
	char *T =new char [N];
	for (int i=0;i<N;i++){
		T[i]='A'+i;
	}
	p=T;
	*(T+N) ='\0';
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
