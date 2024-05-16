#pragma once

#include <Windows.h>



namespace LostSummerTime {
	namespace Console {
		enum Color // цвет консоли (0 - 15)
		{
			Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
		};

		void SetConsoleColor(Color Background, Color Foreground)
		{
			HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hStdOut, (WORD)((Background << 4) | Foreground));
		}
	}
}