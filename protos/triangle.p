set terminal postscript
set output "triangle.eps"
set xlabel 'x'
set ylabel 'y'
plot "triangle.txt" u 1:3,"triangle.txt" u 1:4, "triangle.txt" u 2:3
set term x11