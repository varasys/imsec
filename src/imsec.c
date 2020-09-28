#include <sodium.h>

int main( int argc, char *argv[] ) {
  /* initialize sodium */
  if (sodium_init() < 0) {
    printf("fatal: failed to initialize libsodium");
    return 1;
  }

  if ( argc > 0 ) {
    printf("You want to run the %s command\n", argv[1]);
  } else {
    printf("error: missing command line arguments");
    return 1;
  }

  return 0;
}
