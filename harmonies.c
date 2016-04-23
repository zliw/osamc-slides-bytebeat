void main(long t) {
  for (;;t++) {
    putchar((t >> 5) & t);
  }
}
