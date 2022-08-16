#include<stdio.h>

int main(){
    int val = 20;
    int* pval = &val; // & -> address 
    
    printf("%d\n",val);
    printf("%p address has %d value\n",pval,*pval);
    
    val = 97;
    printf("%d\n",val);
    printf("%p address has %d value\n",pval,*pval);
    
    *pval = 71;
    printf("%d\n",val);
    printf("%p address has %d value\n",pval,*pval);
    
    /* val আর *pval এখন same,
     pval কে * দিয়ে dereference করলে
     val পাবো। ২টার ভ্যালু সেম।
    */
    
    int val2 = 301;
    pval = &val2; // এখন এড্রেসকে চেঞ্জ করছি
    printf("%d\n",val);
    printf("%p address has %d value\n",pval,*pval);
    
    // এখানে এড্রেস চেঞ্জ হবে কিন্তু val এর মান 
    // আগের মত ৭১ থাকবে,val2 হবে ৩০১
    
    int x = 827;
    printf("%d\n",*&x);
    
    printf("\n\n----------------\n\n");
    printf("Pointer Arithmetic\n\n");
    
    int number = 20;
    int *pnumber = &number;
    printf("address of %d is %p\n",number,pnumber);
    pnumber++; // এখন ইন্টিজার বলে ৪যোগ হবে
               // অর্থাৎ ৪বাইট বাড়বে এড্রেস এ 
    
    printf("new address of %d is %p\n",number,pnumber);
    
    int a=20,b=37;
    int *pa = &a;
    int *pb = &b;
    
    printf("address of a = %p, b = %p\n",pa,pb);
    printf("Difference = %d\n",pa-pb); // 1 আসা মানে ডিফারেন্স ১ বাইট, মানে ৪ ঘর ডিফারেন্সের জন্য আসবে ১


    printf("\n\n----------------\n\n");
    printf("Pointer Constant\n\n");
    
    
    
    
}

/*

    pointer
    
    int* val = এই স্টার হলো address
    আর প্রিন্ট করার সময় যে স্টার ওটাকে বলে 
    dereferencing operator,(কোথায় স্টোর
    হবে ভ্যালু,ওটা বুঝায়)
    
    
    
    * pointer, & address
    
    * : address এর value দেখায়
    & : value এর address দেখায়
    
    প্রশ্ন- printf("%d\n",*&x); এটা কী দেখাবে?
    উত্তর - &x এর কারণে x এর এড্রেস নিবে,
          এরপর *x এর কারণে তার ভ্যালু দেখাবে।
          অর্থাৎ x এর ভ্যালুটাই এখানে আউটপুট।
          output : 827
        
        
        
   ---- Pointer Arithmetic ----

    int number = 20;
    int *pnumber = &number;
    printf("address of %d is %p\n",number,pnumber);
    pnumber++;
    
    
   ---- Pointer Constant ----
    
    
    const int N = 20; // এর মানে N এর ভ্যালু একটা constant 
    const int *pN = &N // পয়েন্টার কনস্ট্যান্ট,ভ্যালু চেঞ্জ করা যাবেনা
    int* const pNN = &N // এখানে address constant, অর্থাৎ address ও আর চেঞ্জ করা যাবেনা।
    
    const int* const pNNN = &N // এখানে ভ্যালু + এড্রেস কোনোটাই চেঞ্জ করা যাবেনা



    

*/

   


