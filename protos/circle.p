set terminal postscript
set output "circle.eps"
set xlabel "x"
set ylabel "y"
set xrange [0:10]
set yrange [0:10]
plot "circle.txt" u 1:2 title "circle with radius 3"
set term x11
