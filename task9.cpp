# include<iostream>
using namespace std;



main()
{
 float volume;
 float p1FlowRate;
 float p2FlowRate;
 float hours ;
 float totalVolume;
 float volumeFill;
 float pipeFill1;
 float pipeFill2;
 float poolPercentage;
 float flow1;
 float flow2;
 float percenP1;
 float percenP2;
 float overFlow;


 cout << "Enter volume of pool: ";
 cin >> volume;
 cout << "Enter flow rate of the first pipe: ";
 cin >> p1FlowRate;
 cout << "Enter flow rate of the second pipe: ";
 cin >> p2FlowRate;
 cout << "Enter hours: ";
 cin >> hours;

 totalVolume = (p1FlowRate * hours) + (p2FlowRate * hours) ;
 flow1 = p1FlowRate * hours;
 flow2 = p2FlowRate * hours;

 poolPercentage = ( totalVolume / volume ) * 100;

 percenP1 =  (flow1 / totalVolume) * 100 ;

 percenP2 =  (flow2 / totalVolume) * 100; 

 overFlow =  totalVolume - volume;



  if( totalVolume < volume)
  { 

  	cout << " The pool is "<< poolPercentage << "% full. Pipe 1:"<< percenP1  <<"%. Pipe 2: "<< percenP2 << "%.";
  }


   if(totalVolume > volume)
  {

    cout << "For "<< hours <<" hours the pool overflows with " << overFlow <<" liters.";
  }

}