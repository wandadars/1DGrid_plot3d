#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std ;

int main(int argC,char *argV[]) {
  if(argC!=10){
    cout << "Usage: 1DGrid nI nJ nK xMin xMax yMin yMax zMin zMax > file.grd" << endl ; exit(-1) ;
  }
  int NI=atoi(argV[1]),NJ=atoi(argV[2]),NK=atoi(argV[3]) ;
  float xMin=atof(argV[4]),xMax=atof(argV[5]),yMin=atof(argV[6]),yMax=atof(argV[7]),zMin=atof(argV[8]),zMax=atof(argV[9]) ;
  cout << "1" << endl ;
  cout << " "<< NI << " " << NJ << " " << NK << endl ;

  for(int k=0;k<NK;++k) for(int j=0;j<NJ;++j) for(int i=0;i<NI;++i){
    float x=xMin+(xMax-xMin)*float(i)/float(NI-1) ; cout << x << endl ;
  }
  for(int k=0;k<NK;++k) for(int j=0;j<NJ;++j) for(int i=0;i<NI;++i){
    float y=yMin+(yMax-yMin)*float(j)/float(NJ-1) ; cout << y << endl ;
  }
  for(int k=0;k<NK;++k) for(int j=0;j<NJ;++j) for(int i=0;i<NI;++i){
    float z=zMin+(zMax-zMin)*float(k)/float(NK-1) ; cout << z << endl ;
  }
}
