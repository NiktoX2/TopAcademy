
#include "NavalBattle.h"


#include <iostream> // ��� ������ � ��������
#include <vector> // ����� ������� ���� ��� ������� �������
using std::cout; // ������� ��� ������ ����-�� � �������
using std::vector; // ������ �������� ������� � ������� ����� �������� ��������� ����� ����� ���� �������� � �����������



namespace LostSummerTime { namespace Game { namespace NavalBattle {

        void PlayingField(vector<vector<int>> PlayingField)
        {
            for (int i = 0; i < 11; i++) // �� |
            {
                for (int j = 0; j < 11; j++) // �� -
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


        // ���������� �������� ����
        void CheckingCoordinates(vector<vector<int>> Field)
        {
            //
        }


        // ���������� �������� ����
        void FillPlayingField(vector<vector<int>> _PlayingField)
        {
            vector<vector<int>> Player = _PlayingField; // ���� ������ / ����������
            vector<vector<int>> Enemy = _PlayingField; // ���� ����������

            PlayingField(_PlayingField);
        }


        // ������� ���� �� ��������� ��� �����, ������ ����������
        vector<vector<int>> DefaultPlayingField()
        {
            // ������ (������) ��� �������� ���� �������� �������� ����
            // ���������� ���������
            // 0 ������
            // 1 ��������� �������
            // 2 �������
            // 3 �������
            // 4 ���������
            // 9 ��������� ����
            // ��� ���� � ��� 11 �� 11, ���������� � ���� 10 �� 10 ��� ����� ������������� ���������� ��������
            // ������ ������� ����������� 0
            vector<vector<int>> PlayingField(11, vector<int>(11));

            // �� A (65) �� 
            for (int i = 65, j = 1; i < 75; i++, j++) // ���������� ���������� ����, ����� � �����
            {
                // PlayingField[0][j] = j; // ���������� ���� ������
                // PlayingField[j][0] = i; // ���������� ���� �����
                PlayingField[j][0] = j; // ���������� ���� �����
                PlayingField[0][j] = i; // ���������� ���� ������
            }

            return PlayingField;
        }


        // �������� �� ���������
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


        // �������
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


        // ��������� ��������� ������� ������������
        void Config(int GameMode, int ArrangementShips, int ComputerMode)
        {
            // GameMode - �������� ����� ����
            // 1. ������� - ���������
            // 2. ��������� - ���������
            // 
            // ComputerMode - ����� ����������
            // 1. ��������� �������
            // 2. ���������������� ����
            // 
            // ArrangementShips - ��� ����� ������������� �������?
            // 1. �������
            // 2. �������������

            //
        }


        // ������� ����� ��� ���� �������� ���
        // ������������ ��� ��������� ����������� � ������� ����� ���������
        void Start()
        {
            int GameMode = 0; // ����� ����
            int ComputerMode = 0; // ����� ����������
            int ArrangementShips = 0; // ��� ����� ������������� �������

            cout
                << "�������� ����� ����" << "\n"
                << "1. ������� - ���������" << "\n"
                << "2. ��������� - ���������" << "\n"
                ;

            // GameMode = ProtectingVariables(GameMode, 2); // ����� ������������ ��� ����� ����������� ����

            cout
                << "����� ����������" << "\n"
                << "1. ��������� �������" << "\n"
                << "2. ���������������� ����" << "\n"
                ;

            // ComputerMode = ProtectingVariables(ComputerMode, 2); // ����� ������������ ��������� ������� ����� ���� ����������

            cout
                << "��� ����� ������������� �������?" << "\n"
                << "1. �������" << "\n"
                << "2. �������������" << "\n"
                ;

            // ArrangementShips = ProtectingVariables(ArrangementShips, 2); // ����� ������������ ��� ����� ����������� �������

            system("cls"); // �������� �������

            Config(GameMode, ArrangementShips, ComputerMode);
        }

        //
        // ����� - ������ ������� / �������� ���� �������� ���
        //
}}}
