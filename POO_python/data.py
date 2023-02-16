from datetime import date
class Data():
  def __init__(self,dia, mes,ano):
     self.dia = dia
     self.mes = mes
     self.ano = ano
  
  def formatada(self):
    dia = self.dia
    mes = self.mes
    ano = self.ano
    data_fomat = date(ano, mes, dia)
    data_brasileira = data_fomat.strftime("%d/%m/%Y")
    print(data_brasileira)

d = Data(21,11,2007)
d.formatada()


# conta = Conta(1, "Fulano", 0.0, 1000.0)
# print(conta)