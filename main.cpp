#include <iostream>

/*
    Program Boolean
    Ket : Program Boolean
    By  : Yudha Rizqia Grafer
    Tgl : 28 September 2022

*/

using namespace std;

int main()
{
    //float hasil;
    //float angka_1 = 10;
    //float angka_2 = 4;

    //hasil = (88 + 12) / 5 * (10 - angka_1) * angka_2 + 11 / 3 + 100;

    //bool hasil_relasi;
    //hasil_relasi = -100 > 3 < 4;

    //bool operand_1 = true;
    //bool operand_2 = false;

    //bool hasil_logika;

    //hasil_logika = operand_1 && operand_2;

    //bool hasil_logika;

    //hasil_logika = (false && true) ^ true ;

    bool hasil_logika;

    hasil_logika = (false && true) ^ true || (100 < 90) && (!false) ^ (90==90) ;

    cout << "Hasil = " << hasil_logika;

    //int i = 1, j;
    //j = ++i;
    //j = i++;
    //cout << "Nilai i = " << i << endl;
    //cout << "Nilai j = " << j;
    return 0;
}
