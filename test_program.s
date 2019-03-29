.text
.align  2
.globl  f
.ent    f
.type   f, @function
f:
	addiu   $sp,$sp,-130
	sw      $fp,126($sp)
	move    $fp,$sp
	li      $8, 2
	sw      $8,4($fp)


	lw      $8,4($fp)
	nop
	addiu   $10,$8,0
	li      $8, 7
	addiu   $11,$8,0
	addu    $8,$10,$11
	sw      $8,8($fp)


	lw      $2,8($fp)
	b       $L0



$L0:
	move    $sp,$fp
	lw      $fp,126($sp)
	addiu   $sp,$sp,130
	j $31
	nop

