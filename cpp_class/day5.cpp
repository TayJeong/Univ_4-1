#include <iostream>
using namespace std;

int main (void)
{
    //for문
    //<실습2> 피보나치 수열을 구하는 프로그램
    int n1=1;
    int n2=1;
    int sum = 0;
    cout << n1 << " " << n2 << " ";
    for ( int i = 3; i <= 10; i++)
    {
        sum = n1+n2;
        cout<< sum << " ";
        n1 = n2;
        n2= sum;
    }

    //continue문/break문
    //<실습1> 알파벳 소문자를 대문자로 바꾸는 프로그램

    //<실습2-1> 별찍기 -이중 for문
    for (int i=1; i <= 5; i++)
    {
        for(int j=0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //<실습2-2> 별찍기 -이중 for문
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}