#include <iostream>
using namespace std;


int main() {

float bill=0, tax=0, tip=0, tax_bill=0, tip_bill=0, bill_person=0, tax_bill_result=0, tip_bill_result=0;
int persons;


std::cout <<"**** Program that split a restaurant bill evenly between a given number of people!\n\n";

std::cout <<"How much is the bill\n";
cin>>bill; cout<<"\n";

std::cout <<"How much is the Tax (%)\n";
cin>>tax; cout<<"\n";

std::cout <<"How much is the Tip (%)\n";
cin>>tip; cout<<"\n";

std::cout <<"How many peole are paying\n";
cin>>persons; cout<<"\n";
//convert in pocentage
tax = tax/100;
tip = tip/100;

//calculate 

tax_bill = (bill * tax);
tax_bill_result = (tax_bill + bill);

tip_bill = ( tax_bill_result * tip);
tip_bill_result = ( tip_bill + tax_bill_result );

bill_person = (tip_bill_result/ 3); 


//std::cout <<"Bill before tax:  " <<bill <<"\n";
//std::cout <<"Bill after tax:  " <<tax_bill_result <<"\n";
//std::cout <<"Bill after tip:  " <<tip_bill_result <<"\n";
//std::cout <<"Bill per persons:  " <<bill_person <<"\n";

//I had to use frpint to print only two numbers after the point.
fprintf(stderr, "Bill before tax %.2f; ", bill); cout<<"\n";
fprintf(stderr, "Bill after tax  %.2f; ", tax_bill_result); cout<<"\n";
fprintf(stderr, "Bill after tip  %.2f; ", tip_bill_result);cout<<"\n";
fprintf(stderr, "Bill per persons  %.2f; ", bill_person);cout<<"\n";

return 0;

} 