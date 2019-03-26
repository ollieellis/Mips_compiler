.text
.align  2
.globl
.type
main:
	addiu   $sp,$sp,-256
	sw      $fp,252($sp)
	move    $fp,$sp

	li      $2,0
	move    $sp,$fp
	lw      $fp,4($sp)
	addiu   $sp,$sp,8



	move    $sp,$fp
	lw      $fp,252($sp)
	addiu   $sp,$sp,256
	j $31
	nop
