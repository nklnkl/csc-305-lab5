unsigned int static n = 71000;

int main () {
  unsigned int sum = 0;
  for (unsigned int i = 0; i < n; i++) {
    for (unsigned int j = 0; j < n; j++) {
      sum += 1;
    }
  }
  return sum;;
}