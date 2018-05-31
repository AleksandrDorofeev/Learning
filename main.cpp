#include <iostream> //добавили библиотеку для inout-output stream

int main() { //функция main с которой начинается каждая программа
    /*
      std - standart namespace
          1. using namespace std;
          This way you have access to whole std namespace throughout your code.
          2. using std::cout;
          This way you have access only to cout throughout your code.
          3. std::cout
          This way you are accessing the cout only at the line it is used on.
    */
    //COut - Console Output
    //endl - end line
    std::cout << "Hello, World!" << std::endl;

//////////////////////////////////////////////////////////////////////////////

    //int - integer, 4 bites = 8 bits памяти От -2 147 483 648 до 2 147 483 647
    //"=" - инициализация
    int A = 4;
    std::cout << A << std::endl;
    //&<variable> - address in memory
    std::cout << &A << std::endl;

    //short - short int, 2 bites От -32 768 до 32 767
    short t1 = 5;
    std::cout << t1 <<std::endl;

    //float - floating number
    float t2 = 3.14; //4 bites
    std::cout << t2 <<std::endl;

    //double
    double t3 = 3.14; //8 bites
    std::cout << t3 <<std::endl;

    //char - character
    char t4 = 'a';
    std::cout << t4 <<std::endl;

    //string
    std::string t5 = "Hello!";
    std::cout << t5 <<std::endl;

    //boolean
    bool t6 = true;
    std::cout << t6 <<std::endl;

    //unsigned, берем тип и диапазон значений считаем от 0, тогда колличество отрицательного диапазона
    //прибавляем к положительному(было от -32 768 до 32 767, стало от 0 до 65 535)

    return 0;
}

