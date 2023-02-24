namespace caseStudy2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Emp e = new Emp(801);
            e.id = 101;
            e.name = "ibrahim";
            e.sal = 1000;
            e.calTax();
            Emp.counter++;

            Emp e2= new Emp(701);
            e2.id = 102;
            e2.name = "zyad";
            e2.sal = 2000;
            e2.calTax();
            Emp.counter++;

            Console.WriteLine(e.name);
            Console.WriteLine(e2.name);

            Emp e3 = new Emp();
        }
    }

    public class Emp
    {


       //properties
       public int id ;
       public string name;
       public int sal ;
       
        
       public static int counter;

    
       //Constructor
        public Emp(int i)
        {
            id = i;
        }
        public Emp(string n)
        {
            name = n;
        }

        public Emp(int i,string n)
        {
            id = i;
            name = n;
        }
        public Emp()
        {
           
        }


        //methods
        public void calTax() 
        {
            double tax = sal * 0.05;
            Console.WriteLine(tax);
        
        
        
        }



        public void calDis() 
        {
            double Dis = sal - 500;
            Console.WriteLine(Dis);
        
        
        }

    }





}