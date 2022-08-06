//myfirst.cpp --메시지 출력

#include <iostream> //선행처리(전처리) 지시자 = 전처리기에게 iostream 파일의 내용을 프로그램에 추가하라고 지시.  
int main() //함수 머리
{ //함수 몸체 시작
    using namespace std; //정의 가시화 = 지시자. 이름공간지시자. std:: 접두어 붙이지 않아도 std 이름 공간에 정의된 이름들을 쓰게 해줌.
    cout <<"C++"; //메시지 출력
    cout << endl; //새로운 행 시작
    cout <<"wow" << endl; //또 다른 메시지 출력
    cout << endl;
    cout <<"ddfas";
    cout <<"dferr";
    cout << endl;
    cout <<"ddfas\n";
    cout <<"dferr";
    return 0; //main()을 종료
} //함수 몸체의 끝,