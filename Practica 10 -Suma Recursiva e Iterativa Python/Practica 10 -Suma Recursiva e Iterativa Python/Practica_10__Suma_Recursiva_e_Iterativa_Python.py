# Practica 10 Suma Recursiva e Iterativa PYTHON
# Horacio Moreno Hernandez 3-J

def suma_recursiva(n):
    if n <= 9:
        return n
    else:
        return suma_recursiva(n // 10) + n % 10

def suma_iterativa(n):
    suma = 0
    while n > 9:
        suma += n % 10
        n //= 10
    suma += n
    return suma

def main():
    OP = int(input("Digite un numero para la suma: "))
    NUM = int(input("Escoja una de las dos opciones (1 para suma recursiva, 2 para suma iterativa): "))

    if NUM == 1:
        print("Resultado:", suma_recursiva(OP))
    elif NUM == 2:
        print("Resultado:", suma_iterativa(OP))
    else:
        print("Error, vuelva a escribir la opcion.")

if __name__ == "__main__":
    main()