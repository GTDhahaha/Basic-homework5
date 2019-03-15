#include<stdio.h>
#include<stdlib.h>

int main()
{
	int h1,m1,s1,h2,m2,s2,a;
	printf("plaese enter first time\n");
	printf("hour:");
	scanf("%d",&h1) ;
	printf("min:");
	scanf("%d",&m1) ;
	printf("second:");
	scanf("%d",&s1) ;
	printf("plaese enter second time\n");
	printf("hour:");
	scanf("%d",&h2) ;
	printf("min:");
	scanf("%d",&m2) ;
	printf("second:");
	scanf("%d",&s2) ;
	a = ((h1-h2)*3600)+((m1-m2)*60)+(s1-s2);
	if (a<0)
		a=-a;
	printf("The first time and the second time are %d seconds apart\n",a);
	system("pause");
	return 0;
}
