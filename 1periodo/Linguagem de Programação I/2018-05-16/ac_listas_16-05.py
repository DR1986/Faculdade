'''
======== Atividade Continua =========
 Nome : Ramon C. Pires
 R.A. : 1800260
 S.I. - 1ºD noturno
=====================================
'''

#Escreva um programa que peça para o usuário entrar com
#um número n e utilize o Crivo de Eratóstenes
#para encontrar todos os primos menores ou iguais a n.

print("+---------------------+")
print("    EXERCÍCIO 9")
print("+---------------------+\n")

def criarLista(n):
    lista=[]
    for i in range(2, n+1):
        lista.append(i)
    return lista

def primos(lista):
    primos=[]
    tot = 0
    for i in lista:
       if (i%2!=0 or i==2) and (i%3!=0 or i==3) and (i%5!=0 or i==5) and (i%7!=0 or i==7):
           primos.append(i)    
    return primos
print(primos(criarLista(n=int(input("Digite um número: ")))))

