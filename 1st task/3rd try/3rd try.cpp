#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    int SIZE, O, G;

    cout << "Если вы хотите угадать число, то введите 1, если вы хотите, чтобы я угадал число, то введите 2: ";
    cin >> O;
    if (O == 1)
    {
        cout << endl <<"Выберите уровень сложности: - КЛАССИКА (компьютер один раз генерирует число, а вы угадываете)" << endl;
        cout << "                            - НЕВОЗМОЖНЫЙ (каждый раз, когда вы не угадываете компьютер генерирует случайное число)" << endl;
        cout << "Если хотите поиграть в режим КЛАССИКА, введите 1, если хотите поиграть в режим НЕВОЗМОЖНЫЙ введите 2: ";
        cin >> G;

    }
    if (O == 1 && G == 1)
    {
        cout << "Введите длину числа: ";

        cin >> SIZE;

        if (SIZE <= 10)
        {
            int* A = new int[SIZE];
            bool alreadylol;

            for (int i = 0; i < SIZE;)
            {
                alreadylol = false;// не знаем еще есть похожая или нет
                int newRand = rand() % 10; //создали случайную переменную
                for (int j = 0; j < i; j++) // проверка на уникальность нового числа
                {
                    if (A[j] == newRand) //равно ли новое значение уже существующему
                    {
                        alreadylol = true;
                        break; // выбегаем тк уже мимо
                    }
                }
                if (!alreadylol)
                {
                    A[i] = newRand;
                    i++;// продолжаем заполнять массив только после того, как убедились в уникальности 
                }
            }
            int* B = new int[SIZE]; // пользователь вводит свой массив 
            int kor = 0, bik = 0, k = 1;
            /*for (int i = 0; i < SIZE; i++)
            {
                cout << A[i];
            }
            *///вывод числа
            cout << "Число сгенерировано, игра началась...)" << endl;
            while (bik != SIZE)//испанский стыд, но работает
            {
                cout << endl << "Введите ваш вариант (числа писать через пробел либо через enter!): ";
                for (int i = 0; i < SIZE; i++)
                {
                    cin >> B[i];
                }
                for (int i = 0; i < SIZE; i++)
                {
                    if (A[i] == B[i])
                    {
                        bik++;
                    }
                    else
                        for (int j = 0; j < SIZE; j++)
                        {
                            if (A[i] == B[j])
                                kor++;
                        }
                }
                if (bik == SIZE)
                    break;
                cout << endl << "Быков: " << bik << endl << "Коров: " << kor << endl;
                kor = 0;
                bik = 0;
                k++;
            }
            cout << endl << "Вы угадали за " << k << " раз!" << endl;
            delete[] A;
            delete[] B;

        }
        if (SIZE > 10)
            cout << "Невозможно запустить игру с более, чем десятью символами =(";

    }
    if (O == 2)
    {
        cout << "Введите длину числа: ";

        cin >> SIZE;

        cout << "Введите число (цифры писать через пробелы, либо через ENTER!): ";
        bool rUsure = false;
        int* A1 = new int[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            cin >> A1[i];
        }
        int k = 1;
        while (rUsure == false)
        {
            int* B1 = new int[SIZE];
            bool already_in_lol;
            for (int i = 0; i < SIZE;)
            {
                already_in_lol = false;// не знаем еще есть похожая или нет
                int newRand = rand() % 10; //создали случайную переменную
                for (int j = 0; j < i; j++) // проверка на уникальность нового числа
                {
                    if (B1[j] == newRand) //равно ли новое значение уже существующему
                    {
                        already_in_lol = true;
                        break; // выбегаем тк уже мимо
                    }
                }
                if (!already_in_lol)
                {
                    B1[i] = newRand;
                    i++;// продолжаем заполнять массив только после того, как убедились в уникальности 
                }
            }
            int bik = 0, kor = 0;
            while (rUsure == false)
            {
                cout << endl << "Попытка номер: " << k;
                for (int i = 0; i < SIZE; i++)
                {
                    if (A1[i] == B1[i])
                    {
                        bik++;
                    }
                    else
                        for (int j = 0; j < SIZE; j++)
                        {
                            if (A1[i] == B1[j])
                                kor++;
                        }
                }
                cout << endl << "Быков: " << bik << endl << "Коров: " << kor << endl;
                if (bik == SIZE)
                    rUsure = true;
                    
                kor = 0;
                bik = 0;
                k++;
                break;
            }
            /*
            for (int i = 0; i < SIZE; i++)
            {
                cout << B1[i];
            }
            *///проверил что он рандомит новые числа каждый раз
            delete[] B1;
        }
        cout << endl << "Было загадано число: ";

        for (int i = 0; i < SIZE; i++)
        {
            cout << A1[i];
        }
        cout << endl;
        cout << endl << "Я угадал за " << k << " раз!" << endl;
        delete[] A1;
    }
    if (O == 1 && G == 2)
    {
        bool ashalet = false;
        cout << "Введите длину числа: ";

        cin >> SIZE;

        if (SIZE <= 10)
        {
            int k = 1;
            while (ashalet = true)
            {
                int* A = new int[SIZE];
                bool alreadylol;

                for (int i = 0; i < SIZE;)
                {
                    alreadylol = false;// не знаем еще есть похожая или нет
                    int newRand = rand() % 10; //создали случайную переменную
                    for (int j = 0; j < i; j++) // проверка на уникальность нового числа
                    {
                        if (A[j] == newRand) //равно ли новое значение уже существующему
                        {
                            alreadylol = true;
                            break; // выбегаем тк уже мимо
                        }
                    }
                    if (!alreadylol)
                    {
                        A[i] = newRand;
                        i++;// продолжаем заполнять массив только после того, как убедились в уникальности 
                    }
                }
                int* B = new int[SIZE]; // пользователь вводит свой массив 
                int kor = 0, bik = 0, k1 = 0;
                /*for (int i = 0; i < SIZE; i++)
                {
                    cout << A[i];
                }*/
                cout << endl << "Новое число сгенерировано" << endl;
                while (bik != SIZE)
                {
                    cout << endl << "Введите ваш вариант (числа писать через пробел либо через enter!): ";
                    for (int i = 0; i < SIZE; i++)
                    {
                        cin >> B[i];
                    }
                    for (int i = 0; i < SIZE; i++)
                    {
                        if (A[i] == B[i])
                        {
                            bik++;
                        }
                        else
                            for (int j = 0; j < SIZE; j++)
                            {
                                if (A[i] == B[j])
                                    kor++;
                            }
                    }
                    if (bik == SIZE)
                        break;
                    cout << endl << "Быков: " << bik << endl << "Коров: " << kor << endl;
                    kor = 0;
                    bik = 0;
                    k++;
                    break;
                }
                for (int i = 0; i < SIZE; i++)
                {
                    if (A[i] == B[i])
                        k1++;
                }
                if (k1 == SIZE)
                {
                    ashalet = true;
                    cout << endl << "Вы угадали за " << k << " раз, ашалеть!" << endl;
                    break;
                }
                delete[] A;
                delete[] B;
            }
        }
        if (SIZE > 10)
            cout << "Невозможно запустить игру с более, чем десятью символами =(";

    }
    return 0;
}