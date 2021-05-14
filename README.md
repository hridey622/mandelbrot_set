# Mandelbrot Set

The Mandelbrot set is the set of values of c in the complex plane for which the orbit of the critical point z = 0 under iteration of the quadratic map

 **z**<sub>n+1<\sub>=(**z**<sub>n<\sub>)<sup>2<\sup> **+** **c**
 
## C code to print Mandelbrot set 

The code is in <span style="color:blue"> C language </span> . I have not used `c++  #include<complex.h> ` ,
Since the check for **z<sub>n</sub> <= |2|** is done till z<sub>100000</sub> the progra runs a bit slow
### Calculation of **z**<sub> n </sub>is done in the function **set()** </span> 

**<span style="color:green">set()</span>** has parameters i and j ,
which are the real and  imagibnary part of complex no. **c** given in the above equation for z<sub>0</sub> = 0

More specifically, a point **c** belongs to the Mandelbrot set if and only if z<sub>n<\sub> is less than equal to |2| for all n belongs **R**. In other words, the absolute value of of z<sub>n<\sub> is at or below 2 for a particular c then that c belongs to the Mandelbrot set, **M** , as if that absolute value exceeds 2, the sequence will escape to **infinity**.
