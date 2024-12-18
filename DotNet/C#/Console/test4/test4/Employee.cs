using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test4
{
    public class Employee
    {
        static Employee()
        {
            Console.WriteLine("This is a Default Constructor");
        }
        public static string FirstName { get; set; }
        public static string LastName { get; set; }
            
        public static string Address { get; set; }
    }
}
