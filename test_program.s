.text
.align  2
.globl  main
.ent    main
.type   main, @function
main:
	addiu   $sp,$sp,-130
	sw      $fp,126($sp)
	move    $fp,$sp
	li      $8, 2
	sw      $8,4($fp)


	nop     
	sw      $8,8($fp)
	addiu   $10,$8,0
	li      $8, 7
	addiu   $11,$8,0
	addu    $8,$10,$11


	lw      $2,2($fp)
	b       $L0



$L0:
	move    $sp,$fp
	lw      $fp,126($sp)
	addiu   $sp,$sp,130
	j $31
	nop

