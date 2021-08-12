//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1
//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(400, 300); //atur sumbu x dan y
 glutInitWindowSize(800, 800); //atur lebar dan tinggi jendela
 glutCreateWindow("UAS GRAFIKA INTERIOR KAMAR");
 glutDisplayFunc(display); //memanggil fungsi display
 glutReshapeFunc(reshape); //memanggil fungsi reshape
 glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
 init();
 glutMainLoop(); //looping program utama
}
void init(){
 glEnable(GL_DEPTH_TEST); //+4
 glClearColor(0.0, 0.0, 0.0, 1.0);
}
void display(){
 //reset
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5



//DINDING DEPAN
glBegin(GL_QUADS); //+5
glColor3ub(119, 128, 121);
glVertex3f(-30.0, 50.0, 3.0);
glVertex3f(-30.0, -30.0, 3.0);
glVertex3f(30.0, -30.0, 3.0);
glVertex3f(30.0, 50.0, 3.0);
glEnd();



//AC BELAKANG
glBegin(GL_QUADS); //+5
glColor3f(1.0, 1.0, 1.0);
glVertex3f(20.0, 45.0, 4.0);
glVertex3f(20.0, 40.0, 4.0);
glVertex3f(5.0, 40.0, 4.0);
glVertex3f(5.0, 45.0, 4.0);
glEnd();

//AC DEPAN
glBegin(GL_QUADS); //+5
glColor3ub(255, 255, 255);
glVertex3f(20.0, 45.0, 6.0);
glVertex3f(20.0, 40.0, 6.0);
glVertex3f(5.0, 40.0, 6.0);
glVertex3f(5.0, 45.0, 6.0);
glEnd();

//AC GARIS DEPAN
glBegin(GL_QUADS); //+5
glColor3ub(0, 0, 0);
glVertex3f(20.0, 42.0, 6.1);
glVertex3f(20.0, 41.5, 6.1);
glVertex3f(5.0, 41.5, 6.1);
glVertex3f(5.0, 42.0, 6.1);
glEnd();

//AC KIRI
glBegin(GL_QUADS); //+5
glColor3ub(255, 255, 255);
glVertex3f(5.0, 40.0, 4.0);
glVertex3f(5.0, 45.0, 4.0);
glVertex3f(5.0, 45.0, 6.0);
glVertex3f(5.0, 40.0, 6.0);
glEnd();

//AC KANAN
glBegin(GL_QUADS); //+5
glColor3ub(255, 255, 255);
glVertex3f(20.0, 40.0, 4.0);
glVertex3f(20.0, 45.0, 4.0);
glVertex3f(20.0, 45.0, 6.0);
glVertex3f(20.0, 40.0, 6.0);
glEnd();



 //BINGKAI BELAKANG
glBegin(GL_QUADS); //+5
glColor3ub(28, 52, 97);
glVertex3f(-20.0, 30.0, 4.0);
glVertex3f(-20.0, 15.0, 4.0);
glVertex3f(-5.0, 15.0, 4.0);
glVertex3f(-5.0, 30.0, 4.0);
glEnd();

//BINGKAI DEPAN
glBegin(GL_QUADS); //+5
glColor3ub(255, 255, 255);
glVertex3f(-20.0, 30.0, 6.0);
glVertex3f(-20.0, 15.0, 6.0);
glVertex3f(-5.0, 15.0, 6.0);
glVertex3f(-5.0, 30.0, 6.0);
glEnd();

//BINGKAI TUTUP ATAS
glBegin(GL_QUADS); //+5
glColor3ub(28, 52, 97);
glVertex3f(-20.0, 30.0, 4.0);
glVertex3f(-5.0, 30.0, 4.0);
glVertex3f(-5.0, 30.0, 6.0);
glVertex3f(-20.0, 30.0, 6.0);
glEnd();

//BINGKAI TUTUP BAWAH
glBegin(GL_QUADS); //+5
glColor3ub(28, 52, 97);
glVertex3f(-20.0, 15.0, 4.0);
glVertex3f(-5.0, 15.0, 4.0);
glVertex3f(-5.0, 15.0, 6.0);
glVertex3f(-20.0, 15.0, 6.0);
glEnd();

//BINGKAI TUTUP ATAS
glBegin(GL_QUADS); //+5
glColor3ub(28, 52, 97);
glVertex3f(-5.0, 30.0, 4.0);
glVertex3f(-5.0, 15.0, 4.0);
glVertex3f(-5.0, 15.0, 6.0);
glVertex3f(-5.0, 30.0, 6.0);
glEnd();

//BINGKAI TUTUP KANAN
glBegin(GL_QUADS); //+5
glColor3ub(28, 52, 97);
glVertex3f(-20.0, 30.0, 4.0);
glVertex3f(-20.0, 15.0, 4.0);
glVertex3f(-20.0, 15.0, 6.0);
glVertex3f(-20.0, 30.0, 6.0);
glEnd();



//DINDING BELAKANG
glBegin(GL_QUADS); //+5
glColor3ub(53,56,54);
glVertex3f(-30.0, 50.0, -3.0);
glVertex3f(-30.0, -30.0, -3.0);
glVertex3f(30.0, -30.0, -3.0);
glVertex3f(30.0, 50.0, -3.0);
glEnd();

//DINDING ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, 50.0, -3.0);
 glVertex3f(-30.0, 50.0, 3.0);
 glVertex3f(30.0, 50.0, 3.0);
 glVertex3f(30.0, 50.0, -3.0);
 glEnd();

//DINDING BAWAH
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, -30.0, -3.0);
 glVertex3f(-30.0, -30.0, 3.0);
 glVertex3f(30.0, -30.0, 3.0);
 glVertex3f(30.0, -30.0, -3.0);
 glEnd();

//DINDING KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(66,66,245);
 glVertex3f(30.0, 50.0, 3.0);
 glVertex3f(30.0, -30.0, 3.0);
 glVertex3f(30.0, -30.0, -3.0);
 glVertex3f(30.0, 50.0, -3.0);
 glEnd();

//DINDING KIRI
 glBegin(GL_QUADS); //+5
 glColor3f(1.0, 0.0, 0.0);
 glVertex3f(-30.0, 50.0, -3.0);
 glVertex3f(-30.0, -30.0, -3.0);
 glVertex3f(-30.0, -30.0, 3.0);
 glVertex3f(-30.0, 50.0, 3.0);
glEnd();



//DINDING KIRI
//DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, 50.0, 60.0);
 glVertex3f(-30.0, -30.0, 60.0);
 glVertex3f(-27.0, -30.0, 60.0);
 glVertex3f(-27.0, 50.0, 60.0);
 glEnd();

 //DINDING TUTUP ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, 50.0, 60.0);
 glVertex3f(-27.0, 50.0, 60.0);
 glVertex3f(-27.0, 50.0, 3.0);
 glVertex3f(-30.0, 50.0, 3.0);
 glEnd();

//DINDING BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, 50.0, 3.0);
 glVertex3f(-30.0, -30.0, 3.0);
 glVertex3f(-27.0, -30.0, 3.0);
 glVertex3f(-27.0, 50.0, 3.0);
glEnd();

// DINDING KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, 50.0, 60.0);
 glVertex3f(-30.0, -30.0, 60.0);
 glVertex3f(-30.0, -30.0, 3.0);
 glVertex3f(-30.0, 50.0, 3.0);
glEnd();

//DINDING KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(119, 128, 121);
 glVertex3f(-27.0, 50.0, 60.0);
 glVertex3f(-27.0, -30.0, 60.0);
 glVertex3f(-27.0, -30.0, 3.0);
 glVertex3f(-27.0, 50.0, 3.0);
 glEnd();



//VENTILASI KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(0.0,0.0,0.0);
 glVertex3f(-26.9, 40.0, 40.0);
 glVertex3f(-26.9, 30.0, 40.0);
 glVertex3f(-26.9, 30.0, 60.0);
 glVertex3f(-26.9, 40.0, 60.0);
 glEnd();

 //VENTILASI KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(0.0,0.0,0.0);
 glVertex3f(-25.9, 40.0, 40.0);
 glVertex3f(-25.9, 30.0, 40.0);
 glVertex3f(-25.9, 30.0, 60.0);
 glVertex3f(-25.9, 40.0, 60.0);
 glEnd();

//VENTILASI DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(0.0,0.0,0.0);
 glVertex3f(-25.9, 40.0, 60.0);
 glVertex3f(-26.9, 40.0, 60.0);
 glVertex3f(-26.9, 30.0, 60.0);
 glVertex3f(-25.9, 30.0, 60.0);
 glEnd();

//VENTILASI BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(0.0,0.0,0.0);
 glVertex3f(-25.9, 40.0, 40.0);
 glVertex3f(-26.9, 40.0, 40.0);
 glVertex3f(-26.9, 30.0, 40.0);
 glVertex3f(-25.9, 30.0, 40.0);
 glEnd();

// VENTILASI ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(0.0,0.0,0.0);
 glVertex3f(-25.9, 40.0, 60.0);
 glVertex3f(-26.9, 40.0, 60.0);
 glVertex3f(-26.9, 40.0, 40.0);
 glVertex3f(-25.9, 40.0, 40.0);
 glEnd();

// VENTILASI BAWAH
 glBegin(GL_QUADS); //+5
 glColor3ub(0.0,0.0,0.0);
 glVertex3f(-25.9, 30.0, 60.0);
 glVertex3f(-26.9, 30.0, 60.0);
 glVertex3f(-26.9, 30.0, 40.0);
 glVertex3f(-25.9, 30.0, 40.0);
 glEnd();



// LEMARI BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(194, 149,81);
 glVertex3f(-25.0, 30.0, 40.0);
 glVertex3f(-25.0, -30.0, 40.0);
 glVertex3f(-25.0, -30.0, 25.0);
 glVertex3f(-25.0, 30.0, 25.0);
 glEnd();

//LEMARI PINTU KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(255,206,133);
 glVertex3f(-15.0, 30.0, 40.0);
 glVertex3f(-15.0, -30.0, 40.0);
 glVertex3f(-15.0, -30.0, 32.0);
 glVertex3f(-15.0, 30.0, 32.0);
 glEnd();

 //LEMARI gagang
 glBegin(GL_QUADS); //+5
 glColor3ub(48,48,48);
 glVertex3f(-14.5, 3.0, 33.0);
 glVertex3f(-14.5, -3.0, 33.0);
 glVertex3f(-14.5, -3.0, 34.0);
 glVertex3f(-14.5, 3.0, 34.0);
 glEnd();

 //LEMARI gagang
 glBegin(GL_QUADS); //+5
 glColor3ub(48,48,48);
 glVertex3f(-14.5, 3.0, 31.0);
 glVertex3f(-14.5, -3.0, 31.0);
 glVertex3f(-14.5, -3.0, 32.0);
 glVertex3f(-14.5, 3.0, 32.0);
 glEnd();

//LEMARI PINTU KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(255,215,156);
 glVertex3f(-15.0, 30.0, 32.0);
 glVertex3f(-15.0, -30.0, 32.0);
 glVertex3f(-15.0, -30.0, 25.0);
 glVertex3f(-15.0, 30.0, 25.0);
 glEnd();

//LEMARI KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(194, 149,81);
 glVertex3f(-25.0, 30.0, 40.0);
 glVertex3f(-15.0, 30.0, 40.0);
 glVertex3f(-15.0, -30.0, 40.0);
 glVertex3f(-25.0, -30.0, 40.0);
 glEnd();

//LEMARI TUTUP ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(194, 149,81);
 glVertex3f(-25.0, 30.0, 40.0);
 glVertex3f(-15.0, 30.0, 40.0);
 glVertex3f(-15.0, 30.0, 25.0);
 glVertex3f(-25.0, 30.0, 25.0);
 glEnd();

//LEMARI KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(194, 149,81);
 glVertex3f(-25.0, -30.0, 25.0);
 glVertex3f(-15.0, -30.0, 25.0);
  glVertex3f(-15.0, 30.0, 25.0);
 glVertex3f(-25.0, 30.0, 25.0);
 glEnd();



//PINTU KIRI
 glBegin(GL_QUADS); //+5
glColor3ub(255, 178, 54);
 glVertex3f(27.0, 30.0, 40.0);
 glVertex3f(27.0, -30.0, 40.0);
 glVertex3f(27.0, -30.0, 25.0);
 glVertex3f(27.0, 30.0, 25.0);
 glEnd();


//KESET BAWAH
 glBegin(GL_QUADS); //+5
 glColor3ub(158, 138, 108);
 glVertex3f(26.0, -26.9, 40.0);
 glVertex3f(20.0, -26.9, 40.0);
 glVertex3f(20.0, -26.9, 25.0);
 glVertex3f(26.0, -26.9, 25.0);
 glEnd();

//KESET ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(158, 138, 108);
 glVertex3f(26.0, -26.4, 40.0);
 glVertex3f(20.0, -26.4, 40.0);
 glVertex3f(20.0, -26.4, 25.0);
 glVertex3f(26.0, -26.4, 25.0);
 glEnd();

//KESET DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(158, 138, 108);
 glVertex3f(26.0, -26.4, 40.0);
 glVertex3f(20.0, -26.4, 40.0);
 glVertex3f(20.0, -26.9, 40.0);
 glVertex3f(26.0, -26.9, 40.0);
 glEnd();

//KESET BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(158, 138, 108);
 glVertex3f(26.0, -26.4, 25.0);
 glVertex3f(20.0, -26.4, 25.0);
 glVertex3f(20.0, -26.9, 25.0);
 glVertex3f(26.0, -26.9, 25.0);
 glEnd();

//KESET KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(158, 138, 108);
 glVertex3f(26.0, -26.4, 25.0);
 glVertex3f(26.0, -26.4, 40.0);
 glVertex3f(26.0, -26.9, 40.0);
 glVertex3f(26.0, -26.9, 25.0);
 glEnd();

//KESET KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(158, 138, 108);
 glVertex3f(20.0, -26.4, 25.0);
 glVertex3f(20.0, -26.4, 40.0);
 glVertex3f(20.0, -26.9, 40.0);
 glVertex3f(20.0, -26.9, 25.0);
 glEnd();



//PINTU KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(255, 178, 54);
 glVertex3f(29.0, 30.0, 40.0);
 glVertex3f(29.0, -30.0, 40.0);
 glVertex3f(29.0, -30.0, 25.0);
 glVertex3f(29.0, 30.0, 25.0);
glEnd();


//PINTU DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(255, 167, 25);
 glVertex3f(27.0, 30.0, 40.0);
 glVertex3f(29.0, 30.0, 40.0);
 glVertex3f(29.0, -30.0, 40.0);
 glVertex3f(27.0, -30.0, 40.0);
glEnd();

//PINTU BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(255, 167, 25);
 glVertex3f(27.0, -30.0, 25.0);
 glVertex3f(29.0, -30.0, 25.0);
 glVertex3f(29.0, 30.0, 25.0);
 glVertex3f(27.0, 30.0, 25.0);
glEnd();

//PINTU ATAS TUTUP
 glBegin(GL_QUADS); //+5
 glColor3ub(255, 167, 25);
 glVertex3f(27.0, 30.0, 40.0);
 glVertex3f(29.0, 30.0, 40.0);
 glVertex3f(29.0, 30.0, 25.0);
 glVertex3f(27.0, 30.0, 25.0);
glEnd();



// ALAS
//DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, -30.0, 60.0);
 glVertex3f(30.0, -30.0, 60.0);
 glVertex3f(30.0, -27.0, 60.0);
 glVertex3f(-30.0, -27.0, 60.0);
 glEnd();

//BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(30.0, -30.0, 60.0);
 glVertex3f(30.0, -30.0, 3.0);
 glVertex3f(30.0, -27.0, 3.0);
 glVertex3f(30.0, -27.0, 60.0);
 glEnd();

//BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, -30.0, 3.0);
 glVertex3f(30.0, -30.0, 3.0);
 glVertex3f(30.0, -27.0, 3.0);
 glVertex3f(-30.0, -27.0, 3.0);
 glEnd();

//ATAS BAWAH
 glBegin(GL_QUADS); //+5
 glColor3ub(53,56,54);
 glVertex3f(-30.0, -30.0, 60.0);
 glVertex3f(30.0, -30.0, 60.0);
 glVertex3f(30.0, -30.0, 3.0);
 glVertex3f(-30.0, -30.0, 3.0);
 glEnd();

//ATAS ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(204,217,207);
 glVertex3f(-30.0, -27.0, 60.0);
 glVertex3f(30.0, -27.0, 60.0);
 glVertex3f(30.0, -27.0, 3.0);
 glVertex3f(-30.0, -27.0, 3.0);
 glEnd();



// MEJA GANTUNG
 glBegin(GL_QUADS); //+5
 glColor3ub(199, 142, 58);
 glVertex3f(-30.0, -10.0, 43.0);
 glVertex3f(-13.0, -10.0, 43.0);
 glVertex3f(-13.0, -10.0, 56.0);
 glVertex3f(-30.0, -10.0, 56.0);
glEnd();

//MEJA GANTUNG 2
 glBegin(GL_QUADS); //+5
 glColor3ub(199, 142, 58);
 glVertex3f(-30.0, -12.0, 43.0);
 glVertex3f(-13.0, -12.0, 43.0);
 glVertex3f(-13.0, -12.0, 56.0);
 glVertex3f(-30.0, -12.0, 56.0);
glEnd();

//MEJA GANTUNG KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(199, 142, 58);
 glVertex3f(-30.0, -10.0, 43.0);
 glVertex3f(-30.0, -12.0, 43.0);
 glVertex3f(-13.0, -10.0, 43.0);
 glVertex3f(-13.0, -12.0, 43.0);
glEnd();

//MEJA GANTUNG DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(199, 142, 58);
 glVertex3f(-13.0, -10.0, 43.0);
 glVertex3f(-13.0, -12.0, 43.0);
 glVertex3f(-13.0, -12.0, 56.0);
 glVertex3f(-13.0, -10.0, 56.0);
glEnd();

//MEJA GANTUNG KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(199, 142, 58);
 glVertex3f(-13.0, -10.0, 56.0);
 glVertex3f(-13.0, -12.0, 56.0);
 glVertex3f(-30.0, -12.0, 56.0);
 glVertex3f(-30.0, -10.0, 56.0);
glEnd();


//KURSI ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(48,48,48);
 glVertex3f(-12.0, -19.0, 44.0);
 glVertex3f(-5.0, -19.0, 44.0);
 glVertex3f(-5.0, -19.0, 54.0);
 glVertex3f(-12.0, -19.0, 54.0);
 glEnd();

 //KURSI BAWAH
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-12.0, -17.5, 44.0);
 glVertex3f(-5.0, -17.5, 44.0);
 glVertex3f(-5.0, -17.5, 54.0);
 glVertex3f(-12.0, -17.5, 54.0);
 glEnd();

  //KURSI KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-12.0, -19.0, 44.0);
 glVertex3f(-12.0, -17.5, 44.0);
 glVertex3f(-5.0, -17.5, 44.0);
 glVertex3f(-5.0, -19.0, 44.0);
 glEnd();

 //KURSI DEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-5.0, -19.0, 44.0);
 glVertex3f(-5.0, -17.5, 44.0);
 glVertex3f(-5.0, -17.5, 54.0);
 glVertex3f(-5.0, -19.0, 54.0);
 glEnd();

 //KURSI KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-5.0, -19.0, 54.0);
 glVertex3f(-5.0, -17.5, 54.0);
 glVertex3f(-12.0, -17.5, 54.0);
 glVertex3f(-12.0, -19.0, 54.0);
 glEnd();

 //KURSI BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-12.0, -19.0, 54.0);
 glVertex3f(-12.0, -17.5, 54.0);
 glVertex3f(-12.0, -17.5, 44.0);
 glVertex3f(-12.0, -19.0, 44.0);
 glEnd();

 //DINDING SENDERAN
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-5.0, 1.0, 54.0);
 glVertex3f(-5.0, -30.0, 54.0);
 glVertex3f(-5.0, -30.0, 44.0);
 glVertex3f(-5.0, 1.0, 44.0);
 glEnd();

 //DINDING SENDERAN 2
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-4.5, 1.0, 54.0);
 glVertex3f(-5.0, -30.0, 54.0);
 glVertex3f(-4.5, -30.0, 44.0);
 glVertex3f(-4.5, 1.0, 44.0);
 glEnd();

 //DINDING SENDERAN KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-5.0, 1.0, 54.0);
 glVertex3f(-4.5, 1.0, 54.0);
 glVertex3f(-4.5, -30.0, 54.0);
 glVertex3f(-5.0, -30.0, 54.0);
 glEnd();

  //DINDING SENDERAN KIRI HHH
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-5.0, 1.0, 44.0);
 glVertex3f(-4.5, 1.0, 44.0);
 glVertex3f(-4.5, 1.0, 54.0);
 glVertex3f(-5.0, 1.0, 54.0);
 glEnd();

 //DINDING SENDERAN KANAN
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-5.0, -30.0, 54.0);
 glVertex3f(-5.0, -30.0, 54.0);
 glVertex3f(-4.5, -30.0, 44.0);
 glVertex3f(-4.5, -30.0, 44.0);
 glEnd();

 //KURSIDEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-12.0, -18.0, 54.0);
 glVertex3f(-12.0, -30.0, 54.0);
 glVertex3f(-12.0, -30.0, 44.0);
 glVertex3f(-12.0, -18.0, 44.0);
 glEnd();

 //KURSIDEPAN HHH
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-12.0, -18.0, 54.0);
 glVertex3f(-12.0, -30.0, 54.0);
 glVertex3f(-11.5, -30.0, 54.0);
 glVertex3f(-11.5, -18.0, 54.0);
 glEnd();

  //KURSIDEPAN HHH Belakang
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-12.0, -18.0, 44.0);
 glVertex3f(-12.0, -30.0, 44.0);
 glVertex3f(-11.5, -30.0, 44.0);
 glVertex3f(-11.5, -18.0, 44.0);
 glEnd();

 //KURSIDEPAN
 glBegin(GL_QUADS); //+5
 glColor3ub(452,342,432);
 glVertex3f(-11.5, -18.0, 54.0);
 glVertex3f(-11.5, -30.0, 54.0);
 glVertex3f(-11.5, -30.0, 44.0);
 glVertex3f(-11.5, -18.0, 44.0);
 glEnd();

//ATAS 3
 glBegin(GL_QUADS); //+5
 glColor3ub(105,66,245);
 glVertex3f(-30.0, -27.0, 60.0);
 glVertex3f(30.0, -30.0, 60.0);
 glVertex3f(30.0, -30.0, 3.0);
 glVertex3f(-30.0, -27.0, 3.0);
 glEnd();



//KASUR
//KASUR KIRI
 glBegin(GL_QUADS); //+5
 glColor3ub(161, 125, 55);
 glVertex3f(-20.0, -15.0, 18.0);
 glVertex3f(-20.0, -20.0, 18.0);
 glVertex3f(20.0, -20.0, 18.0);
 glVertex3f(20.0, -15.0, 18.0);
glEnd();

//KASUR KANAN
 glBegin(GL_QUADS); //+5
glColor3ub(161, 125, 55);
 glVertex3f(-20.0, -15.0, 4.0);
 glVertex3f(-20.0, -20.0,4.0);
 glVertex3f(20.0, -20.0, 4.0);
 glVertex3f(20.0, -15.0, 4.0);
glEnd();

//KASUR DEPAN
 glBegin(GL_QUADS); //+5
glColor3ub(161, 125, 55); // COKLAT TUAA
 glVertex3f(20.0, -25.0, 18.0);
 glVertex3f(20.0, -15.0, 18.0);
 glVertex3f(20.0, -15.0, 4.0);
 glVertex3f(20.0, -25.0, 4.0);
 glEnd();

//KASUR DEPAN 2
 glBegin(GL_QUADS); //+5
glColor3ub(161, 125, 55); //COKLAT TUA
 glVertex3f(22.0, -25.0, 18.0);
 glVertex3f(22.0, -15.0, 18.0);
 glVertex3f(22.0, -15.0, 4.0);
 glVertex3f(22.0, -25.0, 4.0);
glEnd();

//KASUR DEPAN 3
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(20.0, -25.0, 18.0);
 glVertex3f(22.0, -25.0, 18.0);
 glVertex3f(22.0, -15.0, 18.0);
 glVertex3f(20.0, -15.0, 18.0);
glEnd();

//KASUR DEPAN 3
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(20.0, -25.0, 18.0);
 glVertex3f(22.0, -25.0, 18.0);
 glVertex3f(20.0, -25.0, 4.0);
 glVertex3f(22.0, -25.0, 4.0);
glEnd();

// KASUR DEPAN BAWAH
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(-20.0, -25.0, 18.0);
 glVertex3f(-22.0, -25.0, 18.0);
 glVertex3f(-22.0, -25.0, 4.0);
 glVertex3f(-20.0, -25.0, 4.0);
glEnd();

//KASUR DEPAN ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(-20.0, -10.0, 18.0);
 glVertex3f(-22.0, -10.0, 18.0);
 glVertex3f(-22.0, -10.0, 4.0);
 glVertex3f(-20.0, -10.0, 4.0);
 glEnd();

//KASUR DEPAN ATAS 3
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(20.0, -25.0, 18.0);
 glVertex3f(22.0, -25.0, 18.0);
 glVertex3f(22.0, -25.0, 4.0);
 glVertex3f(20.0, -25.0, 4.0);
glEnd();

//KASUR DEPAN 4
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(20.0, -25.0, 18.0);
 glVertex3f(22.0, -25.0, 18.0);
 glVertex3f(22.0, -25.0, 4.0);
 glVertex3f(20.0, -25.0, 4.0);
glEnd();

// KASUR BELAKANG 1
 glBegin(GL_QUADS); //+5
glColor3ub(161, 125, 55); //COKLAT TUA
 glVertex3f(-20.0, -25.0, 18.0);
 glVertex3f(-20.0, -10.0, 18.0);
 glVertex3f(-20.0, -10.0, 4.0);
 glVertex3f(-20.0, -25.0, 4.0);
 glEnd();

// KASUR BELAKANG 2
 glBegin(GL_QUADS); //+5
glColor3ub(161, 125, 55); //COKLAT TUA
 glVertex3f(-22.0, -25.0, 18.0);
 glVertex3f(-22.0, -10.0, 18.0);
 glVertex3f(-22.0, -10.0, 4.0);
 glVertex3f(-22.0, -25.0, 4.0);
 glEnd();

// PENUTUP KASUR BELAKANG
 glBegin(GL_QUADS); //+5
 glColor3ub(212, 163, 70); // COKLAT MUDA
 glVertex3f(-20.0, -25.0, 18.0);
 glVertex3f(-22.0, -25.0, 18.0);
 glVertex3f(-22.0, -10.0, 18.0);
 glVertex3f(-20.0, -10.0, 18.0);
 glEnd();


//KASUR ATAS
 glBegin(GL_QUADS); //+5
 glColor3ub(255, 255, 255);
 glVertex3f(-20.0, -15.0, 18.0);
 glVertex3f(-20.0, -15.0, 4.0);
 glVertex3f(20.0, -15.0, 4.0);
 glVertex3f(20.0, -15.0, 18.0);
 glEnd();

glFlush();
glutSwapBuffers();
}
//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 //gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
 //glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
 gluPerspective(60.0, w / h, 1.0, 400.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -5.0, -100.0);
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
switch (key)
{
case 'a':
case 'A':
glTranslatef(1.0, 0.0, 0.0);
break;
case 'd':
case 'D':
glTranslatef(-1.0, 0.0, 0.0);
break;
case 'w':
case 'W':
glTranslatef(0.0, 0.0, 1.0);
break;
case 's':
case 'S':
glTranslatef(0.0, 0.0, -1.0);
break;
 case 'l':
case 'L':
 glRotatef(.5, 0.0, 1.0, 0.0); /* rotate left */
break;
case 'r':
case 'R':
glRotatef(-.5, 0.0, 1.0, 0.0); /* rotate right */
break;
 case 'u':
case 'U':
 glRotatef(1.0, 1.0, 0.0, 0.0); /* rotate up */
break;
case 'j':
case 'J':
glRotatef(-1.0, 1.0, 0.0, 0.0); /* rotate down */
break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
