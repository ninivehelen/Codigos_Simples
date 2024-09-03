import json

# Carrega os dados do JSON
with open('faturamento.json', 'r') as file:
    dados = json.load(file)

faturamento_diario = [dia['valor'] for dia in dados if dia['valor'] > 0.0]

def faturamento():
    maior_faturamento_dia  = 0
    aux = float('inf')
    soma_total = 0
    soma_dia = 0
    dia = 0
    mes = 0

    for i in faturamento_diario:
        if i < aux:
            aux = i
    print(f"O menor faturamento do dia: R${aux:.2f}")

    for i in faturamento_diario:
        if i > aux:
            aux = i
    print(f"O maior faturamento do dia: R${aux:.2f}")

    for i in faturamento_diario:
        soma_total += i
        media_mensal = soma_total / len(faturamento_diario)
        if i >  media_mensal:
               dia += 1
    print(f'Dias em que o faturamento foi maior que o faturamento mensal: {dia}')

if __name__ == "__main__":
    faturamento()
    