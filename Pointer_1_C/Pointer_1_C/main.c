#include <stdio.h>


////이 함수의 형식
////void (*)(int) = void포인터를 반환하는 포인터! (매개변수를 int형으로 받는)
//void TestFunc(int nParam) {
//	printf("TestFunc() : %d\n", nParam);
//}
//int main(void)
//{
//	//4byte길이를 갖는 메모리
//	//int nData = 300; //0x0019fed8
//	//300을 16진수로 바꾸면
//	//Ox0000012C가 된다.
//	//메모리에는 그럼 
//	//2c 01 00 00 으로 저장한다
//	//Byte단위로 데이터를 나열하는 방식 - Byte Order
//	//낮은 자리수가 왼쪽 = Little Indian(Intel에서 사용 X86프로세서)
//	//높은 자리수가 왼쪽 = Bit Indian
//
//	//nData메모리를 보면 메모리속에 
//	//2C 01 00 00 으로 찍힌것을 볼 수 있다
//
//	//printf("%d", nData);
//	///////////////////이까지 직접지정//////////////////////
//
//	///<<간접지정>>
//
//	//int* pnData = &nData;//0x0019fecc
//	//&pnData = nData의 주소가 들어간다
//	// pnData = d8 fe 19 00
//
//	//정리 
//	//int * pnData = &nData;
//	//1. pnData = '대상'(&nData)의 주소를 가지고 있다.
//	//2. int * pnData >형식이 int에 대한 포인터 형이므로 pnData가 포인팅하는 대상 자체는 int가 된다.
//	//3. 따라서 int *pnData > *(간접지정자) 간접 지정을 해버리면 
//	// '이 주소를 가진 메모리를(그 대상을) int형 변수로 보겠다.
//
//
//	//간접지정
//	int nData = 300;
//	int* pnData = &nData; //0x0019FED8
//	pnData += 2;//int형 포인터 변수이기때문에 int형 2개만큼 더해준다.
//	//그럼 pnData = 0x0019FEE0 이 되고
//	*pnData = 300;
//	//그 자리에 300을 넣어주기 때문에
//	//값은 2c 01 00 00 이 된다.
//
//
//
//	//직접 지정하는 방법
// 	int nResult = 300;   //0x0019FEC0
//
//	*((int*)0x0019FEC0) = 600;//직접지정
//	*pnData = 500; //간접지정
//	//0x0019FEC0 에 600이 들어갔다.
//
//
//
//	TestFunc(10);//0x00411750 , High Level방식
//
//
//	((void(*)(int))0x00411750)(10);//16진수로 나타내면 64866
//	((void(*)(int))4265808)(10);//				같은 것이다 이 둘은 //LowLevel방식 
//	return 0;
//
//
//
//	
//
//
//}

//int g_aList[5] = { 40, 20, 30, 10 , 50 };
//전역변수 될 수 있으면 사용하지마라
//void WhyUsePointer(int a, int b, int c, int d, int e)
//이렇게 쓰는것보다
//아래 처럼 주소를 불러와서 사용하는것이 효율적이다.
//void WhyUsePointer(int* paList)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\t", paList[i]);
//	}
//	putchar('\n');
//}
//int main()
//{
//	//g_aList정렬
//	int aList[5] = { 40,20,10,50,30 };
//
//	//출력
//	WhyUsePointer(aList);
//	return 0;
//}
//또한, 함수 내부에서는 포인터를 쓸 일이 별로 없다.
//함수가 여러개로 나눠졌을때 포인터가 빛을 발한다.