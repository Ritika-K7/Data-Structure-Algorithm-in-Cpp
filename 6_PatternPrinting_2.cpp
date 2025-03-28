#include<iostream>
using namespace std;
 int main()
 {
    // *
    // **
    // ***
    // int row ,col;
    
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }



    // // 1
    // // 12
    // // 123
    // int row,col;
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }





    // // 1
    // // 22
    // // 333
    // int row,col;
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }





    // // 1
    // // 21
    // // 321
    // int row,col;
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=row;col>=1;col=col-1)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }





    // // a
    // // bb 
    // // ccc 
    // // dddd 
    // int row,col;
    // for(row=1;row<=5;row=row+1)
    // {
    //     char name='a'+(row-1);
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;

    // }


    // // *****
    // // ****
    // // ***
    // // **
    // // *
    // int row,col;
    // for(row=1;row<=5;row=row+1)
    // {
    //     for(col=1;col<=5-(row-1);col=col+1)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //---------OR------------
    // int row,col;
    // for(row=5;row>=1;row=row-1)
    // {
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }




   // //  12345
   // //  1234
   // //  123
   // //  12
   // //  1
   //  int row,col;
   //  for(row=1;row<=5;row=row+1)
   //  {
   //      for(col=1;col<=5-(row-1);col=col+1)
   //      {
   //          cout<<col<<" ";
   //      }
   //      cout<<endl;
   //  }



   // 5
   // 54
   // 543
   // 5432
   // 54321
   int row,col;
   for(row=1;row<=5;row=row+1)
   {
      for(col=5;col>=5-row+1;col=col-1)
      {
         cout<<col<<" ";
      }
      cout<<endl;
   }

 }