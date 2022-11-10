#include <iostream>
using namespace std;
int main(){
	int a,b;
	a=2;
	while (a>1){
	a++;
	
	b=a*a;
	if((b%2==1)&&((b/10)%2))
	cout<<b<<" ";
	else cout<<" no solution";
}
return 0;
	}

