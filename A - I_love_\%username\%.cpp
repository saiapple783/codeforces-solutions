#include <iostream>
using namespace std;
int main(){
	int n,min,max,t,count=0;
	cin>>n>>t;
	max=t;
	min=t;
	n--;
	while(n--){
		cin>>t;
		if(t>max){
			count++;
			max=t;
		}
		if(t<min){
			count++;
			min=t;
		}
	}
	cout<<count<<endl;
	return 0;
}

