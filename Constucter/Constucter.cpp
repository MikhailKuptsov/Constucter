#include <iostream>
#include <string>

using namespace std;

/*. Создать класс Fraction для работы с дробными числами.
Число должно быть представлено двумя полями: целая часть – длинное целое со знаком, 
дробная часть – беззнаковое короткое целое. 
Реализовать арифметические операции сложения, вычитания, умножения и операции сравнения.*/

class Fraction {

    //переменные которые мы будем использовать в классе
private:
    long first;
    unsigned short second;

    //сохранение переменых которые поступают из вызова в рабочие переменные
public:
    //если ничего не ввели
    //констуктор
    Fraction() {
        first = 0;
        second = 0;
    }
    //если ввели
    Fraction(long f, unsigned short s) {
        first = f;
        second = s;
    }


//ввод first part и second part числа
    void read() {
        cout << "Первая часть: ";
        cin >> first;
        cout << "Вторая часть: ";
        cin >> second;
    }

//Вывод объединённого числа в консоль
    void show() {
        cout << "Число: " << first << "." << second << endl;
    }

//для вывода результата объединения в одну строку.
    string toString() {
        string s = to_string(first) + "." + to_string(second);
        return s;
    }

 //Сложение
    static void Summa(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "Сложение: " << one + two << endl;
    }
//Вычитание
    static void minus(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "Вычитание: " << one - two << endl;
    }
//Умножение
    static void Umnoh(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "Умножение: " << one * two << endl;
    }
//Стравнение
    static void Equal(Fraction a, Fraction b) {
        double one_E, two_E;
        one_E = a.second;
        while (one_E> 1)
            one_E/= 10;
        one_E += a.first;
        two_E = b.second;
        while (two_E > 1)
            two_E /= 10;
        two_E += b.first;

        if (one_E == two_E)
            cout << "Числа одинаковые." << endl;
        else if (one_E > two_E)
            cout << "Первое число больше второго." << endl;
        else
            cout << "Второе число больше первого." << endl;
    }
};

int main()
{
    setlocale(LC_ALL,"ru");
    Fraction A;
    A.show();
    cout << "\n";

    //Для проверки 2 зафиксированных числа
    Fraction N(5, 2);
    N.show();
    cout << "Число 1: " << N.toString() << "\n\n";
    
    Fraction M = Fraction{ 5, 0 };
    M.show();
    cout << "Число 2: " << M.toString() << "\n\n";

    //Часть где пользователь вводит сам число.
    Fraction K;
    K.read();
    K.show();
    cout << "Число 3: " << K.toString() << "\n\n";

    A.Summa(N, M);
    A.minus(N, M);
    A.Umnoh(N, K);
    A.Equal(N, K);
}