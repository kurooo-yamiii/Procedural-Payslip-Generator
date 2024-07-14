#include <iostream>
using namespace std;
int main ()
{
	int emply_inhr, emply_outhr, emply_inmin, emply_outmin, emply_work, emply_absence, emply_workinghrs, emply_workingmins, emply_worktotal, emply_excess;
	float inmin, hrmintotal, totalmin, emply_excess1, grosstotal, emply_gross, emply_health, emply_sss, emply_total, deduct, th1, tmin;
	int totalminminus, inhr, outhr, th, emply_othrs;
	string choice, termination;
	
	do{
	// Layout
	cout<<""<<endl;
	cout<<"\t \t \t --------------------------------------------------------------------------"<<endl;
	cout<<"\t \t \t |                BTVTED EMPLOYEE MANAGEMET SYSTEM                        |"<<endl;
	cout<<"\t \t \t |                                                                        |"<<endl;
	cout<<"\t \t \t |                 Department Head - Rhina Corpuz                         |"<<endl;
	cout<<"\t \t \t |                  Teacher I - Maria Fe Bautista                         |"<<endl;
	cout<<"\t \t \t |                  Teacher I - Marylan Joy Buque                         |"<<endl;
	cout<<"\t \t \t |                  Teacher II - Ma. Divine Caranguian                    |"<<endl;
	cout<<"\t \t \t |                  Teacher III - Rachelle Germinal                       |"<<endl;
	cout<<"\t \t \t |                  Teacher I - Bernadette Mabaga                         |"<<endl;
	cout<<"\t \t \t |                  Teacher III - Liza Magno                              |"<<endl;
	cout<<"\t \t \t |                  Teacher I - Rick Rowen Prado                          |"<<endl;
	cout<<"\t \t \t |                  Teacher II - Jaszel Sison                             |"<<endl;
	cout<<"\t \t \t |                  Teacher I - Marquis Santos                            |"<<endl;
	cout<<"\t \t \t --------------------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t Enter Employee: "; cin>> choice;
	cout<<""<<endl;
	
	if(choice == "Rhina")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Department Head                                 	          "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-200405                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Corpuz, Rhina E.                                                  "<<endl;
	cout<<"\t \t \t \t \t  Age: 21                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09488239866                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "MariaFe")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher I                                 	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-200405                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Bautista, Maria Fe                                                 "<<endl;
	cout<<"\t \t \t \t \t  Age: 22                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09150922928                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Marylan")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher I                                 	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-202786                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Buque, Marylan Joy                                                 "<<endl;
	cout<<"\t \t \t \t \t  Age: 21                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09215121144                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Divine")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher II                                 	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-202791                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Caranguian, Ma. Divine M.                                               "<<endl;
	cout<<"\t \t \t \t \t  Age: 20                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09459913591                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Rachelle")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher III                                 	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-201912                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Germinal, Rachelle S.                                                "<<endl;
	cout<<"\t \t \t \t \t  Age: 20                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09558696307                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Bernadette")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher I                                	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-200409                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Mabaga, Bernadette                                               "<<endl;
	cout<<"\t \t \t \t \t  Age: 22                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09657385384                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Liza")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher III                                	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2018-200959                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Magno, Liza A.                                             "<<endl;
	cout<<"\t \t \t \t \t  Age: 23                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09165831698                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Rick")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher I                                	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-202782                                            "<<endl;
	cout<<"\t \t \t \t \t  Name: Prado, Rick Rowen P.                                              "<<endl;
	cout<<"\t \t \t \t \t  Age: 21                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09751269027                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Jaszel")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher II                                	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-201916                                           "<<endl;
	cout<<"\t \t \t \t \t  Name: Sison, Jaszel G.                                              "<<endl;
	cout<<"\t \t \t \t \t  Age: 20                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09392000912                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else if(choice == "Marquis")
	{
	cout<<"\t \t \t \t Please Use Military Hour Notary";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time In Hour: "; cin>>emply_inhr;
	cout<<"\t \t \t \t \t Time In Minutes: "; cin>>emply_inmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Time Out Hour: "; cin>>emply_outhr;
	cout<<"\t \t \t \t \t Time Out Minutes: "; cin>>emply_outmin;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Total Days of Work: "; cin>>emply_work;
	cout<<"\t \t \t \t \t Total Days of Absence: "; cin>>emply_absence;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Estimated Overtime Hours: "; cin>>emply_othrs;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	// Computation of In Hour and Out Hour
	
	inhr = emply_inhr * 100;
	outhr = emply_outhr * 100;
	
	inhr = inhr + emply_inmin;
	outhr = outhr + emply_outmin; 
	
	hrmintotal = outhr - inhr;

    // Estimation of Total Minutes and Hour
    
	th1 = hrmintotal / 100;
	th = th1;
	tmin = th1 - th; 
	tmin = tmin * 100;
		
	emply_worktotal = emply_work - emply_absence;
	inmin = tmin * emply_worktotal;
	inhr  = th * emply_worktotal;

    // Estimation of Excess Minutes
    
	emply_excess1 = inmin / 60;
	emply_excess = emply_excess1;
	
	totalmin = emply_excess1 * 100;
	totalminminus = emply_excess * 100;
	
	// Total Minutes and Hour 
	
	emply_workingmins = totalmin - totalminminus;
	emply_workinghrs = inhr + emply_excess + emply_othrs;
	
	// Gross Total Computation
	
	grosstotal = emply_workinghrs * 60 + emply_workingmins;
	emply_gross = grosstotal * 2.33;
	
	// Computation of PhilHealth and SSS
	
	emply_health = emply_gross * 0.08;
	emply_sss = emply_gross * 0.1;
	deduct = emply_health + emply_sss;
	
	// Total Income
	
	emply_total = emply_gross - deduct;
	
	// Manager
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t \t \t \t \t                                                                    	  "<<endl;
	cout<<"\t \t \t \t \t  Position: Teacher I                                	                      "<<endl;
	cout<<"\t \t \t \t \t  Employee Number: 2020-200403                                           "<<endl;
	cout<<"\t \t \t \t \t  Name: Santos, Marquis S.                                              "<<endl;
	cout<<"\t \t \t \t \t  Age: 20                                                                 "<<endl;
	cout<<"\t \t \t \t \t  Contact #: 09105703769                                                  "<<endl;
	cout<<"\t \t \t \t \t  Department: BTVTED Department                                           "<<endl;
	cout<<"\t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t              ---Daily Wage Estimation---                                 "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t                     Time In: "<<emply_inhr<<":"<<emply_inmin<<" AM          "<<endl;
	cout<<"\t \t \t \t \t \t                    Time Out: "<<emply_outhr<<":"<<emply_outmin<<" PM        "<<endl;
	cout<<"\t \t \t \t \t \t     Estimated Working Hours: "<<th<<"                                     "<<endl;
	cout<<"\t \t \t \t \t \t    Estimated Overtime Hours: "<<emply_othrs<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t         Total Working Hours: "<<emply_workinghrs<<":"<<emply_workingmins<<" "<<endl;
	cout<<"\t \t \t \t \t \t                                                                         "<<endl;
	cout<<"\t \t \t \t \t \t          Total Days of Work: "<<emply_work<<"                              "<<endl;
	cout<<"\t \t \t \t \t \t       Total Absence of Work: "<<emply_absence<<"                           "<<endl;
	cout<<"\t \t \t \t \t \t                Gross Income: "<<emply_gross<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t                                                                          "<<endl;
	cout<<"\t \t \t \t \t \t        PhilHealth Deduction: "<<emply_health<<"                            "<<endl;
	cout<<"\t \t \t \t \t \t               SSS Deduction: "<<emply_sss<<"                               "<<endl;
	cout<<"\t \t \t \t \t \t                Total Income: "<<emply_total<<"                             "<<endl;
	cout<<"\t \t \t \t \t \t																			"<<endl;
	cout<<"\t \t \t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                                            
	cout<<"\t \t \t \t "<<endl; 
	}
	else
	{
	cout<<"\t \t \t \t This employee doesn't exist"<<endl;
	}
	cout<<""<<endl;
	cout<<"\t \t \t \t \t \t \t \t Call another Employee?: "; cin>>termination;
}while(termination != "No");
}
