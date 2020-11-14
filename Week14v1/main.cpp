#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void scanLoop(int);
void ttcakesforbake(int);
int cust_cakesize[11][6] = {}, cakesizes = 5;
int* ttCake = 0;
int main()
{
	int customer = 0;
	//Scan input
	scanf("%d", &customer);
	scanLoop(customer);
	//calculate
	ttcakesforbake(customer);
	return 0;
}
void scanLoop(int customer)
{
	for (int i = 0; i < customer; i++) {
		for (int j = 0; j < cakesizes; j++) {
			scanf("%d", &cust_cakesize[i][j]);
		}
	}
}
void ttcakesforbake(int customer)
{
	int s[6] = {}, total = 0;
	float deci = 0;
	for (int j = 0; j < cakesizes; j++) {
		for (int i = 0; i < customer; i++) {
			s[j] += cust_cakesize[i][j];
		}
		switch (j) {
		case 0:	deci += (float)(s[j] * 8);
			break;
		case 1:	deci += (float)(s[j] * 6);
			break;
		case 2:	deci += (float)(s[j] * 4);
			break;
		case 3:	deci += (float)(s[j] * 2);
			break;
		case 4:	deci += (float)s[j];
			break;
		default:	break;
		}
	}
	total = ((int)deci / 8);
	deci = deci / 8;
	if ((deci - (float)total) > 0.00) {
		total += 1;
	}
	ttCake = &total;
	//Output
	printf("%d\n", *ttCake);
}
