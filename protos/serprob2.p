set terminal postscript solid color 22
set output "cosine.eps"
set xlabel 'x'
set ylabel 'cos x'
plot "cosine.txt" u 1:2 with linespoints 
set terminal x11
