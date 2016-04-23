void main(long t) {
  for (;;t++) {
    putchar(((t >> 11) % 4) * t);
  }
}
