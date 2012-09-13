#include <stdio.h>

int main(int argc, const char *argv[])
{
  // go through each string in argv

  int i = 0;
  while(i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // let's make our own array of strings
  char *states[] = {
    "california", "oregon",
    "washington", "texas"
  };

  int num_states = 4;
  i = 0; // watch for this
  while(i < num_states) {
    printf("state %d: %s\n", i, states[1]);
    i++;
  }

  return 0;
}
