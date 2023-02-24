using System.Security.Cryptography.X509Certificates;

namespace Calculator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
            calculators.add(30,40);
        }
    }





    public class calculators
    {
     
        
        public static void add(int fn,int sn)
        {
            int res = fn + sn;
            Console.WriteLine(res);
        }
        
        
        public static int sub(int fn,int sn)
        {
        
            int res = fn- sn;
            return res;
        }
       
        
        public static void add(int fn, int sn,int y)
        {
            int res = fn + sn + y;
            Console.WriteLine(res);
        }
        
        
        public static void add(int fn, string sn)
        {
          
        }
        
        
        public static void add(string fn, int sn)
        {
            
        }
   
    
    
    }





}