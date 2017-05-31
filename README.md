# QuadSearch-Algorithm

#Author : Kanish Kumar

#Email  : kanish.cosmos@gmail.com

#Moto   : Love to contributing new idea's and algorithm which makes life easier.

#Licence :(Self) I kept this algorithm open for everyone.

#INTRODUCTION 

Algorithm uses 4-way search.Most important thing is input element must be in sorted order.
QuadSearch mainly use to get efficent results for mid range data.Suppose we having "N" element from 1 to N.
And we want to search element from first 15% to 85% then this algorithm gives you efficent result.
We can use this algorthim in many cases in which we know where the elements going maybe lies.Suppose we knowing that element maybe
lying between midranges.

#ALGORITHM

We dividing the given range into 4 parts
  -> 0 to 1/4 ,1/4+1 to 2/4 ,2/4+1 to 3/4 ,3/4+1 to 4/4
  So here we get 3 mid values.
  if we found the values then we return the index 
  else we recursively calls the four segments.
  
  For more clarification go through the code.
  
  
 


