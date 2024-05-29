
/*
- - - - - - - - - - - - - - - - - - - -

    Первое задание
        Создайте игру «Морской бой»
        Главные особенности реализации игры:
            Режимы игры:
                Человек - Компьютер
                Компьютер - Компьютер
            Расстановка кораблей:
                Игрок расставляет вручную
                Компьютер расставляет за игрока
            Компьютер может играть в двух режимах:
                Случайный выстрел
                Интеллектуальная игра. Компьютер строит стратегию игры, а не стреляет случайно
            Отображать текущее состояние игрового поля игрока и компьютера
            Возможность остановки, приостановки, нового запуска игры

- - - - - - - - - - - - - - - - - - - -

    Второе задание
        Создайте игру «Пятнашки»
        Главные особенности реализации игры:
            Выбор режима игры:
                8 (3 × 3)
                15 (4 × 4)
            Режимы игры:
                Человек собирает
                Компьютер собирает
            Начальное размешивание пятнашек:
                Ручное размешивание
                Компьютерное размешивание
            Статистика:
                Количество времени, потраченное на сбор пятнашек
                Количество перестановок пятнашек для сбора

- - - - - - - - - - - - - - - - - - - -

    Третье задание
        Создайте приложение «Список дел»
        Приложение должно позволять:
            Добавление дел
                У дела есть:
                    название
                    приоритет
                    описание
                    дата, время исполнения
            Удаление дел
            Редактирование дел
            Поиск дел по:
                названию
                приоритету
                описанию
                дате и времени исполнения
            Отображение списка дел:
                на день
                на неделю
                на месяц
            При отображении должна быть возможность сортировки:
                по приоритету
                по дате и времени исполнения

- - - - - - - - - - - - - - - - - - - -

    Четвертое задание
        Создайте игру «Память»
        Главные особенности реализации игры:
            Выбор размера поля
            Начальная расстановка карт выполняется компьютером
            Звуковое сопровождение игры:
                Если карты совпали, звучит один звук
                Если карты не совпали, звучит другой звук
            Статистика:
                Время игры
                Количество переворотов карт

- - - - - - - - - - - - - - - - - - - -

    Пятое задание
        Создайте приложение для подсчета арифметического выражения пользователя
            Пользователь вводит с клавиатуры некоторое арифметическое выражение
            Выражение может содержать: (), +, -, *, /
            Приложение рассчитывает результат выражения с учетом скобок, приоритетов
            Результат отображается на экране
            Например, если пользователь ввел:
                5 * 2+1
                Результат: 11
            Если пользователь ввел:
                5 * (2+1)
                Результат: 15

- - - - - - - - - - - - - - - - - - - -

    Шестое задание
        Создайте приложение «Каталог текстов песен»
        Приложение должно иметь следующие возможности:
            Добавление текста песни:
                Текст песни:
                    может быть введен с клавиатуры
                    загружен из файла
                Для каждой песни нужно указывать название песни, автора текста и год создания песни (если он известен)
            Удаление текста песни
            Изменение текста песни
            Отображение текста песни на экран
            Сохранение текста песни в файл
            Поиск и отображение всех песен одного автора
            Поиск и отображение всех песен, содержащих слово, указанное пользователем

- - - - - - - - - - - - - - - - - - - -
*/





/*
    Техническая часть (чуть-чуть)
        Для создания проекта использовался C++ 20
        Все делалось в одном файле чтоб было проще перемещать проект

    Источники информации когда что-то забывалось или не зналось

    https://metanit.com/cpp/tutorial/
    https://www.cyberforum.ru/cpp-beginners/thread57001.html
    https://ru.stackoverflow.com/questions/1071460/%D0%A3%D0%B4%D0%B0%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5-%D0%BF%D1%80%D0%BE%D0%B1%D0%B5%D0%BB%D0%BE%D0%B2-%D0%B8%D0%B7-%D1%81%D1%82%D1%80%D0%BE%D0%BA%D0%B8

    // решение проблемы с тем, что вводим не тот тип данных
    https://stackoverflow.com/questions/3273993/how-do-i-validate-user-input-as-a-double-in-c
    https://stackoverflow.com/questions/12721911/c-how-to-verify-if-the-data-input-is-of-the-correct-datatype

    // работа с папками
    https://stackoverflow.com/questions/8931196/how-to-create-a-directory-in-c
    https://stackoverflow.com/questions/70924991/check-if-directory-exists-using-filesystem
    https://en.cppreference.com/w/cpp/filesystem/exists

    // для задания калькулятора
    https://www.cyberforum.ru/cpp-beginners/thread289149.html

    И просто случайные ссылки которые подсказали некоторые моменты
*/





// подключаем библиотеки для работы с разными объектами
#include <iostream> // для работы с консолью
#include <string> // для работы с строками
#include <stack> // для работы с ***
#include <vector> // более удобная вещь чем обычные массивы
#include <fstream> // для работы с файлами
#include <filesystem> // для работы с файловой системы, подключалась чтоб создавать папки
#include <windows.h> // используется для перевода консоли на Windows


// для оптимизации приложения, перечисляем что будем использовать и это позволит использовать короткую запись (без std::)
using std::cout; // команда для вывода чего-то в консоль
using std::cerr; // команда для вывода сообщения как ошибку в консоль
using std::cin; // для получения что ввел пользователь
using std::string; // создание переменной типа строки
using std::vector; // аналог обычного массива с которым проще работать поскольку много всего есть готового и встроенного
using std::getline; // функция для получения строки из файла
using std::ifstream; // чтение файла
using std::ofstream; // для записи в файл
using std::fstream; // совмещает запись и чтение
using std::filesystem::create_directories; // создание папки
using std::filesystem::exists; // проверка на существование папки
using std::filesystem::path; // для исправление путя до файла / папки
using std::size; // размер массива
using std::stack; // ***
using std::stringstream; // ***





//
// Изменение цветов в консоли
//

enum ConsoleColor // цвет консоли (0 - 15)
{
    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetConsoleColor(ConsoleColor Background = Black, ConsoleColor Foreground = White);

//
// Изменение цветов в консоли
//





//
// Защита от дурака и проверка на правильность вверденых значениях
//

int ProtectingVariables(int Variable, int MaximumValue);

//
// Защита от дурака и проверка на правильность вверденых значениях
//





//
// Главное меню приложения, где выбирается что хотим запустить
//

void MainMenu();

//
// Главное меню приложения, где выбирается что хотим запустить
//





//
// Начало - Первое задание / Создайте игру «Морской бой»
//

// Отображаем игровое поле кораблей
void GameNavalBattle__PlayingField(vector<vector<int>> PlayingField)
{
    for (int i = 0; i < 11; i++) // по |
    {
        for (int j = 0; j < 11; j++) // по -
        {
            if (j == 0 && i < 10)
            {
                cout << "  ";
            }
            else if (j == 0)
            {
                cout << " ";
            }

            if (PlayingField[i][j] == 0)
            {
                cout << " ";
            }
            else
            {
                if (j > 0 && i == 0) // i > 0 && j == 0
                {
                    cout << (char)PlayingField[i][j];
                }
                else
                {
                    cout << PlayingField[i][j];
                }
            }

            if (i > 0 && j > 0 || i > 0 && j == 0)
            {
                cout << " | ";
            }
            else
            {
                cout << "   ";
            }
        }

        cout << "\n";
    }
}


// Заполнение игрового поля
void GameNavalBattle__CheckingCoordinates(vector<vector<int>> Field)
{
    //
}


// Заполнение игрового поля
void GameNavalBattle__FillPlayingField(vector<vector<int>> PlayingField)
{
    vector<vector<int>> Player = PlayingField; // поле игрока / компьютера
    vector<vector<int>> Enemy = PlayingField; // поле компьютера

    GameNavalBattle__PlayingField(PlayingField);
}


// игровое поле по умолчанию без всего, только координаты
vector<vector<int>> GameNavalBattle__DefaultPlayingField()
{
    // массив (вектор) где хранится наши значения игрового поля
    // Заполнение следующее
    // 0 ничего
    // 1 одинарный корабль
    // 2 двойной
    // 3 тройной
    // 4 четверной
    // 9 попадание мимо
    // Все поле у нас 11 на 11, координаты и поле 10 на 10 где можно устанавливать координаты кораблей
    // пустые вектора заполняются 0
    vector<vector<int>> PlayingField(11, vector<int>(11));

    // от A (65) до 
    for (int i = 65, j = 1; i < 75; i++, j++) // заполнение начального поля, буквы и цифры
    {
        // PlayingField[0][j] = j; // заполнение цифр сверху
        // PlayingField[j][0] = i; // заполнение букв слева
        PlayingField[j][0] = j; // заполнение цифр слева
        PlayingField[0][j] = i; // заполнение букв сверху
    }

    return PlayingField;
}


// Проверка на попадание
void GameNavalBattle__DidHit(vector<vector<int>> Field, int x, int y)
{
    while (true)
    {
        if (Field[x][y] == 9)
        {
            //
        }
    }
}


// выстрел
void GameNavalBattle__Shot(vector<vector<int>> Field, bool IsRandomShot = false)
{
    int
        a = 0,
        b = 0
        ;

    if (IsRandomShot)
    {


        if (true)
        {
            Field[rand() % 10 + 1][rand() % 10 + 1] = 11;
        }
        else
        {
            Field[rand() % 10 + 1][rand() % 10 + 1] = 9;
        }
    }
    else
    {

        Field[a][b] = 11;
    }
}


// обработка введенных ответов пользователя
void GameNavalBattle__Config(int GameMode, int ArrangementShips, int ComputerMode)
{
    // GameMode - Выберите режим игры
    // 1. Человек - Компьютер
    // 2. Компьютер - Компьютер
    // 
    // ComputerMode - Режим компьютера
    // 1. Случайный выстрел
    // 2. Интеллектуальная игра
    // 
    // ArrangementShips - Как будут расстановлены корабли?
    // 1. Вручную
    // 2. Автоматически

    //
}


//
void GameNavalBattle__Test()
{
    // GameNavalBattle__FillPlayingField();
}


// Входная точка для игры «Морской бой»
// Используется для упрощения подключения в входной точки программы
void GameNavalBattle()
{
    int GameMode = 0; // режим игры
    int ComputerMode = 0; // режим компьютера
    int ArrangementShips = 0; // как будут расстановлены корабли

    cout
        << "Выберите режим игры" << "\n"
        << "1. Человек - Компьютер" << "\n"
        << "2. Компьютер - Компьютер" << "\n"
        ;

    GameMode = ProtectingVariables(GameMode, 2); // ответ пользователя как будет происходить игра

    cout
        << "Режим компьютера" << "\n"
        << "1. Случайный выстрел" << "\n"
        << "2. Интеллектуальная игра" << "\n"
        ;

    ComputerMode = ProtectingVariables(ComputerMode, 2); // ответ пользователя насколько сложным будет игра компьютера

    cout
        << "Как будут расстановлены корабли?" << "\n"
        << "1. Вручную" << "\n"
        << "2. Автоматически" << "\n"
        ;

    ArrangementShips = ProtectingVariables(ArrangementShips, 2); // ответ пользователя как будут расставлены корабли

    system("cls"); // очистить консоль

    GameNavalBattle__Config(GameMode, ArrangementShips, ComputerMode);
}

//
// Конец - Первое задание / Создайте игру «Морской бой»
//





//
// Начало - Второе задание / Создайте игру «Пятнашки»
//

// Входная точка для игры «Пятнашки»
// Используется для упрощения подключения в входной точки программы
void GameTag()
{
    int GameMode = 0; // режим игры

    cout
        << "Выберите режим игры" << "\n"
        << "1. Человек собирает" << "\n"
        << "2. Компьютер собирает" << "\n"
        ;

    cout
        << "Выберите размер поля" << "\n"
        << "1. 8 (3 × 3)" << "\n"
        << "2. 15 (4 × 4)" << "\n"
        ;

    cout
        << "Как будут размещены пятнашки?" << "\n"
        << "1. Вручную" << "\n"
        << "2. Автоматически" << "\n"
        ;

    system("cls"); // очистить консоль
}

//
// Конец - Второе задание / Создайте игру «Пятнашки»
//





//
// Начало - Третье задание / Создайте приложение «Список дел»
//

struct ToDoList_ToDo // структура дела
{
    int Priority; // Приоритет дела
    string Title; // название дела
    string Description; // Описание дела
    string Date; // дата, время исполнения дела
};

void ToDoList__Adding()
{
    //
}

void ToDoList__Removal()
{
    //
}

void ToDoList__Editing()
{
    //
}

void ToDoList__Search()
{
    //
}

// Входная точка для приложения «Список дел»
// Используется для упрощения подключения в входной точки программы
void ToDoList()
{
    system("cls"); // очистить консоль
}

//
// Конец - Третье задание / Создайте приложение «Список дел»
//





//
// Начало - Четвертое задание / Создайте игру «Память»
//

// Входная точка для игры «Память»
// Используется для упрощения подключения в входной точки программы
void GameMemory()
{
    system("cls"); // очистить консоль
}

//
// Конец - Четвертое задание / Создайте игру «Память»
//





//
// Начало - Пятое задание / Создайте приложение для подсчета арифметического выражения пользователя
//

//bool Calculator__IsNumber(char _Number) // провека, является ли символ числом
//{
//    // числа 48 (0) до 57 (9)
//
//    char Number[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; // цифры
//
//    for (int i = 0; i < size(Number); i++) // проверяем что это число
//    {
//        if (_Number == Number[i])
//        {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//
//bool Calculator__IsChars(char _Chars) // провека, является ли символ числом
//{
//    char Chars[4] = { '*', '/', '+', '-' }; // знаки
//
//    for (int i = 0; i < size(Chars); i++) // проверяем что это число
//    {
//        if (_Chars == Chars[i])
//        {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//
//bool Calculator__IsBracket(char _Bracket) // провека, является ли символ числом
//{
//    char Bracket[2] = { '(', ')' }; // скобки
//
//    for (int i = 0; i < size(Bracket); i++) // проверяем что это число
//    {
//        if (_Bracket == Bracket[i])
//        {
//            return true;
//        }
//    }
//
//    return false;
//}


struct Calculator__Leksema // Структура, описывающая любое число или операцию
{
    char type; // 0 для чисел, "+" для операции сложения и т.д.
    double value; // Значение (только для чисел). У операций значение всегда "0"
};



// Математическая функция, которая производит расчеты
bool Calculator__Maths(stack <Calculator__Leksema>& Stack_n, stack <Calculator__Leksema>& Stack_o, Calculator__Leksema& item)
{
    // Функция имеет тип bool, чтобы при возникновении какой-либо ошибки возвращать "false"
    double a, b, c;

    a = Stack_n.top().value; // Берется верхнее число из стека с числами

    Stack_n.pop(); // Удаляется верхнее число из стека с числами

    switch (Stack_o.top().type) // Проверяется тип верхней операции из стека с операциями
    {
        case '+': // Если тип верхней операции из стека с операциями сложение
            b = Stack_n.top().value;

            Stack_n.pop();

            c = a + b;

            item.type = '0';
            item.value = c;

            Stack_n.push(item); //Результат операции кладется обратно в стек с числами
            Stack_o.pop();

            break;

        case '-':// Если тип верхней операции из стека с операциями сложение
            b = Stack_n.top().value;

            Stack_n.pop();

            c = b - a;

            item.type = '0';
            item.value = c;

            Stack_n.push(item); // Результат операции кладется обратно в стек с числами
            Stack_o.pop();

            break;

        case '*':// Если тип верхней операции из стека с операциями сложение
            b = Stack_n.top().value;

            Stack_n.pop();

            c = a * b;

            item.type = '0';
            item.value = c;

            Stack_n.push(item); //Результат операции кладется обратно в стек с числами
            Stack_o.pop();

            break;

        case '/':// Если тип верхней операции из стека с операциями сложение
            b = Stack_n.top().value;

            if (a == 0)
            {
                cerr << "\nНа 0 делить нельзя!\n";
                return false;
            }
            else
            {
                Stack_n.pop();

                c = (b / a);

                item.type = '0';
                item.value = c;

                Stack_n.push(item); //Результат операции кладется обратно в стек с числами
                Stack_o.pop();

                break;
            }

        default:
            cerr << "\nОшибка!\n";
            return false;
            break;
    }

    return true;
}

// Функция возвращает приоритет операции: "1" для сложения и вычитания, "2" для умножения и деления и т.д.
int Calculator__getRang(char Char) {
    switch (Char)
    {
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 2;
        default:
            return 0;
    }
}


// Входная точка для приложения для подсчета арифметического выражения пользователя
// Используется для упрощения подключения в входной точки программы
void Calculator()
{
    while (true) {
        string tmp_1 = ""; // сдесь храним наш пример введенный пользователм
        string tmp_2 = ""; // сдесь храним наш пример введенный пользователм

        char Char; // Переменная, в которую будет записываться текущий обрабатываемый символ
        double value;
        bool flag = true; // Нужен для того, чтобы программа смогла отличить унарный минус (-5) от вычитания (2-5)

        stack<Calculator__Leksema> Stack_n; // Стек с числами
        stack<Calculator__Leksema> Stack_o; // Стек с операциями
        Calculator__Leksema item; // Объект типа Leksema

        system("cls");

        cout << "Введите выражение: ";

        getline(cin >> tmp_1, tmp_2);
        stringstream S_Expression { tmp_1 + tmp_2 };

        while (true)
        {
            Char = S_Expression.peek(); // Смотрим на первый символ

            if (Char == '\377') break; // Если достигнут конец строки, выходим из цикла

            if (Char == ' ')  // Игнорирование пробелов
            {
                S_Expression.ignore();

                continue;
            }

            if (Char >= '0' && Char <= '9' || Char == '-' && flag == 1) // Если прочитано число
            {
                S_Expression >> value;

                item.type = '0';
                item.value = value;

                Stack_n.push(item); // Число кладется в стек с числами

                flag = 0;

                continue;
            }

            // Если прочитана операция
            if (Char == '+' || Char == '-' && flag == 0 || Char == '*' || Char == '/')
            {
                // Если стек с операциями пуст
                if (Stack_o.size() == 0)
                {
                    item.type = Char;
                    item.value = 0;

                    Stack_o.push(item); // Операция кладется в стек с операциями
                    S_Expression.ignore();

                    continue;
                }

                // Если стек с операциями НЕ пуст, но приоритет текущей операции выше верхней в стеке с операциями
                if (Stack_o.size() != 0 && Calculator__getRang(Char) > Calculator__getRang(Stack_o.top().type))
                {
                    item.type = Char;
                    item.value = 0;

                    Stack_o.push(item); // Операция кладется в стек с операциями
                    S_Expression.ignore();

                    continue;
                }

                // Если стек с операциями НЕ пуст, но приоритет текущей операции ниже либо равен верхней в стеке с операциями
                if (Stack_o.size() != 0 && Calculator__getRang(Char) <= Calculator__getRang(Stack_o.top().type))
                {
                    if (Calculator__Maths(Stack_n, Stack_o, item))
                    {
                        continue;
                    }
                    else
                    {
                        //
                    }
                }
            }

            if (Char == '(') // Если прочитана открывающаяся скобка
            {
                item.type = Char;
                item.value = 0;

                Stack_o.push(item); // Операция кладется в стек с операциями
                S_Expression.ignore();

                continue;
            }

            if (Char == ')') // Если прочитана закрывающаяся скобка
            {
                while (Stack_o.top().type != '(') {
                    if (Calculator__Maths(Stack_n, Stack_o, item)) {  // Если все хорошо
                        continue; // просто идем дальше
                    }
                }

                Stack_o.pop();
                S_Expression.ignore();

                continue;
            }
        }

        while (Stack_o.size() != 0) { // Вызываем матем. функцию до тех пор, пока в стеке с операциями не будет 0 элементов
            if (Calculator__Maths(Stack_n, Stack_o, item)) { // Если все хорошо
                continue; // просто идем дальше
            }
            else 
            {
                //
            }
        }

        cout << "Ответ: " << Stack_n.top().value << "\n"; //Выводим ответ

        system("pause");
    }
}

//
// Конец - Пятое задание / Создайте приложение для подсчета арифметического выражения пользователя
//





//
// Начало - Шестое задание / Создайте приложение «Каталог текстов песен»
//

string SongLyricsCatalog__MainFolder = "Каталог Текстов Песен";

struct SongLyricsCatalog__Music // структура музыки
{
    string NameSong; // название песни
    string Text; // текст песни
    string Author; // автор
    int Year; // год создания
};

void SongLyricsCatalog__Check() // Проверка
{
    if (!exists(SongLyricsCatalog__MainFolder))
    {
        cout << "Папки где будут храняться песни не создана, она создаться автоматически в месте где запущена программа" << "\n";
        create_directories(SongLyricsCatalog__MainFolder);
    }
}

void SongLyricsCatalog__Adding() // Добавление
{
    string NameSong = "";
    string NameSong_2 = "";

    SongLyricsCatalog__Check();

    cout << "Напишите название песни" << "\n";
    // cin >> NameSong;
    getline(cin >> NameSong, NameSong_2);

    if (!exists(SongLyricsCatalog__MainFolder + "\\" + NameSong + NameSong_2))
    {
        create_directories(SongLyricsCatalog__MainFolder + "\\" + NameSong + NameSong_2);
    }
}

void SongLyricsCatalog__Removal() // Удаление
{
    //
}

void SongLyricsCatalog__Editing() // Изменение
{
    //
}

void SongLyricsCatalog__Display() // Отображение
{
    //
}

void SongLyricsCatalog__Saving() // Сохранение
{
    //
}

void SongLyricsCatalog__Search() // Поиск
{
    //
}

// Входная точка для приложения «Каталог текстов песен»
// Используется для упрощения подключения в входной точки программы
void SongLyricsCatalog()
{
    int test = 0;

    cout
        << "Каталог текстов песен" << "\n"
        << "1. Отобразить каталог" << "\n"
        << "2. Добавить текст песни" << "\n"
        << "3. Редактировать существующий текст" << "\n"
        ;

    test = ProtectingVariables(test, 3);

    system("cls"); // очистить консоль

    switch (test)
    {
        case 1:
            SongLyricsCatalog__Display();
            break;
        case 2:
            SongLyricsCatalog__Adding();
            break;
        case 3:
            SongLyricsCatalog__Editing();
            break;
    }
}

//
// Конец - Шестое задание / Создайте приложение «Каталог текстов песен»
//





//
//
//
// входная точка программы
//
//
//

int main()
{
    // локализация консоли
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL)); // обнуление рандома

    MainMenu(); // главное меню, где мы выбираем что запустить

    system("pause"); // чтоб консоль сразу же не закрывалась когда запускаем exe файл
    return 0; // просто возвращаем ноль, программа была выполнена успешно
}

//
//
//
// входная точка программы
//
//
//





//
// Изменение цветов в консоли
//

void SetConsoleColor(ConsoleColor Background, ConsoleColor Foreground)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((Background << 4) | Foreground));
}

//
// Изменение цветов в консоли
//





//
// Защита от дурака и проверка на правильность вверденых значениях
//

int ProtectingVariables(int Variable, int MaximumValue)
{
    while (!(cin >> Variable)) {
        cout << "Вы ввели не число, требуется число (1, 2, 3 ... 9, 0)";
        cin.clear();
        cin.ignore(100000, '\n');
    }

    if (Variable < 0 || Variable > MaximumValue)
    {
        while (true)
        {
            cout << "Вы ввели некоректное значение, введите значенее еще раз" << "\n";
            cin >> Variable;

            if (Variable > 0 && Variable <= MaximumValue)
            {
                break;
            }
        }
    }

    return Variable;
}

//
// Защита от дурака и проверка на правильность вверденых значениях
//





//
void MainMenu()
{
    int UserResponse = 0; // сюда записываем ответ пользователя

    // вывод текста для пользователя
    cout
        << "Выберите приложение которые вы хотите использовать" << "\n"
        << "1. (в разработке) Морской бой" << "\n"
        << "2. (в разработке) Пятнашки" << "\n"
        << "3. (в разработке) Список дел" << "\n"
        << "4. (в разработке) Память" << "\n"
        << "5. Подсчет арифметического выражения" << "\n"
        << "6. (в разработке) Каталог текстов песен" << "\n"
    ;

    UserResponse = ProtectingVariables(UserResponse, 6); // записываем что ввел пользователь и проверяем на правильность

    system("cls"); // очистить консоль

    switch (UserResponse) // запускаем программу в зависимости от выбора пользователя
    {
        case 1: // Морской бой
            GameNavalBattle();
            break;
        case 2: // Пятнашки
            GameTag();
            break;
        case 3: // Список дел
            ToDoList();
            break;
        case 4: // Память
            GameMemory();
            break;
        case 5: // Подсчет арифметического выражения
            Calculator();
            break;
        case 6: // Каталог текстов песен
            SongLyricsCatalog();
            break;
    }
}
