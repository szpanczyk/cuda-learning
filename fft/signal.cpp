#include <iostream>
#include <cmath>

double square_wave(double period, double phase_shift, int x)
{
    return sin( 2 * M_PI * (x / period) + phase_shift)  > 0.0 ? 1.0 : -1.0;
}


int main()
{
    for( int i = 0; i < 1024; ++i)
    {
       int sample = square_wave(1/M_PI, 0, i);
       std::cout << sample << std::endl;
    }

    return 0;
}

