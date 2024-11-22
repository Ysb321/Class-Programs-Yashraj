using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator__user_defined_operator_
{
    internal class Arithmatic
    {
        public int Add(int firstNumber, char arthOperator, int secondNumber)
        {
               return firstNumber + arthOperator + secondNumber;
        }
    }
}
