#include <iostream>
using namespace std;

int main() 
{
    float a1, b1, c1, a2, b2, c2;
    char jawab;
    
    do
    {
		cout << "Masukkan koefisien a1: ";
		cin >> a1;
		cout << "Masukkan koefisien b1: ";
		cin >> b1;
		cout << "Masukkan koefisien c1: ";
		cin >> c1;
 
		cout << "Masukkan koefisien a2: ";
		cin >> a2;
		cout << "Masukkan koefisien b2: ";
		cin >> b2;
		cout << "Masukkan koefisien c2: ";
		cin >> c2;
    
		float D = a1 * b2 - a2 * b1;
    
		if (D == 0) 
		{
			cout << "Sistem persamaan tidak memiliki solusi unik." << endl;
		}
		else 
		{
			float Dx = c1 * b2 - c2 * b1;
			float Dy = a1 * c2 - a2 * c1;
			float x = Dx / D;
			float y = Dy / D;
			cout << "Solusi sistem persamaan linear:" << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
		cout << "Apakah ingin melakukan proses lagi(Y/N)? ";
		cin >> jawab;
		system("cls");
	}
	
    while ((jawab == 'Y')||(jawab == 'y'));
    return 0;
}
