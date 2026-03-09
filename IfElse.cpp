#include <iostream>
using namespace std;

float Rata_rata(float a, float b)
{
    return (a + b) / 2;
}

string Status_lulus(float r)
{
    if (r >= 60)
        return "lolos";
    else
        return "gagal";
}

int main()
{
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan nilai bahasa inggris = ";
    cin >> nilBI;
    cout << "Masukkan nilai matematika = ";
    cin >> nilMT;
}