
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

struct variables{
	float X,Y,Z;
};

void omplir(int N, variables v[]){
	for(int i=0;i<N;i++){
		cout<<"X"<<i+1<<":";
		cin>>v[i].X;
		cout<<"Y"<<i+1<<":";
		cin>>v[i].Y;
		cout<<"Z"<<i+1<<":";
		cin>>v[i].Z;
	}
}
void escriure(int N, variables v[], ofstream & dades){
		dades<<"X Y Z"<<endl;
	for(int i=0;i<N;i++){
		dades<<v[i].X<<" ";
		dades<<v[i].Y<<" ";
		dades<<v[i].Z<<" "<<endl;
	}
}

int main(){
	
	//dades inicials
	int Rt=6378; //Radi de la terra en Km
	int R_Terra=150000000;  //Radi de l'òrbita de la terra respecte el Sol en Km
	int R_Jupiter=778500000;  //Radi de l'òrbita de la terra respecte el Sol en Km
	int R_Saturn=1429400000;  //Radi de l'òrbita de la terra respecte el Sol en Km
	
	variables v[50];
	int N;
	cout<<"Indica el nombre de valors"<<endl;
	cin>>N;
	
	omplir(N,v);

	ofstream dades("dades.txt");
	escriure(N,v,dades);
	dades.close();
	
	
	
}
