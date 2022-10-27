#include<stdio.h>

int main(){
	printf("please input a:\n");
	double a,b;
    a=1 ; 
    double m=0,n=25*a;
    double h=0.001; 
	double i=m;
	printf("    x\t\t    y\n");
	printf("%f\t%f\n",i,a) ;
	do{
		b=a;
		a*=1-h+h*h/2;
		i+=h;
		printf("%f\t%f\n",i,a) ;
	}while((b-a)>=0.001*0.001);
	return 0;
}
