#include<stdio.h>
void main()
{
	float a=5.2,b=6.5,c;
	c=prod (&a,&b);
	printf("product is %f\n",c);
	
}
prod (float *aa, float*ab)
{
	float res;
	res=(*aa)*(*ab);
	return res;
}
