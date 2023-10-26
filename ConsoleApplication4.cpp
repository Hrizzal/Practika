#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int num[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> num[i];
    }
    int max = num[0];
    int min = num[0];
    int max_count = 0;
    int min_count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (max < num[i]){max = num[i];}
        if (min > num[i]){min = num[i];}
    }
    for (int i = 0; i < 7; i++)
    {   
        if (max = num[i]){max_count++;}
        if (min = num[i]){min_count++;}
        if (i == 7) { bool out = true; }
    }
    if (bool out = true)
    {
        cout << "Максимальное значение: " << max << endl;
        cout << "Минимальное значение: " << min << endl;
        cout << "Повторения максимального числа: " << max_count << endl;
        cout << "Повторения минимального числа: " << min_count << endl;
    }
}
