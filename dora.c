#include <drawlib.h>
int main(void) {
 dl_initialize(1.0);
 dl_circle(110, 110, 100, dl_color_from_name("black"), 3, 0);
 dl_circle(110, 110, 97, dl_color_from_name("cyan"), 2, 1);
 dl_circle(110, 130, 80, dl_color_from_name("black"), 3, 0);
 dl_circle(110, 130, 77, dl_color_from_name("white"), 5, 1);
 dl_circle(110, 100, 13, dl_color_from_name("black"), 2, 0);
 dl_circle(110, 100, 11, dl_color_from_name("red"), 3, 1);
 dl_line(110, 113, 110, 160, dl_color_from_name("black"), 2);
 dl_line(93, 160, 127, 160, dl_color_from_name("black"), 25);
 dl_line(95, 160, 125, 160, dl_color_from_name("red"), 20);
 dl_line(10, 110, 90, 130, dl_color_from_name("black"), 2);
 dl_line(10, 160, 90, 140, dl_color_from_name("black"), 2);
 dl_line(130, 130, 210, 110, dl_color_from_name("black"), 2);
 dl_line(130, 135, 210, 135, dl_color_from_name("black"), 2);
 dl_line(130, 140, 210, 160, dl_color_from_name("black"), 2);
 dl_line(10, 135, 90, 135, dl_color_from_name("black"), 2);
 dl_line(90, 70, 90, 45, dl_color_from_name("black"), 30);
 dl_line(130, 70, 130, 45, dl_color_from_name("black"), 30);
 dl_line(90, 67, 90, 48, dl_color_from_name("white"), 23);
 dl_line(130, 67, 130, 48, dl_color_from_name("white"), 23);
 dl_line(95, 60, 95, 60, dl_color_from_name("black"), 10);
 dl_line(125, 60, 125, 60, dl_color_from_name("black"), 10);
while (1) {
 dl_wait(1);
}
return 0;
}
