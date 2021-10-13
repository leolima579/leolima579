#include <stdio.h>

main()
{
    float salary,tax,less;
    tax = 0;
        scanf("%f",&salary);



        if(salary>4500.00)
        {
            tax = tax +((salary-4500.00)*0.28);
            less = salary-4500.00
        }
        if(salary>3000.01 && salary<4500.00)
        {
            tax = tax +(((salary-3000)-less)*0.18);
        }
        if(salary>2000.00 && salary<3000.00)
        {
            tax = tax+((salary-2000)*0.08);
        }

        if(salary>2000.00 && salary <= 3000.00)
        {
            tax = tax + (salary * 0.08);
        }
        if(salary<=2000.00)
            {
            printf("Isento");
            }
            else
            {
            printf("%.2f",tax);
            }



    return 0;
}
