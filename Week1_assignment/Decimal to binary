//gfg
Given a decimal number N, compute its binary equivalent.
Example 1:
 Input: N = 7
 Output: 111
Example 2:
 Input: N = 33
 Output: 100001

//CODE
void toBinary(int N)
{
    // your code here
    int binary_no = 0;
    int power = 1;
    while(N>0){
        int bit = N%2;
        binary_no = binary_no + (power*bit);
        N = N/2;
        power = power * 10;
    }
    cout<<binary_no;    
}
