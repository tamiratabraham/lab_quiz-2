#include<iostream>
using namespace std;
int sumValue(int marks[],int size);
int multValue(int marks[],int size);
double AverValue(int sum,int size);
int minValue(int marks[],int size);
int maxValue(int marks[],int size);
int rangeValue(int max,int min);
void display(int sum,int prod,double Average,int max,int min);
int main(){
    int marks[5];
   
    for (int i=0; i<5; i++){
         cout<<"Enter the value"<<i+1<<":";

        cin>>marks[i];

    }
    int sum=sumValue(marks,5);
    int prod=multValue(marks,5);
    double Average=AverValue(sum,5);
    int max=maxValue(marks,5);
     int min=minValue(marks,5);
     int range=rangeValue(max,min);
     display(sum,prod,Average,max,min);
     return 0;

}
int sumValue(int marks[],int size){
int sum=0;
for (int i=0; i<size; i++){
  sum+=marks[i];

}
return sum;
}
int multValue(int marks[],int size){
    int prod=1;
for (int i=0; i<size; i++){
    prod*=marks[i];
}
return prod;
}
 double AverValue(int sum,int size){
    return (double)sum/size;
 }
     int maxValue(int marks[],int size){
        int max=marks[0];
        for(int i=0;i<size;i++){
            if(marks[i]>max)
            max=marks[i];
        }
        return max;
     }
      int minValue(int marks[],int size){
        int min=marks[0];
        for(int i=0;i<size;i++){
            if(marks[i]<min)
            min=marks[i];
        }
        return min;
     }
     int rangeValue(int max,int min){
         return max-min;
     }
   void display(int sum,int prod,double Average,int max,int min){
    cout<<"\n========expected output======"<<endl;
    cout<<"sum= "<<sum<<endl;
     cout<<"product= "<<prod<<endl;
      cout<<"Average= "<<Average<<endl;
       cout<<"maximum= "<<max<<endl;
        cout<<"minimum= "<<min<<endl;
         cout<<"range= "<<range<<endl;
   }