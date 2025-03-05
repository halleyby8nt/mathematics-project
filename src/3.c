int get_random(int min, int max) {
  int random = rand() % (max - min + 1);
  return random + min;
}