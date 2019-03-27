.text

.align  2
.globl  f
.ent    f
.type   f, @function
f:
	addiu   $sp,$sp,-256
	sw      $fp,252($sp)
	move    $fp,$sp

$L0:
	move    $sp,$fp
	lw      $fp,252($sp)
	addiu   $sp,$sp,256
	j $31
	nop

.align  2
.globl  main
.ent    main
.type   main, @function
main:
	addiu   $sp,$sp,-256
	sw      $fp,252($sp)
	move    $fp,$sp

	li      $2,0
	b       $L0



$L0:
	move    $sp,$fp
	lw      $fp,252($sp)
	addiu   $sp,$sp,256
	j $31
	nop

