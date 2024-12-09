using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractExample
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Employee empObj = new Employee();
            Console.WriteLine("Comapny Name: " + empObj.CompanyName());
            Console.WriteLine("Comapny Detail: " + empObj.CompanyDetails());
            Console.ReadLine();
        }
    }
}
