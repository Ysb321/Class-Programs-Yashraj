using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace interfaceExample
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            Console.WriteLine("Name: " + dog.Type());
            Console.WriteLine("Legs: " + dog.Legs());
            Console.ReadLine();
        }
    }
}
