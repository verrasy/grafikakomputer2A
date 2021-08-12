#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEKLARASI DAN INISIASI VARIABEL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEKLARASI DAN INISIASI FUNGSI ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//****************************************** fungsi display **********************************************************************
void ubin(){
    glColor3d(0.66,0.66,0.66);
    glPushMatrix();
        glTranslated(0.0,-14.0,-20.0);
        glScaled(12.0,0.2,10.0);
        glutSolidCube(10);
    glPopMatrix();
}
void jendela(){
    glColor3d(0.85,0.99,0.99);
    glutSolidCube(10);

    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(0.0,0.0,4.5);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,0.0,-4.5);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,4.5,0.0);
        glRotated(90.0,1.0,0.0,0.0);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,-4.5,0.0);
        glRotated(90.0,1.0,0.0,0.0);
        glScaled(4.0,1.0,0.1);
        glutSolidCube(10);
    glPopMatrix();
}
void pintu(){
     //Pintu
    glPushMatrix();
        glColor3d(0.88,0.72,0.53);
        glTranslatef(61.0, 14.75, -40.0);
        glScalef(0.075,5.5,3.0);
        glutSolidCube(10);
    glPopMatrix();

    //kerangka pintu/ kusen pintu
    glPushMatrix();
        glTranslatef(61.0, 15.8, -56.5);
        glScalef(0.2,5.8,0.25);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0, 15.8, -23.5);
        glScalef(0.2,5.8,0.25);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0,44.0, -40.0);
        glScalef(0.2,0.3,3.5);
        glutSolidCube(10);
    glPopMatrix();

    //Gagang Pintu
    glColor3d(0.75,0.59,0.4);
    glPushMatrix();
        glTranslatef(61.0, 14.5, -50.0);
        glScalef(4.0, 6.0, 10.0);
        glutSolidSphere(.3, 25, 25);
    glPopMatrix();
}
void dindingKanan(){
    // di samping pintu
    glPushMatrix();
        glTranslatef(61.0, 25.0, -65.0);
        glScalef(0.2,8.0,1.5);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(61.0,25.0,3.75);
        glScalef(0.2,8.0,5.25);
        glutSolidCube(10);
    glPopMatrix();

    //di atas pintu
    glPushMatrix();
        glTranslatef(61.0,55.0, -40.0);
        glScalef(0.2,2.0,3.5);
        glutSolidCube(10);
    glPopMatrix();

    //di bawah pintu
    glPushMatrix();
        glTranslatef(61.0,-14.0, -40.0);
        glScalef(0.2,0.2,3.5);
        glutSolidCube(10);
    glPopMatrix();
}
void dindingBelakang(){
    // dinding
    glPushMatrix();
        glTranslated(0.0,25.0,-71.0);
        glScaled(12.0,8.0,0.2);
        glutSolidCube(10);
    glPopMatrix();
}
void dindingKiri(){
    //disamping
    glPushMatrix();
        glTranslated(-51.0,25.0,-52.5);
        glScaled(0.2,8.0,3.5);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-51.0,25.0,12.5);
        glScaled(0.2,8.0,3.5);
        glutSolidCube(10);
    glPopMatrix();
    //^^^^^^^^^^^^ 2 or center ^^^^^^^^^^^^^^^
    //atas
    glPushMatrix();
        glTranslated(-51.0,55.0,-20.0);
        glScaled(0.2,2.0,3.0);
        glutSolidCube(10);
    glPopMatrix();

    //bawah
    glPushMatrix();
        glTranslated(-51.0,-2.5,-20.0);
        glScaled(0.2,2.5,3.0);
        glutSolidCube(10);
    glPopMatrix();

    // jendela
    glPushMatrix();
        glTranslated(-51.0,27.5,-20.0);
        glScaled(0.05,3.5,3.0);
        jendela();
    glPopMatrix();
}

void dinding(){
    glColor3d(1.0,1.0,1.0);

    glPushMatrix();
        dindingKanan();
    glPopMatrix();

    glPushMatrix();
        dindingBelakang();
    glPopMatrix();

    glPushMatrix();
        glTranslated(-10.0,0.0,0.0);
        dindingKiri();
    glPopMatrix();
}
void kasur(){
    glRotated(270.0,0.0,1.0,0.0);
    //kerangka kasur
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(-25.0,-7.5,0.0);
        glScaled(5.0,1.0,4.0);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-49.0,-4.0,0.0);
        glScaled(0.1,2.0,4.0);
        glutSolidCube(10);
    glPopMatrix();

    //bantal
    glColor3d(0.53,0.8,0.92);
    glPushMatrix();
        glTranslated(-40.0,-2.0,0.0);
        glScaled(1.0,0.5,2.0);
        glutSolidCube(10);
    glPopMatrix();

    //kasur
    glColor3d(0.95,0.95,0.95);
    glPushMatrix();
        glTranslated(-25.0,-2.5,0.0);
        glScaled(4.6,0.1,3.6);
        glutSolidCube(10);
    glPopMatrix();

    //selimut
    glColor3d(0.53,0.8,0.92);
    glPushMatrix();
        glTranslated(-15.0,-2.0,0.0);
        glScaled(2.5,0.1,3.6);
        glutSolidCube(10);
    glPopMatrix();
}
void meja(){
    // alas atau inti meja
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(-49.5,0.0,-60.0);
        glScaled(1.8,0.2,1.8);
        glutSolidCube(10);
    glPopMatrix();

    //kaki meja
    glPushMatrix();
        glTranslated(-57.5,-7.0,-68.0);
        glScaled(0.2,1.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-41.5,-7.0,-52.0);
        glScaled(0.2,1.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-57.5,-7.0,-52.0);
        glScaled(0.2,1.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-41.5,-7.0,-68.0);
        glScaled(0.2,1.5,0.2);
        glutSolidCube(10);
    glPopMatrix();
}
void mejaBelajar(){
    //alas atau inti meja
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(45.0,7.5,7.0);
        glScaled(2.5,0.2,4.4);
        glutSolidCube(10);
    glPopMatrix();

    //------------ kerangka ------------------------------------------
    glColor3d(0.88,0.72,0.53);

    //kaki meja belajar
    glPushMatrix();
        glTranslated(56.5,-2.5,-14.0);
        glScaled(0.2,2.0,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(33.5,-2.5,-14.0);
        glScaled(0.2,2.0,0.2);
        glutSolidCube(10);
    glPopMatrix();

    //inti laci meja belajar
    glPushMatrix();
        glTranslated(45.0,-2.5,18.0);
        glScaled(2.5,2.0,2.2);
        glutSolidCube(10);
    glPopMatrix();

    //cover laci meja belajar
    glColor3d(0.75,0.59,0.4);
    glPushMatrix();
        glTranslated(32.5,-2.5,18.0);
        glScaled(0.05,1.7,1.9);
        glutSolidCube(10);
    glPopMatrix();
    //-----------------------------------------------------------------
}
void kursi(){
    //dudukan atau inti kursi
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(35.0,-6.0,-39.5);
        glScaled(1.4,0.2,1.4);
        glutSolidCube(10);
    glPopMatrix();

    //------------ kerangka ------------------------------------------
    glColor3d(0.88,0.72,0.53);

    //kaki kursi atau kerangka bawah
    glPushMatrix();
        glTranslated(29.0,-12.0,-45.5);
        glScaled(0.2,1.3,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(41.0,-12.0,-45.5);
        glScaled(0.2,1.3,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(41.0,-6.0,-33.5);
        glScaled(0.2,2.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(29.0,-6.0,-33.5);
        glScaled(0.2,2.5,0.2);
        glutSolidCube(10);
    glPopMatrix();

    //kerangka atas
    glPushMatrix();
        glTranslated(35.0,5.5,-33.5);
        glScaled(1.4,0.8,0.2);
        glutSolidCube(10);
    glPopMatrix();
    //-----------------------------------------------------------------
}
void lemari(){
    //isi atau inti lemari
    glColor3d(0.88,0.72,0.53);
    glPushMatrix();
        glTranslated(-42.0,1.0,-48.0);
        glScaled(1.5,3.0,4.0);
        glutSolidCube(10);
    glPopMatrix();

    //pintu atau kerangka lemari
    glColor3d(0.75,0.59,0.4);
    glPushMatrix();
        glTranslated(-41.0,8.0,-48.0);
        glScaled(1.5,1.3,3.8);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-41.0,-6.0,-48.0);
        glScaled(1.5,1.2,3.7);
        glutSolidCube(10);
    glPopMatrix();
}
void jam(){
    glColor3d(0.66,0.66,0.66);
    glPushMatrix();
        glTranslated(0.0,45.0,-69.0);
        glScaled(2.0,2.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    //bingkai jam
    //kanan
    glColor3d(0.44, 0.4, 0.38);
    glPushMatrix();
        glTranslated(9.0,45.0,-68.5);
        glScaled(0.2,2.0,0.15);
        glutSolidCube(10);
    glPopMatrix();
    //kiri
    glPushMatrix();
        glTranslated(-9.0,45.0,-68.5);
        glScaled(0.2,2.0,0.15);
        glutSolidCube(10);
    glPopMatrix();
    //atas
    glPushMatrix();
        glTranslated(0.0,55.0,-68.5);
        glScaled(2.0,0.2,0.15);
        glutSolidCube(10);
    glPopMatrix();
    //bawah
    glPushMatrix();
        glTranslated(0.0,35.0,-68.5);
        glScaled(2.0,0.2,0.15);
        glutSolidCube(10);
    glPopMatrix();

    //arah jarum jam
    glPushMatrix();
        glTranslated(-3.0,45.0,-68.5);
        glScaled(0.5,0.1,0.11);
        glutSolidCube(10);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0.0,48.0,-68.5);
        glScaled(0.1,0.8,0.11);
        glutSolidCube(10);
    glPopMatrix();
}
void buku(){
// =====================================buku 1====================================
    //isi
    glColor3d(0.95,0.95,0.95);
    glPushMatrix();
        glTranslated(35.0,5.0,-64.0);
        glScaled(0.2,0.8,0.8);
        glutSolidCube(10);
    glPopMatrix();

    //cover
    glColor3d(0.3,0.55,0.56);
    glPushMatrix();
        glTranslated(34.0,5.0,-64.0);
        glScaled(0.05,0.9,0.9);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(36.0,5.0,-64.0);
        glScaled(0.05,0.9,0.9);
        glutSolidCube(10);
    glPopMatrix();
    // =============================================================================

    // =====================================buku 2====================================
    //isi
    glColor3d(0.95,0.95,0.95);
    glPushMatrix();
        glTranslated(37.5,5.0,-64.0);
        glScaled(0.2,0.8,0.8);
        glutSolidCube(10);
    glPopMatrix();

    //cover
    glColor3d(0.55,0.02,0.0);
    glPushMatrix();
        glTranslated(36.5,5.0,-64.0);
        glScaled(0.05,0.9,0.9);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(38.5,5.0,-64.0);
        glScaled(0.05,0.9,0.9);
        glutSolidCube(10);
    glPopMatrix();
    // =============================================================================

    // =====================================buku 3====================================
    //isi
    glColor3d(0.95,0.95,0.95);
    glPushMatrix();
        glTranslated(40.0,5.0,-64.0);
        glScaled(0.2,0.8,0.8);
        glutSolidCube(10);
    glPopMatrix();

    //cover
    glColor3d(0.18,0.31,0.31);
    glPushMatrix();
        glTranslated(39.0,5.0,-64.0);
        glScaled(0.05,0.9,0.9);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslated(41.0,5.0,-64.0);
        glScaled(0.05,0.9,0.9);
        glutSolidCube(10);
    glPopMatrix();
    // =============================================================================
}
void figure1(){
    //Figura 1 terletak di sebelah kanan
    //Figura Bingkai 1
    glColor3d(0.92, 0.61, 0.46);
    //bawah
    glPushMatrix();
        glTranslated(30.0,31.0,-61.0);
        glScaled(2.0,0.2,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //atas
    glPushMatrix();
        glTranslated(30.0,49.0,-61.0);
        glScaled(2.0,0.2,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //kiri
    glPushMatrix();
        glTranslated(21.0,40.0,-61.0);
        glScaled(0.2,2.0,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //kanan
    glPushMatrix();
        glTranslated(39.0,40.0,-61.0);
        glScaled(0.2,2.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    //Alas Figura 1
    glColor3d(0.84, 0.8, 0.78);
    glPushMatrix();
        glTranslated(30.0,40.0,-61.0);
        glScaled(1.9,1.9,0.075);
        glutSolidCube(10);
    glPopMatrix();

    //gambar figura
    glColor3d(0.44, 0.4, 0.38);
    glPushMatrix();
        glTranslated(30.0,40.0,-61.0);
        glScaled(1.0,1.0,0.08);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.24, 0.2, 0.18);
    glPushMatrix();
        glTranslated(30.0,40.0,-61.0);
        glScaled(0.5,0.5,0.09);
        glutSolidCube(10);
    glPopMatrix();
}
void figure2(){
    //Figura 2 terletak di sebelah kiri
    //Figura Bingkai 2
    glColor3d(0.92, 0.61, 0.46);
    //bawah
    glPushMatrix();
        glTranslated(-30.0,31.0,-61.0);
        glScaled(2.0,0.2,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //atas
    glPushMatrix();
        glTranslated(-30.0,49.0,-61.0);
        glScaled(2.0,0.2,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //kiri
    glPushMatrix();
        glTranslated(-21.0,40.0,-61.0);
        glScaled(0.2,2.0,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //kanan
    glPushMatrix();
        glTranslated(-39.0,40.0,-61.0);
        glScaled(0.2,2.0,0.1);
        glutSolidCube(10);
    glPopMatrix();

    //Alas Figura 2
    glColor3d(0.84, 0.8, 0.78);
    glPushMatrix();
        glTranslated(-30.0,40.0,-61.0);
        glScaled(1.9,1.9,0.075);
        glutSolidCube(10);
    glPopMatrix();

    //gambar figura
    glColor3d(0.44, 0.4, 0.38);
    glPushMatrix();
        glTranslated(-30.0,40.0,-61.0);
        glScaled(1.0,1.0,0.08);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.24, 0.2, 0.18);
    glPushMatrix();
        glTranslated(-30.0,40.0,-61.0);
        glScaled(0.5,0.5,0.09);
        glutSolidCube(10);
    glPopMatrix();
}
void figure(){
    //fungsi untuk memisahkan letak antara 2 figura
    glPushMatrix();
        glTranslated(0.0,0.0,-8.0);
        figure1();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,0.0,-8.0);
        figure2();
    glPopMatrix();
}
void karpet(){
    //dasar
    glColor3d(0.3, 0.23, 0.23);
    glPushMatrix();
        glTranslatef(-24.0,-12.75,5.5);
        glScalef(7.0, 0.05, 4.7);
        glutSolidCube(10);
    glPopMatrix();
    //motif karpet

    //warna coklat tua kotak 1 dan 4
    glPushMatrix();
        glColor3d(0.5, 0.4, 0.4);
        glTranslatef(-24.0,-12.75,5.5);
        glScalef(6.5, 0.06, 4.4);
        glutSolidCube(10);
    glPopMatrix();

    //warna coklat muda kotak 2 dan 3
    glColor3d(0.58, 0.45, 0.45);
    glPushMatrix();
        glTranslatef(-7.5,-12.75,-5.5);
        glScalef(3.25, 0.065, 2.2);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-40.5,-12.75,16.5);
        glScalef(3.25, 0.065, 2.2);
        glutSolidCube(10);
    glPopMatrix();
}
void laptop(){
    //keyboard
    glPushMatrix();
        glColor3d(0.4, 0.4, 0.4);
        glTranslatef(45.0,9.0,-2.5);
        glScalef(1.5, 0.1, 1.8);
        glutSolidCube(10);
    glPopMatrix();

    glPushMatrix();
        glColor3d(0.2, 0.2, 0.2);
        glTranslatef(46.0,9.05,-2.5);
        glScalef(0.8, 0.11, 1.5);
        glutSolidCube(10);
    glPopMatrix();

    //monitor / layar
    glColor3d(0.4, 0.4, 0.4);
    glPushMatrix();
        glRotated(-120.0,0.0,0.0,1.0);
        glTranslatef(-40.0,41.0,-2.5);
        glScalef(1.5, 0.1, 1.8);
        glutSolidCube(10);
    glPopMatrix();

    glColor3d(0.85, 0.85, 0.85);
    glPushMatrix();
        glRotated(-120.0,0.0,0.0,1.0);
        glTranslatef(-40.0,41.0,-2.5);
        glScalef(1.3, 0.11, 1.6);
        glutSolidCube(10);
    glPopMatrix();
}
void lampuMeja(){
    // alas
    glColor3d(0.44, 0.4, 0.38);
    glPushMatrix();
        glTranslated(-49.5,3.0,-60.0);
        glScaled(0.8,0.2,0.8);
        glutSolidCube(10);
    glPopMatrix();
    //tiang
    glPushMatrix();
        glTranslated(-49.5,12.0,-60.0);
        glScaled(0.1,1.8,0.1);
        glutSolidCube(10);
    glPopMatrix();
    //lampu
    glPushMatrix();
        glTranslated(-49.5,21.0,-60.0);
        glScaled(1.2,0.08,1.2);
        glutSolidCube(10);
    glPopMatrix();
    glPushMatrix();
        glTranslated(-49.5,17.25,-54.25);
        glScaled(1.2,0.8,0.08);
        glutSolidCube(10);
    glPopMatrix();
    glPushMatrix();
        glTranslated(-49.5,17.25,-65.75);
        glScaled(1.2,0.8,0.08);
        glutSolidCube(10);
    glPopMatrix();
    glPushMatrix();
        glTranslated(-55.25,17.25,-60.0);
        glScaled(0.08,0.8,1.2);
        glutSolidCube(10);
    glPopMatrix();
    glPushMatrix();
        glTranslated(-43.75,17.25,-60.0);
        glScaled(0.08,0.8,1.2);
        glutSolidCube(10);
    glPopMatrix();
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //============================ Ruangan ======================
    glPushMatrix();
        ubin();
    glPopMatrix();

    glPushMatrix();
        dinding();
    glPopMatrix();
    //======================================================================

    //============================= kasur ==================================
    glPushMatrix();
        glTranslated(-18.0,0.0,-19.0);
        kasur();
    glPopMatrix();
    //=====================================================================

    //============================= MEJA BELAJAR ==============================
    glPushMatrix();
        mejaBelajar();
    glPopMatrix();
    //=====================================================================

    //============================= meja ==================================
    glPushMatrix();
        glRotated(0.0,0.0,1.0,0.0);
        glTranslated(0.0,1.5,0.0);
        meja();
    glPopMatrix();
    //=====================================================================

    //============================= kursi ==================================
    glPushMatrix();
        glRotated(-90.0,0.0,1.0,0.0);
        glTranslated(-38.0,5.0,10.0);
        kursi();
    glPopMatrix();
    //=====================================================================

    //============================Lemari==================================
    glPushMatrix();
        glRotated(-90.0,0.0,1.0,0.0);
        glTranslated(-19.0,1.0,17.0);
        glScaled(1.0,1.0,0.8);
        lemari();
    glPopMatrix();
    //=====================================================================

    //================================= JAM ====================================
    glPushMatrix();
        jam();
    glPopMatrix();
    //=====================================================================
    //================================= Figure ====================================
    glPushMatrix();
        figure();
    glPopMatrix();
    //=====================================================================
    //============================= KARPET ==================================
    glPushMatrix();
        karpet();
    glPopMatrix();
    //=====================================================================
    // =============================== BUKU ================================
    glPushMatrix();
        glRotated(-90.0,0.0,1.0,0.0);
        glTranslated(-14.0,8.0,12.0);
        buku();
    glPopMatrix();
    // =============================================================================
    //============================= PINTU ==================================
    glPushMatrix();
        pintu();
    glPopMatrix();
    //=====================================================================
    //============================= LAPTOP ==================================
    glPushMatrix();
        laptop();
    glPopMatrix();
    //=====================================================================
    //============================= LAMPU MEJA ==================================
    glPushMatrix();
        lampuMeja();
    glPopMatrix();
    //=====================================================================


    glFlush();
    glutSwapBuffers();
}
//****************************************************************************************************************************
//****************************************** fungsi init **********************************************************************
void init(){
    glClearColor(0.2, 0.2, 0.2, 1.0);

    const GLfloat light_ambient[] = { 0.1f, 0.1f, 0.1f, 1.0f };
    const GLfloat light_diffuse[] = { 0.75f, 0.75f, 0.75f, 1.0f };
    const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

    const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
    const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
    const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat high_shininess[] = { 100.0f };


    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);

    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}
//****************************************************************************************************************************
//********************************************** fungsi reshape **************************************************************
void reshape(int w, int h){
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 400.0);
    glTranslated(0.0, -45.0, -100.0);
    gluLookAt(0.0, 0.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}
//****************************************************************************************************************************
//********************************************** fungsi keyboard *************************************************************
void keyboard(unsigned char key, int x, int y){
    switch (key){
        case 'w':
        case 'W':
            glRotatef(-3.0, 1.0, 0.0, 0.0); // rotasi ke atas
        break;
        case 's':
        case 'S':
             glRotatef(3.0, 1.0, 0.0, 0.0); // rotasi ke bawah
        break;
        case 'd':
        case 'D':
            glRotatef(3.0, 0.0, 1.0, 0.0); // rotasi ke kanan
        break;
        case 'a':
        case 'A':
            glRotatef(-3.0, 0.0, 1.0, 0.0); //rotasi ke kiri
        break;
        case 'e':
        case 'E':
            glRotatef(-3.0, 0.0, 0.0, 1.0); //rotasi ke thd sumbu z / searah jarum jam
        break;
        case 'f':
        case 'F':
            glRotatef(3.0, 0.0, 0.0, 1.0); //rotasi ke thd sumbu z / lawan arah jarum jam
        break;
        case 'j':
        case 'J':
            glTranslatef(1.0, 0.0, 0.0); //geser ke kanan
        break;
        case 'l':
        case 'L':
            glTranslatef(-1.0, 0.0, 0.0); //geser ke kiri
        break;
        case 'i':
        case 'I':
            glTranslatef(0.0, 0.0, 1.0); //geser ke depan
        break;
        case 'k':
        case 'K':
            glTranslatef(0.0, 0.0, -1.0); //geser ke belakang
        break;
        case 'h':
        case 'H':
            glTranslatef(0.0, 1.0, 0.0); //geser ke bawah
        break;
        case 'u':
        case 'U':
            glTranslatef(0.0, -1.0, 0.0); //geser ke atas
        break;
    }

    glutPostRedisplay();
}
//*****************************************************************************************************************************************
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ad
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ PROGRAM UTAMA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main (int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1152, 680);
    glutInitWindowPosition(20, 10);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Project GLUT 3D");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
