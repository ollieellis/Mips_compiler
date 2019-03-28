.text
	sw      $9,4($fp)


	sw      $9,8($fp)
	sw      $9,12($fp)
	sw      $9,16($fp)


.align  2
.globl  main
.ent    main
.type   main, @function
main:
	addiu   $sp,$sp,-256
	sw      $fp,252($sp)
	move    $fp,$sp
	sw      $9,20($fp)

	sw      $9,24($fp)

	sw      $9,28($fp)

	sw      $9,32($fp)
	sw      $9,36($fp)



	li      $2,1
	b       $L0



$L0:
	move    $sp,$fp
	lw      $fp,252($sp)
	addiu   $sp,$sp,256
	j $31
	nop

