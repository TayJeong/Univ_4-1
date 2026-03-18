#include <iostream>
using namespace std;

int main(void) {

    // <실습4> 다음을 중첩 if문으로 변경해 보자.
        /*
        if (n1 > n2 && n1 > n3)
            max = n1;
        else if (n2>n1 && n2>n3)
            max = n2;
        */ 
       
    int n1, n2, n3, max;
    cin >> n1 >> n2 >> n3;

    if(n1>n2)
    {
        if(n1>n3)
            max=n1;
        else
            max=n3;
    }
    else
    {
        if(n2 > n3)
            max = n2;
        else
            max=n3;
    }

    cout << "가장 큰 수는 ===> " << max << endl;

    // switch break 사용안하는 경우
    int score;
    switch (score) {
        case 100:
        case 99:
        case 98:
        case 90:
            cout << "A+" << endl;
        case 89:

    }

    // <실습5> 알파벳 M, A, E(소문자 포함) 중 하나를 입력 받아 출력하는 프로그램
    //  M(m) : Good Morning
    //  A(a) : Good Afternoon
    //  E(e) : Good Evening
    char ch;
    cout << "문자 입력 ( M(m), A(a), E(e) ) 중 하나 : ";
    cin >> ch;
    switch(ch) {
        case 'M' :
        case 'm' : 
            cout << "Good Morning";
            break;
        case 'A':
        case 'a':
            cout << "Good Afternoon";
            break;
        case 'E':
        case 'e':
            cout << "Good Evening";
            break;   
    }

    // <실습6> 달을 입력받아 그 달의 일수를 출력하는 프로그램
    int month;
    cout << "달을 입력하세요 : " << endl;
    cin >> month;
    switch (month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << " 31일" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30일" << endl;
            break;
        default:
            cout << "28일" << endl;
    }

    // <실습7> 0이 입력될 때 까지의 합을 구하는 프로그램
    int total=0;
    int n=1;    // n의 초기값이 0이면 안됨
    
    while(n != 0)
    {
        cout << " 숫자 입력 : " << endl;
        cin >> n;
        total += n;

    }
    cout << total << endl;

    // <실습8> 입력받은 숫자 개수만큼 3의 배수를 출력하는 프로그램
    int cnt;    // 개수를 받는 변수
    int i=0;    //3의 배수를 만들 변수
    int n=0;    // while문을 빠져나가기 위한 변수
    cout << "개수 입력 : " << endl;
    cin >> cnt;
    while (n++ < cnt)
    {
        i+=3;
        cout << i << " ";
    }



    return 0;
}