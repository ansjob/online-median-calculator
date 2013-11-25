online-median-calculator
========================

online median calculator implemented in c++


This was an exercise I was supposed to do during a phone interview for a developer position.
I wasn't quite happy with the solution I presented during the interview, and decided to implement this afterwards to reassure myself I could do ir properly.


The time complexity is O(n*log(n)) and the memory footprint is O(n) after reading n input integers.

TODO
====

* Implement more memory efficient version that counts occurances of each distinct element seen.
 This is for the use case where the input is a stream of bytes, the memory overhead becomes constant.
