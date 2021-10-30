class Solution:
    def myPow(self, x: float, n: int) -> float:
        if(n==0):
            return 1
        elif (n>0):
            if(n%2==0):
                return self.myPow(x*x,n/2)
            else:
                return x*self.myPow(x*x,(n-1)/2)
        else :
            return 1/(x*self.myPow(x,abs(n)-1))
    
