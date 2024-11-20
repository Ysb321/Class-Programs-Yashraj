using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Datatype
{
    internal class Program
    {
        static void Main(string[] args)
       {
            Console.WriteLine("Enter a Character:");
            char character = Convert.ToChar(Console.ReadLine()); // To Convert to char, it is typecasting to getting input from user
            Console.WriteLine("Character is:- " + character);

            Console.WriteLine("Enter a Integer Number:");
            int number = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Number is:- " + number);

            Console.WriteLine("Enter a Float Number:");
            decimal number2 = Convert.ToDecimal(Console.ReadLine());
            Console.WriteLine("Float Number is:- " + number2);

            Console.WriteLine("Enter a Boolean:");
            bool boolean = Convert.ToBoolean(Console.ReadLine());
            Console.WriteLine("Boolean is:- " + boolean);

            Console.WriteLine("Enter a String:");
            string line = Console.ReadLine();
            Console.WriteLine("String is:- " + line);
            //char character = Convert.ToChar('A');
            
            Console.ReadLine();
            // Read() is read single line .
            // Debug Checking code line by line.
            //Write() will not use endl where WriteLine() will be.
        }
    }
}
