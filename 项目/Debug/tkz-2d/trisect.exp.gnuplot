set terminal table; set output "trisect.exp.table"; set format "%.5f"
set samples 25; plot [x=0:4] sin(x)*exp(x)
