//generate
#include "data.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	int no=0;
	for(int i=0;i<6;i++){
		srand(time(0));
		int rn=rand()%100;
		//cout<<rn<<"\t";
		if(rn%2!=0)
		  no=no+binsqa[i];
		sleep(1);
	}
	//cout<<"\n"<<no<<"\n";
	allgua[no].print();
}
