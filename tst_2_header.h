int reserve_instance(int &m1,
int &n1,
int &m2,
int &n2,
double* &c,
double* &d,
double** &T,
double** &W,int &num_scenarios,
double* &p,
double** &scenarios,
int* &b1){
int i,j;
m1 = 2;
n1 = 10;
m2 = 2;
n2 = 10;
num_scenarios = 4;
T = (double**)malloc(sizeof(double*)*m1);
T[0] = (double*) malloc(sizeof(double)*n1);
T[1] = (double*) malloc(sizeof(double)*n1);
T[0][0] = 7.000000;
T[0][1] = 2.000000;
T[0][2] = 6.000000;
T[0][3] = 3.000000;
T[0][4] = 8.000000;
T[0][5] = 2.000000;
T[0][6] = 8.000000;
T[0][7] = 7.000000;
T[0][8] = 4.000000;
T[0][9] = 7.000000;
T[1][0] = 8.000000;
T[1][1] = 8.000000;
T[1][2] = 1.000000;
T[1][3] = 5.000000;
T[1][4] = 8.000000;
T[1][5] = 8.000000;
T[1][6] = 4.000000;
T[1][7] = 2.000000;
T[1][8] = 8.000000;
T[1][9] = 8.000000;
W = (double**)malloc(sizeof(double*)*m2);
W[0] = (double*) malloc(sizeof(double)*n2);
W[1] = (double*) malloc(sizeof(double)*n2);
W[0][0] = 6.000000;
W[0][1] = 7.000000;
W[0][2] = 6.000000;
W[0][3] = 6.000000;
W[0][4] = 6.000000;
W[0][5] = 6.000000;
W[0][6] = 3.000000;
W[0][7] = 1.000000;
W[0][8] = 6.000000;
W[0][9] = 8.000000;
W[1][0] = 1.000000;
W[1][1] = 8.000000;
W[1][2] = 7.000000;
W[1][3] = 4.000000;
W[1][4] = 2.000000;
W[1][5] = 1.000000;
W[1][6] = 1.000000;
W[1][7] = 7.000000;
W[1][8] = 3.000000;
W[1][9] = 1.000000;
p = (double*) malloc(sizeof(double)*num_scenarios);
scenarios = (double**)malloc(sizeof(double*)*num_scenarios);
p[0] = 0.300000;
scenarios[0] = (double*)malloc(sizeof(double)*m2);
p[1] = 0.200000;
scenarios[1] = (double*)malloc(sizeof(double)*m2);
p[2] = 0.400000;
scenarios[2] = (double*)malloc(sizeof(double)*m2);
p[3] = 0.100000;
scenarios[3] = (double*)malloc(sizeof(double)*m2);
scenarios[0][0] = 12.000000;
scenarios[0][1] = 12.000000;
scenarios[1][0] = 17.000000;
scenarios[1][1] = 16.000000;
scenarios[2][0] = 13.000000;
scenarios[2][1] = 14.000000;
scenarios[3][0] = 20.000000;
scenarios[3][1] = 12.000000;
c = (double*) malloc(sizeof(double)*n1);
d = (double*) malloc(sizeof(double)*n2);
c[0]=2.000000;
c[1]=2.000000;
c[2]=4.000000;
c[3]=4.000000;
c[4]=1.000000;
c[5]=2.000000;
c[6]=2.000000;
c[7]=3.000000;
c[8]=4.000000;
c[9]=4.000000;
d[0]=2.000000;
d[1]=2.000000;
d[2]=4.000000;
d[3]=4.000000;
d[4]=1.000000;
d[5]=2.000000;
d[6]=2.000000;
d[7]=3.000000;
d[8]=4.000000;
d[9]=4.000000;
b1 = (int*) malloc(sizeof(int)*m1);
b1[0]=10;
b1[1]=10;
return 0;
}
