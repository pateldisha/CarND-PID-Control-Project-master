# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

I have implemented PID controller as part of Self Driving Car Program. Below are the details of the same:




#### PID Component Effect

P controller:  Proportional Controller,  as the name says, the car will steer proportional to the center lane. If the car is going left/right, then it will try to keep itself propertional to the lane. 

D controller: Derivative Controller, it will remove the oscillations and I can see the effect on the car as I kept non zero value for D and tuned it to work properly.

I controller: Integral controller, it will reduce the CTE by conteract the bias in it. It will cause the car to reach to the goal or the center line. By keeping the nonzero value for I coefficient, I can see the the difference in the car driving, it was trying to follow the lane. 





#### Hyperparameters

To choose the hyperparameters i.e P, I, D coefficient values, different methods were encouraged. I did it with manual tuning. 
First, I kept the value of P as 0.1 and other two values I and D as 0. So to first tune the P value and see that if its able to reduce the oscillations. After tuning it, I could see there was not much changes, so I kept the value for D. Started with 1 and then tuned it till the time that no oscillations or less of it was there. 

Then I tuned both P and D together, so as to find the proper values for both which works well. Then, I kept non-zero value for I, started with 1 but I noticed that low value will be more effective. So, kept it as 0.04. It was working but not at par, so I decreased the value and finally kept it as 0.0001. 

I could see that for the below values, car was driving properly on track.

P = 0.2, D = 2, I = 0.0001