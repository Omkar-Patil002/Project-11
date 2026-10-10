#include <stdio.h>
int main(){
	float English,Mathematics,Physics,Geography,IT,per,total;
	printf("Enter obtained marks in English:");
	scanf("%f",&English);
	printf("Enter obtained marks in Mathematics:");
	scanf("%f",&Mathematics);
	printf("Enter obtained marks in Physics:");
	scanf("%f",&Physics);
	printf("Enter obtained marks in Geography:");
	scanf("%f",&Geography);
	printf("Enter obtained marks in IT:");
	scanf("%f",&IT);
	per=((English+Mathematics+Physics+Geography+IT)/500)*100;
	total=English+Mathematics+Physics+Geography+IT;
	printf("Total marks is %.0f\n",total);
	printf("The percentage obtained is %.2f\n",per);
	return 0;
}