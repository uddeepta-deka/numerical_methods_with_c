set terminal postscript solid color 22
set output "rootprob4.eps"
set xlabel 'x'
set ylabel 'y'
plot "rootprob4.txt" u 1:2 
set terminal x11
