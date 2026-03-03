print("¡Bienvenido al programa de estructura de selección!")
numero1 = int(input("Introduzca el primer número: "))
numero2 = int(input("Introduzca el segundo número: "))
numero3 = int(input("Introduzca el tercer número: "))

#en caso de que todos los números sean iguales
if numero1 == numero2 and numero2 == numero3:
    print("Todos los números son iguales.")

#en caso de que haya dos números iguales y un tercero diferente
elif numero1 == numero2 and numero1 > numero3:
    print(f"El primer número {numero1} y segundo número {numero2} son iguales, el tercer número {numero3} es el menor")
elif numero1 == numero2 and numero1 < numero3:
    print(f"El primer número {numero1} y segundo número {numero2} son iguales, el tercer número {numero3} es el mayor")

elif numero3 == numero2 and numero3 > numero1:
    print(f"El segundo número {numero2} y tercer número {numero3} son iguales, el primer número {numero1} es el menor")
elif numero3 == numero2 and numero3 < numero1:
    print(f"El segundo número {numero2} y tercer número {numero2} son iguales, el primer número {numero1} es el mayor")

elif numero1 == numero3 and numero1 > numero2:
    print(f"El primer número {numero1} y tercer número {numero3} son iguales, el segundo número {numero2} es el menor")
elif numero1 == numero3 and numero1 < numero2:
    print(f"El primer número {numero1} y tercer número {numero3} son iguales, el segundo número {numero2} es el mayor")

#en caso de que todos los números sean diferentes
elif numero1 > numero2 and numero1 > numero3:
    print(f"El primer número {numero1} es el mayor.")
    if numero2 > numero3:
        print(f"El segundo número {numero2} es el del medio.")
        print(f"El tercer número {numero3} es el menor.")
    elif numero3 > numero2:
        print(f"El tercer número {numero3} es el del medio.")
        print(f"El segundo número {numero2} es el menor.")

elif numero2 > numero1 and numero2 > numero3:
    print(f"El segundo número {numero2} es el mayor.")
    if numero1 > numero3:
        print(f"El primer número {numero1} es el del medio.")
        print(f"El tercer número {numero3} es el menor.")
    elif numero3 > numero1:
        print(f"El tercer número {numero3} es el del medio.")
        print(f"El primer número {numero1} es el menor.")

elif numero3 > numero1 and numero3 > numero2:
    print(f"El tercer número {numero3} es el mayor.")
    if numero1 > numero2:
        print(f"El primer número {numero1} es el del medio.")
        print(f"El segundo número {numero2} es el menor.")
    elif numero2 > numero1:
        print(f"El segundo número {numero2} es el del medio.")
        print(f"El primer número {numero1} es el menor.")


