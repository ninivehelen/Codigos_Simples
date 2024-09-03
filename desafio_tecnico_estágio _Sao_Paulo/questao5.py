palavra_original = "teste"

def inverter_string(palavra):
    palavra_invertida = ""
    
    for i in range(len(palavra) - 1, -1, -1):
        palavra_invertida += palavra[i]
    
    return palavra_invertida

if __name__ == "__main__":
   palavra_invertida = inverter_string(palavra_original)
   print("Palavra original:", palavra_original)
   print("Palavra invertida",palavra_invertida)





