#include <sketch.h>

int main()
{
    draw_circle(-100, 0, 100);
    draw_circle(100, 0, 100);

    save_sketch("lesson2.svg");
}
