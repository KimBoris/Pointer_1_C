#include <stdio.h>

int main(void)
{
	//4byte길이를 갖는 메모리
	int nData = 300; //0x0019fed8
	//300을 16진수로 바꾸면
	//Ox0000012C가 된다.
	//메모리에는 그럼 
	//2c 01 00 00 으로 저장한다
	//Byte단위로 데이터를 나열하는 방식 - Byte Order
	//낮은 자리수가 왼쪽 = Little Indian(Intel에서 사용 X86프로세서)
	//높은 자리수가 왼쪽 = Bit Indian

	//nData메모리를 보면 메모리속에 
	//2C 01 00 00 으로 찍힌것을 볼 수 있다

	printf("%d", nData);
	///////////////////이까지 직접지정//////////////////////

	///<<간접지정>>

	int* pnData = &nData;//0x0019fecc
	//&pnData = nData의 주소가 들어간다
	// pnData = d8 fe 19 00

	//정리 
	//int * pnData = &nData;
	//1. pnData = '대상'(&nData)의 주소를 가지고 있다.
	//2. int * pnData >형식이 int에 대한 포인터 형이므로 pnData가 포인팅하는 대상 자체는 int가 된다.
	//3. 따라서 int *pnData > *(간접지정자) 간접 지정을 해버리면 
	// '이 주소를 가진 메모리를(그 대상을) int형 변수로 보겠다.


	
	return 0;
}