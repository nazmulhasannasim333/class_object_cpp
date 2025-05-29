#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer();
    Cricketer *kohli = new Cricketer();
    dhoni->jersey_no = 7;
    strcpy(dhoni->country, "India");
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    delete dhoni;

    cout << "Jersey No: " << kohli->jersey_no << endl;
    cout << "Country: " << kohli->country << endl;

    return 0;
}