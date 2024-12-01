using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    internal class Company
    {
    
        protected internal string CompanyName()
        {
            return "TCS";
        }
    }

    internal class Manage : Company
    {
        protected string ManageName()
        {
            //return CompanyName(); // Inheritance of method
            string sd = CompanyName();
            return sd;
       
        }
    }

    internal class Employee : Company
    {

    }


}
