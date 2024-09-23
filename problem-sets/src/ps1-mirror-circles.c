#include <sketch.h>

void mirror_circle(float x, float y, float r)
{
    draw_circle(x, y + r, r);
    draw_circle(x, y - r, r);
}

void three_mirror_circles(float x, float y, float r)
{
    mirror_circle(x, y, r / 3);
    mirror_circle(x, y, 2 * r / 3);
    mirror_circle(x, y, r);
}

int main()
{
    three_mirror_circles(-100, 0, 100);
    three_mirror_circles(100, 0, 100);

    set_stroke("#aaa");
    draw_line(0, -300, 0, 300);
    draw_line(-300, 0, 300, 0);

    save_sketch("output.svg");
}