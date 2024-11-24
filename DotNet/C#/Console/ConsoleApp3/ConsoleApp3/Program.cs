using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;

            Console.WriteLine("Enter a Number");
            num=Convert.ToInt32(Console.ReadLine());

            if(num%2==0)
            {
                Console.WriteLine("It is even");
            }
            else
            {
                Console.WriteLine("It is odd");
            }
            Console.ReadLine();
        }
    }
}
