#include <sketch.h>

void concentric_circles(float x, float y, float r, float n)
{
    for (int i = 1; i <= n; i++)
    {
        draw_circle(x, y, i * r / n);
    }
}

int main()
{
    concentric_circles(0, 0, 250, 10);

    save_sketch("lesson2.svg");
}
