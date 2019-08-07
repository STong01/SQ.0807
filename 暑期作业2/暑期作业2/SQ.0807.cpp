#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD(x,y) x%y

//int a = 1;
//void test(){
//	int a = 2;
//	a += 1;
//}
//int main(){
//	//test();
//	int x, y;
//	y = 10;
//	x = y++;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	system("pause");
//	return 0;
//}

//int main(){
//	int i = 0;
//	int j = 0;
//	if ((++i > 0) || (++j > 0)){
//		printf("i=%d;j=%d\n", i, j);
//	}
//	system("pause");
//	return 0;
//}

//int main(){
//	/*int a = 13;
//	int b = 94;
//	printf("%d\n", MOD(b, a + 4));*/
//	int x = 0;
//	switch (++x){
//	case 0:
//		++x;
//		break;
//	case 1:
//		++x;
//		break;
//	case 2:
//		++x;
//		break;
//	}
//	printf("%d\n", x); 
//	system("pause");
//	return 0;
//}

int main(){
	/*char s[] = "\\123456\123456\t";
	printf("%d\n", strlen(s));*/
	/*int s = 0, n;
	for (n = 0; n < 4; n++){
		switch(n)
		{
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);*/
	/*char *pcColor = "blue1";
	char acColor[] = "blue1";
	printf("%d\n", strlen(pcColor));
	printf("%d\n", strlen(acColor));
	printf("%d\n", sizeof(pcColor));
	printf("%d\n", sizeof(acColor));*/
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char *)&ulA);
	system("pause");
	return 0;
}