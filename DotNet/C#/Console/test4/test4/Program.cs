using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int secondNum = Convert.ToInt32(Console.ReadLine());
                int num = Convert.ToInt32(12/secondNum);
                Console.WriteLine(num);
                Console.WriteLine(secondNum);

            }
            catch(Exception x)
            {
                Console.WriteLine(x.Message);
            }
            finally
            {
                Console.WriteLine("Cleanup the resources in try block");
                Console.ReadLine();
            }
        }
    }
}

