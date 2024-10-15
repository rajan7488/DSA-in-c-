	#include<iostream>
    using namespace std;
    int main(){
    int n;
    int q;
    cin>>n>>q;
    
    int sum=0,product=1;
	for(int i=1;i<=n;i++){
		if(q==1){
			sum=sum+i;
		}
		if(q==2){
			product=product*i;
		}
	}

    cout<<sum<<endl;
    cout<<product<<endl;
    }