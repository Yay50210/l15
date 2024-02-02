#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a ,int *b, int *c , int *d){
	int i = rand()%4;
	if(i==0){
		int temp= *a;
		*a=*b;
		*b=temp;
		
	}else if(i==1){
		int temp = *b;
		*b = *d;
		*d= temp;
	}else if(i == 2){
		int temp =*c;
		*c =*a;
		*a = temp;

	}else{
		int temp = *d;
		*d =*c;
		*c=temp;
	}


}
//Write definition of shuffle() using pointer here 