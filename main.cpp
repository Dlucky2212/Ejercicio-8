#include <iostream>

using namespace std;
//8 Intercambiando valores ingresados utilizando punteros
void interc(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    interc(&a, &b);
    cout << a << " "<<b;
    return 0;
}
