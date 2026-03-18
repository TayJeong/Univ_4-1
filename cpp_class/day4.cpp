//20260317
#include <iostream>
using namespace std;

int main(void) {
    
    // <실습 9> 중첩 while 행렬 
    int num;
    int i=0;
    while(i<10)
    {
        int j=0;    // 1줄에 10개 찍기
        while(j<10)
        {
            num = i + j * 10 ;   // (j*10)+i
            cout << num << "  " ;
            j++;
        }
        cout << endl;   // 다음행을 찍기 위한 줄바꿈
        i++;
    }

    // do-while
    // <실습10> 정수를 입력 받아서 반대로 출력하는 프로그램
    int n;
    int rev;
    cout << "정수 입력 : " ;
    cin >> n;
    do {
        rev = n % 10;
        cout << rev << "  ";
        n = n / 10;

    } while(n != 0);

    //for
    //<실습 1> 합계와 평균을 구하는 프로그램 (단, 자료형은 double로 하고 0보다 작은 값이 입력되면 중단하고 그때까지의 합과 평균을 구한다.)
    double sum = 0;
    double jumsu = 0;
    int cnt=0;
    for( ;jumsu >= 0;)
    {
        sum += jumsu;
        cout << "점수 : ";
        cin >> jumsu;
        cnt++;
    }
    cout << sum << endl;
    cout << sum / (cnt -1) ;

    
    return 0;
}