void kernel_main() {
   char *video = (char*)0xb8000;

   char line1[] = "kuch";
   char line2[] = "Bhi";

   for(int i=0; line1[i] != '\0'; i++) {
       video[i*2] = line1[i];
       video[i*2 + 1] = 0x07;
   }

   for(int i=0; line2[i] != '\0'; i++){
       video[(80 + i)*2] = line2[i];
       video[(80 + i)*2 + 1] = 0x07;
   }
}


