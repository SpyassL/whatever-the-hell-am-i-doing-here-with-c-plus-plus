program divisor_result
	implicit none
	real :: num, divisor, result
	print *, "enter a number:"
	read (*,*) num
	print *, "enter another number:"
	read (*,*) divisor
	result = num / divisor
	if (INT(result) .EQ. result) then
		print *, num, " is divisible by ", divisor, ". Have a nice day :P "
	else
		print *, num, " isn't divisible by", divisor, ". Have a nice day :P "
	end if
end program divisor_result
