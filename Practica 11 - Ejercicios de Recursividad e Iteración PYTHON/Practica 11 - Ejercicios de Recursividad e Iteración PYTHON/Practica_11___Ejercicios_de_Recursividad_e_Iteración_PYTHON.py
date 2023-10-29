# Practica 11 - Ejercicios de Recursividad e Iteración PYTHON
# Horacio Moreno Hernandez 3-J 

def main():
    NUM = int(input("Digite un numero: "))
    
    I = 1
    while I <= 12:
        RESULT = NUM * I
        print(f"{NUM} * {I} = {RESULT}")
        I += 1
    
    input("Presione Enter para salir")

if __name__ == "__main__":
    main()
