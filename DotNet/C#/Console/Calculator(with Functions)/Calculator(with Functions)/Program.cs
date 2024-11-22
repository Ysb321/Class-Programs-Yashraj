using Calculator_with_Functions_;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator_with_Functions_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Arithmatic arithmaticObj = new Arithmatic();
            Console.WriteLine("Enter a First Number: ");
            int firstNumber = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter a Second Number: ");
            int secondNumber = Convert.ToInt32(Console.ReadLine());
            int addition = arithmaticObj.Add(firstNumber, secondNumber);
            int substraction = arithmaticObj.Sub(firstNumber, secondNumber);
            int multiplication = arithmaticObj.Multi(firstNumber, secondNumber);
            int division = arithmaticObj.Div(firstNumber, secondNumber);
            Console.WriteLine("Addition of "+ firstNumber + " and " + secondNumber + " : " + addition);
            Console.WriteLine("Substraction of " + firstNumber + " and " + secondNumber + " : " + substraction);
            Console.WriteLine("Multiplication of " + firstNumber + " and " + secondNumber + " : " + multiplication);
            Console.WriteLine("Division of " + firstNumber + " and " + secondNumber + " : " + division);
            Console.ReadLine();
        }
    }
}
