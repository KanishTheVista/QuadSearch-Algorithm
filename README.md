# QuadSearch-Algorithm

#Author : Kanish Kumar

#Email : kanish.cosmos@gmail.com

#Moto : Love to contribute new ideas and algorithm which makes life easier.

#Licence :(Self) I have kept this algorithm open for everyone.

#INTRODUCTION

Algorithm uses 4-way search.Most important thing is input element must be in sorted order. QuadSearch is mainly used​ to get efficent results for mid range data.Suppose we have "N" element from 1 to N and we want to search element from first 15% to 85%, then this algorithm gives you efficent result. We can use this algorthim in many cases where we have the idea about the elements position.Suppose we know that element maybe lying between midranges and so on.

#ALGORITHM

We divide the given range into 4 parts -> 0 to 1/4 ,1/4+1 to 2/4 ,2/4+1 to 3/4 ,3/4+1 to 4/4. So we get 3 mid values. If the values are found, then we return the index, else we recursively call the four segments.

For more clarification go through the code.
  
  
 


