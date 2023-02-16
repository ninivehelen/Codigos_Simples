class Conta():
  def __init__(self,numero, titular, saldo, limite):
     print("conta")
     self.numero = numero
     self.titulo = titular
     self.saldo = saldo
     self.limite = limite

  def extrato(self):
    print(f'O saldo da sua conta é:',self.saldo)

  def depositar(self,valor):
     self.saldo += valor

  def sacar(self,valor):
    self.saldo -= valor

conta = Conta(1,'Paula',1000,2000)
conta.extrato()
conta.depositar(20)
conta.extrato()
conta.sacar(4)
conta.extrato()







# conta = Conta(1, "Fulano", 0.0, 1000.0)
# print(conta)