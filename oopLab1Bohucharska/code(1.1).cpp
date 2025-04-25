#include <iostream>
#include <vector>
#include <limits>
using namespace std;
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    int N;
    cout << "Розмір масиву (N): ";  
    cin >> N;  

    vector<int> A(N);  // Оголошуємо вектор A розміру N
    cout << "Елементи масиву A: ";  
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];  
    }

    int maxNeg = numeric_limits<int>::min();  // Ініціалізуємо maxNeg мінімальним можливим значенням
    int index = -1;  

    // Проходимо масив, щоб знайти максимальний від’ємний елемент
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0 && A[i] > maxNeg)  
        {
            maxNeg = A[i];  
            index = i;  
        }
    }

    // Якщо ми знайшли від’ємний елемент, виводимо його та його індекс
    if (index != -1)
    {
        cout << "Максимальний серед від’ємних: " << maxNeg << " з індексом " << index << endl;
    } 
    else  
    {
        cout << "В масиві немає від’ємних елементів" << endl;
    }

    return 0;
}

