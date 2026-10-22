/*
Calculate Electricity Bill
Problem Statement: Accept the number of electricity units consumed and calculate the total bill using the 
following slab-wise rates. Each slab rate applies only to units within that slab.
Negative unit consumption is invalid.
Expected Output:
* Input: 80 → Bill = 400.00
* Input: 150 → Bill = 850.00
* Input: 250 → Bill = 1700.00

Units 
consumed Rate
First 100 units ₹5 per unit
Next 100 units ₹7 per unit
Above 200 units ₹10 per unit

*/

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f ;

    if( iUnits < 0)
    {
        printf("Invalid Unit");
    }

    else if(iUnits <= 100)
    {
        fBill = iUnits * 5 ;
        printf("Bill = %.2f\n" ,fBill);
    }

    else if(iUnits <= 200)
    {
        fBill =(100 *5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f\n" ,fBill);
    }

    else
    {
        fBill = (100 * 5) + (100 * 7) +((iUnits - 200) * 10);
    }
    
}

int main()
{
    int iUnits = 0 ;

    printf("Enter consumed Units :");
    scanf("%d" , &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}