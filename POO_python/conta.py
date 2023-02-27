class Conta():
  def __init__(self,numero, titular, saldo, limite):
     #Duas ___ é para privar o atributo, python não possui uma palavra chave, possui __ para privar o atributo
     self.__numero = numero
     self.__titular = titular
     self.__saldo = saldo
     self.__limite = limite

  def extrato(self):
    print(f'O saldo da sua conta é:',self.__saldo,self.__titular)
  
  def depositar(self,valor):
     self.__saldo += valor

  def sacar(self,valor):
    self.__saldo -= valor
  
  #Encapsulamento usando um metodo para fazer ações dentro do metodo.
  def transfere(self,valor_transfere, destino):
     self.sacar(valor_transfere)
     destino.depositar(valor_transfere)

  #metodo para mostrar apenas o valor do saldo
  def geter_saldo(self):
      return self.__saldo
  
  def geter_limite(self):
      return self.__limite

  #metodo para setar um valor, adicionando novo saldo
  def set_depositar(self,valor_novo):
      self.__saldo += valor_novo
  
  def set_aumenta_limite(self,novo_limite):
     self.__limite = novo_limite

conta = Conta(1,'Paula',1000,2000)
conta.extrato()

conta2 = Conta(2,'Marcos', 100.0, 1000.0)
conta2.extrato()

conta2.transfere(10, conta)
conta.extrato()
conta2.extrato()

print(conta.geter_saldo())

conta.set_depositar(20)
print(conta.geter_saldo())
conta.set_aumenta_limite(3000)
print(conta.geter_limite())