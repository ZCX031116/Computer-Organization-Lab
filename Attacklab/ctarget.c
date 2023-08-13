
ctarget:     file format elf64-x86-64


Disassembly of section .init:

0000000000400bc8 <_init>:
  400bc8:	48 83 ec 08          	sub    $0x8,%rsp
  400bcc:	48 8b 05 25 34 20 00 	mov    0x203425(%rip),%rax        # 603ff8 <__gmon_start__>
  400bd3:	48 85 c0             	test   %rax,%rax
  400bd6:	74 05                	je     400bdd <_init+0x15>
  400bd8:	e8 33 01 00 00       	callq  400d10 <__gmon_start__@plt>
  400bdd:	48 83 c4 08          	add    $0x8,%rsp
  400be1:	c3                   	retq   

Disassembly of section .plt:

0000000000400bf0 <.plt>:
  400bf0:	ff 35 12 34 20 00    	pushq  0x203412(%rip)        # 604008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400bf6:	ff 25 14 34 20 00    	jmpq   *0x203414(%rip)        # 604010 <_GLOBAL_OFFSET_TABLE_+0x10>
  400bfc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400c00 <strcasecmp@plt>:
  400c00:	ff 25 12 34 20 00    	jmpq   *0x203412(%rip)        # 604018 <strcasecmp@GLIBC_2.2.5>
  400c06:	68 00 00 00 00       	pushq  $0x0
  400c0b:	e9 e0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c10 <__errno_location@plt>:
  400c10:	ff 25 0a 34 20 00    	jmpq   *0x20340a(%rip)        # 604020 <__errno_location@GLIBC_2.2.5>
  400c16:	68 01 00 00 00       	pushq  $0x1
  400c1b:	e9 d0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c20 <srandom@plt>:
  400c20:	ff 25 02 34 20 00    	jmpq   *0x203402(%rip)        # 604028 <srandom@GLIBC_2.2.5>
  400c26:	68 02 00 00 00       	pushq  $0x2
  400c2b:	e9 c0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c30 <strncmp@plt>:
  400c30:	ff 25 fa 33 20 00    	jmpq   *0x2033fa(%rip)        # 604030 <strncmp@GLIBC_2.2.5>
  400c36:	68 03 00 00 00       	pushq  $0x3
  400c3b:	e9 b0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c40 <strcpy@plt>:
  400c40:	ff 25 f2 33 20 00    	jmpq   *0x2033f2(%rip)        # 604038 <strcpy@GLIBC_2.2.5>
  400c46:	68 04 00 00 00       	pushq  $0x4
  400c4b:	e9 a0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c50 <puts@plt>:
  400c50:	ff 25 ea 33 20 00    	jmpq   *0x2033ea(%rip)        # 604040 <puts@GLIBC_2.2.5>
  400c56:	68 05 00 00 00       	pushq  $0x5
  400c5b:	e9 90 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c60 <write@plt>:
  400c60:	ff 25 e2 33 20 00    	jmpq   *0x2033e2(%rip)        # 604048 <write@GLIBC_2.2.5>
  400c66:	68 06 00 00 00       	pushq  $0x6
  400c6b:	e9 80 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c70 <mmap@plt>:
  400c70:	ff 25 da 33 20 00    	jmpq   *0x2033da(%rip)        # 604050 <mmap@GLIBC_2.2.5>
  400c76:	68 07 00 00 00       	pushq  $0x7
  400c7b:	e9 70 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c80 <printf@plt>:
  400c80:	ff 25 d2 33 20 00    	jmpq   *0x2033d2(%rip)        # 604058 <printf@GLIBC_2.2.5>
  400c86:	68 08 00 00 00       	pushq  $0x8
  400c8b:	e9 60 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c90 <memset@plt>:
  400c90:	ff 25 ca 33 20 00    	jmpq   *0x2033ca(%rip)        # 604060 <memset@GLIBC_2.2.5>
  400c96:	68 09 00 00 00       	pushq  $0x9
  400c9b:	e9 50 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400ca0 <alarm@plt>:
  400ca0:	ff 25 c2 33 20 00    	jmpq   *0x2033c2(%rip)        # 604068 <alarm@GLIBC_2.2.5>
  400ca6:	68 0a 00 00 00       	pushq  $0xa
  400cab:	e9 40 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cb0 <close@plt>:
  400cb0:	ff 25 ba 33 20 00    	jmpq   *0x2033ba(%rip)        # 604070 <close@GLIBC_2.2.5>
  400cb6:	68 0b 00 00 00       	pushq  $0xb
  400cbb:	e9 30 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cc0 <read@plt>:
  400cc0:	ff 25 b2 33 20 00    	jmpq   *0x2033b2(%rip)        # 604078 <read@GLIBC_2.2.5>
  400cc6:	68 0c 00 00 00       	pushq  $0xc
  400ccb:	e9 20 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cd0 <__libc_start_main@plt>:
  400cd0:	ff 25 aa 33 20 00    	jmpq   *0x2033aa(%rip)        # 604080 <__libc_start_main@GLIBC_2.2.5>
  400cd6:	68 0d 00 00 00       	pushq  $0xd
  400cdb:	e9 10 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400ce0 <signal@plt>:
  400ce0:	ff 25 a2 33 20 00    	jmpq   *0x2033a2(%rip)        # 604088 <signal@GLIBC_2.2.5>
  400ce6:	68 0e 00 00 00       	pushq  $0xe
  400ceb:	e9 00 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cf0 <gethostbyname@plt>:
  400cf0:	ff 25 9a 33 20 00    	jmpq   *0x20339a(%rip)        # 604090 <gethostbyname@GLIBC_2.2.5>
  400cf6:	68 0f 00 00 00       	pushq  $0xf
  400cfb:	e9 f0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d00 <fprintf@plt>:
  400d00:	ff 25 92 33 20 00    	jmpq   *0x203392(%rip)        # 604098 <fprintf@GLIBC_2.2.5>
  400d06:	68 10 00 00 00       	pushq  $0x10
  400d0b:	e9 e0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d10 <__gmon_start__@plt>:
  400d10:	ff 25 8a 33 20 00    	jmpq   *0x20338a(%rip)        # 6040a0 <__gmon_start__>
  400d16:	68 11 00 00 00       	pushq  $0x11
  400d1b:	e9 d0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d20 <strtol@plt>:
  400d20:	ff 25 82 33 20 00    	jmpq   *0x203382(%rip)        # 6040a8 <strtol@GLIBC_2.2.5>
  400d26:	68 12 00 00 00       	pushq  $0x12
  400d2b:	e9 c0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d30 <memcpy@plt>:
  400d30:	ff 25 7a 33 20 00    	jmpq   *0x20337a(%rip)        # 6040b0 <memcpy@GLIBC_2.14>
  400d36:	68 13 00 00 00       	pushq  $0x13
  400d3b:	e9 b0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d40 <time@plt>:
  400d40:	ff 25 72 33 20 00    	jmpq   *0x203372(%rip)        # 6040b8 <time@GLIBC_2.2.5>
  400d46:	68 14 00 00 00       	pushq  $0x14
  400d4b:	e9 a0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d50 <random@plt>:
  400d50:	ff 25 6a 33 20 00    	jmpq   *0x20336a(%rip)        # 6040c0 <random@GLIBC_2.2.5>
  400d56:	68 15 00 00 00       	pushq  $0x15
  400d5b:	e9 90 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d60 <_IO_getc@plt>:
  400d60:	ff 25 62 33 20 00    	jmpq   *0x203362(%rip)        # 6040c8 <_IO_getc@GLIBC_2.2.5>
  400d66:	68 16 00 00 00       	pushq  $0x16
  400d6b:	e9 80 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d70 <__isoc99_sscanf@plt>:
  400d70:	ff 25 5a 33 20 00    	jmpq   *0x20335a(%rip)        # 6040d0 <__isoc99_sscanf@GLIBC_2.7>
  400d76:	68 17 00 00 00       	pushq  $0x17
  400d7b:	e9 70 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d80 <munmap@plt>:
  400d80:	ff 25 52 33 20 00    	jmpq   *0x203352(%rip)        # 6040d8 <munmap@GLIBC_2.2.5>
  400d86:	68 18 00 00 00       	pushq  $0x18
  400d8b:	e9 60 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d90 <bcopy@plt>:
  400d90:	ff 25 4a 33 20 00    	jmpq   *0x20334a(%rip)        # 6040e0 <bcopy@GLIBC_2.2.5>
  400d96:	68 19 00 00 00       	pushq  $0x19
  400d9b:	e9 50 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400da0 <fopen@plt>:
  400da0:	ff 25 42 33 20 00    	jmpq   *0x203342(%rip)        # 6040e8 <fopen@GLIBC_2.2.5>
  400da6:	68 1a 00 00 00       	pushq  $0x1a
  400dab:	e9 40 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400db0 <getopt@plt>:
  400db0:	ff 25 3a 33 20 00    	jmpq   *0x20333a(%rip)        # 6040f0 <getopt@GLIBC_2.2.5>
  400db6:	68 1b 00 00 00       	pushq  $0x1b
  400dbb:	e9 30 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400dc0 <strtoul@plt>:
  400dc0:	ff 25 32 33 20 00    	jmpq   *0x203332(%rip)        # 6040f8 <strtoul@GLIBC_2.2.5>
  400dc6:	68 1c 00 00 00       	pushq  $0x1c
  400dcb:	e9 20 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400dd0 <gethostname@plt>:
  400dd0:	ff 25 2a 33 20 00    	jmpq   *0x20332a(%rip)        # 604100 <gethostname@GLIBC_2.2.5>
  400dd6:	68 1d 00 00 00       	pushq  $0x1d
  400ddb:	e9 10 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400de0 <sprintf@plt>:
  400de0:	ff 25 22 33 20 00    	jmpq   *0x203322(%rip)        # 604108 <sprintf@GLIBC_2.2.5>
  400de6:	68 1e 00 00 00       	pushq  $0x1e
  400deb:	e9 00 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400df0 <exit@plt>:
  400df0:	ff 25 1a 33 20 00    	jmpq   *0x20331a(%rip)        # 604110 <exit@GLIBC_2.2.5>
  400df6:	68 1f 00 00 00       	pushq  $0x1f
  400dfb:	e9 f0 fd ff ff       	jmpq   400bf0 <.plt>

0000000000400e00 <connect@plt>:
  400e00:	ff 25 12 33 20 00    	jmpq   *0x203312(%rip)        # 604118 <connect@GLIBC_2.2.5>
  400e06:	68 20 00 00 00       	pushq  $0x20
  400e0b:	e9 e0 fd ff ff       	jmpq   400bf0 <.plt>

0000000000400e10 <socket@plt>:
  400e10:	ff 25 0a 33 20 00    	jmpq   *0x20330a(%rip)        # 604120 <socket@GLIBC_2.2.5>
  400e16:	68 21 00 00 00       	pushq  $0x21
  400e1b:	e9 d0 fd ff ff       	jmpq   400bf0 <.plt>

Disassembly of section .text:

0000000000400e20 <_start>:
  400e20:	31 ed                	xor    %ebp,%ebp
  400e22:	49 89 d1             	mov    %rdx,%r9
  400e25:	5e                   	pop    %rsi
  400e26:	48 89 e2             	mov    %rsp,%rdx
  400e29:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400e2d:	50                   	push   %rax
  400e2e:	54                   	push   %rsp
  400e2f:	49 c7 c0 c0 2b 40 00 	mov    $0x402bc0,%r8
  400e36:	48 c7 c1 50 2b 40 00 	mov    $0x402b50,%rcx
  400e3d:	48 c7 c7 e0 10 40 00 	mov    $0x4010e0,%rdi
  400e44:	e8 87 fe ff ff       	callq  400cd0 <__libc_start_main@plt>
  400e49:	f4                   	hlt    
  400e4a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400e50 <deregister_tm_clones>:
  400e50:	b8 b7 44 60 00       	mov    $0x6044b7,%eax
  400e55:	55                   	push   %rbp
  400e56:	48 2d b0 44 60 00    	sub    $0x6044b0,%rax
  400e5c:	48 83 f8 0e          	cmp    $0xe,%rax
  400e60:	48 89 e5             	mov    %rsp,%rbp
  400e63:	77 02                	ja     400e67 <deregister_tm_clones+0x17>
  400e65:	5d                   	pop    %rbp
  400e66:	c3                   	retq   
  400e67:	b8 00 00 00 00       	mov    $0x0,%eax
  400e6c:	48 85 c0             	test   %rax,%rax
  400e6f:	74 f4                	je     400e65 <deregister_tm_clones+0x15>
  400e71:	5d                   	pop    %rbp
  400e72:	bf b0 44 60 00       	mov    $0x6044b0,%edi
  400e77:	ff e0                	jmpq   *%rax
  400e79:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400e80 <register_tm_clones>:
  400e80:	b8 b0 44 60 00       	mov    $0x6044b0,%eax
  400e85:	55                   	push   %rbp
  400e86:	48 2d b0 44 60 00    	sub    $0x6044b0,%rax
  400e8c:	48 c1 f8 03          	sar    $0x3,%rax
  400e90:	48 89 e5             	mov    %rsp,%rbp
  400e93:	48 89 c2             	mov    %rax,%rdx
  400e96:	48 c1 ea 3f          	shr    $0x3f,%rdx
  400e9a:	48 01 d0             	add    %rdx,%rax
  400e9d:	48 d1 f8             	sar    %rax
  400ea0:	75 02                	jne    400ea4 <register_tm_clones+0x24>
  400ea2:	5d                   	pop    %rbp
  400ea3:	c3                   	retq   
  400ea4:	ba 00 00 00 00       	mov    $0x0,%edx
  400ea9:	48 85 d2             	test   %rdx,%rdx
  400eac:	74 f4                	je     400ea2 <register_tm_clones+0x22>
  400eae:	5d                   	pop    %rbp
  400eaf:	48 89 c6             	mov    %rax,%rsi
  400eb2:	bf b0 44 60 00       	mov    $0x6044b0,%edi
  400eb7:	ff e2                	jmpq   *%rdx
  400eb9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400ec0 <__do_global_dtors_aux>:
  400ec0:	80 3d 11 36 20 00 00 	cmpb   $0x0,0x203611(%rip)        # 6044d8 <completed.6355>
  400ec7:	75 11                	jne    400eda <__do_global_dtors_aux+0x1a>
  400ec9:	55                   	push   %rbp
  400eca:	48 89 e5             	mov    %rsp,%rbp
  400ecd:	e8 7e ff ff ff       	callq  400e50 <deregister_tm_clones>
  400ed2:	5d                   	pop    %rbp
  400ed3:	c6 05 fe 35 20 00 01 	movb   $0x1,0x2035fe(%rip)        # 6044d8 <completed.6355>
  400eda:	f3 c3                	repz retq 
  400edc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400ee0 <frame_dummy>:
  400ee0:	48 83 3d 38 2f 20 00 	cmpq   $0x0,0x202f38(%rip)        # 603e20 <__JCR_END__>
  400ee7:	00 
  400ee8:	74 1e                	je     400f08 <frame_dummy+0x28>
  400eea:	b8 00 00 00 00       	mov    $0x0,%eax
  400eef:	48 85 c0             	test   %rax,%rax
  400ef2:	74 14                	je     400f08 <frame_dummy+0x28>
  400ef4:	55                   	push   %rbp
  400ef5:	bf 20 3e 60 00       	mov    $0x603e20,%edi
  400efa:	48 89 e5             	mov    %rsp,%rbp
  400efd:	ff d0                	callq  *%rax
  400eff:	5d                   	pop    %rbp
  400f00:	e9 7b ff ff ff       	jmpq   400e80 <register_tm_clones>
  400f05:	0f 1f 00             	nopl   (%rax)
  400f08:	e9 73 ff ff ff       	jmpq   400e80 <register_tm_clones>
  400f0d:	0f 1f 00             	nopl   (%rax)

0000000000400f10 <usage>:
  400f10:	48 83 ec 08          	sub    $0x8,%rsp
  400f14:	48 89 fe             	mov    %rdi,%rsi
  400f17:	83 3d ea 35 20 00 00 	cmpl   $0x0,0x2035ea(%rip)        # 604508 <is_checker>
  400f1e:	74 39                	je     400f59 <usage+0x49>
  400f20:	bf e0 2b 40 00       	mov    $0x402be0,%edi
  400f25:	b8 00 00 00 00       	mov    $0x0,%eax
  400f2a:	e8 51 fd ff ff       	callq  400c80 <printf@plt>
  400f2f:	bf 18 2c 40 00       	mov    $0x402c18,%edi
  400f34:	e8 17 fd ff ff       	callq  400c50 <puts@plt>
  400f39:	bf 90 2d 40 00       	mov    $0x402d90,%edi
  400f3e:	e8 0d fd ff ff       	callq  400c50 <puts@plt>
  400f43:	bf 40 2c 40 00       	mov    $0x402c40,%edi
  400f48:	e8 03 fd ff ff       	callq  400c50 <puts@plt>
  400f4d:	bf aa 2d 40 00       	mov    $0x402daa,%edi
  400f52:	e8 f9 fc ff ff       	callq  400c50 <puts@plt>
  400f57:	eb 2d                	jmp    400f86 <usage+0x76>
  400f59:	bf c6 2d 40 00       	mov    $0x402dc6,%edi
  400f5e:	b8 00 00 00 00       	mov    $0x0,%eax
  400f63:	e8 18 fd ff ff       	callq  400c80 <printf@plt>
  400f68:	bf 68 2c 40 00       	mov    $0x402c68,%edi
  400f6d:	e8 de fc ff ff       	callq  400c50 <puts@plt>
  400f72:	bf 90 2c 40 00       	mov    $0x402c90,%edi
  400f77:	e8 d4 fc ff ff       	callq  400c50 <puts@plt>
  400f7c:	bf e4 2d 40 00       	mov    $0x402de4,%edi
  400f81:	e8 ca fc ff ff       	callq  400c50 <puts@plt>
  400f86:	bf 00 00 00 00       	mov    $0x0,%edi
  400f8b:	e8 60 fe ff ff       	callq  400df0 <exit@plt>

0000000000400f90 <initialize_target>:
  400f90:	55                   	push   %rbp
  400f91:	53                   	push   %rbx
  400f92:	48 81 ec 08 21 00 00 	sub    $0x2108,%rsp
  400f99:	89 f5                	mov    %esi,%ebp
  400f9b:	89 3d 57 35 20 00    	mov    %edi,0x203557(%rip)        # 6044f8 <check_level>
  400fa1:	8b 3d c1 31 20 00    	mov    0x2031c1(%rip),%edi        # 604168 <target_id>
  400fa7:	e8 77 1b 00 00       	callq  402b23 <gencookie>
  400fac:	89 05 52 35 20 00    	mov    %eax,0x203552(%rip)        # 604504 <cookie>
  400fb2:	89 c7                	mov    %eax,%edi
  400fb4:	e8 6a 1b 00 00       	callq  402b23 <gencookie>
  400fb9:	89 05 41 35 20 00    	mov    %eax,0x203541(%rip)        # 604500 <authkey>
  400fbf:	8b 05 a3 31 20 00    	mov    0x2031a3(%rip),%eax        # 604168 <target_id>
  400fc5:	8d 78 01             	lea    0x1(%rax),%edi
  400fc8:	e8 53 fc ff ff       	callq  400c20 <srandom@plt>
  400fcd:	e8 7e fd ff ff       	callq  400d50 <random@plt>
  400fd2:	89 c7                	mov    %eax,%edi
  400fd4:	e8 ca 02 00 00       	callq  4012a3 <scramble>
  400fd9:	89 c3                	mov    %eax,%ebx
  400fdb:	85 ed                	test   %ebp,%ebp
  400fdd:	74 18                	je     400ff7 <initialize_target+0x67>
  400fdf:	bf 00 00 00 00       	mov    $0x0,%edi
  400fe4:	e8 57 fd ff ff       	callq  400d40 <time@plt>
  400fe9:	89 c7                	mov    %eax,%edi
  400feb:	e8 30 fc ff ff       	callq  400c20 <srandom@plt>
  400ff0:	e8 5b fd ff ff       	callq  400d50 <random@plt>
  400ff5:	eb 05                	jmp    400ffc <initialize_target+0x6c>
  400ff7:	b8 00 00 00 00       	mov    $0x0,%eax
  400ffc:	01 c3                	add    %eax,%ebx
  400ffe:	0f b7 db             	movzwl %bx,%ebx
  401001:	8d 04 dd 00 01 00 00 	lea    0x100(,%rbx,8),%eax
  401008:	89 c0                	mov    %eax,%eax
  40100a:	48 89 05 8f 34 20 00 	mov    %rax,0x20348f(%rip)        # 6044a0 <buf_offset>
  401011:	c6 05 10 41 20 00 63 	movb   $0x63,0x204110(%rip)        # 605128 <target_prefix>
  401018:	83 3d 89 34 20 00 00 	cmpl   $0x0,0x203489(%rip)        # 6044a8 <notify>
  40101f:	0f 84 b1 00 00 00    	je     4010d6 <initialize_target+0x146>
  401025:	83 3d dc 34 20 00 00 	cmpl   $0x0,0x2034dc(%rip)        # 604508 <is_checker>
  40102c:	0f 85 a4 00 00 00    	jne    4010d6 <initialize_target+0x146>
  401032:	be 00 01 00 00       	mov    $0x100,%esi
  401037:	48 89 e7             	mov    %rsp,%rdi
  40103a:	e8 91 fd ff ff       	callq  400dd0 <gethostname@plt>
  40103f:	85 c0                	test   %eax,%eax
  401041:	74 25                	je     401068 <initialize_target+0xd8>
  401043:	bf c0 2c 40 00       	mov    $0x402cc0,%edi
  401048:	e8 03 fc ff ff       	callq  400c50 <puts@plt>
  40104d:	bf 08 00 00 00       	mov    $0x8,%edi
  401052:	e8 99 fd ff ff       	callq  400df0 <exit@plt>
  401057:	48 89 e6             	mov    %rsp,%rsi
  40105a:	e8 a1 fb ff ff       	callq  400c00 <strcasecmp@plt>
  40105f:	85 c0                	test   %eax,%eax
  401061:	74 21                	je     401084 <initialize_target+0xf4>
  401063:	83 c3 01             	add    $0x1,%ebx
  401066:	eb 05                	jmp    40106d <initialize_target+0xdd>
  401068:	bb 00 00 00 00       	mov    $0x0,%ebx
  40106d:	48 63 c3             	movslq %ebx,%rax
  401070:	48 8b 3c c5 80 41 60 	mov    0x604180(,%rax,8),%rdi
  401077:	00 
  401078:	48 85 ff             	test   %rdi,%rdi
  40107b:	75 da                	jne    401057 <initialize_target+0xc7>
  40107d:	b8 00 00 00 00       	mov    $0x0,%eax
  401082:	eb 05                	jmp    401089 <initialize_target+0xf9>
  401084:	b8 01 00 00 00       	mov    $0x1,%eax
  401089:	85 c0                	test   %eax,%eax
  40108b:	75 17                	jne    4010a4 <initialize_target+0x114>
  40108d:	48 89 e6             	mov    %rsp,%rsi
  401090:	bf f8 2c 40 00       	mov    $0x402cf8,%edi
  401095:	e8 e6 fb ff ff       	callq  400c80 <printf@plt>
  40109a:	bf 08 00 00 00       	mov    $0x8,%edi
  40109f:	e8 4c fd ff ff       	callq  400df0 <exit@plt>
  4010a4:	48 8d bc 24 00 01 00 	lea    0x100(%rsp),%rdi
  4010ab:	00 
  4010ac:	e8 09 18 00 00       	callq  4028ba <init_driver>
  4010b1:	85 c0                	test   %eax,%eax
  4010b3:	79 21                	jns    4010d6 <initialize_target+0x146>
  4010b5:	48 8d b4 24 00 01 00 	lea    0x100(%rsp),%rsi
  4010bc:	00 
  4010bd:	bf 38 2d 40 00       	mov    $0x402d38,%edi
  4010c2:	b8 00 00 00 00       	mov    $0x0,%eax
  4010c7:	e8 b4 fb ff ff       	callq  400c80 <printf@plt>
  4010cc:	bf 08 00 00 00       	mov    $0x8,%edi
  4010d1:	e8 1a fd ff ff       	callq  400df0 <exit@plt>
  4010d6:	48 81 c4 08 21 00 00 	add    $0x2108,%rsp
  4010dd:	5b                   	pop    %rbx
  4010de:	5d                   	pop    %rbp
  4010df:	c3                   	retq   

00000000004010e0 <main>:
  4010e0:	41 56                	push   %r14
  4010e2:	41 55                	push   %r13
  4010e4:	41 54                	push   %r12
  4010e6:	55                   	push   %rbp
  4010e7:	53                   	push   %rbx
  4010e8:	41 89 fc             	mov    %edi,%r12d
  4010eb:	48 89 f3             	mov    %rsi,%rbx
  4010ee:	be e1 1c 40 00       	mov    $0x401ce1,%esi
  4010f3:	bf 0b 00 00 00       	mov    $0xb,%edi
  4010f8:	e8 e3 fb ff ff       	callq  400ce0 <signal@plt>
  4010fd:	be 93 1c 40 00       	mov    $0x401c93,%esi
  401102:	bf 07 00 00 00       	mov    $0x7,%edi
  401107:	e8 d4 fb ff ff       	callq  400ce0 <signal@plt>
  40110c:	be 2f 1d 40 00       	mov    $0x401d2f,%esi
  401111:	bf 04 00 00 00       	mov    $0x4,%edi
  401116:	e8 c5 fb ff ff       	callq  400ce0 <signal@plt>
  40111b:	83 3d e6 33 20 00 00 	cmpl   $0x0,0x2033e6(%rip)        # 604508 <is_checker>
  401122:	74 20                	je     401144 <main+0x64>
  401124:	be 7d 1d 40 00       	mov    $0x401d7d,%esi
  401129:	bf 0e 00 00 00       	mov    $0xe,%edi
  40112e:	e8 ad fb ff ff       	callq  400ce0 <signal@plt>
  401133:	bf 05 00 00 00       	mov    $0x5,%edi
  401138:	e8 63 fb ff ff       	callq  400ca0 <alarm@plt>
  40113d:	bd 02 2e 40 00       	mov    $0x402e02,%ebp
  401142:	eb 05                	jmp    401149 <main+0x69>
  401144:	bd fd 2d 40 00       	mov    $0x402dfd,%ebp
  401149:	48 8b 05 70 33 20 00 	mov    0x203370(%rip),%rax        # 6044c0 <stdin@@GLIBC_2.2.5>
  401150:	48 89 05 99 33 20 00 	mov    %rax,0x203399(%rip)        # 6044f0 <infile>
  401157:	41 bd 00 00 00 00    	mov    $0x0,%r13d
  40115d:	41 be 00 00 00 00    	mov    $0x0,%r14d
  401163:	e9 b9 00 00 00       	jmpq   401221 <main+0x141>
  401168:	83 e8 61             	sub    $0x61,%eax
  40116b:	3c 10                	cmp    $0x10,%al
  40116d:	0f 87 93 00 00 00    	ja     401206 <main+0x126>
  401173:	0f b6 c0             	movzbl %al,%eax
  401176:	ff 24 c5 48 2e 40 00 	jmpq   *0x402e48(,%rax,8)
  40117d:	48 8b 3b             	mov    (%rbx),%rdi
  401180:	e8 8b fd ff ff       	callq  400f10 <usage>
  401185:	be 9d 31 40 00       	mov    $0x40319d,%esi
  40118a:	48 8b 3d 37 33 20 00 	mov    0x203337(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  401191:	e8 0a fc ff ff       	callq  400da0 <fopen@plt>
  401196:	48 89 05 53 33 20 00 	mov    %rax,0x203353(%rip)        # 6044f0 <infile>
  40119d:	48 85 c0             	test   %rax,%rax
  4011a0:	75 7f                	jne    401221 <main+0x141>
  4011a2:	48 8b 15 1f 33 20 00 	mov    0x20331f(%rip),%rdx        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011a9:	be 0a 2e 40 00       	mov    $0x402e0a,%esi
  4011ae:	48 8b 3d 1b 33 20 00 	mov    0x20331b(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  4011b5:	e8 46 fb ff ff       	callq  400d00 <fprintf@plt>
  4011ba:	b8 01 00 00 00       	mov    $0x1,%eax
  4011bf:	e9 d6 00 00 00       	jmpq   40129a <main+0x1ba>
  4011c4:	ba 10 00 00 00       	mov    $0x10,%edx
  4011c9:	be 00 00 00 00       	mov    $0x0,%esi
  4011ce:	48 8b 3d f3 32 20 00 	mov    0x2032f3(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011d5:	e8 e6 fb ff ff       	callq  400dc0 <strtoul@plt>
  4011da:	41 89 c6             	mov    %eax,%r14d
  4011dd:	eb 42                	jmp    401221 <main+0x141>
  4011df:	ba 0a 00 00 00       	mov    $0xa,%edx
  4011e4:	be 00 00 00 00       	mov    $0x0,%esi
  4011e9:	48 8b 3d d8 32 20 00 	mov    0x2032d8(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011f0:	e8 2b fb ff ff       	callq  400d20 <strtol@plt>
  4011f5:	41 89 c5             	mov    %eax,%r13d
  4011f8:	eb 27                	jmp    401221 <main+0x141>
  4011fa:	c7 05 a4 32 20 00 00 	movl   $0x0,0x2032a4(%rip)        # 6044a8 <notify>
  401201:	00 00 00 
  401204:	eb 1b                	jmp    401221 <main+0x141>
  401206:	40 0f be f6          	movsbl %sil,%esi
  40120a:	bf 27 2e 40 00       	mov    $0x402e27,%edi
  40120f:	b8 00 00 00 00       	mov    $0x0,%eax
  401214:	e8 67 fa ff ff       	callq  400c80 <printf@plt>
  401219:	48 8b 3b             	mov    (%rbx),%rdi
  40121c:	e8 ef fc ff ff       	callq  400f10 <usage>
  401221:	48 89 ea             	mov    %rbp,%rdx
  401224:	48 89 de             	mov    %rbx,%rsi
  401227:	44 89 e7             	mov    %r12d,%edi
  40122a:	e8 81 fb ff ff       	callq  400db0 <getopt@plt>
  40122f:	89 c6                	mov    %eax,%esi
  401231:	3c ff                	cmp    $0xff,%al
  401233:	0f 85 2f ff ff ff    	jne    401168 <main+0x88>
  401239:	be 00 00 00 00       	mov    $0x0,%esi
  40123e:	44 89 ef             	mov    %r13d,%edi
  401241:	e8 4a fd ff ff       	callq  400f90 <initialize_target>
  401246:	83 3d bb 32 20 00 00 	cmpl   $0x0,0x2032bb(%rip)        # 604508 <is_checker>
  40124d:	74 25                	je     401274 <main+0x194>
  40124f:	44 3b 35 aa 32 20 00 	cmp    0x2032aa(%rip),%r14d        # 604500 <authkey>
  401256:	74 1c                	je     401274 <main+0x194>
  401258:	44 89 f6             	mov    %r14d,%esi
  40125b:	bf 60 2d 40 00       	mov    $0x402d60,%edi
  401260:	b8 00 00 00 00       	mov    $0x0,%eax
  401265:	e8 16 fa ff ff       	callq  400c80 <printf@plt>
  40126a:	b8 00 00 00 00       	mov    $0x0,%eax
  40126f:	e8 27 07 00 00       	callq  40199b <check_fail>
  401274:	8b 35 8a 32 20 00    	mov    0x20328a(%rip),%esi        # 604504 <cookie>
  40127a:	bf 3a 2e 40 00       	mov    $0x402e3a,%edi
  40127f:	b8 00 00 00 00       	mov    $0x0,%eax
  401284:	e8 f7 f9 ff ff       	callq  400c80 <printf@plt>
  401289:	48 8b 3d 10 32 20 00 	mov    0x203210(%rip),%rdi        # 6044a0 <buf_offset>
  401290:	e8 b7 0b 00 00       	callq  401e4c <stable_launch>
  401295:	b8 00 00 00 00       	mov    $0x0,%eax
  40129a:	5b                   	pop    %rbx
  40129b:	5d                   	pop    %rbp
  40129c:	41 5c                	pop    %r12
  40129e:	41 5d                	pop    %r13
  4012a0:	41 5e                	pop    %r14
  4012a2:	c3                   	retq   

00000000004012a3 <scramble>:
  4012a3:	b8 00 00 00 00       	mov    $0x0,%eax
  4012a8:	eb 11                	jmp    4012bb <scramble+0x18>
  4012aa:	69 c8 08 15 00 00    	imul   $0x1508,%eax,%ecx
  4012b0:	01 f9                	add    %edi,%ecx
  4012b2:	89 c2                	mov    %eax,%edx
  4012b4:	89 4c 94 d0          	mov    %ecx,-0x30(%rsp,%rdx,4)
  4012b8:	83 c0 01             	add    $0x1,%eax
  4012bb:	83 f8 09             	cmp    $0x9,%eax
  4012be:	76 ea                	jbe    4012aa <scramble+0x7>
  4012c0:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4012c4:	69 c0 c1 5e 00 00    	imul   $0x5ec1,%eax,%eax
  4012ca:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4012ce:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4012d2:	69 c0 a2 50 00 00    	imul   $0x50a2,%eax,%eax
  4012d8:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4012dc:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4012e0:	69 c0 ae bf 00 00    	imul   $0xbfae,%eax,%eax
  4012e6:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4012ea:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4012ee:	69 c0 7e 09 00 00    	imul   $0x97e,%eax,%eax
  4012f4:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4012f8:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4012fc:	69 c0 a3 a2 00 00    	imul   $0xa2a3,%eax,%eax
  401302:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401306:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40130a:	69 c0 6c 76 00 00    	imul   $0x766c,%eax,%eax
  401310:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401314:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401318:	69 c0 5a ed 00 00    	imul   $0xed5a,%eax,%eax
  40131e:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401322:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401326:	69 c0 a5 3b 00 00    	imul   $0x3ba5,%eax,%eax
  40132c:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401330:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401334:	69 c0 21 a4 00 00    	imul   $0xa421,%eax,%eax
  40133a:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  40133e:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401342:	69 c0 4f 39 00 00    	imul   $0x394f,%eax,%eax
  401348:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  40134c:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401350:	69 c0 52 de 00 00    	imul   $0xde52,%eax,%eax
  401356:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  40135a:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40135e:	69 c0 6d d6 00 00    	imul   $0xd66d,%eax,%eax
  401364:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401368:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  40136c:	69 c0 a2 0d 00 00    	imul   $0xda2,%eax,%eax
  401372:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  401376:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40137a:	69 c0 23 a5 00 00    	imul   $0xa523,%eax,%eax
  401380:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401384:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401388:	69 c0 57 a9 00 00    	imul   $0xa957,%eax,%eax
  40138e:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401392:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401396:	69 c0 73 c5 00 00    	imul   $0xc573,%eax,%eax
  40139c:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4013a0:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4013a4:	69 c0 38 e2 00 00    	imul   $0xe238,%eax,%eax
  4013aa:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4013ae:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4013b2:	69 c0 d6 23 00 00    	imul   $0x23d6,%eax,%eax
  4013b8:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4013bc:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4013c0:	69 c0 45 85 00 00    	imul   $0x8545,%eax,%eax
  4013c6:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4013ca:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4013ce:	69 c0 8d f6 00 00    	imul   $0xf68d,%eax,%eax
  4013d4:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4013d8:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4013dc:	69 c0 cc 48 00 00    	imul   $0x48cc,%eax,%eax
  4013e2:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4013e6:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4013ea:	69 c0 f8 49 00 00    	imul   $0x49f8,%eax,%eax
  4013f0:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4013f4:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4013f8:	69 c0 28 ff 00 00    	imul   $0xff28,%eax,%eax
  4013fe:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401402:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401406:	69 c0 ff db 00 00    	imul   $0xdbff,%eax,%eax
  40140c:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401410:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401414:	69 c0 d8 f5 00 00    	imul   $0xf5d8,%eax,%eax
  40141a:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40141e:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401422:	69 c0 88 5a 00 00    	imul   $0x5a88,%eax,%eax
  401428:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40142c:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  401430:	69 c0 09 2c 00 00    	imul   $0x2c09,%eax,%eax
  401436:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  40143a:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  40143e:	69 c0 98 7a 00 00    	imul   $0x7a98,%eax,%eax
  401444:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401448:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  40144c:	69 c0 db 5e 00 00    	imul   $0x5edb,%eax,%eax
  401452:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401456:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40145a:	69 c0 16 ea 00 00    	imul   $0xea16,%eax,%eax
  401460:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401464:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401468:	69 c0 f7 0a 00 00    	imul   $0xaf7,%eax,%eax
  40146e:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401472:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401476:	69 c0 4a 10 00 00    	imul   $0x104a,%eax,%eax
  40147c:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  401480:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401484:	69 c0 9f c5 00 00    	imul   $0xc59f,%eax,%eax
  40148a:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40148e:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401492:	69 c0 15 8f 00 00    	imul   $0x8f15,%eax,%eax
  401498:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40149c:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4014a0:	69 c0 74 61 00 00    	imul   $0x6174,%eax,%eax
  4014a6:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4014aa:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4014ae:	69 c0 cc 72 00 00    	imul   $0x72cc,%eax,%eax
  4014b4:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4014b8:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4014bc:	69 c0 9c f2 00 00    	imul   $0xf29c,%eax,%eax
  4014c2:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4014c6:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4014ca:	69 c0 67 e0 00 00    	imul   $0xe067,%eax,%eax
  4014d0:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4014d4:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4014d8:	69 c0 62 42 00 00    	imul   $0x4262,%eax,%eax
  4014de:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  4014e2:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4014e6:	69 c0 0e 95 00 00    	imul   $0x950e,%eax,%eax
  4014ec:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4014f0:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4014f4:	69 c0 b4 d1 00 00    	imul   $0xd1b4,%eax,%eax
  4014fa:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4014fe:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401502:	69 c0 65 0c 00 00    	imul   $0xc65,%eax,%eax
  401508:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  40150c:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401510:	69 c0 8c 20 00 00    	imul   $0x208c,%eax,%eax
  401516:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40151a:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  40151e:	69 c0 68 37 00 00    	imul   $0x3768,%eax,%eax
  401524:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  401528:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40152c:	69 c0 b9 a6 00 00    	imul   $0xa6b9,%eax,%eax
  401532:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401536:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40153a:	69 c0 99 87 00 00    	imul   $0x8799,%eax,%eax
  401540:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401544:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401548:	69 c0 08 d1 00 00    	imul   $0xd108,%eax,%eax
  40154e:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  401552:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401556:	69 c0 e0 9e 00 00    	imul   $0x9ee0,%eax,%eax
  40155c:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401560:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401564:	69 c0 03 cc 00 00    	imul   $0xcc03,%eax,%eax
  40156a:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  40156e:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401572:	69 c0 8b e1 00 00    	imul   $0xe18b,%eax,%eax
  401578:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  40157c:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401580:	69 c0 98 b3 00 00    	imul   $0xb398,%eax,%eax
  401586:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  40158a:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40158e:	69 c0 b8 d7 00 00    	imul   $0xd7b8,%eax,%eax
  401594:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401598:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  40159c:	69 c0 1b 11 00 00    	imul   $0x111b,%eax,%eax
  4015a2:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4015a6:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4015aa:	69 c0 f9 97 00 00    	imul   $0x97f9,%eax,%eax
  4015b0:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4015b4:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4015b8:	69 c0 85 74 00 00    	imul   $0x7485,%eax,%eax
  4015be:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4015c2:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4015c6:	69 c0 b8 8b 00 00    	imul   $0x8bb8,%eax,%eax
  4015cc:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4015d0:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4015d4:	69 c0 9e 1c 00 00    	imul   $0x1c9e,%eax,%eax
  4015da:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4015de:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4015e2:	69 c0 f7 43 00 00    	imul   $0x43f7,%eax,%eax
  4015e8:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4015ec:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4015f0:	69 c0 1b 1f 00 00    	imul   $0x1f1b,%eax,%eax
  4015f6:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4015fa:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4015fe:	69 c0 92 bc 00 00    	imul   $0xbc92,%eax,%eax
  401604:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401608:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40160c:	69 c0 de 9c 00 00    	imul   $0x9cde,%eax,%eax
  401612:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401616:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40161a:	69 c0 84 77 00 00    	imul   $0x7784,%eax,%eax
  401620:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401624:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401628:	69 c0 0f dc 00 00    	imul   $0xdc0f,%eax,%eax
  40162e:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401632:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401636:	69 c0 8d 04 00 00    	imul   $0x48d,%eax,%eax
  40163c:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401640:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401644:	69 c0 5a 44 00 00    	imul   $0x445a,%eax,%eax
  40164a:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  40164e:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401652:	69 c0 8a d5 00 00    	imul   $0xd58a,%eax,%eax
  401658:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40165c:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401660:	69 c0 6f 3a 00 00    	imul   $0x3a6f,%eax,%eax
  401666:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40166a:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40166e:	69 c0 27 9e 00 00    	imul   $0x9e27,%eax,%eax
  401674:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401678:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40167c:	69 c0 61 65 00 00    	imul   $0x6561,%eax,%eax
  401682:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401686:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40168a:	69 c0 08 9f 00 00    	imul   $0x9f08,%eax,%eax
  401690:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401694:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401698:	69 c0 28 63 00 00    	imul   $0x6328,%eax,%eax
  40169e:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4016a2:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4016a6:	69 c0 1f 20 00 00    	imul   $0x201f,%eax,%eax
  4016ac:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  4016b0:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4016b4:	69 c0 de c2 00 00    	imul   $0xc2de,%eax,%eax
  4016ba:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4016be:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4016c2:	69 c0 f1 bc 00 00    	imul   $0xbcf1,%eax,%eax
  4016c8:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4016cc:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4016d0:	69 c0 76 df 00 00    	imul   $0xdf76,%eax,%eax
  4016d6:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4016da:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4016de:	69 c0 cd a7 00 00    	imul   $0xa7cd,%eax,%eax
  4016e4:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4016e8:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4016ec:	69 c0 ae bd 00 00    	imul   $0xbdae,%eax,%eax
  4016f2:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4016f6:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4016fa:	69 c0 3a ea 00 00    	imul   $0xea3a,%eax,%eax
  401700:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401704:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401708:	69 c0 b6 35 00 00    	imul   $0x35b6,%eax,%eax
  40170e:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401712:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401716:	69 c0 d0 41 00 00    	imul   $0x41d0,%eax,%eax
  40171c:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401720:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401724:	69 c0 df d4 00 00    	imul   $0xd4df,%eax,%eax
  40172a:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  40172e:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401732:	69 c0 03 72 00 00    	imul   $0x7203,%eax,%eax
  401738:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40173c:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  401740:	69 c0 9c c4 00 00    	imul   $0xc49c,%eax,%eax
  401746:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  40174a:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  40174e:	69 c0 d8 5a 00 00    	imul   $0x5ad8,%eax,%eax
  401754:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  401758:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  40175c:	69 c0 4b 46 00 00    	imul   $0x464b,%eax,%eax
  401762:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401766:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40176a:	69 c0 e3 03 00 00    	imul   $0x3e3,%eax,%eax
  401770:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401774:	ba 00 00 00 00       	mov    $0x0,%edx
  401779:	b8 00 00 00 00       	mov    $0x0,%eax
  40177e:	eb 0b                	jmp    40178b <scramble+0x4e8>
  401780:	89 d1                	mov    %edx,%ecx
  401782:	8b 4c 8c d0          	mov    -0x30(%rsp,%rcx,4),%ecx
  401786:	01 c8                	add    %ecx,%eax
  401788:	83 c2 01             	add    $0x1,%edx
  40178b:	83 fa 09             	cmp    $0x9,%edx
  40178e:	76 f0                	jbe    401780 <scramble+0x4dd>
  401790:	f3 c3                	repz retq 

0000000000401792 <getbuf>:
  401792:	48 83 ec 38          	sub    $0x38,%rsp
  401796:	48 89 e7             	mov    %rsp,%rdi
  401799:	e8 2c 02 00 00       	callq  4019ca <Gets>
  40179e:	b8 01 00 00 00       	mov    $0x1,%eax
  4017a3:	48 83 c4 38          	add    $0x38,%rsp
  4017a7:	c3                   	retq   

00000000004017a8 <touch1>:
  4017a8:	48 83 ec 08          	sub    $0x8,%rsp
  4017ac:	c7 05 46 2d 20 00 01 	movl   $0x1,0x202d46(%rip)        # 6044fc <vlevel>
  4017b3:	00 00 00 
  4017b6:	bf f3 2f 40 00       	mov    $0x402ff3,%edi
  4017bb:	e8 90 f4 ff ff       	callq  400c50 <puts@plt>
  4017c0:	bf 01 00 00 00       	mov    $0x1,%edi
  4017c5:	e8 ef 03 00 00       	callq  401bb9 <validate>
  4017ca:	bf 00 00 00 00       	mov    $0x0,%edi
  4017cf:	e8 1c f6 ff ff       	callq  400df0 <exit@plt>

00000000004017d4 <touch2>:
  4017d4:	48 83 ec 08          	sub    $0x8,%rsp
  4017d8:	89 fe                	mov    %edi,%esi
  4017da:	c7 05 18 2d 20 00 02 	movl   $0x2,0x202d18(%rip)        # 6044fc <vlevel>
  4017e1:	00 00 00 
  4017e4:	3b 3d 1a 2d 20 00    	cmp    0x202d1a(%rip),%edi        # 604504 <cookie>
  4017ea:	75 1b                	jne    401807 <touch2+0x33>
  4017ec:	bf 18 30 40 00       	mov    $0x403018,%edi
  4017f1:	b8 00 00 00 00       	mov    $0x0,%eax
  4017f6:	e8 85 f4 ff ff       	callq  400c80 <printf@plt>
  4017fb:	bf 02 00 00 00       	mov    $0x2,%edi
  401800:	e8 b4 03 00 00       	callq  401bb9 <validate>
  401805:	eb 19                	jmp    401820 <touch2+0x4c>
  401807:	bf 40 30 40 00       	mov    $0x403040,%edi
  40180c:	b8 00 00 00 00       	mov    $0x0,%eax
  401811:	e8 6a f4 ff ff       	callq  400c80 <printf@plt>
  401816:	bf 02 00 00 00       	mov    $0x2,%edi
  40181b:	e8 4b 04 00 00       	callq  401c6b <fail>
  401820:	bf 00 00 00 00       	mov    $0x0,%edi
  401825:	e8 c6 f5 ff ff       	callq  400df0 <exit@plt>

000000000040182a <hexmatch>:
  40182a:	41 54                	push   %r12
  40182c:	55                   	push   %rbp
  40182d:	53                   	push   %rbx
  40182e:	48 83 ec 70          	sub    $0x70,%rsp
  401832:	41 89 fc             	mov    %edi,%r12d
  401835:	48 89 f5             	mov    %rsi,%rbp
  401838:	e8 13 f5 ff ff       	callq  400d50 <random@plt>
  40183d:	48 89 c1             	mov    %rax,%rcx
  401840:	48 ba 0b d7 a3 70 3d 	movabs $0xa3d70a3d70a3d70b,%rdx
  401847:	0a d7 a3 
  40184a:	48 f7 ea             	imul   %rdx
  40184d:	48 8d 04 0a          	lea    (%rdx,%rcx,1),%rax
  401851:	48 c1 f8 06          	sar    $0x6,%rax
  401855:	48 89 ce             	mov    %rcx,%rsi
  401858:	48 c1 fe 3f          	sar    $0x3f,%rsi
  40185c:	48 29 f0             	sub    %rsi,%rax
  40185f:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401863:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401867:	48 c1 e0 02          	shl    $0x2,%rax
  40186b:	48 29 c1             	sub    %rax,%rcx
  40186e:	48 8d 1c 0c          	lea    (%rsp,%rcx,1),%rbx
  401872:	44 89 e2             	mov    %r12d,%edx
  401875:	be 10 30 40 00       	mov    $0x403010,%esi
  40187a:	48 89 df             	mov    %rbx,%rdi
  40187d:	b8 00 00 00 00       	mov    $0x0,%eax
  401882:	e8 59 f5 ff ff       	callq  400de0 <sprintf@plt>
  401887:	ba 09 00 00 00       	mov    $0x9,%edx
  40188c:	48 89 de             	mov    %rbx,%rsi
  40188f:	48 89 ef             	mov    %rbp,%rdi
  401892:	e8 99 f3 ff ff       	callq  400c30 <strncmp@plt>
  401897:	85 c0                	test   %eax,%eax
  401899:	0f 94 c0             	sete   %al
  40189c:	0f b6 c0             	movzbl %al,%eax
  40189f:	48 83 c4 70          	add    $0x70,%rsp
  4018a3:	5b                   	pop    %rbx
  4018a4:	5d                   	pop    %rbp
  4018a5:	41 5c                	pop    %r12
  4018a7:	c3                   	retq   

00000000004018a8 <touch3>:
  4018a8:	53                   	push   %rbx
  4018a9:	48 89 fb             	mov    %rdi,%rbx
  4018ac:	c7 05 46 2c 20 00 03 	movl   $0x3,0x202c46(%rip)        # 6044fc <vlevel>
  4018b3:	00 00 00 
  4018b6:	48 89 fe             	mov    %rdi,%rsi
  4018b9:	8b 3d 45 2c 20 00    	mov    0x202c45(%rip),%edi        # 604504 <cookie>
  4018bf:	e8 66 ff ff ff       	callq  40182a <hexmatch>
  4018c4:	85 c0                	test   %eax,%eax
  4018c6:	74 1e                	je     4018e6 <touch3+0x3e>
  4018c8:	48 89 de             	mov    %rbx,%rsi
  4018cb:	bf 68 30 40 00       	mov    $0x403068,%edi
  4018d0:	b8 00 00 00 00       	mov    $0x0,%eax
  4018d5:	e8 a6 f3 ff ff       	callq  400c80 <printf@plt>
  4018da:	bf 03 00 00 00       	mov    $0x3,%edi
  4018df:	e8 d5 02 00 00       	callq  401bb9 <validate>
  4018e4:	eb 1c                	jmp    401902 <touch3+0x5a>
  4018e6:	48 89 de             	mov    %rbx,%rsi
  4018e9:	bf 90 30 40 00       	mov    $0x403090,%edi
  4018ee:	b8 00 00 00 00       	mov    $0x0,%eax
  4018f3:	e8 88 f3 ff ff       	callq  400c80 <printf@plt>
  4018f8:	bf 03 00 00 00       	mov    $0x3,%edi
  4018fd:	e8 69 03 00 00       	callq  401c6b <fail>
  401902:	bf 00 00 00 00       	mov    $0x0,%edi
  401907:	e8 e4 f4 ff ff       	callq  400df0 <exit@plt>

000000000040190c <test>:
  40190c:	48 83 ec 08          	sub    $0x8,%rsp
  401910:	b8 00 00 00 00       	mov    $0x0,%eax
  401915:	e8 78 fe ff ff       	callq  401792 <getbuf>
  40191a:	89 c6                	mov    %eax,%esi
  40191c:	bf b8 30 40 00       	mov    $0x4030b8,%edi
  401921:	b8 00 00 00 00       	mov    $0x0,%eax
  401926:	e8 55 f3 ff ff       	callq  400c80 <printf@plt>
  40192b:	48 83 c4 08          	add    $0x8,%rsp
  40192f:	c3                   	retq   

0000000000401930 <save_char>:
  401930:	8b 05 ee 37 20 00    	mov    0x2037ee(%rip),%eax        # 605124 <gets_cnt>
  401936:	3d ff 03 00 00       	cmp    $0x3ff,%eax
  40193b:	7f 49                	jg     401986 <save_char+0x56>
  40193d:	8d 14 40             	lea    (%rax,%rax,2),%edx
  401940:	89 f9                	mov    %edi,%ecx
  401942:	c0 e9 04             	shr    $0x4,%cl
  401945:	83 e1 0f             	and    $0xf,%ecx
  401948:	0f b6 b1 e0 33 40 00 	movzbl 0x4033e0(%rcx),%esi
  40194f:	48 63 ca             	movslq %edx,%rcx
  401952:	40 88 b1 20 45 60 00 	mov    %sil,0x604520(%rcx)
  401959:	8d 4a 01             	lea    0x1(%rdx),%ecx
  40195c:	83 e7 0f             	and    $0xf,%edi
  40195f:	0f b6 b7 e0 33 40 00 	movzbl 0x4033e0(%rdi),%esi
  401966:	48 63 c9             	movslq %ecx,%rcx
  401969:	40 88 b1 20 45 60 00 	mov    %sil,0x604520(%rcx)
  401970:	83 c2 02             	add    $0x2,%edx
  401973:	48 63 d2             	movslq %edx,%rdx
  401976:	c6 82 20 45 60 00 20 	movb   $0x20,0x604520(%rdx)
  40197d:	83 c0 01             	add    $0x1,%eax
  401980:	89 05 9e 37 20 00    	mov    %eax,0x20379e(%rip)        # 605124 <gets_cnt>
  401986:	f3 c3                	repz retq 

0000000000401988 <save_term>:
  401988:	8b 05 96 37 20 00    	mov    0x203796(%rip),%eax        # 605124 <gets_cnt>
  40198e:	8d 04 40             	lea    (%rax,%rax,2),%eax
  401991:	48 98                	cltq   
  401993:	c6 80 20 45 60 00 00 	movb   $0x0,0x604520(%rax)
  40199a:	c3                   	retq   

000000000040199b <check_fail>:
  40199b:	48 83 ec 08          	sub    $0x8,%rsp
  40199f:	0f be 35 82 37 20 00 	movsbl 0x203782(%rip),%esi        # 605128 <target_prefix>
  4019a6:	b9 20 45 60 00       	mov    $0x604520,%ecx
  4019ab:	8b 15 47 2b 20 00    	mov    0x202b47(%rip),%edx        # 6044f8 <check_level>
  4019b1:	bf db 30 40 00       	mov    $0x4030db,%edi
  4019b6:	b8 00 00 00 00       	mov    $0x0,%eax
  4019bb:	e8 c0 f2 ff ff       	callq  400c80 <printf@plt>
  4019c0:	bf 01 00 00 00       	mov    $0x1,%edi
  4019c5:	e8 26 f4 ff ff       	callq  400df0 <exit@plt>

00000000004019ca <Gets>:
  4019ca:	41 54                	push   %r12
  4019cc:	55                   	push   %rbp
  4019cd:	53                   	push   %rbx
  4019ce:	49 89 fc             	mov    %rdi,%r12
  4019d1:	c7 05 49 37 20 00 00 	movl   $0x0,0x203749(%rip)        # 605124 <gets_cnt>
  4019d8:	00 00 00 
  4019db:	48 89 fb             	mov    %rdi,%rbx
  4019de:	eb 11                	jmp    4019f1 <Gets+0x27>
  4019e0:	48 8d 6b 01          	lea    0x1(%rbx),%rbp
  4019e4:	88 03                	mov    %al,(%rbx)
  4019e6:	0f b6 f8             	movzbl %al,%edi
  4019e9:	e8 42 ff ff ff       	callq  401930 <save_char>
  4019ee:	48 89 eb             	mov    %rbp,%rbx
  4019f1:	48 8b 3d f8 2a 20 00 	mov    0x202af8(%rip),%rdi        # 6044f0 <infile>
  4019f8:	e8 63 f3 ff ff       	callq  400d60 <_IO_getc@plt>
  4019fd:	83 f8 ff             	cmp    $0xffffffff,%eax
  401a00:	74 05                	je     401a07 <Gets+0x3d>
  401a02:	83 f8 0a             	cmp    $0xa,%eax
  401a05:	75 d9                	jne    4019e0 <Gets+0x16>
  401a07:	c6 03 00             	movb   $0x0,(%rbx)
  401a0a:	b8 00 00 00 00       	mov    $0x0,%eax
  401a0f:	e8 74 ff ff ff       	callq  401988 <save_term>
  401a14:	4c 89 e0             	mov    %r12,%rax
  401a17:	5b                   	pop    %rbx
  401a18:	5d                   	pop    %rbp
  401a19:	41 5c                	pop    %r12
  401a1b:	c3                   	retq   

0000000000401a1c <notify_server>:
  401a1c:	83 3d e5 2a 20 00 00 	cmpl   $0x0,0x202ae5(%rip)        # 604508 <is_checker>
  401a23:	0f 85 8e 01 00 00    	jne    401bb7 <notify_server+0x19b>
  401a29:	53                   	push   %rbx
  401a2a:	48 81 ec 10 40 00 00 	sub    $0x4010,%rsp
  401a31:	89 fb                	mov    %edi,%ebx
  401a33:	8b 05 eb 36 20 00    	mov    0x2036eb(%rip),%eax        # 605124 <gets_cnt>
  401a39:	83 c0 64             	add    $0x64,%eax
  401a3c:	3d 00 20 00 00       	cmp    $0x2000,%eax
  401a41:	7e 19                	jle    401a5c <notify_server+0x40>
  401a43:	bf 10 32 40 00       	mov    $0x403210,%edi
  401a48:	b8 00 00 00 00       	mov    $0x0,%eax
  401a4d:	e8 2e f2 ff ff       	callq  400c80 <printf@plt>
  401a52:	bf 01 00 00 00       	mov    $0x1,%edi
  401a57:	e8 94 f3 ff ff       	callq  400df0 <exit@plt>
  401a5c:	44 0f be 0d c4 36 20 	movsbl 0x2036c4(%rip),%r9d        # 605128 <target_prefix>
  401a63:	00 
  401a64:	83 3d 3d 2a 20 00 00 	cmpl   $0x0,0x202a3d(%rip)        # 6044a8 <notify>
  401a6b:	74 09                	je     401a76 <notify_server+0x5a>
  401a6d:	44 8b 05 8c 2a 20 00 	mov    0x202a8c(%rip),%r8d        # 604500 <authkey>
  401a74:	eb 06                	jmp    401a7c <notify_server+0x60>
  401a76:	41 b8 ff ff ff ff    	mov    $0xffffffff,%r8d
  401a7c:	85 db                	test   %ebx,%ebx
  401a7e:	74 07                	je     401a87 <notify_server+0x6b>
  401a80:	b9 f1 30 40 00       	mov    $0x4030f1,%ecx
  401a85:	eb 05                	jmp    401a8c <notify_server+0x70>
  401a87:	b9 f6 30 40 00       	mov    $0x4030f6,%ecx
  401a8c:	48 c7 44 24 08 20 45 	movq   $0x604520,0x8(%rsp)
  401a93:	60 00 
  401a95:	89 34 24             	mov    %esi,(%rsp)
  401a98:	8b 15 ca 26 20 00    	mov    0x2026ca(%rip),%edx        # 604168 <target_id>
  401a9e:	be fb 30 40 00       	mov    $0x4030fb,%esi
  401aa3:	48 8d bc 24 10 20 00 	lea    0x2010(%rsp),%rdi
  401aaa:	00 
  401aab:	b8 00 00 00 00       	mov    $0x0,%eax
  401ab0:	e8 2b f3 ff ff       	callq  400de0 <sprintf@plt>
  401ab5:	83 3d ec 29 20 00 00 	cmpl   $0x0,0x2029ec(%rip)        # 6044a8 <notify>
  401abc:	74 78                	je     401b36 <notify_server+0x11a>
  401abe:	85 db                	test   %ebx,%ebx
  401ac0:	74 68                	je     401b2a <notify_server+0x10e>
  401ac2:	4c 8d 4c 24 10       	lea    0x10(%rsp),%r9
  401ac7:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  401acd:	48 8d 8c 24 10 20 00 	lea    0x2010(%rsp),%rcx
  401ad4:	00 
  401ad5:	48 8b 15 94 26 20 00 	mov    0x202694(%rip),%rdx        # 604170 <lab>
  401adc:	48 8b 35 95 26 20 00 	mov    0x202695(%rip),%rsi        # 604178 <course>
  401ae3:	48 8b 3d 76 26 20 00 	mov    0x202676(%rip),%rdi        # 604160 <user_id>
  401aea:	e8 94 0f 00 00       	callq  402a83 <driver_post>
  401aef:	85 c0                	test   %eax,%eax
  401af1:	79 1e                	jns    401b11 <notify_server+0xf5>
  401af3:	48 8d 74 24 10       	lea    0x10(%rsp),%rsi
  401af8:	bf 17 31 40 00       	mov    $0x403117,%edi
  401afd:	b8 00 00 00 00       	mov    $0x0,%eax
  401b02:	e8 79 f1 ff ff       	callq  400c80 <printf@plt>
  401b07:	bf 01 00 00 00       	mov    $0x1,%edi
  401b0c:	e8 df f2 ff ff       	callq  400df0 <exit@plt>
  401b11:	bf 40 32 40 00       	mov    $0x403240,%edi
  401b16:	e8 35 f1 ff ff       	callq  400c50 <puts@plt>
  401b1b:	bf 23 31 40 00       	mov    $0x403123,%edi
  401b20:	e8 2b f1 ff ff       	callq  400c50 <puts@plt>
  401b25:	e9 85 00 00 00       	jmpq   401baf <notify_server+0x193>
  401b2a:	bf 2d 31 40 00       	mov    $0x40312d,%edi
  401b2f:	e8 1c f1 ff ff       	callq  400c50 <puts@plt>
  401b34:	eb 79                	jmp    401baf <notify_server+0x193>
  401b36:	85 db                	test   %ebx,%ebx
  401b38:	74 08                	je     401b42 <notify_server+0x126>
  401b3a:	be f1 30 40 00       	mov    $0x4030f1,%esi
  401b3f:	90                   	nop
  401b40:	eb 05                	jmp    401b47 <notify_server+0x12b>
  401b42:	be f6 30 40 00       	mov    $0x4030f6,%esi
  401b47:	bf 78 32 40 00       	mov    $0x403278,%edi
  401b4c:	b8 00 00 00 00       	mov    $0x0,%eax
  401b51:	e8 2a f1 ff ff       	callq  400c80 <printf@plt>
  401b56:	48 8b 35 03 26 20 00 	mov    0x202603(%rip),%rsi        # 604160 <user_id>
  401b5d:	bf 34 31 40 00       	mov    $0x403134,%edi
  401b62:	b8 00 00 00 00       	mov    $0x0,%eax
  401b67:	e8 14 f1 ff ff       	callq  400c80 <printf@plt>
  401b6c:	48 8b 35 05 26 20 00 	mov    0x202605(%rip),%rsi        # 604178 <course>
  401b73:	bf 41 31 40 00       	mov    $0x403141,%edi
  401b78:	b8 00 00 00 00       	mov    $0x0,%eax
  401b7d:	e8 fe f0 ff ff       	callq  400c80 <printf@plt>
  401b82:	48 8b 35 e7 25 20 00 	mov    0x2025e7(%rip),%rsi        # 604170 <lab>
  401b89:	bf 4d 31 40 00       	mov    $0x40314d,%edi
  401b8e:	b8 00 00 00 00       	mov    $0x0,%eax
  401b93:	e8 e8 f0 ff ff       	callq  400c80 <printf@plt>
  401b98:	48 8d b4 24 10 20 00 	lea    0x2010(%rsp),%rsi
  401b9f:	00 
  401ba0:	bf 56 31 40 00       	mov    $0x403156,%edi
  401ba5:	b8 00 00 00 00       	mov    $0x0,%eax
  401baa:	e8 d1 f0 ff ff       	callq  400c80 <printf@plt>
  401baf:	48 81 c4 10 40 00 00 	add    $0x4010,%rsp
  401bb6:	5b                   	pop    %rbx
  401bb7:	f3 c3                	repz retq 

0000000000401bb9 <validate>:
  401bb9:	53                   	push   %rbx
  401bba:	89 fb                	mov    %edi,%ebx
  401bbc:	83 3d 45 29 20 00 00 	cmpl   $0x0,0x202945(%rip)        # 604508 <is_checker>
  401bc3:	74 60                	je     401c25 <validate+0x6c>
  401bc5:	39 3d 31 29 20 00    	cmp    %edi,0x202931(%rip)        # 6044fc <vlevel>
  401bcb:	74 14                	je     401be1 <validate+0x28>
  401bcd:	bf 62 31 40 00       	mov    $0x403162,%edi
  401bd2:	e8 79 f0 ff ff       	callq  400c50 <puts@plt>
  401bd7:	b8 00 00 00 00       	mov    $0x0,%eax
  401bdc:	e8 ba fd ff ff       	callq  40199b <check_fail>
  401be1:	8b 35 11 29 20 00    	mov    0x202911(%rip),%esi        # 6044f8 <check_level>
  401be7:	39 fe                	cmp    %edi,%esi
  401be9:	74 1b                	je     401c06 <validate+0x4d>
  401beb:	89 fa                	mov    %edi,%edx
  401bed:	bf a0 32 40 00       	mov    $0x4032a0,%edi
  401bf2:	b8 00 00 00 00       	mov    $0x0,%eax
  401bf7:	e8 84 f0 ff ff       	callq  400c80 <printf@plt>
  401bfc:	b8 00 00 00 00       	mov    $0x0,%eax
  401c01:	e8 95 fd ff ff       	callq  40199b <check_fail>
  401c06:	0f be 35 1b 35 20 00 	movsbl 0x20351b(%rip),%esi        # 605128 <target_prefix>
  401c0d:	b9 20 45 60 00       	mov    $0x604520,%ecx
  401c12:	89 fa                	mov    %edi,%edx
  401c14:	bf 80 31 40 00       	mov    $0x403180,%edi
  401c19:	b8 00 00 00 00       	mov    $0x0,%eax
  401c1e:	e8 5d f0 ff ff       	callq  400c80 <printf@plt>
  401c23:	eb 44                	jmp    401c69 <validate+0xb0>
  401c25:	39 3d d1 28 20 00    	cmp    %edi,0x2028d1(%rip)        # 6044fc <vlevel>
  401c2b:	74 18                	je     401c45 <validate+0x8c>
  401c2d:	bf 62 31 40 00       	mov    $0x403162,%edi
  401c32:	e8 19 f0 ff ff       	callq  400c50 <puts@plt>
  401c37:	89 de                	mov    %ebx,%esi
  401c39:	bf 00 00 00 00       	mov    $0x0,%edi
  401c3e:	e8 d9 fd ff ff       	callq  401a1c <notify_server>
  401c43:	eb 24                	jmp    401c69 <validate+0xb0>
  401c45:	0f be 15 dc 34 20 00 	movsbl 0x2034dc(%rip),%edx        # 605128 <target_prefix>
  401c4c:	89 fe                	mov    %edi,%esi
  401c4e:	bf c8 32 40 00       	mov    $0x4032c8,%edi
  401c53:	b8 00 00 00 00       	mov    $0x0,%eax
  401c58:	e8 23 f0 ff ff       	callq  400c80 <printf@plt>
  401c5d:	89 de                	mov    %ebx,%esi
  401c5f:	bf 01 00 00 00       	mov    $0x1,%edi
  401c64:	e8 b3 fd ff ff       	callq  401a1c <notify_server>
  401c69:	5b                   	pop    %rbx
  401c6a:	c3                   	retq   

0000000000401c6b <fail>:
  401c6b:	48 83 ec 08          	sub    $0x8,%rsp
  401c6f:	83 3d 92 28 20 00 00 	cmpl   $0x0,0x202892(%rip)        # 604508 <is_checker>
  401c76:	74 0a                	je     401c82 <fail+0x17>
  401c78:	b8 00 00 00 00       	mov    $0x0,%eax
  401c7d:	e8 19 fd ff ff       	callq  40199b <check_fail>
  401c82:	89 fe                	mov    %edi,%esi
  401c84:	bf 00 00 00 00       	mov    $0x0,%edi
  401c89:	e8 8e fd ff ff       	callq  401a1c <notify_server>
  401c8e:	48 83 c4 08          	add    $0x8,%rsp
  401c92:	c3                   	retq   

0000000000401c93 <bushandler>:
  401c93:	48 83 ec 08          	sub    $0x8,%rsp
  401c97:	83 3d 6a 28 20 00 00 	cmpl   $0x0,0x20286a(%rip)        # 604508 <is_checker>
  401c9e:	74 14                	je     401cb4 <bushandler+0x21>
  401ca0:	bf 95 31 40 00       	mov    $0x403195,%edi
  401ca5:	e8 a6 ef ff ff       	callq  400c50 <puts@plt>
  401caa:	b8 00 00 00 00       	mov    $0x0,%eax
  401caf:	e8 e7 fc ff ff       	callq  40199b <check_fail>
  401cb4:	bf 00 33 40 00       	mov    $0x403300,%edi
  401cb9:	e8 92 ef ff ff       	callq  400c50 <puts@plt>
  401cbe:	bf 9f 31 40 00       	mov    $0x40319f,%edi
  401cc3:	e8 88 ef ff ff       	callq  400c50 <puts@plt>
  401cc8:	be 00 00 00 00       	mov    $0x0,%esi
  401ccd:	bf 00 00 00 00       	mov    $0x0,%edi
  401cd2:	e8 45 fd ff ff       	callq  401a1c <notify_server>
  401cd7:	bf 01 00 00 00       	mov    $0x1,%edi
  401cdc:	e8 0f f1 ff ff       	callq  400df0 <exit@plt>

0000000000401ce1 <seghandler>:
  401ce1:	48 83 ec 08          	sub    $0x8,%rsp
  401ce5:	83 3d 1c 28 20 00 00 	cmpl   $0x0,0x20281c(%rip)        # 604508 <is_checker>
  401cec:	74 14                	je     401d02 <seghandler+0x21>
  401cee:	bf b5 31 40 00       	mov    $0x4031b5,%edi
  401cf3:	e8 58 ef ff ff       	callq  400c50 <puts@plt>
  401cf8:	b8 00 00 00 00       	mov    $0x0,%eax
  401cfd:	e8 99 fc ff ff       	callq  40199b <check_fail>
  401d02:	bf 20 33 40 00       	mov    $0x403320,%edi
  401d07:	e8 44 ef ff ff       	callq  400c50 <puts@plt>
  401d0c:	bf 9f 31 40 00       	mov    $0x40319f,%edi
  401d11:	e8 3a ef ff ff       	callq  400c50 <puts@plt>
  401d16:	be 00 00 00 00       	mov    $0x0,%esi
  401d1b:	bf 00 00 00 00       	mov    $0x0,%edi
  401d20:	e8 f7 fc ff ff       	callq  401a1c <notify_server>
  401d25:	bf 01 00 00 00       	mov    $0x1,%edi
  401d2a:	e8 c1 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401d2f <illegalhandler>:
  401d2f:	48 83 ec 08          	sub    $0x8,%rsp
  401d33:	83 3d ce 27 20 00 00 	cmpl   $0x0,0x2027ce(%rip)        # 604508 <is_checker>
  401d3a:	74 14                	je     401d50 <illegalhandler+0x21>
  401d3c:	bf c8 31 40 00       	mov    $0x4031c8,%edi
  401d41:	e8 0a ef ff ff       	callq  400c50 <puts@plt>
  401d46:	b8 00 00 00 00       	mov    $0x0,%eax
  401d4b:	e8 4b fc ff ff       	callq  40199b <check_fail>
  401d50:	bf 48 33 40 00       	mov    $0x403348,%edi
  401d55:	e8 f6 ee ff ff       	callq  400c50 <puts@plt>
  401d5a:	bf 9f 31 40 00       	mov    $0x40319f,%edi
  401d5f:	e8 ec ee ff ff       	callq  400c50 <puts@plt>
  401d64:	be 00 00 00 00       	mov    $0x0,%esi
  401d69:	bf 00 00 00 00       	mov    $0x0,%edi
  401d6e:	e8 a9 fc ff ff       	callq  401a1c <notify_server>
  401d73:	bf 01 00 00 00       	mov    $0x1,%edi
  401d78:	e8 73 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401d7d <sigalrmhandler>:
  401d7d:	48 83 ec 08          	sub    $0x8,%rsp
  401d81:	83 3d 80 27 20 00 00 	cmpl   $0x0,0x202780(%rip)        # 604508 <is_checker>
  401d88:	74 14                	je     401d9e <sigalrmhandler+0x21>
  401d8a:	bf dc 31 40 00       	mov    $0x4031dc,%edi
  401d8f:	e8 bc ee ff ff       	callq  400c50 <puts@plt>
  401d94:	b8 00 00 00 00       	mov    $0x0,%eax
  401d99:	e8 fd fb ff ff       	callq  40199b <check_fail>
  401d9e:	be 05 00 00 00       	mov    $0x5,%esi
  401da3:	bf 78 33 40 00       	mov    $0x403378,%edi
  401da8:	b8 00 00 00 00       	mov    $0x0,%eax
  401dad:	e8 ce ee ff ff       	callq  400c80 <printf@plt>
  401db2:	be 00 00 00 00       	mov    $0x0,%esi
  401db7:	bf 00 00 00 00       	mov    $0x0,%edi
  401dbc:	e8 5b fc ff ff       	callq  401a1c <notify_server>
  401dc1:	bf 01 00 00 00       	mov    $0x1,%edi
  401dc6:	e8 25 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401dcb <launch>:
  401dcb:	55                   	push   %rbp
  401dcc:	48 89 e5             	mov    %rsp,%rbp
  401dcf:	48 89 fa             	mov    %rdi,%rdx
  401dd2:	48 8d 47 1e          	lea    0x1e(%rdi),%rax
  401dd6:	48 83 e0 f0          	and    $0xfffffffffffffff0,%rax
  401dda:	48 29 c4             	sub    %rax,%rsp
  401ddd:	48 8d 7c 24 0f       	lea    0xf(%rsp),%rdi
  401de2:	48 83 e7 f0          	and    $0xfffffffffffffff0,%rdi
  401de6:	be f4 00 00 00       	mov    $0xf4,%esi
  401deb:	e8 a0 ee ff ff       	callq  400c90 <memset@plt>
  401df0:	48 8b 05 c9 26 20 00 	mov    0x2026c9(%rip),%rax        # 6044c0 <stdin@@GLIBC_2.2.5>
  401df7:	48 39 05 f2 26 20 00 	cmp    %rax,0x2026f2(%rip)        # 6044f0 <infile>
  401dfe:	75 0f                	jne    401e0f <launch+0x44>
  401e00:	bf e4 31 40 00       	mov    $0x4031e4,%edi
  401e05:	b8 00 00 00 00       	mov    $0x0,%eax
  401e0a:	e8 71 ee ff ff       	callq  400c80 <printf@plt>
  401e0f:	c7 05 e3 26 20 00 00 	movl   $0x0,0x2026e3(%rip)        # 6044fc <vlevel>
  401e16:	00 00 00 
  401e19:	b8 00 00 00 00       	mov    $0x0,%eax
  401e1e:	e8 e9 fa ff ff       	callq  40190c <test>
  401e23:	83 3d de 26 20 00 00 	cmpl   $0x0,0x2026de(%rip)        # 604508 <is_checker>
  401e2a:	74 14                	je     401e40 <launch+0x75>
  401e2c:	bf f1 31 40 00       	mov    $0x4031f1,%edi
  401e31:	e8 1a ee ff ff       	callq  400c50 <puts@plt>
  401e36:	b8 00 00 00 00       	mov    $0x0,%eax
  401e3b:	e8 5b fb ff ff       	callq  40199b <check_fail>
  401e40:	bf fc 31 40 00       	mov    $0x4031fc,%edi
  401e45:	e8 06 ee ff ff       	callq  400c50 <puts@plt>
  401e4a:	c9                   	leaveq 
  401e4b:	c3                   	retq   

0000000000401e4c <stable_launch>:
  401e4c:	53                   	push   %rbx
  401e4d:	48 89 3d 94 26 20 00 	mov    %rdi,0x202694(%rip)        # 6044e8 <global_offset>
  401e54:	41 b9 00 00 00 00    	mov    $0x0,%r9d
  401e5a:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  401e60:	b9 32 01 00 00       	mov    $0x132,%ecx
  401e65:	ba 07 00 00 00       	mov    $0x7,%edx
  401e6a:	be 00 00 10 00       	mov    $0x100000,%esi
  401e6f:	bf 00 60 58 55       	mov    $0x55586000,%edi
  401e74:	e8 f7 ed ff ff       	callq  400c70 <mmap@plt>
  401e79:	48 89 c3             	mov    %rax,%rbx
  401e7c:	48 3d 00 60 58 55    	cmp    $0x55586000,%rax
  401e82:	74 32                	je     401eb6 <stable_launch+0x6a>
  401e84:	be 00 00 10 00       	mov    $0x100000,%esi
  401e89:	48 89 c7             	mov    %rax,%rdi
  401e8c:	e8 ef ee ff ff       	callq  400d80 <munmap@plt>
  401e91:	ba 00 60 58 55       	mov    $0x55586000,%edx
  401e96:	be b0 33 40 00       	mov    $0x4033b0,%esi
  401e9b:	48 8b 3d 2e 26 20 00 	mov    0x20262e(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  401ea2:	b8 00 00 00 00       	mov    $0x0,%eax
  401ea7:	e8 54 ee ff ff       	callq  400d00 <fprintf@plt>
  401eac:	bf 01 00 00 00       	mov    $0x1,%edi
  401eb1:	e8 3a ef ff ff       	callq  400df0 <exit@plt>
  401eb6:	48 8d 90 f8 ff 0f 00 	lea    0xffff8(%rax),%rdx
  401ebd:	48 89 15 6c 32 20 00 	mov    %rdx,0x20326c(%rip)        # 605130 <stack_top>
  401ec4:	48 89 e0             	mov    %rsp,%rax
  401ec7:	48 89 d4             	mov    %rdx,%rsp
  401eca:	48 89 c2             	mov    %rax,%rdx
  401ecd:	48 89 15 0c 26 20 00 	mov    %rdx,0x20260c(%rip)        # 6044e0 <global_save_stack>
  401ed4:	48 8b 3d 0d 26 20 00 	mov    0x20260d(%rip),%rdi        # 6044e8 <global_offset>
  401edb:	e8 eb fe ff ff       	callq  401dcb <launch>
  401ee0:	48 8b 05 f9 25 20 00 	mov    0x2025f9(%rip),%rax        # 6044e0 <global_save_stack>
  401ee7:	48 89 c4             	mov    %rax,%rsp
  401eea:	be 00 00 10 00       	mov    $0x100000,%esi
  401eef:	48 89 df             	mov    %rbx,%rdi
  401ef2:	e8 89 ee ff ff       	callq  400d80 <munmap@plt>
  401ef7:	5b                   	pop    %rbx
  401ef8:	c3                   	retq   
  401ef9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000401f00 <rio_readinitb>:
  401f00:	89 37                	mov    %esi,(%rdi)
  401f02:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%rdi)
  401f09:	48 8d 47 10          	lea    0x10(%rdi),%rax
  401f0d:	48 89 47 08          	mov    %rax,0x8(%rdi)
  401f11:	c3                   	retq   

0000000000401f12 <sigalrm_handler>:
  401f12:	48 83 ec 08          	sub    $0x8,%rsp
  401f16:	ba 00 00 00 00       	mov    $0x0,%edx
  401f1b:	be f0 33 40 00       	mov    $0x4033f0,%esi
  401f20:	48 8b 3d a9 25 20 00 	mov    0x2025a9(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  401f27:	b8 00 00 00 00       	mov    $0x0,%eax
  401f2c:	e8 cf ed ff ff       	callq  400d00 <fprintf@plt>
  401f31:	bf 01 00 00 00       	mov    $0x1,%edi
  401f36:	e8 b5 ee ff ff       	callq  400df0 <exit@plt>

0000000000401f3b <urlencode>:
  401f3b:	41 54                	push   %r12
  401f3d:	55                   	push   %rbp
  401f3e:	53                   	push   %rbx
  401f3f:	48 83 ec 10          	sub    $0x10,%rsp
  401f43:	48 89 fb             	mov    %rdi,%rbx
  401f46:	48 89 f5             	mov    %rsi,%rbp
  401f49:	b8 00 00 00 00       	mov    $0x0,%eax
  401f4e:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  401f55:	f2 ae                	repnz scas %es:(%rdi),%al
  401f57:	48 f7 d1             	not    %rcx
  401f5a:	8d 41 ff             	lea    -0x1(%rcx),%eax
  401f5d:	e9 93 00 00 00       	jmpq   401ff5 <urlencode+0xba>
  401f62:	0f b6 13             	movzbl (%rbx),%edx
  401f65:	80 fa 2a             	cmp    $0x2a,%dl
  401f68:	0f 94 c1             	sete   %cl
  401f6b:	80 fa 2d             	cmp    $0x2d,%dl
  401f6e:	0f 94 c0             	sete   %al
  401f71:	08 c1                	or     %al,%cl
  401f73:	75 1f                	jne    401f94 <urlencode+0x59>
  401f75:	80 fa 2e             	cmp    $0x2e,%dl
  401f78:	74 1a                	je     401f94 <urlencode+0x59>
  401f7a:	80 fa 5f             	cmp    $0x5f,%dl
  401f7d:	74 15                	je     401f94 <urlencode+0x59>
  401f7f:	8d 42 d0             	lea    -0x30(%rdx),%eax
  401f82:	3c 09                	cmp    $0x9,%al
  401f84:	76 0e                	jbe    401f94 <urlencode+0x59>
  401f86:	8d 42 bf             	lea    -0x41(%rdx),%eax
  401f89:	3c 19                	cmp    $0x19,%al
  401f8b:	76 07                	jbe    401f94 <urlencode+0x59>
  401f8d:	8d 42 9f             	lea    -0x61(%rdx),%eax
  401f90:	3c 19                	cmp    $0x19,%al
  401f92:	77 09                	ja     401f9d <urlencode+0x62>
  401f94:	88 55 00             	mov    %dl,0x0(%rbp)
  401f97:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401f9b:	eb 51                	jmp    401fee <urlencode+0xb3>
  401f9d:	80 fa 20             	cmp    $0x20,%dl
  401fa0:	75 0a                	jne    401fac <urlencode+0x71>
  401fa2:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  401fa6:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401faa:	eb 42                	jmp    401fee <urlencode+0xb3>
  401fac:	8d 42 e0             	lea    -0x20(%rdx),%eax
  401faf:	3c 5f                	cmp    $0x5f,%al
  401fb1:	0f 96 c1             	setbe  %cl
  401fb4:	80 fa 09             	cmp    $0x9,%dl
  401fb7:	0f 94 c0             	sete   %al
  401fba:	08 c1                	or     %al,%cl
  401fbc:	74 45                	je     402003 <urlencode+0xc8>
  401fbe:	0f b6 d2             	movzbl %dl,%edx
  401fc1:	be 88 34 40 00       	mov    $0x403488,%esi
  401fc6:	48 89 e7             	mov    %rsp,%rdi
  401fc9:	b8 00 00 00 00       	mov    $0x0,%eax
  401fce:	e8 0d ee ff ff       	callq  400de0 <sprintf@plt>
  401fd3:	0f b6 04 24          	movzbl (%rsp),%eax
  401fd7:	88 45 00             	mov    %al,0x0(%rbp)
  401fda:	0f b6 44 24 01       	movzbl 0x1(%rsp),%eax
  401fdf:	88 45 01             	mov    %al,0x1(%rbp)
  401fe2:	0f b6 44 24 02       	movzbl 0x2(%rsp),%eax
  401fe7:	88 45 02             	mov    %al,0x2(%rbp)
  401fea:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  401fee:	48 83 c3 01          	add    $0x1,%rbx
  401ff2:	44 89 e0             	mov    %r12d,%eax
  401ff5:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
  401ff9:	85 c0                	test   %eax,%eax
  401ffb:	0f 85 61 ff ff ff    	jne    401f62 <urlencode+0x27>
  402001:	eb 05                	jmp    402008 <urlencode+0xcd>
  402003:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402008:	48 83 c4 10          	add    $0x10,%rsp
  40200c:	5b                   	pop    %rbx
  40200d:	5d                   	pop    %rbp
  40200e:	41 5c                	pop    %r12
  402010:	c3                   	retq   

0000000000402011 <rio_writen>:
  402011:	41 55                	push   %r13
  402013:	41 54                	push   %r12
  402015:	55                   	push   %rbp
  402016:	53                   	push   %rbx
  402017:	48 83 ec 08          	sub    $0x8,%rsp
  40201b:	41 89 fc             	mov    %edi,%r12d
  40201e:	48 89 f5             	mov    %rsi,%rbp
  402021:	49 89 d5             	mov    %rdx,%r13
  402024:	48 89 d3             	mov    %rdx,%rbx
  402027:	eb 28                	jmp    402051 <rio_writen+0x40>
  402029:	48 89 da             	mov    %rbx,%rdx
  40202c:	48 89 ee             	mov    %rbp,%rsi
  40202f:	44 89 e7             	mov    %r12d,%edi
  402032:	e8 29 ec ff ff       	callq  400c60 <write@plt>
  402037:	48 85 c0             	test   %rax,%rax
  40203a:	7f 0f                	jg     40204b <rio_writen+0x3a>
  40203c:	e8 cf eb ff ff       	callq  400c10 <__errno_location@plt>
  402041:	83 38 04             	cmpl   $0x4,(%rax)
  402044:	75 15                	jne    40205b <rio_writen+0x4a>
  402046:	b8 00 00 00 00       	mov    $0x0,%eax
  40204b:	48 29 c3             	sub    %rax,%rbx
  40204e:	48 01 c5             	add    %rax,%rbp
  402051:	48 85 db             	test   %rbx,%rbx
  402054:	75 d3                	jne    402029 <rio_writen+0x18>
  402056:	4c 89 e8             	mov    %r13,%rax
  402059:	eb 07                	jmp    402062 <rio_writen+0x51>
  40205b:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402062:	48 83 c4 08          	add    $0x8,%rsp
  402066:	5b                   	pop    %rbx
  402067:	5d                   	pop    %rbp
  402068:	41 5c                	pop    %r12
  40206a:	41 5d                	pop    %r13
  40206c:	c3                   	retq   

000000000040206d <rio_read>:
  40206d:	41 56                	push   %r14
  40206f:	41 55                	push   %r13
  402071:	41 54                	push   %r12
  402073:	55                   	push   %rbp
  402074:	53                   	push   %rbx
  402075:	48 89 fb             	mov    %rdi,%rbx
  402078:	49 89 f6             	mov    %rsi,%r14
  40207b:	49 89 d5             	mov    %rdx,%r13
  40207e:	4c 8d 67 10          	lea    0x10(%rdi),%r12
  402082:	eb 2a                	jmp    4020ae <rio_read+0x41>
  402084:	ba 00 20 00 00       	mov    $0x2000,%edx
  402089:	4c 89 e6             	mov    %r12,%rsi
  40208c:	8b 3b                	mov    (%rbx),%edi
  40208e:	e8 2d ec ff ff       	callq  400cc0 <read@plt>
  402093:	89 43 04             	mov    %eax,0x4(%rbx)
  402096:	85 c0                	test   %eax,%eax
  402098:	79 0c                	jns    4020a6 <rio_read+0x39>
  40209a:	e8 71 eb ff ff       	callq  400c10 <__errno_location@plt>
  40209f:	83 38 04             	cmpl   $0x4,(%rax)
  4020a2:	74 0a                	je     4020ae <rio_read+0x41>
  4020a4:	eb 37                	jmp    4020dd <rio_read+0x70>
  4020a6:	85 c0                	test   %eax,%eax
  4020a8:	74 3c                	je     4020e6 <rio_read+0x79>
  4020aa:	4c 89 63 08          	mov    %r12,0x8(%rbx)
  4020ae:	8b 6b 04             	mov    0x4(%rbx),%ebp
  4020b1:	85 ed                	test   %ebp,%ebp
  4020b3:	7e cf                	jle    402084 <rio_read+0x17>
  4020b5:	89 e8                	mov    %ebp,%eax
  4020b7:	4c 39 e8             	cmp    %r13,%rax
  4020ba:	72 03                	jb     4020bf <rio_read+0x52>
  4020bc:	44 89 ed             	mov    %r13d,%ebp
  4020bf:	4c 63 e5             	movslq %ebp,%r12
  4020c2:	48 8b 73 08          	mov    0x8(%rbx),%rsi
  4020c6:	4c 89 e2             	mov    %r12,%rdx
  4020c9:	4c 89 f7             	mov    %r14,%rdi
  4020cc:	e8 5f ec ff ff       	callq  400d30 <memcpy@plt>
  4020d1:	4c 01 63 08          	add    %r12,0x8(%rbx)
  4020d5:	29 6b 04             	sub    %ebp,0x4(%rbx)
  4020d8:	4c 89 e0             	mov    %r12,%rax
  4020db:	eb 0e                	jmp    4020eb <rio_read+0x7e>
  4020dd:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  4020e4:	eb 05                	jmp    4020eb <rio_read+0x7e>
  4020e6:	b8 00 00 00 00       	mov    $0x0,%eax
  4020eb:	5b                   	pop    %rbx
  4020ec:	5d                   	pop    %rbp
  4020ed:	41 5c                	pop    %r12
  4020ef:	41 5d                	pop    %r13
  4020f1:	41 5e                	pop    %r14
  4020f3:	c3                   	retq   

00000000004020f4 <rio_readlineb>:
  4020f4:	41 55                	push   %r13
  4020f6:	41 54                	push   %r12
  4020f8:	55                   	push   %rbp
  4020f9:	53                   	push   %rbx
  4020fa:	48 83 ec 18          	sub    $0x18,%rsp
  4020fe:	49 89 fd             	mov    %rdi,%r13
  402101:	48 89 f5             	mov    %rsi,%rbp
  402104:	49 89 d4             	mov    %rdx,%r12
  402107:	bb 01 00 00 00       	mov    $0x1,%ebx
  40210c:	eb 3d                	jmp    40214b <rio_readlineb+0x57>
  40210e:	ba 01 00 00 00       	mov    $0x1,%edx
  402113:	48 8d 74 24 0f       	lea    0xf(%rsp),%rsi
  402118:	4c 89 ef             	mov    %r13,%rdi
  40211b:	e8 4d ff ff ff       	callq  40206d <rio_read>
  402120:	83 f8 01             	cmp    $0x1,%eax
  402123:	75 12                	jne    402137 <rio_readlineb+0x43>
  402125:	48 8d 55 01          	lea    0x1(%rbp),%rdx
  402129:	0f b6 44 24 0f       	movzbl 0xf(%rsp),%eax
  40212e:	88 45 00             	mov    %al,0x0(%rbp)
  402131:	3c 0a                	cmp    $0xa,%al
  402133:	75 0f                	jne    402144 <rio_readlineb+0x50>
  402135:	eb 1b                	jmp    402152 <rio_readlineb+0x5e>
  402137:	85 c0                	test   %eax,%eax
  402139:	75 23                	jne    40215e <rio_readlineb+0x6a>
  40213b:	48 83 fb 01          	cmp    $0x1,%rbx
  40213f:	90                   	nop
  402140:	75 13                	jne    402155 <rio_readlineb+0x61>
  402142:	eb 23                	jmp    402167 <rio_readlineb+0x73>
  402144:	48 83 c3 01          	add    $0x1,%rbx
  402148:	48 89 d5             	mov    %rdx,%rbp
  40214b:	4c 39 e3             	cmp    %r12,%rbx
  40214e:	72 be                	jb     40210e <rio_readlineb+0x1a>
  402150:	eb 03                	jmp    402155 <rio_readlineb+0x61>
  402152:	48 89 d5             	mov    %rdx,%rbp
  402155:	c6 45 00 00          	movb   $0x0,0x0(%rbp)
  402159:	48 89 d8             	mov    %rbx,%rax
  40215c:	eb 0e                	jmp    40216c <rio_readlineb+0x78>
  40215e:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402165:	eb 05                	jmp    40216c <rio_readlineb+0x78>
  402167:	b8 00 00 00 00       	mov    $0x0,%eax
  40216c:	48 83 c4 18          	add    $0x18,%rsp
  402170:	5b                   	pop    %rbx
  402171:	5d                   	pop    %rbp
  402172:	41 5c                	pop    %r12
  402174:	41 5d                	pop    %r13
  402176:	c3                   	retq   

0000000000402177 <submitr>:
  402177:	41 57                	push   %r15
  402179:	41 56                	push   %r14
  40217b:	41 55                	push   %r13
  40217d:	41 54                	push   %r12
  40217f:	55                   	push   %rbp
  402180:	53                   	push   %rbx
  402181:	48 81 ec 48 a0 00 00 	sub    $0xa048,%rsp
  402188:	49 89 fc             	mov    %rdi,%r12
  40218b:	89 74 24 04          	mov    %esi,0x4(%rsp)
  40218f:	49 89 d7             	mov    %rdx,%r15
  402192:	49 89 ce             	mov    %rcx,%r14
  402195:	4c 89 44 24 08       	mov    %r8,0x8(%rsp)
  40219a:	4d 89 cd             	mov    %r9,%r13
  40219d:	48 8b 9c 24 80 a0 00 	mov    0xa080(%rsp),%rbx
  4021a4:	00 
  4021a5:	c7 84 24 1c 20 00 00 	movl   $0x0,0x201c(%rsp)
  4021ac:	00 00 00 00 
  4021b0:	ba 00 00 00 00       	mov    $0x0,%edx
  4021b5:	be 01 00 00 00       	mov    $0x1,%esi
  4021ba:	bf 02 00 00 00       	mov    $0x2,%edi
  4021bf:	e8 4c ec ff ff       	callq  400e10 <socket@plt>
  4021c4:	89 c5                	mov    %eax,%ebp
  4021c6:	85 c0                	test   %eax,%eax
  4021c8:	79 4e                	jns    402218 <submitr+0xa1>
  4021ca:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4021d1:	3a 20 43 
  4021d4:	48 89 03             	mov    %rax,(%rbx)
  4021d7:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4021de:	20 75 6e 
  4021e1:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4021e5:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4021ec:	74 6f 20 
  4021ef:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4021f3:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  4021fa:	65 20 73 
  4021fd:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402201:	c7 43 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbx)
  402208:	66 c7 43 24 74 00    	movw   $0x74,0x24(%rbx)
  40220e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402213:	e9 68 06 00 00       	jmpq   402880 <submitr+0x709>
  402218:	4c 89 e7             	mov    %r12,%rdi
  40221b:	e8 d0 ea ff ff       	callq  400cf0 <gethostbyname@plt>
  402220:	48 85 c0             	test   %rax,%rax
  402223:	75 67                	jne    40228c <submitr+0x115>
  402225:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40222c:	3a 20 44 
  40222f:	48 89 03             	mov    %rax,(%rbx)
  402232:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  402239:	20 75 6e 
  40223c:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402240:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402247:	74 6f 20 
  40224a:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40224e:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  402255:	76 65 20 
  402258:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40225c:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  402263:	72 20 61 
  402266:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40226a:	c7 43 28 64 64 72 65 	movl   $0x65726464,0x28(%rbx)
  402271:	66 c7 43 2c 73 73    	movw   $0x7373,0x2c(%rbx)
  402277:	c6 43 2e 00          	movb   $0x0,0x2e(%rbx)
  40227b:	89 ef                	mov    %ebp,%edi
  40227d:	e8 2e ea ff ff       	callq  400cb0 <close@plt>
  402282:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402287:	e9 f4 05 00 00       	jmpq   402880 <submitr+0x709>
  40228c:	48 c7 84 24 30 a0 00 	movq   $0x0,0xa030(%rsp)
  402293:	00 00 00 00 00 
  402298:	48 c7 84 24 38 a0 00 	movq   $0x0,0xa038(%rsp)
  40229f:	00 00 00 00 00 
  4022a4:	66 c7 84 24 30 a0 00 	movw   $0x2,0xa030(%rsp)
  4022ab:	00 02 00 
  4022ae:	48 8b 48 18          	mov    0x18(%rax),%rcx
  4022b2:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4022b6:	48 8d b4 24 34 a0 00 	lea    0xa034(%rsp),%rsi
  4022bd:	00 
  4022be:	48 8b 39             	mov    (%rcx),%rdi
  4022c1:	e8 ca ea ff ff       	callq  400d90 <bcopy@plt>
  4022c6:	0f b7 44 24 04       	movzwl 0x4(%rsp),%eax
  4022cb:	66 c1 c8 08          	ror    $0x8,%ax
  4022cf:	66 89 84 24 32 a0 00 	mov    %ax,0xa032(%rsp)
  4022d6:	00 
  4022d7:	ba 10 00 00 00       	mov    $0x10,%edx
  4022dc:	48 8d b4 24 30 a0 00 	lea    0xa030(%rsp),%rsi
  4022e3:	00 
  4022e4:	89 ef                	mov    %ebp,%edi
  4022e6:	e8 15 eb ff ff       	callq  400e00 <connect@plt>
  4022eb:	85 c0                	test   %eax,%eax
  4022ed:	79 59                	jns    402348 <submitr+0x1d1>
  4022ef:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  4022f6:	3a 20 55 
  4022f9:	48 89 03             	mov    %rax,(%rbx)
  4022fc:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  402303:	20 74 6f 
  402306:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40230a:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  402311:	65 63 74 
  402314:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402318:	48 b8 20 74 6f 20 74 	movabs $0x20656874206f7420,%rax
  40231f:	68 65 20 
  402322:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402326:	c7 43 20 73 65 72 76 	movl   $0x76726573,0x20(%rbx)
  40232d:	66 c7 43 24 65 72    	movw   $0x7265,0x24(%rbx)
  402333:	c6 43 26 00          	movb   $0x0,0x26(%rbx)
  402337:	89 ef                	mov    %ebp,%edi
  402339:	e8 72 e9 ff ff       	callq  400cb0 <close@plt>
  40233e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402343:	e9 38 05 00 00       	jmpq   402880 <submitr+0x709>
  402348:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  40234f:	4c 89 ef             	mov    %r13,%rdi
  402352:	b8 00 00 00 00       	mov    $0x0,%eax
  402357:	48 89 d1             	mov    %rdx,%rcx
  40235a:	f2 ae                	repnz scas %es:(%rdi),%al
  40235c:	48 f7 d1             	not    %rcx
  40235f:	48 89 ce             	mov    %rcx,%rsi
  402362:	4c 89 ff             	mov    %r15,%rdi
  402365:	48 89 d1             	mov    %rdx,%rcx
  402368:	f2 ae                	repnz scas %es:(%rdi),%al
  40236a:	48 f7 d1             	not    %rcx
  40236d:	49 89 c8             	mov    %rcx,%r8
  402370:	4c 89 f7             	mov    %r14,%rdi
  402373:	48 89 d1             	mov    %rdx,%rcx
  402376:	f2 ae                	repnz scas %es:(%rdi),%al
  402378:	49 29 c8             	sub    %rcx,%r8
  40237b:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  402380:	48 89 d1             	mov    %rdx,%rcx
  402383:	f2 ae                	repnz scas %es:(%rdi),%al
  402385:	49 29 c8             	sub    %rcx,%r8
  402388:	48 8d 44 76 fd       	lea    -0x3(%rsi,%rsi,2),%rax
  40238d:	49 8d 44 00 7b       	lea    0x7b(%r8,%rax,1),%rax
  402392:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  402398:	76 72                	jbe    40240c <submitr+0x295>
  40239a:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  4023a1:	3a 20 52 
  4023a4:	48 89 03             	mov    %rax,(%rbx)
  4023a7:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  4023ae:	20 73 74 
  4023b1:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4023b5:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  4023bc:	74 6f 6f 
  4023bf:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4023c3:	48 b8 20 6c 61 72 67 	movabs $0x202e656772616c20,%rax
  4023ca:	65 2e 20 
  4023cd:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4023d1:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  4023d8:	61 73 65 
  4023db:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4023df:	48 b8 20 53 55 42 4d 	movabs $0x5254494d42555320,%rax
  4023e6:	49 54 52 
  4023e9:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4023ed:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  4023f4:	55 46 00 
  4023f7:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4023fb:	89 ef                	mov    %ebp,%edi
  4023fd:	e8 ae e8 ff ff       	callq  400cb0 <close@plt>
  402402:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402407:	e9 74 04 00 00       	jmpq   402880 <submitr+0x709>
  40240c:	48 8d b4 24 20 40 00 	lea    0x4020(%rsp),%rsi
  402413:	00 
  402414:	b9 00 04 00 00       	mov    $0x400,%ecx
  402419:	b8 00 00 00 00       	mov    $0x0,%eax
  40241e:	48 89 f7             	mov    %rsi,%rdi
  402421:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  402424:	4c 89 ef             	mov    %r13,%rdi
  402427:	e8 0f fb ff ff       	callq  401f3b <urlencode>
  40242c:	85 c0                	test   %eax,%eax
  40242e:	0f 89 8a 00 00 00    	jns    4024be <submitr+0x347>
  402434:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  40243b:	3a 20 52 
  40243e:	48 89 03             	mov    %rax,(%rbx)
  402441:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  402448:	20 73 74 
  40244b:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40244f:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  402456:	63 6f 6e 
  402459:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40245d:	48 b8 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rax
  402464:	20 61 6e 
  402467:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40246b:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  402472:	67 61 6c 
  402475:	48 89 43 20          	mov    %rax,0x20(%rbx)
  402479:	48 b8 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rax
  402480:	6e 70 72 
  402483:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402487:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  40248e:	6c 65 20 
  402491:	48 89 43 30          	mov    %rax,0x30(%rbx)
  402495:	48 b8 63 68 61 72 61 	movabs $0x6574636172616863,%rax
  40249c:	63 74 65 
  40249f:	48 89 43 38          	mov    %rax,0x38(%rbx)
  4024a3:	66 c7 43 40 72 2e    	movw   $0x2e72,0x40(%rbx)
  4024a9:	c6 43 42 00          	movb   $0x0,0x42(%rbx)
  4024ad:	89 ef                	mov    %ebp,%edi
  4024af:	e8 fc e7 ff ff       	callq  400cb0 <close@plt>
  4024b4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4024b9:	e9 c2 03 00 00       	jmpq   402880 <submitr+0x709>
  4024be:	4d 89 e1             	mov    %r12,%r9
  4024c1:	4c 8d 84 24 20 40 00 	lea    0x4020(%rsp),%r8
  4024c8:	00 
  4024c9:	4c 89 f9             	mov    %r15,%rcx
  4024cc:	4c 89 f2             	mov    %r14,%rdx
  4024cf:	be 18 34 40 00       	mov    $0x403418,%esi
  4024d4:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  4024db:	00 
  4024dc:	b8 00 00 00 00       	mov    $0x0,%eax
  4024e1:	e8 fa e8 ff ff       	callq  400de0 <sprintf@plt>
  4024e6:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  4024ed:	00 
  4024ee:	b8 00 00 00 00       	mov    $0x0,%eax
  4024f3:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  4024fa:	f2 ae                	repnz scas %es:(%rdi),%al
  4024fc:	48 f7 d1             	not    %rcx
  4024ff:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
  402503:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40250a:	00 
  40250b:	89 ef                	mov    %ebp,%edi
  40250d:	e8 ff fa ff ff       	callq  402011 <rio_writen>
  402512:	48 85 c0             	test   %rax,%rax
  402515:	79 6e                	jns    402585 <submitr+0x40e>
  402517:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40251e:	3a 20 43 
  402521:	48 89 03             	mov    %rax,(%rbx)
  402524:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40252b:	20 75 6e 
  40252e:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402532:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402539:	74 6f 20 
  40253c:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402540:	48 b8 77 72 69 74 65 	movabs $0x6f74206574697277,%rax
  402547:	20 74 6f 
  40254a:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40254e:	48 b8 20 74 68 65 20 	movabs $0x7365722065687420,%rax
  402555:	72 65 73 
  402558:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40255c:	48 b8 75 6c 74 20 73 	movabs $0x7672657320746c75,%rax
  402563:	65 72 76 
  402566:	48 89 43 28          	mov    %rax,0x28(%rbx)
  40256a:	66 c7 43 30 65 72    	movw   $0x7265,0x30(%rbx)
  402570:	c6 43 32 00          	movb   $0x0,0x32(%rbx)
  402574:	89 ef                	mov    %ebp,%edi
  402576:	e8 35 e7 ff ff       	callq  400cb0 <close@plt>
  40257b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402580:	e9 fb 02 00 00       	jmpq   402880 <submitr+0x709>
  402585:	89 ee                	mov    %ebp,%esi
  402587:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  40258e:	00 
  40258f:	e8 6c f9 ff ff       	callq  401f00 <rio_readinitb>
  402594:	ba 00 20 00 00       	mov    $0x2000,%edx
  402599:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  4025a0:	00 
  4025a1:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  4025a8:	00 
  4025a9:	e8 46 fb ff ff       	callq  4020f4 <rio_readlineb>
  4025ae:	48 85 c0             	test   %rax,%rax
  4025b1:	7f 7d                	jg     402630 <submitr+0x4b9>
  4025b3:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4025ba:	3a 20 43 
  4025bd:	48 89 03             	mov    %rax,(%rbx)
  4025c0:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4025c7:	20 75 6e 
  4025ca:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4025ce:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4025d5:	74 6f 20 
  4025d8:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4025dc:	48 b8 72 65 61 64 20 	movabs $0x7269662064616572,%rax
  4025e3:	66 69 72 
  4025e6:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4025ea:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  4025f1:	61 64 65 
  4025f4:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4025f8:	48 b8 72 20 66 72 6f 	movabs $0x72206d6f72662072,%rax
  4025ff:	6d 20 72 
  402602:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402606:	48 b8 65 73 75 6c 74 	movabs $0x657320746c757365,%rax
  40260d:	20 73 65 
  402610:	48 89 43 30          	mov    %rax,0x30(%rbx)
  402614:	c7 43 38 72 76 65 72 	movl   $0x72657672,0x38(%rbx)
  40261b:	c6 43 3c 00          	movb   $0x0,0x3c(%rbx)
  40261f:	89 ef                	mov    %ebp,%edi
  402621:	e8 8a e6 ff ff       	callq  400cb0 <close@plt>
  402626:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40262b:	e9 50 02 00 00       	jmpq   402880 <submitr+0x709>
  402630:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
  402635:	48 8d 8c 24 1c 20 00 	lea    0x201c(%rsp),%rcx
  40263c:	00 
  40263d:	48 8d 94 24 20 20 00 	lea    0x2020(%rsp),%rdx
  402644:	00 
  402645:	be 8f 34 40 00       	mov    $0x40348f,%esi
  40264a:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  402651:	00 
  402652:	b8 00 00 00 00       	mov    $0x0,%eax
  402657:	e8 14 e7 ff ff       	callq  400d70 <__isoc99_sscanf@plt>
  40265c:	e9 98 00 00 00       	jmpq   4026f9 <submitr+0x582>
  402661:	ba 00 20 00 00       	mov    $0x2000,%edx
  402666:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40266d:	00 
  40266e:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  402675:	00 
  402676:	e8 79 fa ff ff       	callq  4020f4 <rio_readlineb>
  40267b:	48 85 c0             	test   %rax,%rax
  40267e:	7f 79                	jg     4026f9 <submitr+0x582>
  402680:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402687:	3a 20 43 
  40268a:	48 89 03             	mov    %rax,(%rbx)
  40268d:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  402694:	20 75 6e 
  402697:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40269b:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4026a2:	74 6f 20 
  4026a5:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4026a9:	48 b8 72 65 61 64 20 	movabs $0x6165682064616572,%rax
  4026b0:	68 65 61 
  4026b3:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4026b7:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  4026be:	66 72 6f 
  4026c1:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4026c5:	48 b8 6d 20 74 68 65 	movabs $0x657220656874206d,%rax
  4026cc:	20 72 65 
  4026cf:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4026d3:	48 b8 73 75 6c 74 20 	movabs $0x72657320746c7573,%rax
  4026da:	73 65 72 
  4026dd:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4026e1:	c7 43 38 76 65 72 00 	movl   $0x726576,0x38(%rbx)
  4026e8:	89 ef                	mov    %ebp,%edi
  4026ea:	e8 c1 e5 ff ff       	callq  400cb0 <close@plt>
  4026ef:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4026f4:	e9 87 01 00 00       	jmpq   402880 <submitr+0x709>
  4026f9:	0f b6 84 24 20 60 00 	movzbl 0x6020(%rsp),%eax
  402700:	00 
  402701:	83 e8 0d             	sub    $0xd,%eax
  402704:	75 15                	jne    40271b <submitr+0x5a4>
  402706:	0f b6 84 24 21 60 00 	movzbl 0x6021(%rsp),%eax
  40270d:	00 
  40270e:	83 e8 0a             	sub    $0xa,%eax
  402711:	75 08                	jne    40271b <submitr+0x5a4>
  402713:	0f b6 84 24 22 60 00 	movzbl 0x6022(%rsp),%eax
  40271a:	00 
  40271b:	85 c0                	test   %eax,%eax
  40271d:	0f 85 3e ff ff ff    	jne    402661 <submitr+0x4ea>
  402723:	ba 00 20 00 00       	mov    $0x2000,%edx
  402728:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40272f:	00 
  402730:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  402737:	00 
  402738:	e8 b7 f9 ff ff       	callq  4020f4 <rio_readlineb>
  40273d:	48 85 c0             	test   %rax,%rax
  402740:	0f 8f 83 00 00 00    	jg     4027c9 <submitr+0x652>
  402746:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40274d:	3a 20 43 
  402750:	48 89 03             	mov    %rax,(%rbx)
  402753:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40275a:	20 75 6e 
  40275d:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402761:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402768:	74 6f 20 
  40276b:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40276f:	48 b8 72 65 61 64 20 	movabs $0x6174732064616572,%rax
  402776:	73 74 61 
  402779:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40277d:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  402784:	65 73 73 
  402787:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40278b:	48 b8 61 67 65 20 66 	movabs $0x6d6f726620656761,%rax
  402792:	72 6f 6d 
  402795:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402799:	48 b8 20 72 65 73 75 	movabs $0x20746c7573657220,%rax
  4027a0:	6c 74 20 
  4027a3:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4027a7:	c7 43 38 73 65 72 76 	movl   $0x76726573,0x38(%rbx)
  4027ae:	66 c7 43 3c 65 72    	movw   $0x7265,0x3c(%rbx)
  4027b4:	c6 43 3e 00          	movb   $0x0,0x3e(%rbx)
  4027b8:	89 ef                	mov    %ebp,%edi
  4027ba:	e8 f1 e4 ff ff       	callq  400cb0 <close@plt>
  4027bf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4027c4:	e9 b7 00 00 00       	jmpq   402880 <submitr+0x709>
  4027c9:	8b 94 24 1c 20 00 00 	mov    0x201c(%rsp),%edx
  4027d0:	81 fa c8 00 00 00    	cmp    $0xc8,%edx
  4027d6:	74 28                	je     402800 <submitr+0x689>
  4027d8:	48 8d 4c 24 10       	lea    0x10(%rsp),%rcx
  4027dd:	be 58 34 40 00       	mov    $0x403458,%esi
  4027e2:	48 89 df             	mov    %rbx,%rdi
  4027e5:	b8 00 00 00 00       	mov    $0x0,%eax
  4027ea:	e8 f1 e5 ff ff       	callq  400de0 <sprintf@plt>
  4027ef:	89 ef                	mov    %ebp,%edi
  4027f1:	e8 ba e4 ff ff       	callq  400cb0 <close@plt>
  4027f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4027fb:	e9 80 00 00 00       	jmpq   402880 <submitr+0x709>
  402800:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  402807:	00 
  402808:	48 89 df             	mov    %rbx,%rdi
  40280b:	e8 30 e4 ff ff       	callq  400c40 <strcpy@plt>
  402810:	89 ef                	mov    %ebp,%edi
  402812:	e8 99 e4 ff ff       	callq  400cb0 <close@plt>
  402817:	0f b6 03             	movzbl (%rbx),%eax
  40281a:	83 e8 4f             	sub    $0x4f,%eax
  40281d:	75 18                	jne    402837 <submitr+0x6c0>
  40281f:	0f b6 53 01          	movzbl 0x1(%rbx),%edx
  402823:	83 ea 4b             	sub    $0x4b,%edx
  402826:	75 11                	jne    402839 <submitr+0x6c2>
  402828:	0f b6 53 02          	movzbl 0x2(%rbx),%edx
  40282c:	83 ea 0a             	sub    $0xa,%edx
  40282f:	75 08                	jne    402839 <submitr+0x6c2>
  402831:	0f b6 53 03          	movzbl 0x3(%rbx),%edx
  402835:	eb 02                	jmp    402839 <submitr+0x6c2>
  402837:	89 c2                	mov    %eax,%edx
  402839:	85 d2                	test   %edx,%edx
  40283b:	74 30                	je     40286d <submitr+0x6f6>
  40283d:	bf a0 34 40 00       	mov    $0x4034a0,%edi
  402842:	b9 05 00 00 00       	mov    $0x5,%ecx
  402847:	48 89 de             	mov    %rbx,%rsi
  40284a:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  40284c:	0f 97 c1             	seta   %cl
  40284f:	0f 92 c2             	setb   %dl
  402852:	38 d1                	cmp    %dl,%cl
  402854:	74 1e                	je     402874 <submitr+0x6fd>
  402856:	85 c0                	test   %eax,%eax
  402858:	75 0d                	jne    402867 <submitr+0x6f0>
  40285a:	0f b6 43 01          	movzbl 0x1(%rbx),%eax
  40285e:	83 e8 4b             	sub    $0x4b,%eax
  402861:	75 04                	jne    402867 <submitr+0x6f0>
  402863:	0f b6 43 02          	movzbl 0x2(%rbx),%eax
  402867:	85 c0                	test   %eax,%eax
  402869:	75 10                	jne    40287b <submitr+0x704>
  40286b:	eb 13                	jmp    402880 <submitr+0x709>
  40286d:	b8 00 00 00 00       	mov    $0x0,%eax
  402872:	eb 0c                	jmp    402880 <submitr+0x709>
  402874:	b8 00 00 00 00       	mov    $0x0,%eax
  402879:	eb 05                	jmp    402880 <submitr+0x709>
  40287b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402880:	48 81 c4 48 a0 00 00 	add    $0xa048,%rsp
  402887:	5b                   	pop    %rbx
  402888:	5d                   	pop    %rbp
  402889:	41 5c                	pop    %r12
  40288b:	41 5d                	pop    %r13
  40288d:	41 5e                	pop    %r14
  40288f:	41 5f                	pop    %r15
  402891:	c3                   	retq   

0000000000402892 <init_timeout>:
  402892:	53                   	push   %rbx
  402893:	89 fb                	mov    %edi,%ebx
  402895:	85 ff                	test   %edi,%edi
  402897:	74 1f                	je     4028b8 <init_timeout+0x26>
  402899:	85 ff                	test   %edi,%edi
  40289b:	79 05                	jns    4028a2 <init_timeout+0x10>
  40289d:	bb 00 00 00 00       	mov    $0x0,%ebx
  4028a2:	be 12 1f 40 00       	mov    $0x401f12,%esi
  4028a7:	bf 0e 00 00 00       	mov    $0xe,%edi
  4028ac:	e8 2f e4 ff ff       	callq  400ce0 <signal@plt>
  4028b1:	89 df                	mov    %ebx,%edi
  4028b3:	e8 e8 e3 ff ff       	callq  400ca0 <alarm@plt>
  4028b8:	5b                   	pop    %rbx
  4028b9:	c3                   	retq   

00000000004028ba <init_driver>:
  4028ba:	55                   	push   %rbp
  4028bb:	53                   	push   %rbx
  4028bc:	48 83 ec 18          	sub    $0x18,%rsp
  4028c0:	48 89 fd             	mov    %rdi,%rbp
  4028c3:	be 01 00 00 00       	mov    $0x1,%esi
  4028c8:	bf 0d 00 00 00       	mov    $0xd,%edi
  4028cd:	e8 0e e4 ff ff       	callq  400ce0 <signal@plt>
  4028d2:	be 01 00 00 00       	mov    $0x1,%esi
  4028d7:	bf 1d 00 00 00       	mov    $0x1d,%edi
  4028dc:	e8 ff e3 ff ff       	callq  400ce0 <signal@plt>
  4028e1:	be 01 00 00 00       	mov    $0x1,%esi
  4028e6:	bf 1d 00 00 00       	mov    $0x1d,%edi
  4028eb:	e8 f0 e3 ff ff       	callq  400ce0 <signal@plt>
  4028f0:	ba 00 00 00 00       	mov    $0x0,%edx
  4028f5:	be 01 00 00 00       	mov    $0x1,%esi
  4028fa:	bf 02 00 00 00       	mov    $0x2,%edi
  4028ff:	e8 0c e5 ff ff       	callq  400e10 <socket@plt>
  402904:	89 c3                	mov    %eax,%ebx
  402906:	85 c0                	test   %eax,%eax
  402908:	79 4f                	jns    402959 <init_driver+0x9f>
  40290a:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402911:	3a 20 43 
  402914:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402918:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40291f:	20 75 6e 
  402922:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402926:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40292d:	74 6f 20 
  402930:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402934:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  40293b:	65 20 73 
  40293e:	48 89 45 18          	mov    %rax,0x18(%rbp)
  402942:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  402949:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  40294f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402954:	e9 23 01 00 00       	jmpq   402a7c <init_driver+0x1c2>
  402959:	bf 80 2f 40 00       	mov    $0x402f80,%edi
  40295e:	e8 8d e3 ff ff       	callq  400cf0 <gethostbyname@plt>
  402963:	48 85 c0             	test   %rax,%rax
  402966:	75 68                	jne    4029d0 <init_driver+0x116>
  402968:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40296f:	3a 20 44 
  402972:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402976:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  40297d:	20 75 6e 
  402980:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402984:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40298b:	74 6f 20 
  40298e:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402992:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  402999:	76 65 20 
  40299c:	48 89 45 18          	mov    %rax,0x18(%rbp)
  4029a0:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  4029a7:	72 20 61 
  4029aa:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4029ae:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  4029b5:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  4029bb:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  4029bf:	89 df                	mov    %ebx,%edi
  4029c1:	e8 ea e2 ff ff       	callq  400cb0 <close@plt>
  4029c6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4029cb:	e9 ac 00 00 00       	jmpq   402a7c <init_driver+0x1c2>
  4029d0:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  4029d7:	00 
  4029d8:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  4029df:	00 00 
  4029e1:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  4029e7:	48 8b 48 18          	mov    0x18(%rax),%rcx
  4029eb:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4029ef:	48 8d 74 24 04       	lea    0x4(%rsp),%rsi
  4029f4:	48 8b 39             	mov    (%rcx),%rdi
  4029f7:	e8 94 e3 ff ff       	callq  400d90 <bcopy@plt>
  4029fc:	66 c7 44 24 02 47 26 	movw   $0x2647,0x2(%rsp)
  402a03:	ba 10 00 00 00       	mov    $0x10,%edx
  402a08:	48 89 e6             	mov    %rsp,%rsi
  402a0b:	89 df                	mov    %ebx,%edi
  402a0d:	e8 ee e3 ff ff       	callq  400e00 <connect@plt>
  402a12:	85 c0                	test   %eax,%eax
  402a14:	79 50                	jns    402a66 <init_driver+0x1ac>
  402a16:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  402a1d:	3a 20 55 
  402a20:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402a24:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  402a2b:	20 74 6f 
  402a2e:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402a32:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  402a39:	65 63 74 
  402a3c:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402a40:	48 b8 20 74 6f 20 73 	movabs $0x76726573206f7420,%rax
  402a47:	65 72 76 
  402a4a:	48 89 45 18          	mov    %rax,0x18(%rbp)
  402a4e:	66 c7 45 20 65 72    	movw   $0x7265,0x20(%rbp)
  402a54:	c6 45 22 00          	movb   $0x0,0x22(%rbp)
  402a58:	89 df                	mov    %ebx,%edi
  402a5a:	e8 51 e2 ff ff       	callq  400cb0 <close@plt>
  402a5f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402a64:	eb 16                	jmp    402a7c <init_driver+0x1c2>
  402a66:	89 df                	mov    %ebx,%edi
  402a68:	e8 43 e2 ff ff       	callq  400cb0 <close@plt>
  402a6d:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  402a73:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  402a77:	b8 00 00 00 00       	mov    $0x0,%eax
  402a7c:	48 83 c4 18          	add    $0x18,%rsp
  402a80:	5b                   	pop    %rbx
  402a81:	5d                   	pop    %rbp
  402a82:	c3                   	retq   

0000000000402a83 <driver_post>:
  402a83:	53                   	push   %rbx
  402a84:	48 83 ec 10          	sub    $0x10,%rsp
  402a88:	4c 89 cb             	mov    %r9,%rbx
  402a8b:	45 85 c0             	test   %r8d,%r8d
  402a8e:	74 22                	je     402ab2 <driver_post+0x2f>
  402a90:	48 89 ce             	mov    %rcx,%rsi
  402a93:	bf a5 34 40 00       	mov    $0x4034a5,%edi
  402a98:	b8 00 00 00 00       	mov    $0x0,%eax
  402a9d:	e8 de e1 ff ff       	callq  400c80 <printf@plt>
  402aa2:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  402aa7:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  402aab:	b8 00 00 00 00       	mov    $0x0,%eax
  402ab0:	eb 39                	jmp    402aeb <driver_post+0x68>
  402ab2:	48 85 ff             	test   %rdi,%rdi
  402ab5:	74 26                	je     402add <driver_post+0x5a>
  402ab7:	80 3f 00             	cmpb   $0x0,(%rdi)
  402aba:	74 21                	je     402add <driver_post+0x5a>
  402abc:	4c 89 0c 24          	mov    %r9,(%rsp)
  402ac0:	49 89 c9             	mov    %rcx,%r9
  402ac3:	49 89 d0             	mov    %rdx,%r8
  402ac6:	48 89 f9             	mov    %rdi,%rcx
  402ac9:	48 89 f2             	mov    %rsi,%rdx
  402acc:	be 26 47 00 00       	mov    $0x4726,%esi
  402ad1:	bf 80 2f 40 00       	mov    $0x402f80,%edi
  402ad6:	e8 9c f6 ff ff       	callq  402177 <submitr>
  402adb:	eb 0e                	jmp    402aeb <driver_post+0x68>
  402add:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  402ae2:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  402ae6:	b8 00 00 00 00       	mov    $0x0,%eax
  402aeb:	48 83 c4 10          	add    $0x10,%rsp
  402aef:	5b                   	pop    %rbx
  402af0:	c3                   	retq   

0000000000402af1 <check>:
  402af1:	89 f8                	mov    %edi,%eax
  402af3:	c1 e8 1c             	shr    $0x1c,%eax
  402af6:	85 c0                	test   %eax,%eax
  402af8:	74 1d                	je     402b17 <check+0x26>
  402afa:	b9 00 00 00 00       	mov    $0x0,%ecx
  402aff:	eb 0b                	jmp    402b0c <check+0x1b>
  402b01:	89 f8                	mov    %edi,%eax
  402b03:	d3 e8                	shr    %cl,%eax
  402b05:	3c 0a                	cmp    $0xa,%al
  402b07:	74 14                	je     402b1d <check+0x2c>
  402b09:	83 c1 08             	add    $0x8,%ecx
  402b0c:	83 f9 1f             	cmp    $0x1f,%ecx
  402b0f:	7e f0                	jle    402b01 <check+0x10>
  402b11:	b8 01 00 00 00       	mov    $0x1,%eax
  402b16:	c3                   	retq   
  402b17:	b8 00 00 00 00       	mov    $0x0,%eax
  402b1c:	c3                   	retq   
  402b1d:	b8 00 00 00 00       	mov    $0x0,%eax
  402b22:	c3                   	retq   

0000000000402b23 <gencookie>:
  402b23:	53                   	push   %rbx
  402b24:	83 c7 01             	add    $0x1,%edi
  402b27:	e8 f4 e0 ff ff       	callq  400c20 <srandom@plt>
  402b2c:	e8 1f e2 ff ff       	callq  400d50 <random@plt>
  402b31:	89 c3                	mov    %eax,%ebx
  402b33:	89 c7                	mov    %eax,%edi
  402b35:	e8 b7 ff ff ff       	callq  402af1 <check>
  402b3a:	85 c0                	test   %eax,%eax
  402b3c:	74 ee                	je     402b2c <gencookie+0x9>
  402b3e:	89 d8                	mov    %ebx,%eax
  402b40:	5b                   	pop    %rbx
  402b41:	c3                   	retq   
  402b42:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  402b49:	00 00 00 
  402b4c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000402b50 <__libc_csu_init>:
  402b50:	41 57                	push   %r15
  402b52:	41 89 ff             	mov    %edi,%r15d
  402b55:	41 56                	push   %r14
  402b57:	49 89 f6             	mov    %rsi,%r14
  402b5a:	41 55                	push   %r13
  402b5c:	49 89 d5             	mov    %rdx,%r13
  402b5f:	41 54                	push   %r12
  402b61:	4c 8d 25 a8 12 20 00 	lea    0x2012a8(%rip),%r12        # 603e10 <__frame_dummy_init_array_entry>
  402b68:	55                   	push   %rbp
  402b69:	48 8d 2d a8 12 20 00 	lea    0x2012a8(%rip),%rbp        # 603e18 <__init_array_end>
  402b70:	53                   	push   %rbx
  402b71:	4c 29 e5             	sub    %r12,%rbp
  402b74:	31 db                	xor    %ebx,%ebx
  402b76:	48 c1 fd 03          	sar    $0x3,%rbp
  402b7a:	48 83 ec 08          	sub    $0x8,%rsp
  402b7e:	e8 45 e0 ff ff       	callq  400bc8 <_init>
  402b83:	48 85 ed             	test   %rbp,%rbp
  402b86:	74 1e                	je     402ba6 <__libc_csu_init+0x56>
  402b88:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  402b8f:	00 
  402b90:	4c 89 ea             	mov    %r13,%rdx
  402b93:	4c 89 f6             	mov    %r14,%rsi
  402b96:	44 89 ff             	mov    %r15d,%edi
  402b99:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  402b9d:	48 83 c3 01          	add    $0x1,%rbx
  402ba1:	48 39 eb             	cmp    %rbp,%rbx
  402ba4:	75 ea                	jne    402b90 <__libc_csu_init+0x40>
  402ba6:	48 83 c4 08          	add    $0x8,%rsp
  402baa:	5b                   	pop    %rbx
  402bab:	5d                   	pop    %rbp
  402bac:	41 5c                	pop    %r12
  402bae:	41 5d                	pop    %r13
  402bb0:	41 5e                	pop    %r14
  402bb2:	41 5f                	pop    %r15
  402bb4:	c3                   	retq   
  402bb5:	90                   	nop
  402bb6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  402bbd:	00 00 00 

0000000000402bc0 <__libc_csu_fini>:
  402bc0:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000402bc4 <_fini>:
  402bc4:	48 83 ec 08          	sub    $0x8,%rsp
  402bc8:	48 83 c4 08          	add    $0x8,%rsp
  402bcc:	c3                   	retq   
