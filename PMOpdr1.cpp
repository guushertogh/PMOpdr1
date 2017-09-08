#include <iostream>
using namespace std;




int main() {



    int y;
    int m;
    int d;
    cout << "Birth Year: ";
    cin >> y;



    int currenty = 2017;

    if (!((currenty - y) <102 && (currenty - y) > 9)) {

        cout << "voldoet helaas niet aan de leeftijdseisen";
        cout << currenty - y;
        int temp;
        cin >> temp;
        return 0;
    }
    cout << "Birth Month: ";
    cin >> m;
    
    cout << "Birth Day: ";
    cin >> d;


    if (y >= 1905) {              // 1905 komt na een schikkeljaar

        int delta = y - 1905;

        int subset = delta / 4;

        int rest = delta % 4;          // jaren die overblijven zijn geen schikkeljaren

        int ychange = subset * 5 + rest;  // hoeveel dagen je bent opgeschoven

        cout << ychange << endl;

        int eenjan = ychange % 7;     // dit is een januari jaar c, met 0 is zondag, 1 is maandag, etc.

        int mchange = 0;
        switch (m) {
        default:
            break;
        case 2: mchange = 31;
            break;
        case 3: mchange = 59;
            break;
        case 4: mchange = 90;
            break;
        case 5: mchange = 120;
            break;
        case 6: mchange = 151;
            break;
        case 7: mchange = 182;
            break;
        case 8: mchange = 212;
            break;
        case 9: mchange = 243;
            break;
        case 10: mchange = 273;
            break;
        case 11: mchange = 304;
            break;
        case 12: mchange = 334;
            break;
        }


        cout << mchange << endl;

        if (m>2 && y % 4 == 0) mchange = mchange + 1;    // als c een schrikkeljaar is en de dag na februari valt

        int total = d + mchange - 1;
        int day = (eenjan + total) % 7;

        cout << day << endl;


    }

    else cout << "niet zo negatief" << endl;

    int n;
    cin >> n;
    return 0;


}

