#include <stdio.h>
int filter(int size);
int main() {
  int len = 0;
  char buf[256];
  printf("length: ");
  scanf("%d\n", &len);
  if(filter(len)) {
    fgets(buf, len, stdin);
  }
  printf("buf: %s\n", buf);
  return 0;
}

int filter(int size) {
  return size < 256;
}
