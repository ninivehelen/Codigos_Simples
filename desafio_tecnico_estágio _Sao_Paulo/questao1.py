def soma():
    indice = 13
    soma = 0 ; k = 0
    while k < indice:
         k = k + 1 
         soma = soma + k
    return soma
        
if __name__ == "__main__":
    resultado = soma()
    print("Resultado da soma", resultado)