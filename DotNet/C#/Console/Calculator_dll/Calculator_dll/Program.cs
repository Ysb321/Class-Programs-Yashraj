using classCW;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator_dll
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Class1 obj = new Class1();

            int addition = obj.Add(12, 12);
            int sub = obj.Sub(12, 12);
            int multi = obj.Multi(12, 12);
            int div = obj.Div(12, 12);

            Console.WriteLine("Addition is:" + addition);
            Console.WriteLine("Sub is:" + sub);
            Console.WriteLine("Multi is:" + multi);
            Console.WriteLine("Div is:" + div);

            Console.ReadLine();
        }
    }
}
