import random

numeros_aleatorios = []
for _ in range(100000):
    numeros_aleatorios.append(random.randint(0, 999999))

numeros_aleatorios.sort()  # Ordenar los números en orden creciente ou decrescente (reverse=True)

numeros_aleatorios = [str(num) for num in numeros_aleatorios]  # Convertir números a cadena

with open("entrada_c_3x10a5.txt", "w") as archivo:
    archivo.write(" ".join(numeros_aleatorios))
