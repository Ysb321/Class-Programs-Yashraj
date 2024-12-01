using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPS_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Employee obj = new Employee(); // It will call default constructor.
            //Employee obj1 = new Employee("Parameterize Constructor");

            //obj.massage();
            //obj.massage("Hello"); // for Function Overloading then one is default another parameterize
            //obj.massasge();
           string name= obj.massasge("asd", 2, "abc");
            int name2 = obj.massasge("asd", "ssd");
            Console.WriteLine(name);
            Console.WriteLine(name2);

            Console.ReadLine();

        }
    }
}
