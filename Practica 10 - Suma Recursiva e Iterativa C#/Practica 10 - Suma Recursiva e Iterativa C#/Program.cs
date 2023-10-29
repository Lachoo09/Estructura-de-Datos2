// Practica 10 - Suma Recursiva e Iterativa C#
// Horacio Moreno Hernandez 3 - J
using System;
class Program
{
    static int SumaRecursiva(int n)
    {
        if (n <= 9)
            return n;
        else
            return SumaRecursiva(n / 10) + n % 10;
    }

    static int SumaIterativa(int n)
    {
        int suma = 0;
        while (n > 9)
        {
            suma += n % 10;
            n /= 10;
        }
        suma += n;
        return suma;
    }

    static void Main()
    {
        int OP, NUM;

        Console.Write("Digite un número para la suma: ");
        NUM = int.Parse(Console.ReadLine());

        Console.Write("Elija una de las dos opciones (1 para suma recursiva, 2 para suma iterativa): ");
        OP = int.Parse(Console.ReadLine());

        if (OP == 1)
        {
            Console.WriteLine("Resultado: " + SumaRecursiva(NUM));
        }
        else if (OP == 2)
        {
            Console.WriteLine("Resultado: " + SumaIterativa(NUM));
        }
        else
        {
            Console.WriteLine("Error, vuelva a escribir la opción.");
        }
    }
}