#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	char type;
	int day, km;
	long int price;

	printf("O or o		OFF-ROAD\n");
	printf("A or a		Automobile\n");
	printf("S or s		Station\n");
	printf("P or p		Sport\n");
	printf("------------------------------------\n");

	printf("Please Enter the type of car:");
	scanf("%c", &type);
	printf("\nHow many days you used it:");
	scanf("%d", &day);
	printf("\nHow many kms you drove it:");
	scanf("%d", &km);

	switch(type) 
	{
	case'O':
	case'o':price = 20 * day + 18 * km;
		break;
	case'A':
	case'a':price = 32 * day + 22 * km;
		break;
	case'S':
	case's':price = 43 * day + 28 * km;
		break;
	case'P':
	case'p':price = 51 * day + 36 * km;
		break;
	} //switch

	printf("\nTOTAL PRICE: %ld \n", price);

	system("pause");

	return 0;
} //main


