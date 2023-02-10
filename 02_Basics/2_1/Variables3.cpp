#include <iostream>

int main()
{
    // 1 Byte
    bool my_bool1 = true;
    bool my_bool2 = false;

    // 1  Byte -> 8 Bit -> (2^8 = 256)
    char my_char = 1 ;  // char kann werte zwischen -128 bis + 127 abspeichern

    // 2 byte = 16 Bit -> 65536 werte
    short my_short = 300;

    // 4 Byte = 32 Bit ~ 4.000.000.000
    int my_int = 100'000; // das apostrophe ' sorgt dafür das man es besser lesen kann öndert aber ansonsten nichts

     // 8 Byte -> 64 Bit (unglaublich viel)
    long long my_ll = 5'000'000'000;



    // floats
    // 4 Byte
    float my_float = 10.0;

    //  8 Byte
    double my_dbl = 10.0;

    return 0;
}
