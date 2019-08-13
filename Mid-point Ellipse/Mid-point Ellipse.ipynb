# @Author: Pranta Sarker
# North East University Bangladesh

def call_input():
    global rx , ry, xk, yk, xk1, yk1, oldxk, oldyk; # xk1 means xk+1 and yk1 means yk+1
    inrxry = input("Enter rx and ry: ").split(" ");
    rx = int(inrxry[0]); ry = int(inrxry[1]);
    print("rx = " , rx , " ry = ", ry, end=" ");
    xk = 0; xk1 = rx;
    yk = ry; yk1 = 0;
    oldxk = xk; oldyk = yk;
    print("\nxk = ", xk, " yk = ", yk , "\nxk1 = ", xk1, " yk1 = ", yk1, end=" ");

def perform_square(x):
    return x * x;

def Pk_greater_than_zero():
    global xk, yk;
    xk = xk + 1;
    yk = yk - 1;

def Pk_less_than_zero():
    global xk, yk;
    xk = xk + 1;
    yk = yk;

def calculate_Pk1():
    global pk1;
    global P_init_k;
    P_init_k = P_init_k + perform_square(ry) + ((2 * (oldxk + 1)) * perform_square(ry)) + (perform_square(rx) * (perform_square(yk) - perform_square(oldyk))) - (perform_square(rx) * (yk - oldyk));
    #print("Pk+1 = ", P_init_k);
    
    
def slope_perform_less_than_one():
    global P_init_k , xk, yk, rx, ry, oldxk, oldyk;
    P_init_k = (perform_square(ry)) + (perform_square(rx) / 4) - (ry * perform_square(rx));
    print(P_init_k);
    print("\n---------------------------------------------");
    
    while((2 * xk)*perform_square(ry) <= (2 * yk) * perform_square(rx)):
        
        print("xk = ", xk, " yk = ", yk, "Pk = ", P_init_k, end=" ");
        
        oldxk = xk;
        oldyk = yk;
        
        if(P_init_k >= 0):
            Pk_greater_than_zero();
        elif(P_init_k < 0):
            Pk_less_than_zero();
        calculate_Pk1();
        
        print("fx = ", (2 * xk)*perform_square(ry), " fy = ", (2 * yk) * perform_square(rx));
    
def start_Region_2():
    global P_init_k,  rx , ry, xk, yk, xk1, yk1, oldxk, oldyk;
    #print("xk1 = ", xk1, " yk1 = ", yk1, end="\n");
    oldxk = xk; oldyk = yk;
    P_init_k = (perform_square(oldxk + 0.5) * perform_square(ry)) + (perform_square(oldyk - 1) * perform_square(rx)) - (perform_square(rx) * perform_square(ry));
    
    while((xk != xk1) or (yk != yk1)):
        oldxk = xk; oldyk = yk;
        print("xk = ", xk, " yk = ", yk, "Pk = ", P_init_k, end="\n");
        if(P_init_k >= 0):
            xk = xk;
            yk = yk - 1;
        elif(P_init_k < 0):
            xk = xk + 1;
            yk = yk - 1;
        P_init_k = P_init_k + perform_square(rx) - (2 * perform_square(rx) * (oldyk - 1)) + (perform_square(ry)*(perform_square(xk) - perform_square(oldxk))) + (perform_square(ry) * (xk - oldxk));
    
    print("\nfinally --- xk = ", xk, " yk = ", yk, "Pk = ", P_init_k, end="\n");
        
    
def calculate_slope():
    global oldxk, oldyk, xk, xk1, yk, yk1;
    m = (yk1 - yk) / (xk1 - xk);
    print("\nslope = ", m, end = " ");
   
    
    if(m < 1):
        slope_perform_less_than_one(); # Region 1
    print("finally---- xk = ", xk, " yk = ", yk, "Pk = ", P_init_k, end=" ");
    print("\n");
    start_Region_2();
    
def main():
    call_input();
    calculate_slope();

    
main();
