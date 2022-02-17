#include <stdio.h>
#include <time.h>

int main ()
{
  time_t saniye;   /* long saniye; anlamında */

  saniye = time (NULL);

  puts("01/01/2020'den bu gune kadar gecen sure,");

  printf ("Saniye olarak  %ld\n", saniye);

  /* 1 saat = 60*60 = 3600 sn. */
  printf ("Saat olarak    %ld\n", saniye/3600);

  /* 1 gün = 24 saat = 24*60*60 = 86400 sn. */
  printf ("Gun olarak     %ld\n", saniye/86400);

 return 0;
}
