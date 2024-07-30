#include <sketch.h>
#include <stdlib.h>
#include <time.h>

void random_concentric_circles(float x, float y, int r, float n)
{
    for (int i = 1; i <= n; i++)
    {
        // pick a random number from 1 to r
        float r1 = 1 + rand() % r;

        draw_circle(x, y, r1);
    }
}

int main()
{
    // initialize the random number generator
    srand(time(NULL));

    random_concentric_circles(0, 0, 250, 10);

    save_sketch("lesson2.svg");
}
