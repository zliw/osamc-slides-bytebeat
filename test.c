void main(long t) {
  for (;;t++) {
    putchar(((t >> 11) & 3) * t);
  }
}
