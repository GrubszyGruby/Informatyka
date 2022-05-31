#include <iostream>

using namespace std;

int main()
{
    int do_ktorej;

    cout << "Podaj do ktorej liczby chcesz sprawdzic: ";
    cin >> do_ktorej;
    do_ktorej = 0;

        for (int i = 1; i <= do_ktorej; i++)
        {
            if (i % 1 == 0 && i % i == 0)
                cout << "Liczba jest liczba pierwsza.";
                cout << i;
        }



    return 0;
}
