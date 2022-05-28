#include <iostream>
using namespace std;
int main(){
	int n,k,total=0,count=0;
	cin>>n>>k;
	k=240-k;
	for(int i=1;i<=n;i++){
		total+=5*i;
		if(total<=k){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}

