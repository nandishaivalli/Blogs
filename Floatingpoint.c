#include<stdio.h>
#include<math.h>
// void decToBinary32(int n)                   // convert decimal to binary 
// {
//     int num_bytes =  sizeof(n)*8 ;
//     for (int i = num_bytes - 1; i >= 0; i--) { 
//         int k = n >> i; 
//         if (k & 1) 
//               printf("1") ;
//         else  printf("0");
//     }    
// }

// int main(){
//     float number32 = 0.0000152587890625;    // define epsilon 
//     int size = sizeof(number32)*8 ;         // get size of float; here 4*8 = 32 bits 
//     int bit_copy32  = *(int *) & number32;  // Fast inverse square root algorithm
//                                             //    read float memory content without decoading
                                            
//     decToBinary32(bit_copy32);              // print as binary value 
//     return 0;
// }

void decToBinary32(int n)
{/*
   print the binary value stored in the memory of float  
*/
    int num_bytes =  sizeof(n)*8 ;

    for (int i = num_bytes - 1; i >= 0; i--) { //  8bytes * 8(1 byte ) - zero  sizeof(n)*8
        int k = n >> i; // right shift
        
        if (k & 1) // helps us know the state of first bit
              printf("1");
            // binary_n[num_bytes - i -1] = 1;
        else   printf("0");
            // binary_n[num_bytes - i -1] = 0 ;

        
    }

    
}



int main(){

// 32 bit 

    float number32 = 0.2; 
    int size = sizeof(number32)*8 ;
    int binary_n[size] ;
    int bit_copy32  = *(int *) & number32;  // bit copy from memory 

    printf("32 bit decimal number\t\t32bit Memory representation\n\n");
    printf("%.20f\t\t", number32);  
    decToBinary32(bit_copy32);
    printf("\n");
   

    return 0;
}

/*

For checking 64 bit use double and long instead of float and int. 

*/