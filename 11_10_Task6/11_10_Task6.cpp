//6.Утановка курсора в новую позицию
#include <windows.h> 
#include <iostream> 
using namespace std;
int main()
{
	char c;
	HANDLE hStdout; // дескриптор стандартного вывода 
	COORD coord; // для позиции курсора
	// читаем дескриптор стандартного вывода 
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Input new cursor position." << endl;
	cout << "X = ";
	cin >> coord.X;
	cout << "Y = ";
	cin >> coord.Y;
	// установить курсор в новую позицию
	if (!SetConsoleCursorPosition(hStdout, coord))
	{
		cout << "Set cursor position failed." << endl;
		return GetLastError();
	}
	cout << "This is a new position." << endl;
	cout << "Input any char to exit: ";
	cin >> c;
	return 0;
}