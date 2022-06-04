import math

num=float(input('Digite um número: '))
log1=math.log10(num)  #também podemos fazer: math.log(num,10)
log2=math.log(num,4)
print(f'O log de {num} na base 10 é {log1}')
print(f'O log de {num} na base 4 é {log2}')