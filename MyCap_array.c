#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("Element[0,0]:");
	scanf("%d",&a);
	int*A=&a;
	printf("\nElement[0,1]:");
	scanf("%d",&b);
	int*B=&b;
	printf("\nElement[0,2]:");
	scanf("%d",&c);
	int*C=&c;
	printf("\nElement[1,0]:");
	scanf("%d",&d);
	int*D=&d;
	printf("\nElement[1,1]:");
	scanf("%d",&e);
	int*E=&e;
	printf("\nElement[1,2]:");
	scanf("%d",&f);
	int*F=&f;
	printf("\nElement[2,0]:");
	scanf("%d",&g);
	int*G=&g;
	printf("\nElement[2,1]:");
	scanf("%d",&h);
	int*H=&h;
	printf("\nElement[2,2]:");
	scanf("%d",&i);
	int*I=&i;
	int array[9]={*A,*B,*C,*D,*E,*F,*G,*H,*I};
	printf("%d\t",array[0]);
	printf("%d\t",array[1]);
	printf("%d\n",array[2]);
	printf("%d\t",array[3]);
	printf("%d\t",array[4]);
	printf("%d\n",array[5]);
	printf("%d\t",array[6]);
	printf("%d\t",array[7]);
	printf("%d\n",array[8]);
	printf("\nThe sum of the diagonals:%d",a+e+i);
	return 0;
}
