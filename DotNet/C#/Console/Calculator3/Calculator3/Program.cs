using Calculator;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cal obj = new Cal(); // Cal class calling from calculator.dll file
            string message = obj.GetMessage(); // GetMessage present inside a Class Cal
            Console.WriteLine(message);
            int addition = obj.Addition(12, 22);
            Console.WriteLine(addition);
            Console.ReadLine();
        }
    }
}
