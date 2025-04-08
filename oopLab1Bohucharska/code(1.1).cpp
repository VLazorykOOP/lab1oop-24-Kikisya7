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
    cout << "Розмір масиву (N): ";  // Запитуємо розмір масиву
    cin >> N;  // Вводимо розмір масиву

    vector<int> A(N);  // Оголошуємо вектор A розміру N
    cout << "Елементи масиву A: ";  // Запитуємо елементи масиву
    for (int i = 0; i < N; i++)  // Проходимо по всіх елементах масиву
    {
        cin >> A[i];  // Вводимо кожен елемент масиву
    }

    int maxNeg = numeric_limits<int>::min();  // Ініціалізуємо maxNeg мінімальним можливим значенням
    int index = -1;  // Ініціалізуємо змінну index значенням -1, щоб позначити, що негативний елемент не знайдений

    // Проходимо масив, щоб знайти максимальний від’ємний елемент
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0 && A[i] > maxNeg)  // Якщо елемент від’ємний і більший за поточний maxNeg
        {
            maxNeg = A[i];  // Оновлюємо maxNeg
            index = i;  // Записуємо індекс цього елемента
        }
    }

    // Якщо ми знайшли від’ємний елемент, виводимо його та його індекс
    if (index != -1)
    {
        cout << "Максимальний серед від’ємних: " << maxNeg << " з індексом " << index << endl;
    } 
    else  // Якщо від’ємних елементів немає
    {
        cout << "В масиві немає від’ємних елементів" << endl;
    }

    return 0;
}

