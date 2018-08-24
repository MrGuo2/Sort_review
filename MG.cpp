#include <iostream>
using namespace std;

#define maxSize 5

typedef struct{
	int vertex;
}Node;

typedef struct{
	int Mgraph[maxSize][maxSize];
	int vertex[maxSize];
	int n, e;
}Mgraph;

void creat_Graph(Mgraph *MG){
	cout << "Please enter node number:\n";
	for(int k=0; k<maxSize; k++){
		cin >> MG->vertex[k];
	}
	cout << "please enter matrix:\n";
	for(int i=0; i<maxSize; i++){
		cout << endl;
		for(int j=0; j<maxSize; j++){
			cin >> MG->Mgraph[i][j];
		}
	}
}

void print_Graph(Mgraph *MG){
	for(int i=0; i<maxSize; i++){
		cout << endl;
		for(int j=0; j<maxSize; j++){
			cout << MG->Mgraph[i][j];
		}
	}
}

int main()
{
	Mgraph *MG;
	creat_Graph(MG);
	print_Graph(MG);
return 0;
} 
