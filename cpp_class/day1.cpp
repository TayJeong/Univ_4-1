#include <iostream>
using namespace std;


int main(void) 
{
    cout << "Hello World!" << endl;
    int n1, n2;
    
    cout << "첫번째 숫자 입력 : ";
    cin >> n1;
    cout << "두번째 숫자 입력 : ";
    cin >> n2;
    int result = n1+ n2;
    cout << n1 << '+' << n2 << '=' << result;

    //<실습1> 날수를 입력받아서 몇개월 몇일로 출력하는 프로그램
    int n;
    int month, day;
    cout << "날수 입력";
    cin >>n;
    month = n/30;
    day = n % 30;
    cout << month, day;

     
    
    return 0;
}