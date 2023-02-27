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
  
  def eh_inadiplente(self, cliente):
      pass
     
conta = Conta(1,'Paula',1000,2000)
conta.extrato()

conta2 = Conta(2,'Marcos', 100.0, 1000.0)
conta2.extrato()

conta2.transfere(10, conta)
conta.extrato()
conta2.extrato()