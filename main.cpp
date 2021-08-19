#include <iostream>
using namespace std;
int main ()
{
    int size , sume =0 , sumo = 0 , sum = 0;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter the elements in an array:"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<"The elments in an array are:"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    for(int i = 0; i<size; i++)
    {
        if(a[i]%2==0)
        {
            sume = sume + a[i];
        }
    }
        cout<<"Sum of even elments in array are:"<<sume<<endl;
    
for(int i = 0; i<size; i++)
{
    if(a[i]%2!=0)
    {
        sumo = sumo+a[i];

    }
    
}
cout<<"sum of odd elments in array are :"<<sumo<<endl;
for(int i = 0; i<size; i++ )
{
    sum = sum+a[i];

}
cout<<"sum of all elements in an array are:"<<sum<<endl;
return 0;


}
