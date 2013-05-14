/*We use the 17.14 form of floating point*/
#define FLOATM 16384

/*convert n to fixed-point */
#define INT2F(n) (n*FLOATM)

/*convert x to int (rounding toward zero)*/
#define F2IZERO(x) (x/FLOATM)

/*Convert x to integer (rounding to nearest) */
#define F2INEAR(x) (x>=0?((x+FLOATM/2)/FLOATM):((x-FLOATM/2)/FLOATM))

/*Add fix x and int n*/
#define FADDI(x,n) (x+n*FLOATM)

/*Subtract int n from fixed x */
#define FSUBI(x,n) (x-n*FLOATM) 

/*Multiply fixed x by fixed y:*/
#define FMUL(x,y) (((int64_t)x)*y/FLOATM)

/*Divide fixed x by fixed y:*/
#define FDIV(x,y) (((int64_t)x)*FLOATM/y)

