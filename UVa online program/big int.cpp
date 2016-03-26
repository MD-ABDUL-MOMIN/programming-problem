#include <stdio.h>
#include <gmp.h>
/* make sure to invoke gcc with -lgmp */
int main()
{
  mpz_t a, b, r;
  mpz_init(a);
  mpz_init(b);
  mpz_init(r);
  mpz_set_str(a, "314159265358979", 10); /* the 10 represents the radix */
  mpz_set_str(b, "271828182845904", 10); /* gmp can do 2 to 36 */
  mpz_mul(r, a, b);
  mpz_out_str(stdout, 10, r);
  putchar('\n');
  return 0;
}
