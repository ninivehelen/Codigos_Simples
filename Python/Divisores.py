import numpy as np   # biblioteca utilizada para fazer a multiplicação da potencia dos divisores 

#funçao para calcular a fatoracao numero_primo
def fatoracao_numero_primo(n):
    divisores = []
    d = 2
    while n > 1: 
        if n%d == 0:
            n = n/d
            divisores.append(d)
            
        else:
            d += 1
    numero_divisores(divisores)  # adicionando a lista a decomposição do numero

#função para calcular o total de divisores do numero
def numero_divisores(divisores):
   counter = {}  # dicionario vazio para adicionar os divisores 
   for i in divisores:
       counter[i] = counter.get(i, 0) + 1  # contando a frequencia que os numeroa aparece da decomposição dos numeros
   potencia_divisores = counter.values() #Como foi utilizado dicionário, preciso apenas do valor da quantidade de vezes que o numero aparece apos sua divisao na funçao de fatoraçao
   total_divisores(potencia_divisores)  # passand para funçao total divisores apenas a quantidade de vezes que o numero aparece apos a decomposição do numero/ dua divisao da funçao acima
   
def total_divisores(potencia_divisores):
    list_div = [] # criando uma lista vazia
    list_divisores = list(potencia_divisores) #convertendo o dicionario passado para funçao para list, para poder usar funções que a lista permite
    for divisores_potencia in list_divisores: # pecorrendo os valores da lista para fazer os calculos necessario
        divisores_multi = divisores_potencia+1  # somando por um cada valor da potencia dos numeros
        list_div.append(divisores_multi) # apos a soma adicionado a lista vazia 
    total_divi_numero = np.prod(list_div) # utilizando np para fazer o produto dos numeros apos a soma, para nao ter que pecorrer e ficar mais rapido o processo
    print(total_divi_numero) # mostrando a soma total de divisores.

#menu principal que faz a chamada da primeira função
if __name__ == '__main__':
    n = int(input())
    fatoracao_numero_primo(n)