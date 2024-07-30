#include <sketch.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define N 720

float X[N];
float Y[N];

// initialze the X and Y for N points
// on circle of radius r
void make_circle(float r)
{
    for (int i = 0; i < N; i++)
    {
        float theta = 2 * M_PI / N * i;
        X[i] = r * cos(theta);
        Y[i] = r * sin(theta);
        // draw_circle(X[i], Y[i], 2);
    }
}

void connect(int i, int j)
{
    i = i % N;
    j = j % N;
    draw_line(X[i], Y[i], X[j], Y[j]);
}

void connect_all(int delta)
{
    for (int i = 0; i < N; i++)
    {
        connect(i, i + delta);
    }
}

int main()
{
    // initialize the random number generator
    srand(time(NULL));

    set_stroke_width(0.5);
    set_stroke("#44444480");

    make_circle(250);

    // connect_all(16);
    // connect_all(12);
    // connect_all(7);

    for (int i = 0; i < N; i++)
    {
        int d = N / 6;

        connect(i, (i * i) % d);
    }

    save_sketch("lesson2.svg");
}
