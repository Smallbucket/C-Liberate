#include <stdio.h>

struct weapon {
  int price;
  int atk;
  struct weapon * next;
};

int main() {
  struct weapon a, b, c, *head;
  a.price = 100;
  a.atk = 200;
  b.price = 300;
  b.atk = 400;
  c.price = 500;
  c.atk = 600;

  head = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;

  struct weapon *p;
  p = head;

  while(p != NULL) {
    printf("%d, %d\n", p->price, p->atk);
    p = p->next;
  }

  return 0;
}
