void kernel_main(){
char* vga =(char*)0xB8000;
vga[0]='k';
vga[1]=0x0F; //white text on black background
}

