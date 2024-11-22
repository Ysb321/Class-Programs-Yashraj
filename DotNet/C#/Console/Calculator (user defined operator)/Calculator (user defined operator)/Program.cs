using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator__user_defined_operator_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Arithmatic arithmaticObj = new Arithmatic();
            Console.WriteLine("Enter a First Number: ");
            int firstNumber = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Enter a Operator like (+ - / *)");
            char arithOperator = Convert.ToChar(Console.ReadLine());
            Console.WriteLine("Enter a Second Number: ");
            int secondNumber = Convert.ToInt16(Console.ReadLine());
            int Addition = arithmaticObj.Add(firstNumber, arithOperator, secondNumber);
            Console.WriteLine("Addition is : " + Addition);
            Console.ReadLine();
        }
    }
}
