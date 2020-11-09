#include "myMath.h"
double Power(double x,int y){
    double pow =1;
	if (y==0)
		return 1;
	while(y>0){
		pow *= x;
		y --;
	}
	return pow;
}
double Exponent(int x){
	double e_pow = 1;
	if (x!=0){
		while(x>0){
		e_pow *= E;
		x--;
	}
	}
	return e_pow;	
}

