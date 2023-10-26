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
        for (int i = 0; i < 7; i++)
        {
            if (max < num[i])
            {
                max = num[i];
            }
            if (min > num[i])
            {
                min = num[i];
            }
            if (i == 7) { bool out = true;}
        }
        if (bool out = true) 
        {
            cout << "Максимальное значение: " << max << endl;
            cout << "Минимальное значение: " << min << endl;
        }
        return 0;
}
       
    


