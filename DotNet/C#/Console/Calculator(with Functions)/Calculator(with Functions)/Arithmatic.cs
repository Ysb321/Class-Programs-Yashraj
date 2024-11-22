using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator_with_Functions_
{
    internal class Arithmatic
    {
        public int Add(int firstNumber, int secondNumber)
        {
            return firstNumber + secondNumber;
        }

        public int Sub(int firstNumber, int secondNumber)
        {
            return firstNumber - secondNumber;
        }

        public int Multi(int firstNumber, int secondNumber)
        {
            return firstNumber * secondNumber;
        }

        public int Div(int firstNumber, int secondNumber)
        {
            return firstNumber / secondNumber;
        }
    }
}
