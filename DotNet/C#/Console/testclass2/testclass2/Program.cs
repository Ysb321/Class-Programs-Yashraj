using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using testclass;

namespace testclass2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            add obj = new add();
            Console.WriteLine("Addition of two Number" + obj.Add(22, 23));
            Console.ReadLine();
        }
    }
}
