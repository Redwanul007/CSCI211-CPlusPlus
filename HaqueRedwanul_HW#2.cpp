#include <iostream> 
#include "string"
#include "algorothim"

using namespace std;

string add(string a, string b){

   if (a.length()>b.length()){
      string temp = a;
      a=b;
      b= temp;
   }
   string res =" ";
   int len1 =a.length();
   int len2 =b.length();
   reverse(a.begin(),a.end());
   reverse(b.begin(),b.end());

   int carry =0;

   for(int i=0;i<len1;i++){
      int sum =((a[i]-'0')+(b[i]-'0')+carry);
      res.push_back(sum%10+'0');
      carry = sum/10;
   
}
for (int i=len1;i<len2;i++)
{ int sum=((b[i]-'0')+carry);
res.push_back(sum%10+'0');
carry=sum/10;
}
if (carry){
   res.push_back(carry+'0');}
   reverse(res.begin(),res.end());
   return res;
   }
   int main(int argc,const char*argv[]){
      string str1="122325",str2="45468";
      cout<<"enter a big number 2.";
      cin>>str2;
      cout<<add(str1,str2)<<endl;

   }