using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace interfaceExample
{
    public class Dog: IAnimal
    {
        public string Type() // Implimantation of that method
        {
            return "Dog";
        }
        public int Legs() // Implimantation of that method
        {
            return 4;
        }
    }
}
