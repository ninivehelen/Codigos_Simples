from random import randint
from time import sleep
from emoji import emojize

def JOGO():
    intens = ('Pedra', 'Papel', 'Tesoura')
    computador = randint(0, 2)
    print("Bem-Vindo(a) ao jogo JOKENPO. Seu adversário é o computador")
    print("*"*10)
    print(emojize('[0] Para Pedra :fist:', use_aliases=True,))
    print(emojize('[1] Para Papel :hand:', use_aliases=True))
    print(emojize('[2] Para Tesoura :v:', use_aliases=True))
    jogador = int(input("Faça sua escolha\n"))
    if(jogador == 0 or jogador ==1 or jogador== 2):
        print("JO")
        sleep(1)
        print("KEN")
        sleep(1)
        print("PO!!")
        sleep(1)
        print("*"*10)
        print("Você Jogou {}".format(intens[jogador]))
        print("Computador Jogou {}".format(intens[computador]))
        print("*"*10)
        if computador == 0:
            if jogador == 0:
                print("Empate\U0001F611")
                print("Aperte enter para voltar ao MENU")
            elif jogador == 1:
                print("Jogador Venceu\U0001F600")
                print("Aperte enter para voltar ao MENU")
            elif jogador == 2:
                print("Computador Venceu\U0001F600")
                print("Aperte enter para voltar ao MENU")

        elif (computador == 1):
            if jogador == 0:
                print("Computador Venceu\U0001F600")
                print("Aperte enter para voltar ao MENU")
            elif jogador == 1:
                print("Empate\U0001F611")
                print("Aperte enter para voltar ao MENU")
            elif jogador == 2:
                print("Jogador Venceu\U0001F600")
                print("Aperte enter para voltar ao MENU")

        elif (computador == 2):
            if (jogador == 0):
                print("Jogador Venceu\U0001F600")
                print("Aperte enter para voltar ao MENU")
            elif (jogador == 1):
                print("Computador Venceu\U0001F600")
                print("Aperte enter para voltar ao MENU")
            elif (jogador == 2):
                print("Empate\U0001F611")
                print("Aperte enter para voltar ao MENU")
    else:
        print("Opção invalida\U0001F644")
        JOGO()

while True:
    print("*"*10)
    print('[1] Para Jogar o Jogo\U0001F973:')
    print('[2] Para Sair do jogo\U0001F97A:')
    print("*"*10)
    try:
        op = int(input("Faça sua escolha: "))
    except:
        print("Opção invalida\U0001F644")
        input()
        continue
    if op == 1:
       JOGO()
    elif op == 2:
        print("Voce Saiu do JOGO\U0001F97A")
        break
    else:
        print("Opção invalida\U0001F644")
    input()
