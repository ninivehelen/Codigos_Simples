P = 17
Q = 11
N = P * Q
Z = (P - 1) * (Q - 1)
D = 7

texto_original = 'OLA'
# Converter cada caractere para o seu código ASCII
texto_original_numero = [ord(palavra) for palavra in texto_original]

print("Texto original:", texto_original)

def numero_primo():
    for E in range(1, 1000):
        calculo = (E * D) % Z
        if calculo == 1:
            criptografia(E, texto_original_numero)
            break

def criptografia(E, texto_original_numero):
    criptografado_texto = [pow(palavra, E, N) for palavra in texto_original_numero]
    print("Texto criptografado:", criptografado_texto)
    descriptografar(criptografado_texto)

def descriptografar(criptografado_texto):
    descriptografar_texto = ''.join([chr(pow(palavra, D, N)) for palavra in criptografado_texto])
    print("Texto descriptografado:", descriptografar_texto)

if __name__ == "__main__":
    numero_primo()
