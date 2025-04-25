#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    int N, B, A1;

    // Запитуємо розмір масиву
    cout << "Розмір масиву (N): ";
    cin >> N;


    vector<int> A(N);

    
    cout << "Елементи масиву A: ";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
   
    cout << "Введіть B: ";
    cin >> B;

     cout << "Введіть A1: ";
    cin >> A1;

    // Ініціалізуємо minValue найбільшим можливим значенням
    int minValue = numeric_limits<int>::max();

   
    for (int i = 0; i < N; i++)
    {
       
        if (A[i] > A1) break;

        // Якщо елемент менший за B і менший за поточне мінімальне значення — оновлюємо мінімум
        if (A[i] < B && A[i] < minValue)
        {
            minValue = A[i];
        }
    }

  
    if (minValue != numeric_limits<int>::max())
    {
        cout << "Мінімальне значення серед елементів менших за B і розташованих до першого більшого за A1: " << minValue << endl;
    }
    else  
    {
        cout << "Відповідь не знайдено" << endl;
    }

    return 0;
}
