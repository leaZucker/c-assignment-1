 #include <stdio.h>
 #include "myMath.h"
int main(){
	double num;
	printf("Please insert a real (int/double)number: ");
	scanf("%lf", &num);
	float f1 = sub(add(Exponent((int)num),Power(num,3)),2);
	float f2 = add(mul(num,3),mul(Power(num,2),2));
	float f3 = sub(div(mul(Power(num,3),4),5),mul(num,2));
	printf("The value of f(X) = e^x+X^3-2 at the point %.2f is: %.4lf\n",num,f1);
	printf("The value of f(x) = 3x + 2X^2 at the point %.2f is: %.4lf\n",num,f2);
	printf("The value of f(x) = (4x^3)/5 -2x at the point %.2f is: %.4lf\n",num,f3);
	return 0;
} 