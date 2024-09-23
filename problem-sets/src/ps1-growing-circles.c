#include <sketch.h>

void growing_circles(float x, float y, float r, int n)
{
    float r1 = r;
    float x0 = x + r;

    for (int i = 0; i < n; i++)
    {
        draw_circle(x0, y + r1, r1);
        x0 += r1 + r1 + r / 2;
        r1 += r / 2;
    }
}

int main()
{
    growing_circles(-300, 0, 30, 5);

    set_stroke("#aaa");
    draw_line(0, -300, 0, 300);
    draw_line(-300, 0, 300, 0);

    save_sketch("output.svg");
}