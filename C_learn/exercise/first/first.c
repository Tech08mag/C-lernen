#include <stdio.h>

int main() {

  // pointer demo to FILE
  FILE *demo;

  // Creates a file "demo_file"
  // with file access as write-plus mode
  demo = fopen("demo.txt", "w");

  // adds content to the file
  fwrite("Mina", 1, 4, demo);

  // closes the file pointed by demo
  fclose(demo);

  return 0;
}