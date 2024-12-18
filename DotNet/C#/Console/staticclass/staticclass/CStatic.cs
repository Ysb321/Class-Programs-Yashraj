using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace staticclass
{
    static class CStatic
    {
        static CStatic() // This Constructor always call
        {
            Console.WriteLine("This is Static Constructor");
        }

        //public static CStatic()
        //{
        //    Console.WriteLine("This is non Static Constructor");
        //}
        public static void Hello()
        {
            Console.WriteLine("yashraj");
        }
        public static string Hello(int num)
        {
            return "Yash" + num;
        }

    }
}
