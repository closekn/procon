bool isPrime(int num) {
  if (num < 2)      { return false; }
  if (num == 2)     { return true; }
  if (num % 2 == 0) { return false; }

  double sqrtNum = sqrt(num);
  for ( int i = 3; i <= sqrtNum; i += 2 ) {
    if ( num % i == 0 ) { return false; }
  }

  return true;
}

bool isPrime(int x) {
  for ( int i = 2; i * i <= x; i++ ) {
    if ( x%i == 0 ) { return false; }
  }
  return true;
}