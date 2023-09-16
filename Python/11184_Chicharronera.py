import math
Cad=input()
n=[int(n) for n in Cad.split()]
x1=(-n[1]+math.sqrt((n[1]*n[1])-(4*n[0]*n[2])))/(2*n[0])
x2=(-n[1]-math.sqrt((n[1]*n[1])-(4*n[0]*n[2])))/(2*n[0])
print(x1,x2)