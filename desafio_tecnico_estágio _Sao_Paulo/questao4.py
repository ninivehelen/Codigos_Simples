faturamento_estados = [
    {"estado": "SP", "valor": 67836.43},
    {"estado": "RJ", "valor": 36678.66},
    {"estado": "MG", "valor": 29229.88},
    {"estado": "ES", "valor": 27165.48},
    {"estado": "Outros", "valor": 19849.53}
]
valor = [estado["valor"] for estado in faturamento_estados]

def calcular_faturamento_estados():
     percentuais = []
     soma = 0 
     faturamento_total = 0
     for soma_estado in valor:
         soma = soma + soma_estado 

     for porcentagem in faturamento_estados:
         porcento = (porcentagem["valor"] / soma) * 100
         percentuais.append({"estado":porcentagem["estado"], "percentual": porcento})
         
     for lista_estados in percentuais:
        print(f"Estado: {lista_estados['estado']}, Percentual: {lista_estados['percentual']:.2f}%")
         
if __name__ == "__main__":
   calcular_faturamento_estados()
    
    