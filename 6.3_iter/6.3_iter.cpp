#include <iostream> 
#include <iomanip>
#include <time.h> 

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)   
        a[i] = Low + rand() % (High - Low + 1); 
}
void Print(int* a, const int size) 
{ 
    for (int i = 0; i < size; i++)    
        cout << setw(4) << a[i];    
    cout << endl; 
}
template <typename T>
T Sum(T* a, const T size) 
{
    T S = 0; 
    for (T i = 0; i < size; i++) 
        if ((a[i] % 2) == 0)
            S += a[i]; 
    return S; 
}
int main()
{
    srand((unsigned)time(NULL));  // ініціалізація генератора випадкових чисел 

    int n;
    cout << "n = "; cin >> n;
    int* a = new int[n];

    int Low;
    int High;
    cout << "Low = "; cin >> Low;
    cout << "High ="; cin >> High;

    Create(a, n, Low, High);
    Print(a, n);
    cout << "S = " << Sum(a, n) << endl;
    delete[] a;
    return 0;
}