using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace sealedClass
{
    public sealed class AccountInformation
    {
        public string AccountNumber {  get; set; }
        public string password {  get; set; }
    }

    public class AccountData
    {
        public AccountData()
        {
            Console.WriteLine("Account Data.");
        }

        public string AccountNumber { get; set; }
        public string Password { get; set; }
    }

    public class AccountData2 : AccountData
    {
        public AccountData2()
        {
            Console.WriteLine("Account Data 2.");
        }

        public string AccountNumber2 { get; set; }
        public string Password2 { get; set; }
    }
}
