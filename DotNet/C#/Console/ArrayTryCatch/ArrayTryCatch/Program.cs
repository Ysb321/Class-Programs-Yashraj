using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArrayTryCatch
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                //int[] arr = { 2, 5 };
                int[] arr = new int[2] { 1, 2 };
                Console.WriteLine(arr[1]);

            } catch (Exception ex)
            {
                Console.WriteLine(ex.Message); // show the message of error only
                Console.WriteLine(ex.InnerException);
                //throw ex; // showing error to user by using throw
            }finally // this block always will run at end a
            {
                Console.WriteLine("This code will executed");
                Console.ReadLine();
            }
        }
    }
}
