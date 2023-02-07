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



void shuffle(int *x,int *y,int *z,int *v){
    int *f[] = {x,y,z,v};
    int k,l;
    for(int i = 0; i < 4 ; i++){
        k = rand()%4;
        l = *f[i];
        *f[i] = *f[k];
        *f[k] = l;
    }
    x = f[0];
    y = f[1];
    z = f[2];
    v = f[3];
    
}