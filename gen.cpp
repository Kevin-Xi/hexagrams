//generate

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	int j=0,o=0;
	int g[6]={};
	for(int i=0;i<6;i++){
		srand(time(0));
		g[i]=rand()%100;
		sleep(1);
	}
	cout<<"\n";
	for(int i=6;i>0;i--){	
		if(g[i]%2==0)
		  cout<<"- -"<<endl;
		else if(g[i]%2!=0)
		  cout<<"---"<<endl;
	}
}
