#include <iostream>
using namespace std;
int main() { 
    system("color 70");
    string hatch[3] = {"Suzuki alto", "Toyota vitz", "Kia picanto"};
    string sedan[3] = {"Honda city   ", "Toyota yaris ", "Corolla Altis"};
    string suv[3] = {"Kia Sportage  ", "Hyundai Tucson", "MG HS         "};
    string luxury[3] = {"Toyota Prado", "Audi A6     ", "Mercedes C  "};
    string van[3] = {"Suzuki Bolan ", "Toyota Hiace ", "Hyundai Grand"};
    
	int hatchprice[3] = {12000, 15000, 13000};
    int sedanprice[3] = {17000, 17000, 19000};
    int suvprice[3] = {20000, 22000, 23000};
    int luxprice[3] = {40000, 45000, 50000};
    int vanprice[3] = {23500, 25000, 27000};

    bool hatchstatus[3] = {true, true, true};
    bool sedanstatus[3] = {true, true, true};
    bool suvstatus[3] = {true, true, true};
    bool luxstatus[3] = {true, true, true};
    bool vanstatus[3] = {true, true, true};

    string hatchrenter[3];
    string sedanrenter[3];
    string suvrenter[3];
    string luxrenter[3];
    string vanrenter[3];
    
    int hatchdays[3] = {0,0,0};
    int sedandays[3] = {0,0,0};
    int suvdays[3] = {0,0,0};
    int luxdays[3] = {0,0,0};
    int vandays[3] = {0,0,0};

    bool apprunning = true;
    int mainopt, adminoption, customeropt;
    string admin = "FBI", adminpass = "OTD", inputuser, inputpass;
    long TRE = 0;
    long TFC = 0;

    while (apprunning) {
        system("cls");
        cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t       ___________________________________________________\n";
        cout << " \t\t\t\t\t\t\t      |                                                   |\n";
        cout << " \t\t\t\t\t\t\t      |           PREMIUM MOTORS RENTAL SYSTEM            |\n";
        cout << " \t\t\t\t\t\t\t      |___________________________________________________|\n";
        cout << " \t\t\t\t\t\t\t      |                                                   |\n";
        cout << " \t\t\t\t\t\t\t      | 1. Customer Portal (Rent / Return)                |\n";
        cout << " \t\t\t\t\t\t\t      | 2. Admin Dashboard (Reports / prices)             |\n";
        cout << " \t\t\t\t\t\t\t      | 3. Exit Application                               |\n";
        cout << " \t\t\t\t\t\t\t      |___________________________________________________|\n";
        cout << " \t\t\t\t\t\t\t      |                                                   |\n";
        cout << " \t\t\t\t\t\t\t      |  Select option: ";
        cin >> mainopt;
        cout << " \t\t\t\t\t\t\t      |___________________________________________________|\n";
        system("cls");
        
		if (mainopt == 1) {
            bool customer = true;
            while (customer) {
            	system("cls");
            	cout << "\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|================== CUSTOMER MENU ==================|\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|  1. Rent a Car                                    |\n";
                cout << " \t\t\t\t\t\t\t\t|  2. Return a Car                                  |"<< endl;
                cout << " \t\t\t\t\t\t\t\t|  3. Calculate Fare Estimation                     |\n";
                cout << " \t\t\t\t\t\t\t\t|  4. Back to Main Menu                             |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t| Enter Choice: ";
                cin >> customeropt;
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";

                if (customeropt == 1) {
                    long choice;
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
					cout << " \t\t\t\t\t\t\t\t|================= SELECT CATEGORY =================|\n";
                    cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
					cout << " \t\t\t\t\t\t\t\t|  1. Hatchback (Economy)                           |\n";
                    cout << " \t\t\t\t\t\t\t\t|  2. Sedan (Standard)                              |\n";
                    cout << " \t\t\t\t\t\t\t\t|  3. SUV (Premium)                                 |\n";
                    cout << " \t\t\t\t\t\t\t\t|  4. Luxury (VIP)                                  |\n";
                    cout << " \t\t\t\t\t\t\t\t|  5. Vans (Family)                                 |\n";
                    cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                    cout << " \t\t\t\t\t\t\t\t|  Enter Choice: ";
                    cin >> choice;
                    cout << "\t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    cout << "\t\t\t\t\t\t\t\t|     |              |               |              |\n";
                    cout << "\t\t\t\t\t\t\t\t|  ID |     Name     |   price/day   |   Status     |\n";
                    cout << "\t\t\t\t\t\t\t\t|_____|______________|_______________|______________|\n";
                    cout << "\t\t\t\t\t\t\t\t|                                                   |\n";
                    if (choice == 1) {
                        for(int i=0; i<3; i++)cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << hatch[i] << "        " << hatchprice[i] << "         " << (hatchstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 2) {
                        for(int i=0; i<3; i++)cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << sedan[i] << "      " << sedanprice[i] << "         " << (sedanstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 3) {
                        for(int i=0; i<3; i++) cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << suv[i] << "     " << suvprice[i] << "        " << (suvstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 4) {
                        for(int i=0; i<3; i++) cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << luxury[i] << "       " << luxprice[i] << "        " << (luxstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 5) {
                        for(int i=0; i<3; i++) cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << van[i] << "        " << vanprice[i] << "        " << (vanstatus[i]?"Available":"Rented") << endl;
                    }

                    long carID;
                    cout << "\t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    cout << "\t\t\t\t\t\t\t\t|                                                   |\n";
                    cout << "\t\t\t\t\t\t\t\t|  Enter Car ID to Rent (0-2): ";
                    cin >> carID;
                    cout << "\t\t\t\t\t\t\t\t|___________________________________________________|\n";
					system("cls");
                    if (carID >= 0 && carID <= 2) {
                        bool isFree = false;
                        long dailyrate = 0;
                        string selectedcar;

                        if (choice == 1 && hatchstatus[carID]) { isFree = true; dailyrate = hatchprice[carID]; selectedcar = hatch[carID]; }
                        if (choice == 2 && sedanstatus[carID]) { isFree = true; dailyrate = sedanprice[carID]; selectedcar = sedan[carID]; }
                        if (choice == 3 && suvstatus[carID])   { isFree = true; dailyrate = suvprice[carID];   selectedcar = suv[carID]; }
                        if (choice == 4 && luxstatus[carID])   { isFree = true; dailyrate = luxprice[carID];   selectedcar = luxury[carID]; }
                        if (choice == 5 && vanstatus[carID])   { isFree = true; dailyrate = vanprice[carID];   selectedcar = van[carID]; }

                        if (isFree) {
                        	system("cls");
                            string custname, custphone, CNIC;
                            long days;
                            long driveropt, gpsopt;
                      cout << "\n\n\n\t\t\t\t\t\t\t\t ___________________________________________________ \n";
                            cout << "\t\t\t\t\t\t\t\t|=============== CUSTOMER'S DETAILS ================|\n";
                            cout << "\t\t\t\t\t\t\t\t| Enter Customer Name: ";
                            cin>> custname;
                            cout << "\t\t\t\t\t\t\t\t| Enter Phone Number: ";
                            cin >> custphone;
                            cout << "\t\t\t\t\t\t\t\t| Enter CNIC Number: ";
                            cin >> CNIC;
                            cout << "\t\t\t\t\t\t\t\t| Rental Duration (Days 1-365): ";
                            cin >> days;
                            cout << "\t\t\t\t\t\t\t\t| Add Driver? (2000/day) [1=Yes, 0=No]: ";
                            cin >> driveropt;
                            cout << "\t\t\t\t\t\t\t\t| Add GPS? (500/day) [1=Yes, 0=No]: ";
                            cin >> gpsopt;
                            if(days<=365 && days>0 ){
                            long rentcost = dailyrate * days;
                            long drivercost = 0;
                            long gpscost = 0;
                            if (driveropt == 1) 
							drivercost = 2000 * days;
                            if (gpsopt == 1)
							 gpscost = 500 * days;

                            long security = 50000; 
                            long totalbill = rentcost + drivercost + gpscost + security;
                            system("cls");
                      cout << "\n\n\n\t\t\t\t\t\t\t\t ---------------------------------------------------\n";
                            cout << "\t\t\t\t\t\t\t\t|====================== INVOICE ====================|\n";
                            cout << "\t\t\t\t\t\t\t\t|---------------------------------------------------|\n";
                            cout << "\t\t\t\t\t\t\t\t| Customer:   " << custname << endl;
                            cout << "\t\t\t\t\t\t\t\t| Vehicle:    " << selectedcar << endl;
                            cout << "\t\t\t\t\t\t\t\t| Duration:   " << days << " Days\n";
                            cout << "\t\t\t\t\t\t\t\t|---------------------------------------------------|\n";
                            cout << "\t\t\t\t\t\t\t\t| Base Rent:          " << rentcost << endl;
                            cout << "\t\t\t\t\t\t\t\t| Driver Charges:     " << drivercost << endl;
                            cout << "\t\t\t\t\t\t\t\t| GPS Charges:        " << gpscost << endl;
                            cout << "\t\t\t\t\t\t\t\t| Security Deposit:   " << security << endl;
                            cout << "\t\t\t\t\t\t\t\t|---------------------------------------------------|\n";
                            cout << "\t\t\t\t\t\t\t\t| TOTAL TO PAY:       " << totalbill << endl;
                            cout << "\t\t\t\t\t\t\t\t|===================================================|\n";

                            long long cash;
                            cout << "\t\t\t\t\t\t\t\t| Enter Cash Received: ";
                            cin >> cash;

                            if (cash >= totalbill) {
                                cout << "\t\t\t\t\t\t\t\t| Payment Successful! Change: " << cash - totalbill << endl;
                                cout << "\t\t\t\t\t\t\t\t|___________________________________________________|\n";
                                system("pause");
                                if (choice==1) { hatchstatus[carID]=false; hatchrenter[carID]=custname; hatchdays[carID]=days; }
                                if (choice==2) { sedanstatus[carID]=false; sedanrenter[carID]=custname; sedandays[carID]=days; }
                                if (choice==3) { suvstatus[carID]=false; suvrenter[carID]=custname; suvdays[carID]=days; }
                                if (choice==4) { luxstatus[carID]=false; luxrenter[carID]=custname; luxdays[carID]=days; }
                                if (choice==5) { vanstatus[carID]=false; vanrenter[carID]=custname; vandays[carID]=days; }
                                
                                TRE = TRE + (rentcost + drivercost + gpscost);
                            } else {
                                cout << "\t\t\t\t\t\t\t\t| Insufficient Cash! Transaction Cancelled.\n";
                            }
                        }else{ 
		   cout << "\n\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|                   Invalid input                   |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
				}
				} else {
                            cout << "\t\t\t\t\t\t\t\t| Car is currently unavailable!\n";
                        }
                    } else { 
		   cout << "\n\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|                     Invalid ID                    |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";}

                } else if (customeropt == 2) {
                    long choice, carID;
                    cout << " \t\t\t\t\t\t\t\t ___________________________________________________\n";
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
					cout << " \t\t\t\t\t\t\t\t|  1. Hatchback (Economy)                           |\n";
                    cout << " \t\t\t\t\t\t\t\t|  2. Sedan (Standard)                              |\n";
                    cout << " \t\t\t\t\t\t\t\t|  3. SUV (Premium)                                 |\n";
                    cout << " \t\t\t\t\t\t\t\t|  4. Luxury (VIP)                                  |\n";
                    cout << " \t\t\t\t\t\t\t\t|  5. Vans (Family)                                 |\n";
                    cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
				    cout << " \t\t\t\t\t\t\t\t| Select Category of Car being Returned (1-5): ";
                    cin >> choice;
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                    if (choice == 1) {
                        for(int i=0; i<3; i++)cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << hatch[i] << "        " << hatchprice[i] << "         " << (hatchstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 2) {
                        for(int i=0; i<3; i++)cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << sedan[i] << "         " << sedanprice[i] << "         " << (sedanstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 3) {
                        for(int i=0; i<3; i++) cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << suv[i] << "       " << suvprice[i] << "        " << (suvstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 4) {
                        for(int i=0; i<3; i++) cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << luxury[i] << "       " << luxprice[i] << "        " << (luxstatus[i]?"Available":"Rented") << endl;
                    } else if (choice == 5) {
                        for(int i=0; i<3; i++) cout<<"\t\t\t\t\t\t\t\t|  "<< i << "    " << van[i] << "       " << vanprice[i] << "        " << (vanstatus[i]?"Available":"Rented") << endl;
                    }
                    cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                    cout << "\t\t\t\t\t\t\t\t| Enter Car ID (0-2): ";
                    cin >> carID;

                    string returner = "";
                    bool validreturn = false;
                    long dailyrate = 0;

                    if (choice==1 && !hatchstatus[carID]) { validreturn=true; returner=hatchrenter[carID]; dailyrate=hatchprice[carID]; }
                    if (choice==2 && !sedanstatus[carID]) { validreturn=true; returner=sedanrenter[carID]; dailyrate=sedanprice[carID]; }
                    if (choice==3 && !suvstatus[carID])   { validreturn=true; returner=suvrenter[carID];   dailyrate=suvprice[carID]; }
                    if (choice==4 && !luxstatus[carID])   { validreturn=true; returner=luxrenter[carID];   dailyrate=luxprice[carID]; }
                    if (choice==5 && !vanstatus[carID])   { validreturn=true; returner=vanrenter[carID];   dailyrate=vanprice[carID]; }

                    if (validreturn) {
                        cout << "\t\t\t\t\t\t\t\t| Car was rented by: " << returner << endl;
                        
                        int latedays;
                        int damagetype; 
                        cout << "\t\t\t\t\t\t\t\t| Enter days Returned Late (0 if on time): ";
                        cin >> latedays;
                        cout << "\t\t\t\t\t\t\t\t|___________________________________________________|\n";
                        cout << "\t\t\t\t\t\t\t\t|                                                   |\n";
                        cout << "\t\t\t\t\t\t\t\t| Damage Assessment:\n";
                        cout << "\t\t\t\t\t\t\t\t| 0. No Damage\n";
                        cout << "\t\t\t\t\t\t\t\t| 1. Minor Scratches\n";
                        cout << "\t\t\t\t\t\t\t\t| 2. Dent / Palong Damage\n";
                        cout << "\t\t\t\t\t\t\t\t| 3. Major Accident\n";
                        cout << "\t\t\t\t\t\t\t\t| Enter Condition: ";
                        cin >> damagetype;
                        long latefine = latedays * (dailyrate * 2); 
                        long fine = 0;
                        if (damagetype == 1) fine = 5000;
                        if (damagetype == 2) fine = 15000;
                        if (damagetype == 3) fine = 50000;

                        int security = 50000;
                        long deduction = latefine + fine;
                        long refund = security - deduction;
                        system("cls");
                        
          cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t ______________________________________\n";
                        cout << "\t\t\t\t\t\t\t\t\t|                                      |\n";
                        cout << "\t\t\t\t\t\t\t\t\t|============ RETURN BILL =============|\n";
                        cout << "\t\t\t\t\t\t\t\t\t|______________________________________|\n";
                        cout << "\t\t\t\t\t\t\t\t\t| Security Held:      " << security << endl;
                        cout << "\t\t\t\t\t\t\t\t\t| Late Fine:         -" << latefine << endl;
                        cout << "\t\t\t\t\t\t\t\t\t| Damage Fine:       -" << fine << endl;
                        cout << "\t\t\t\t\t\t\t\t\t| -------------------------------------\n";
                        if (refund >= 0) {
                            cout << "\t\t\t\t\t\t\t\t\t| AMOUNT TO REFUND:   " << refund << endl;
                        } else {
                            cout << "\t\t\t\t\t\t\t\t\t| CUSTOMER MUST PAY:   " << (deduction - security) << endl;
                        }
                        cout << "\t\t\t\t\t\t\t\t\t|======================================|\n";

                        if (choice==1) { hatchstatus[carID]=true; hatchrenter[carID]=""; hatchdays[carID]=0; }
                        if (choice==2) { sedanstatus[carID]=true; sedanrenter[carID]=""; sedandays[carID]=0; }
                        if (choice==3) { suvstatus[carID]=true; suvrenter[carID]=""; suvdays[carID]=0; }
                        if (choice==4) { luxstatus[carID]=true; luxrenter[carID]=""; luxdays[carID]=0; }
                        if (choice==5) { vanstatus[carID]=true; vanrenter[carID]=""; vandays[carID]=0; }

                        TFC = TFC + deduction;
                        cout << "\t\t\t\t\t\t\t\t\t|    Return Processed Successfully.    |\n";
                        cout << "\t\t\t\t\t\t\t\t\t|______________________________________|\n";
                    } else {
                cout << " \t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|      Error: This car is not currently rented      |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
                    }
                    system("pause");
                } else if (customeropt == 3) {
                    long budget;
                    cout << "\t\t\t\t\t\t\t\t| Enter your Daily Budget: ";
                    cin >> budget;
                    cout << "\t\t\t\t\t\t\t\t| Suggestion: \n";
                    if (budget < 15001) cout << "\t\t\t\t\t\t\t\t| Check Hatchbacks (Alto/Vitz)\n";
                    else if (budget < 19001) cout << "\t\t\t\t\t\t\t\t| Check Sedans (City/Yaris)\n";
                    else if (budget < 23001) cout << "\t\t\t\t\t\t\t\t| Check SUVs (Sportage/Tucson)\n";
                    else cout << "\t\t\t\t\t\t\t\t| You can afford Luxury or Vans!\n";
                    system("pause");
                } else if (customeropt == 4) {
                    customer = false;
                }
            }

        } else if (mainopt == 2) {
        	cout << "\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << "\t\t\t\t\t\t\t\t|                                                   |\n";
                cout << "\t\t\t\t\t\t\t\t|===================== SECURITY ====================|\n";
                cout << "\t\t\t\t\t\t\t\t|___________________________________________________|\n";
                cout << "\t\t\t\t\t\t\t\t|                                                   |\n";
                cout << "\t\t\t\t\t\t\t\t| Enter Admin ID: ";
                cin >> inputuser;
                cout << "\t\t\t\t\t\t\t\t| Enter Password: ";
                cin >> inputpass;
        	    cout << "\t\t\t\t\t\t\t\t ___________________________________________________\n";
            if (inputuser == admin && inputpass == adminpass) {
                bool adminactive = true;
                while (adminactive) {
                	system("pause");
                	system("cls");
        	        cout << "\t\t\t\t\t\t\t\t ___________________________________________________\n";
            cout << "\n\n\n\n\t\t\t\t\t\t\t\t|================= ADMIN DASHBOARD =================|\n";
                    cout << "\t\t\t\t\t\t\t\t| 1. View All Rented Cars\n";
                    cout << "\t\t\t\t\t\t\t\t| 2. View Financial Report\n";
                    cout << "\t\t\t\t\t\t\t\t| 3. Reset All Data (Emergency)\n";
                    cout << "\t\t\t\t\t\t\t\t| 4. Logout\n";
                    cout << "\t\t\t\t\t\t\t\t|===================================================|\n";
                    cout << "\t\t\t\t\t\t\t\t| option : ";
                    cin >> adminoption;

                    if (adminoption == 1) {
                        cout << "\t\t\t\t\t\t\t\t|----------------- CURRENT RENTALS ----------------\n";
                        for(int i=0; i<3; i++) if(!hatchstatus[i]) cout << "\t\t\t\t\t\t\t\t| Hatchback " << i << " - " << hatchrenter[i] << endl;
                        for(int i=0; i<3; i++) if(!sedanstatus[i]) cout << "\t\t\t\t\t\t\t\t| Sedan     " << i << " - " << sedanrenter[i] << endl;
                        for(int i=0; i<3; i++) if(!suvstatus[i])   cout << "\t\t\t\t\t\t\t\t| SUV       " << i << " - " << suvrenter[i] << endl;
                        for(int i=0; i<3; i++) if(!luxstatus[i])   cout << "\t\t\t\t\t\t\t\t| Luxury    " << i << " - " << luxrenter[i] << endl;
                        for(int i=0; i<3; i++) if(!vanstatus[i])   cout << "\t\t\t\t\t\t\t\t| Van       " << i << " - " << vanrenter[i] << endl;
                        cout << "\t\t\t\t\t\t\t\t|--------------------------------------------------\n";
                    } else if (adminoption == 2) {
                        cout << "\t\t\t\t\t\t\t\t|-------------------- ACCOUNTS --------------------\n";
                        cout << "\t\t\t\t\t\t\t\t| Rent Revenue:   " << TRE << endl;
                        cout << "\t\t\t\t\t\t\t\t| Fines Collected:" << TFC << endl;
                        cout << "\t\t\t\t\t\t\t\t| Total Income:   " << TRE + TFC << endl;
                        cout << "\t\t\t\t\t\t\t\t|--------------------------------------------------\n";
                    } else if (adminoption == 3) {
                        char confirm;
                        cout << "\t\t\t\t\t\t\t\t  WARNING: This will clear all data. Proceed? (y/n): ";
                        cin >> confirm;
                        if (confirm == 'y') {
                            for(int i=0; i<3; i++) {
                                hatchstatus[i]=true; sedanstatus[i]=true; suvstatus[i]=true; luxstatus[i]=true; vanstatus[i]=true;
                                hatchrenter[i]=""; sedanrenter[i]=""; suvrenter[i]=""; luxrenter[i]=""; vanrenter[i]="";
                            }
                            TRE = 0;
                            TFC = 0;
                cout << " \t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|               System reset complete               |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";}
                    } else if (adminoption == 4) {
                        adminactive = false;
}}} else { cout << "\n\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|                   Access denied                   |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";}} 
				else if (mainopt == 3) {
            apprunning = false;
            cout << "\n\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|               Shutting Down System...             |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";
  } else { cout << "\n\n\n\t\t\t\t\t\t\t\t ___________________________________________________\n";
            	cout << " \t\t\t\t\t\t\t\t|                                                   |\n";
                cout << " \t\t\t\t\t\t\t\t|                   Invalid input                   |\n";
                cout << " \t\t\t\t\t\t\t\t|___________________________________________________|\n";       }
    } return 0;
}