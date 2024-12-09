using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractExample
{
    public abstract class Company
    {
        public string CompanyDetails()
        {
            return "Software development Company";
        }
        abstract public string CompanyName();
    }
}
