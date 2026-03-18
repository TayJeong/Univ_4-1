#include <iostream>
using namespace std;

int main(void) {
    
    // 자릿수를 입력받아서 자릿수 합계를 출력하는 프로그램
    int num;
    int nSum;

    nSum += (num/100); //nSum = nSum + (num/100)
    nSum += (num%100)/nSum; // (nSum/10) % 10도 가능
    nSum += nSum%10;

    cout << " ";
    cin >> num;


    // 참 거짓 구분
    bool b;
    b = (2==2);
    cout <<std::boolalpha;
    cout << b << endl;

    // 윤년 판별

    //지하철 요금 계산 프로그램
    int fare=0, nCount=0;
    cout << "정거장 수  : " << endl;
    cin >> nCount;
    if(nCount <=5)
        fare = 600;
    else if(nCount <= 10)
        fare = 700;
    else
        fare = 700;
        nCount-=10;
        fare += ((nCount +1)/2)*50 ;


    // 정수 5개를 입력 받아 양수합계와 음수 합계 출력하는 프로그램(0은 제외)
    int n1, n2, n3, n4, n5;
    int pSum=0, nSum=0;     // pSum : 양수 합계, nSum : 음수 합계
    if (n1 > 0)
        pSum += n1;
    else
        nSum += n1;
    if (n2 > 0)
        pSum += n2;
    else
        nSum += n2;
    if (n3 > 0 )
        pSum += n3;
    else
        nSum += n3;
    if (n4 > 0)
        pSum += n4;
    else
        nSum += n4;
        

    return 0;
    
    

}