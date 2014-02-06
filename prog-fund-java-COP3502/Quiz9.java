/*
Abraham Yuen
Quiz 9
4/2/2013
1H38
*/


/* Problem 1

method(5,3)
	method(4,3)
		method(3,3)
			method(2,3)
				method(1,3)
					method(0,3)
						method(-1,3)
						return 1
					return 1
				return 2
			return 2	
		return 2
	return 6
return 6


/* Problem 2

Base case is 
if (number < 0) {
	return 1;
}

When the number becomes less than zero, it 
returns 1.


/* Problem 3

Recursive cases are 
else if (number % value == 1) {
  return number + method(number - 1, value);
}
else {
  return method(number - 1, value);
}

When number % value is equal to 1, it will
call method inside of method, but with
number - 1. Otherwise, it will call method 
inside of method, but with number - 1.


/* Problem 4

method will continue using recursive steps 
until the number that gets passed through
has been decremented (number - 1) enough
to go below 0. The program will end since
the number keeps being lowered by 1 every
time, and eventually it will make the base
case true and therefore start returning 
values.

*/
