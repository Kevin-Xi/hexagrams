#include "data.h"
#include <iostream>
using namespace std;

int main(){
	cout<<"input six number in order (6,7,8,9):";
	int yao[6];
	for(int j=0;j<6;j++)
	  cin>>yao[j];
	int no=0;
	for(int i=0;i<6;i++){
		if((yao[i]==7)||(yao[i]==9))
		  no+=binsqa[i];
	}
	allgua[no].print();
}
