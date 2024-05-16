
#include "NavalBattle.h"


#include <iostream> // для работы с консолью
#include <vector> // более удобная вещь чем обычные массивы
using std::cout; // команда для вывода чего-то в консоль
using std::vector; // аналог обычного массива с которым проще работать поскольку много всего есть готового и встроенного



namespace LostSummerTime { namespace Game { namespace NavalBattle {

        void PlayingField(vector<vector<int>> PlayingField)
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
        void CheckingCoordinates(vector<vector<int>> Field)
        {
            //
        }


        // Заполнение игрового поля
        void FillPlayingField(vector<vector<int>> _PlayingField)
        {
            vector<vector<int>> Player = _PlayingField; // поле игрока / компьютера
            vector<vector<int>> Enemy = _PlayingField; // поле компьютера

            PlayingField(_PlayingField);
        }


        // игровое поле по умолчанию без всего, только координаты
        vector<vector<int>> DefaultPlayingField()
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
        void DidHit(vector<vector<int>> Field, int x, int y)
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
        void Shot(vector<vector<int>> Field, bool IsRandomShot = false)
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
        void Config(int GameMode, int ArrangementShips, int ComputerMode)
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


        // Входная точка для игры «Морской бой»
        // Используется для упрощения подключения в входной точки программы
        void Start()
        {
            int GameMode = 0; // режим игры
            int ComputerMode = 0; // режим компьютера
            int ArrangementShips = 0; // как будут расстановлены корабли

            cout
                << "Выберите режим игры" << "\n"
                << "1. Человек - Компьютер" << "\n"
                << "2. Компьютер - Компьютер" << "\n"
                ;

            // GameMode = ProtectingVariables(GameMode, 2); // ответ пользователя как будет происходить игра

            cout
                << "Режим компьютера" << "\n"
                << "1. Случайный выстрел" << "\n"
                << "2. Интеллектуальная игра" << "\n"
                ;

            // ComputerMode = ProtectingVariables(ComputerMode, 2); // ответ пользователя насколько сложным будет игра компьютера

            cout
                << "Как будут расстановлены корабли?" << "\n"
                << "1. Вручную" << "\n"
                << "2. Автоматически" << "\n"
                ;

            // ArrangementShips = ProtectingVariables(ArrangementShips, 2); // ответ пользователя как будут расставлены корабли

            system("cls"); // очистить консоль

            Config(GameMode, ArrangementShips, ComputerMode);
        }

        //
        // Конец - Первое задание / Создайте игру «Морской бой»
        //
}}}
