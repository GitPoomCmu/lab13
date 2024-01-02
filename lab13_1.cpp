#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double num[], int size, double answer[]){
    double total = 0, powed = 0, multi = 1, byone = 0, max = 0, min = num[1];
	
	for(int i=0; i<size; i++){
	    total += num[i];
	    powed += pow(num[i], 2);
	    byone += 1/num[i];
	    multi *= num[i];
	    max = (max < num[i])? num[i] : max;
	    min = (min > num[i])? num[i] : min;
	}
	
	answer[0] = total/size;
	answer[1] = sqrt((powed/size) - pow(answer[0], 2));
	answer[2] = pow(multi, 1.0/size);
	answer[3] = size/byone;
	answer[4] = max;
	answer[5] = min;
}
