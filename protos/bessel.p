set terminal postscript solid color 22
set output "bessel.eps"
set xlabel 'z'
set ylabel 'j(z)'
plot "bessel.txt" u 1:2 title "j0", "bessel.txt" u 1:3 title "j1", "bessel.txt" u 1:4 title "j2"
set term x11
