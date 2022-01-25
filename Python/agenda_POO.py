class Contato:

    def __init__(self):
        self.lista = []

    def iniciarContato(self):
        contato = open("agenda", "a")
        contato.close()

    def SalvarContato(self):
        contato = open("agenda.txt", "w")
        self.lista.sort()
        for elemento in self.lista:
            contato.write(elemento+"\n")
        contato.close()

    def CriarContato(self):
        nome = input("Digite seu Nome: ")
        telefone = input("Digite seu Telefone: ")
        email = input("Digite seu E-mail: ")
        twitter = input("Digite seu usuário do Twitter: ")
        facebook = input("Digite seu usuário do Facebook: ")
        instagram = input("Digite seu usuário do Instagram: ")
        self.lista.append(nome+"."+telefone+"."+email+"." +
                          twitter+"."+facebook+"."+instagram)

    def ImprimirContato(self):
        self.lista.sort()
        for elemento in self.lista:
            lista_Contato = elemento.split('.')
            print("Nome: " + lista_Contato[0])
            print("Telefone: " + lista_Contato[1])
            print("E-mail: " + lista_Contato[2])
            print("Twitter: " + lista_Contato[3])
            print("Facebook: " + lista_Contato[4])
            print("Instagram: " + lista_Contato[5])
            print("--------------------")

    def BuscarContato(self):
        nome = input("Digite um nome para excluír do cadastro: ")
        Noencontrado = True
        for elemento in self.lista:
            Lista_contato = elemento.split('.')
            if nome in Lista_contato[0]:
                print("Nome: " + Lista_contato[0])
                print("Telefone: " + Lista_contato[1])
                print("E-mail: " + Lista_contato[2])
                print("Twitter: " + Lista_contato[0])
                print("Facebook: " + Lista_contato[1])
                print("Instagram: " + Lista_contato[2])
                print("--------------------")

                Noencontrado = False
        if Noencontrado == True:
            print("Contato não encontrado")

    def ExcluirContato(self):
        nome = input("Insira um nome para excluir da agenda: ")
        Noencontrado = True
        for elemento in self.lista:
            Lista_contato = elemento.split('.')
            if nome in Lista_contato[0]:
                self.lista.remove(elemento)
                Noencontrado = False
        if Noencontrado == True:
            print("Contato não encontrado")


lista_contato = Contato()
lista_contato.iniciarContato()
while True:
    print("1.- Adicionar Contato")
    print("2.- Mostrar Contatos")
    print("3.- Pesquisar Contato")
    print("4.- Excluir Contato")
    print("5.- Sair e Salvar Agenda")
    try:
        op = int(input("Escolha uma opção. : "))
    except:
        print("Opção invalida ")
        input()
        continue
    if op == 1:
        lista_contato.CriarContato()
    elif op == 2:
        lista_contato.ImprimirContato()
    elif op == 3:
        lista_contato.BuscarContato()
    elif op == 4:
        lista_contato.ExcluirContato()
    elif op == 5:
        lista_contato.SalvarContato()
        break
    else:
        print("Opção invalida")
    input()
