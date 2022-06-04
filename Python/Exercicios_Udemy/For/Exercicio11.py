cont = 0
soma = 0
while True:
    n1 = int(input("Digite um numero"))
    if(n1<0 or n1>10):
        break
    else:
        cont = cont +1
        soma = soma + n1
print("A soma das numeros é" , soma)
print("A  quantidade de numeros digitatos é", cont)
