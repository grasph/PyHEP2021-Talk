#include <iostream>
#include <sys/time.h>

int main(){
  struct timeval t0, t1;
  gettimeofday(&t0, 0);
  double a = 0.;
  for(unsigned i = 1; i <= 1000000; ++i) a += 1.0/i;
  std::cout << "Computation Result: " << a << "\n";
  gettimeofday(&t1, 0);
  std::cerr << "Duration: " << (t1.tv_sec-t0.tv_sec)
    + 1.e-6*(t1.tv_usec-t0.tv_usec)
	    << " seconds\n";
  return 0;
}
