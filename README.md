# pq-solver
A simple C program that solves the p and q to factor a quadratic polynomial.

# Installation
You can install pq-finder by compiling it with gcc (or any other compiler) or installing the binary (I recommend compiling directly).

# Usage
To use pq-solver, you must provide the a,b and c variable in the arguments.  
Here is an example with the trinomial 3x²+ 4x - 4  
```  
$ ./pq-solver 3 4 -4  
a: 3  
b: 4  
c:-4  

p:  2  
q: -6  
```  
The solver may return 2 answers as sometimes the signs are inversed and you may need to check which one is good. Also please note that this is a tool and could return imprecise answers, so always verify.
