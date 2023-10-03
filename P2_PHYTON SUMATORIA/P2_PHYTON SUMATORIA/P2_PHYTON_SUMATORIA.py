#Maria Jose Reyes Fuentes 3-J LCS python

NUM = 8
nums = [0] * NUM 
total = 0
for i in range(NUM):
        nums[i] = int(input("Por favor, introduzca el numero: "))
        total += nums[i]
        print("El total de numeros es: ", total)
