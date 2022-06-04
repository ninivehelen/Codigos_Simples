import random
def carrega_palavra_secreta():
    palavras = []
    with open("palavras.txt", "r", encoding="utf-8") as arquivo:
        for linha in arquivo:
            linha = linha.strip()
            palavras.append(linha)

    numero = random.randrange(0, len(palavras))
    palavra_secreta = palavras[numero].upper()
    return palavra_secreta

def vencedor(venceu):
    palavra = carrega_palavra_secreta()
    print("A palavra secreta era",palavra)
    if(venceu ==1):
        print("Parabéns, você ganhou!")
        print("       ___________      ")
        print("      '._==_==_=_.'     ")
        print("      .-\\:      /-.    ")
        print("     | (|:.     |) |    ")
        print("      '-|:.     |-'     ")
        print("        \\::.    /      ")
        print("         '::. .'        ")
        print("           ) (          ")
        print("         _.' '._        ")
        print("        '-------'       ")
        menu()

def perdeu_jogo(perdeu):
    if(perdeu == 7):
        print("Você se enforcou!")
        menu()

def desenha_forca(erros):
    print("  _______     ")
    print(" |/      |    ")


    if(erros == 1):
        print(" |      (_)   ")
        print(" |            ")
        print(" |            ")
        print(" |            ")

    if(erros == 2):
        print(" |      (_)   ")
        print(" |      \     ")
        print(" |            ")
        print(" |            ")

    if(erros == 3):
        print(" |      (_)   ")
        print(" |      \|    ")
        print(" |            ")
        print(" |            ")

    if(erros == 4):
        print(" |      (_)   ")
        print(" |      \|/   ")
        print(" |            ")
        print(" |            ")

    if(erros == 5):
        print(" |      (_)   ")
        print(" |      \|/   ")
        print(" |       |    ")
        print(" |            ")

    if(erros == 6):
        print(" |      (_)   ")
        print(" |      \|/   ")
        print(" |       |    ")
        print(" |      /     ")

    if (erros == 7):
        print(" |      (_)   ")
        print(" |      \|/   ")
        print(" |       |    ")
        print(" |      / \   ")

    print(" |            ")
    print("_|___         ")
    print()

def chute():
    chute = input("Qual letra? ")
    chute = chute.upper()
    return chute

def jogar():

 chute_certo = 0
 tentativa = 0
 erros = 0
 venceu =0
 perdeu =0
 print("A dica da palavra secreta é: Algo que tras equilibrio e paz ")
 while (tentativa <7 and venceu !=1):

    palavra_secreta = carrega_palavra_secreta()
    chute_jogador = chute()
    if(chute_jogador in palavra_secreta):
        print("Acertou")
        chute_certo = chute_certo + 1
        if ((chute_certo) == len(palavra_secreta)):
            venceu = venceu + 1
            vencedor(venceu)
    else:
      erros  = erros +1
      tentativa = tentativa + 1
      desenha_forca(erros)
      perdeu = perdeu + 1
      perdeu_jogo(perdeu)

def menu():
    op = 0
    while(op !=2):
     op =int (input("Digite a opção desejada. Aperte\n 1: para jogar 2: Para sair do jogo "))
     if(op ==1):
        jogar()
     if(op==2):
         break

if(__name__ == '__main__'):
   menu()


