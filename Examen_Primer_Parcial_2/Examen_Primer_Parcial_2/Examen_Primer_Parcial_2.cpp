#include <iostream>


using namespace std;

int main()
{

	double T, A, S, n, suma;
	A = 0;
	S = 1;

	cout << "Este programa genera la sucesion de Fibonacci." << endl;
	cout << "Cuantos quieres visualizar" << endl;
	cin >> T;
	if (T == 1)
	{
		cout << A;
	}
	if (T == 2)
	{
		cout << A << ", " << S;
	}
	if (T >= 3)
	{
		cout << A << ", " << S;
	}
	for (n = 3; n <= T; n = n + 1)
	{
		cout << ", ";
		suma = A + S;
		cout << suma;
		A = S;
		S = suma;
	}

	cout << endl;
	return 0;
}