using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator1
{
    internal class Program
    {
        static void Main(string[] args) // Main is Startup is
        {
            Arithmatic arithmaticObj = new Arithmatic();
            int addition = arithmaticObj.Add(12,22);
            int substraction = arithmaticObj.Sub(22, 11);
            int multiplication = arithmaticObj.Multi(21, 12);
            int division = arithmaticObj.Div(33, 11);
            Console.WriteLine("Addition of 12 and  22 is " + addition); // + is concact
            Console.WriteLine("Substraction of 22 and 11 is " + substraction);
            Console.WriteLine("Multiplication of 21 and 12 is " + multiplication);
            Console.WriteLine("Division of 33 and 11 is " + division);
            Console.ReadLine();
        }
    }
}
