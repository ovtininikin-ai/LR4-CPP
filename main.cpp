
#include <iostream>
using namespace std;

// Тема: Структурування програм з використанням функцій
// Варіант: Proc13, Proc32, Integer10

// Оголошення функцій перед main()

// Завдання Proc13
void SortDec3(double &A, double &B, double &C);
void task_proc13();

// Завдання Proc32
double Calc(double A, double B, int Op);
void task_proc32();

// Завдання Integer10
bool input_integer10(int &number);
int calculate_integer10(int number);
void output_integer10(int result);
void task_integer10();

// Головна функція програми
int main()
{
    int menu;

    cout << "Оберіть завдання:" << endl;
    cout << "1 - Proc13" << endl;
    cout << "2 - Proc32" << endl;
    cout << "3 - Integer10" << endl;

    cout << "Номер завдання = ";
    cin >> menu;

    // Перевірка введення
    if (!cin)
    {
        cout << "Помилка введення!" << endl;
        return 0;
    }

    // Вибір завдання
    switch (menu)
    {
        case 1:
            task_proc13();
            break;

        case 2:
            task_proc32();
            break;

        case 3:
            task_integer10();
            break;

        default:
            cout << "Неправильний номер завдання!" << endl;
    }

    return 0;
}

// Завдання Proc13
// Упорядкування трьох чисел за спаданням
void SortDec3(double &A, double &B, double &C)
{
    double temp;

    if (A < B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    if (A < C)
    {
        temp = A;
        A = C;
        C = temp;
    }

    if (B < C)
    {
        temp = B;
        B = C;
        C = temp;
    }
}

// Виконання завдання Proc13
void task_proc13()
{
    double A1, B1, C1;
    double A2, B2, C2;

    cout << "Завдання Proc13" << endl;

    cout << "Введіть перші три числа: ";
    cin >> A1 >> B1 >> C1;

    cout << "Введіть другі три числа: ";
    cin >> A2 >> B2 >> C2;

    // Перевірка діапазону чисел
    if (!cin ||
        A1 < -100 || A1 > 100 ||
        B1 < -100 || B1 > 100 ||
        C1 < -100 || C1 > 100 ||
        A2 < -100 || A2 > 100 ||
        B2 < -100 || B2 > 100 ||
        C2 < -100 || C2 > 100)
    {
        cout << "Помилка введення!" << endl;
        return;
    }

    // Виклик процедури для двох наборів
    SortDec3(A1, B1, C1);
    SortDec3(A2, B2, C2);

    cout << "Перший результат: "
         << A1 << " " << B1 << " " << C1 << endl;

    cout << "Другий результат: "
         << A2 << " " << B2 << " " << C2 << endl;
}

// Завдання Proc32
// Виконання арифметичних операцій
double Calc(double A, double B, int Op)
{
    if (Op == 1)
        return A - B;
    else if (Op == 2)
        return A * B;
    else if (Op == 3)
        return A / B;
    else
        return A + B;
}

// Виконання завдання Proc32
void task_proc32()
{
    double A, B;
    int N1, N2, N3;

    cout << "Завдання Proc32" << endl;

    cout << "A = ";
    cin >> A;

    cout << "B = ";
    cin >> B;

    cout << "N1 = ";
    cin >> N1;

    cout << "N2 = ";
    cin >> N2;

    cout << "N3 = ";
    cin >> N3;

    // Перевірка введених даних
    if (!cin ||
        A == 0 || B == 0 ||
        A < -100 || A > 100 ||
        B < -100 || B > 100 ||
        N1 < -100 || N1 > 100 ||
        N2 < -100 || N2 > 100 ||
        N3 < -100 || N3 > 100)
    {
        cout << "Помилка введення!" << endl;
        return;
    }

    // Три виклики функції
    cout << "Результат 1 = " << Calc(A, B, N1) << endl;
    cout << "Результат 2 = " << Calc(A, B, N2) << endl;
    cout << "Результат 3 = " << Calc(A, B, N3) << endl;
}

// Завдання Integer10
// Введення тризначного числа з перевіркою
bool input_integer10(int &number)
{
    cout << "Завдання Integer10" << endl;
    cout << "Введіть тризначне число: ";
    cin >> number;

    if (!cin || number < 100 || number > 999)
    {
        cout << "Помилка введення!" << endl;
        return false;
    }

    return true;
}

// Обчислення останніх двох цифр числа
int calculate_integer10(int number)
{
    return number % 100;
}

// Виведення одиниць і десятків
void output_integer10(int result)
{
    int units = result % 10;
    int tens = result / 10;

    cout << "Цифра одиниць = " << units << endl;
    cout << "Цифра десятків = " << tens << endl;
}

// Виконання завдання Integer10
void task_integer10()
{
    int number;

    // Введення та перевірка
    if (!input_integer10(number))
        return;

    // Обчислення результату
    int result = calculate_integer10(number);

    // Виведення результату
    output_integer10(result);
}
