#include <stdio.h>

int main() {

  char c = 'a';
  int i = 100;
  long l = 1234567890;

  printf("(Pointers) char hex: %p, char dec: %lu\n", &c, &c);
  printf("(Pointers) int hex: %p, int dec: %lu\n", &i, &i);
  printf("(Pointers) long hex: %p, long dec: %lu\n", &l, &l);

  char *point_c = &c;
  int *point_i = &i;
  long *point_l = &l;

  printf("(Pointers) char: %p, int: %p, long %p\n", point_c, point_i, point_l);

  *point_c = 'b';
  *point_i++;
  *point_l -= 987654321;

  printf("(Modified) char: %c, int: %d, long: %ld\n", c, i, l);


  unsigned int ui = 123;
  int *int_point_ui = &ui;
  char *char_point_ui = &ui;

  printf("int_point: %p int_point points to: %u\n", int_point_ui, *int_point_ui);
  printf("char_point: %p char_point points to: %u\n", char_point_ui, *char_point_ui);

  printf("ui hex: %x, ui dec: %u\n", ui, ui);

  int count;

  printf("char byte: ");
  for (count = 0; count < 4; count++) {
    printf("hex: %hhx, dec: %hhu ", *(char_point_ui + count), *(char_point_ui + count));
  }
  printf("\n");

  printf("increment by 1: ");
  for (count = 0; count < 4; count++) {
    (*(char_point_ui + count))++;
    printf("hex: %p, dec: %lu\t", &ui, &ui);
  }
  printf("\n");

  printf("char byte: ");
  for (count = 0; count < 4; count++) {
    printf("hex: %hhx, dec: %hhu ", *(char_point_ui + count), *(char_point_ui + count));
  }
  printf("\n");

  printf("increment by 16: ");
  for (count = 0; count < 4; count++) {
    (*(char_point_ui + count)) += 16;
    printf("hex: %p, dec: %lu\t", &ui, &ui);
  }
  printf("\n");

  printf("char byte: ");
  for (count = 0; count < 4; count++) {
    printf("hex: %hhx, dec: %hhu ", *(char_point_ui + count), *(char_point_ui + count));
  }
  printf("\n");


  return 0;
}