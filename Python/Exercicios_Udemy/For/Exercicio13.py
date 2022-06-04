cont_P = 0
cont_I = 0
while  True:
    n = int(input("Digite um numero"))
    if(n<0 or n ==0):
       break
    elif(n%2==0):
        cont_P = cont_P + 1
    elif(n%2!=0):
        cont_I = cont_I +1
print("Quantidade de numeros pares", cont_P)
print("Quantidade de numeros impares", cont_I)





