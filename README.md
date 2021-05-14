# Mandelbrot Set

The Mandelbrot set is the set of values of c in the complex plane for which the orbit of the critical point z = 0 under iteration of the quadratic map

 **{\displaystyle z_{n+1}=z_{n}^{2}+c}{\displaystyle z_{n+1}=z_{n}^{2}+c}**
 
## C code to print Mandelbrot set 

The code is in <span style="color:blue"> C language </span> . I have not used `c++  #include<complex.h> ` ,
Since the check for **z<sub> n </sub> <= |2|** is done till z<sub>100000</sub> the progra runs a bit slow
### Calculation of **z<sub> n </sub> is done in the function  <span style="color:green"> **set()** </span> 

**<span style="color:green"> set()</span>** has parameters i and j ,
which are the real and  imagibnary part of complex no. **c** given in the above equation for z<sub>0</sub> = 0

More specifically, a point {\displaystyle c}c belongs to the Mandelbrot set if and only if {\displaystyle |z_{n}|\leq 2}{\displaystyle |z_{n}|\leq 2} for all {\displaystyle n\geq 0}n\geq 0. In other words, the absolute value of {\displaystyle z_{n}}z_{n} must remain at or below 2 for {\displaystyle c}c to be in the Mandelbrot set, {\displaystyle M}M, as if that absolute value exceeds 2, the sequence will escape to infinity.
