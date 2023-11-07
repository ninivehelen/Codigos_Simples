import random
import hashlib

def primos():
    # Geração de primos
    q = 11
    p = 23
    g = 5

    # Chave privada x  
    x = random.randint(1, q-1)

    # Chave pública y
    y = pow(g, x, p)

    return p, q, g, x, y

def assinar_mensagem(p, q, g, x, mensagem):
    # Escolher um valor aleatório k
    valor_aleatorio = random.randint(1, q-1)

    # Calcular r
    r = pow(g,  valor_aleatorio , p) % q

    # Calcular s
    hash_mensagem = int.from_bytes(hashlib.sha256(mensagem).digest(), byteorder='big')
    k_inv = pow( valor_aleatorio , -1, q)
    s = (k_inv * (hash_mensagem + x * r)) % q

    return r, s

def verificar_assinatura(p, q, g, y, mensagem, r, s):
    # Calcular w
    w = pow(s, -1, q)

    # Calcular u1 e u2
    hash_mensagem = int.from_bytes(hashlib.sha256(mensagem).digest(), byteorder='big')
    u1 = (hash_mensagem * w) % q
    u2 = (r * w) % q

    # Calcular v
    v = (pow(g, u1, p) * pow(y, u2, p) % p) % q

    return v == r

if __name__=="__main__": 
    p, q, g, x, y = primos()
    mensagem = b"mensagem criptografar"

    r, s = assinar_mensagem(p, q, g, x, mensagem)
    print("Assinatura:", (r, s))

    # Verificar a assinatura
    verificacao = verificar_assinatura(p, q, g, y, mensagem, r, s)
    if verificacao:
        print("Assinatura válida!")
    else:
        print("Assinatura inválida.")
