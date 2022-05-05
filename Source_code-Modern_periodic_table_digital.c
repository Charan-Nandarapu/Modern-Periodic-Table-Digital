#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    printf("WELCOME\n");
	printf("\033[01;33m		**********PERIODIC TABLE****************\n");
	printf("\033[0;33m		     digital..		\n");
    while(1)
    {
	int num1;
	printf("\n\n\n\033[1;32mPRESS the corresponding number to select the option below:-\n1.History of Modern periodic table\n2.explore about an element\n3.groups and periods\n4.about\n5.feedback and suggestions\n6.Quit\n");
    printf("\033[1;36mEnter the number and press ENTER KEY - ");
	scanf("%d",&num1);
	if(num1==1){
		printf("\033[1;34mThe Periodic Table is for many the symbol of Chemistry. It is a single image that contains all of the known elements in the universe combined into an easily readable table. There are many patterns present in the table as well. All of the elements seem to fit together and connect to form a readable table and in turn the image of chemistry. The idea of elements first came about in 3000 B.C. The great Greek philosopher Aristotle conceived an idea that everything on earth was made up of these elements. In ancient times, elements like gold and silver were readily accessible, however, the elements that Aristotle chose were Earth, Water, Fire, and Air.\n\n In 1649 the idea of elements took a huge step when Hennig Brand was the first to discover a new element: Phosphorous. Brand was an alchemist in search of the Philosopher's Stone, or an object that would turn any ordinary metal into gold. In his search he tried everything, including distilling human urine. When that experiment was carried out Brand found a glowing white rock. This was the new element he would call Phosphorous. The alchemists and scientists of the enlightenment period added incredible amounts of knowledge to the ideas about elements. In 1869 there were already 63 elements that had been discovered. With each new element that was found, scientists began to realize that there were patterns developing and some started to put the elements into a table.\n\nScientists like John Newlands and Alexandre-Emile Béguyer de Chancourtois formed their own versions of periodic tables. These versions were relatively simple though and were also somewhat obscure and hard to read. The scientist who brought it all together was Dmitri Mendeleev (1834 to 1907). Mendeleev was a Russian born chemist and the first to publish a modern version of the periodic table. His table ordered the elements by atomic weights (molar masses). When the elements were ordered by their atomic weights, they exhibited similar chemical properties. The table that Mendeleev compiled was so go that he was able to predict elements that were not even known to him at the time. These elements included germanium, gallium, and scandium. There were some pitfalls to the table though. Since not all of the elements had been discovered at the time of Mendeleev's publishing, he left out important elements like the noble gases. After Mendeleev's publishing future scientists contributed to adding in the elements in their proper places. Sir William Ramsay added in the noble gases, and Henry Mosley discovered a way to quantitatively find the atomic number of an element and changed the order around of Mendeleev's table to be organized by atomic number. Finally, in 1945 the Manhattan Project yielded the discovery of many new radioactive elements. Glenn T. Seaborg suggested a change to the table in the form of an addition of the actinide and lanthanide series at the bottom of the table. This idea came with the discovery of Americium and Curium and their unique properties. The change was not accepted at first, but is now included in all periodic tables.\n");}


	else if(num1==2){
        char name[112][20]={"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Flourine","Neon","Sodium", "Magnesium", "Aluminium", "Silicon", "Phosphorus", "Sulphur", "Chlorine", "Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Copernicium"};
        char symbol[112][5]={"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm",",Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn"};
        double weight[112]={1.00,4.00,6.94,9.01,10.81,12.01,14.00,16.00,20.00,20.18,23.00,24.31,26.99,28.08,30.97,32.06,35.45,39.09,40.07,44.95,47.86,50.94,51.99,54.93,55.84,58.69,58.93,63.54,65.39,69.7,72.64,74.92,78.96,79.90,83.80,85.46,87.62,88.90,91.22,92.90,95.94,98.00,101.07,102.90,106.42,107.86,112.41,114.81,118.71,121.76,127.6,126.90,131.29,13.90,137.32,138.90,140.11,140.90,144.24,145.00,150.36,151.96,157.25,158.92,162.50,164.93,167.5,168.93,173.04,174.96,178.49,180.94,183.84,186.20,190.23,192.21,195.07,196.97,200.59,204.38,207.20,208.98,209.00,210.00,222.00,223.00,226.00,227.00,231.03,232.03,237.00,238.03,243,244,247,247,251,252,257,258,259,261,262,264,266,268,272,277,276,281,280,285};
        int option;
	    printf("\n\n\033[1;35mEnter the corresponding number :\n\n");
	    printf("1. Search by ATOMIC NUMBER\n");
	    printf("2. Search by ATOMIC SYMBOL\n");
	    printf("3. Search by ATOMIC NAME\n");
	    printf("\nEnter Your Choice : ");
	    scanf("%d",&option);
	    if(option==1)
	    {
	        int n,i;
	        printf("\n\033[1;34mEnter the Atomic Number you want to search for : ");
	        scanf("%d",&n);
	        n--;
	        i=n;
	        char ch1=' ';
	        int j=i+1;
	        if(j==1 || j==3 || j==4 || j==11 || j==12 || j==19 || j==20 || j==37 || j==38 || j==55 || j==56 || j==87 || j==88)
	        	ch1 = 's';
	        else if(j==2 || (j>=5 && j<=10) || (j>=13 && j<=18) || (j>=31 && j<=36) || (j>=49 && j<=54) || (j>=81 && j<=86))
	        	ch1 = 'p';
	        else if((j>=21 && j<=30) || (j>=39 && j<=48) || (j>=72 && j<=80) || (j>=104 && j<=112))
	        	ch1= 'd';
	        else
		        ch1='f';
		    int k=i+1;
		    char ch2=' ';
		    if (k==1 || k==2 || (k>=6 && k<=10) || (k>=15 && k<=18) || (k>=34 && k<=36) || k==53 || k==54 ||k==86)
			    ch2='n';
		    else if (k==5 || k==14 || k==32 || k==33 || k==51 ||k==52 ||k==85)
			    ch2='s';
		    else
			    ch2='m';
			printf("\n\t\t\t\t\t \033[1;36mHERE'S YOUR SEARCH RESULT\n\n");
    	printf("\n\t\t\t\t\tAtomic Number     : %d\n",i+1);
	    printf("\t\t\t\t\tAtomic Symbol     : %s\n",symbol[i]);
	    printf("\t\t\t\t\tAtomic Name       : %s\n",name[i]);
	    printf("\t\t\t\t\tBlock             : %c\n",ch1);
	    printf("\t\t\t\t\tMetallic property : ");
	    if (ch2=='n')
		    printf("Non-Metal\n");
	    else if (ch2=='s')
		    printf("Metalloid\n");
	    else
		    printf("Metal\n");
	    }
	    else if(option==2)
	    {
	        char x[5];
	        int a,i=0;
	        printf("\n\033[1;34mEnter the Atomic Symbol you want to search for : ");
	        scanf("%s",x);
	        for (a=0;a<112;a++)
	        {
		        if (strcmp(x,symbol[a])==0)
		        {
			        i=a;
			        break;
		        }
	        }
	         char ch1=' ';
	        int j=i+1;
	        if(j==1 || j==3 || j==4 || j==11 || j==12 || j==19 || j==20 || j==37 || j==38 || j==55 || j==56 || j==87 || j==88)
	        	ch1 = 's';
	        else if(j==2 || (j>=5 && j<=10) || (j>=13 && j<=18) || (j>=31 && j<=36) || (j>=49 && j<=54) || (j>=81 && j<=86))
	        	ch1 = 'p';
	        else if((j>=21 && j<=30) || (j>=39 && j<=48) || (j>=72 && j<=80) || (j>=104 && j<=112))
	        	ch1= 'd';
	        else
		        ch1='f';
		    int k=i+1;
		    char ch2=' ';
		    if (k==1 || k==2 || (k>=6 && k<=10) || (k>=15 && k<=18) || (k>=34 && k<=36) || k==53 || k==54 ||k==86)
			    ch2='n';
		    else if (k==5 || k==14 || k==32 || k==33 || k==51 ||k==52 ||k==85)
			    ch2='s';
		    else
			    ch2='m';
			    printf("\n\t\t\t\t\t \033[1;36mHERE'S YOUR SEARCH RESULT\n\n");
    	printf("\n\t\t\t\t\tAtomic Number     : %d\n",i+1);
	    printf("\t\t\t\t\tAtomic Symbol     : %s\n",symbol[i]);
	    printf("\t\t\t\t\tAtomic Name       : %s\n",name[i]);
	    printf("\t\t\t\t\tBlock             : %c\n",ch1);
	    printf("\t\t\t\t\tMetallic property : ");
	    if (ch2=='n')
		    printf("Non-Metal\n");
	    else if (ch2=='s')
		    printf("Metalloid\n");
	    else
		    printf("Metal\n");
	    }
	    else if(option==3)
	    {
	        char x[5];
	        int a,i=0;
	        printf("\n\033[1;34mEnter the Atomic Name you want to search for : \nNote:- First letter of the name should be in 'UPPER' case flowwed by the lower case letters\n Name:-");
	        scanf("%s",x);
	        for (a=0;a<112;a++)
	        {
		        if (strcmp(x,name[a])==0)
		        {
			        i=a;
			        break;
		        }
	        }
	         char ch1=' ';
	        int j=i+1;
	        if(j==1 || j==3 || j==4 || j==11 || j==12 || j==19 || j==20 || j==37 || j==38 || j==55 || j==56 || j==87 || j==88)
	        	ch1 = 's';
	        else if(j==2 || (j>=5 && j<=10) || (j>=13 && j<=18) || (j>=31 && j<=36) || (j>=49 && j<=54) || (j>=81 && j<=86))
	        	ch1 = 'p';
	        else if((j>=21 && j<=30) || (j>=39 && j<=48) || (j>=72 && j<=80) || (j>=104 && j<=112))
	        	ch1= 'd';
	        else
		        ch1='f';
		    int k=i+1;
		    char ch2=' ';
		    if (k==1 || k==2 || (k>=6 && k<=10) || (k>=15 && k<=18) || (k>=34 && k<=36) || k==53 || k==54 ||k==86)
			    ch2='n';
		    else if (k==5 || k==14 || k==32 || k==33 || k==51 ||k==52 ||k==85)
			    ch2='s';
		    else
			    ch2='m';
			    printf("\n\t\t\t\t\t\033[1;36m HERE'S YOUR SEARCH RESULT\n\n");
    	printf("\n\t\t\t\t\tAtomic Number     : %d\n",i+1);
	    printf("\t\t\t\t\tAtomic Symbol     : %s\n",symbol[i]);
	    printf("\t\t\t\t\tAtomic Name       : %s\n",name[i]);
	    printf("\t\t\t\t\tBlock             : %c\n",ch1);
	    printf("\t\t\t\t\tMetallic property : ");
	    if (ch2=='n')
		    printf("Non-Metal\n");
	    else if (ch2=='s')
		    printf("Metalloid\n");
	    else
		    printf("Metal\n");
	    }
	}
    else if(num1==3){
    int choice;
    printf("\033[1;32m\nenter 1 to know about groups \nenter 2 to know about periods \n " );
    scanf("%d",&choice);
    if (choice == 1)
 {
        printf("\033[1;35myou have selected to know about group,now give your choice between 1-18 to know about the respected group\n ");
	printf("Enter the number -  ");
        int number;
        scanf("%d", &number);
        switch(number)
        {
            case 1 : printf("\033[1;36m\nGroup 1 is composed of hydrogen(H) and the alkali metals. \n Elements of the group have one s-elctron in the outer electron shell. \n Hydrogen is not considered to be an alkali metal as it rarely exhibit behaviour comparable to theirs, though it is more analogous to them than any other group. \n This makes the group somewhat exceptional. \n");
            break;
            case 2 : printf( "\033[1;36m\n Group 2:  There are six alkaline earth metals in group 2 of the periodic table. \n They are beryllium(Be), magnesium(Mg), calcium (Ca), strontium(Sr), barium(Ba), and radium(Ra).\n The elements have very similar properties: they are all shiny, silvery white, somewhat reactive metals at standard temperature and pressure.\n Structurally they (together with helium) have in common an outer s-orbital which is full.\n This orbital contains its full complement of two electrons, which the alkaline earth metals readily lose to form cations with charge +2.\n Element Beryllium \t No. of electron/shell 2,2 \n Element Magnesium \t No. of electrons /shell 2,8,2\n  Element Calcium \t No.of electrons/shell 2,8,8,2 \n Element Strontium \t No. of electrons/shell 2,8,18,8,2\n Element Barium \t No. of electrons/shell 2,8,18,18,8,2\n Element Radium \t No. of electron/shell 2,8,18,32,18,8,2 \n ");
            break;
            case 3: printf ( "\033[1;36m\n Group 3: This group like other d-block groups, should contain four elements, but it is not agreed what elements  belong in the group.\n Scandium(sc) and yttrium(y) are always included, but the other two spaces are usually occupied by lanthanum(La)  and actinium(Ac), or by lutetium(Lu) and lawrencium(Lr).\n Less frequently, it is considered the group should be expanded to 32 elements( with all the lanthanides and actinides included) or bifurcated to include both La-Ac and Lu-Lr.\n When the group is understood to contain all of the lanthanides, it subsumes the rare- earth metals.\n Yttrium,and less frequently scandium  are sometimes also counted as rare- earth metals.\n Element Scandium \t Electorn configuration 2,8,9,2\n Element Yttrium \t Electron configuration 2,8,18,9,2\n Element Lanthanum \t Electron configuration 2,8,18,18,9,2 \n Element Lutetium \t Electron configuration 2,8,18,329,2 \n Element Actinium \t Electron configuration 2,8,18,32,18,9,2 \n Element Lawrencium \t Electorn configuration 2,8,18,32,32,8,3 \n");
            break;
            case 4: printf("\033[1;36m\nGroup 4: This group contains the elements titanium(Ti), zirconium(zr), hafnium(Hf) and rutherfordium(Rf). \nThis group itself has not acquired a trivial name it belongs to the broader grouping of the transition metals.\n The three group 4 elements that occur naturally are titanium, zirconium and hafnium.\n The first three memebers of the group share similar properties; all three are hard refractry metals under standard conditions.\n However, the fourth element rutherfordium(Rf), has been synthesized in the laboratory; none of its isotops have been found in the laboratory; none of its isotopes have found occuring in nature.\n All isotopes of rutherfordium are radioactive.\n  no experiments in  a supercollider have been conducted to synthesize the next member of the group, either unpenthexium(Uph, element 156) or unpentoctium(Upo,element 158), and it is unlikely that they will be synthesized in the near future.\n Element Titanium \t No. of elctron/shell 2,8,10,2 \n Element Zirconium \t No. of elctron/shell 2,8,18,10,2 \n Element Hafnium \t No. of electron/shell 2,8,18,32,10,2 \n Element Rutherfordium \t No. of electrons/shell 2,8,18,32,32,10,2\n ");
            break;
            case 5: printf ("\033[1;36m\n Group 5: This group contains vanadium(v), niobium(NbZ), tantalum(Ta) and dubnium(Db).\nThis group itself has not acquired a trivial name instead it belongs to the broader grouping of the transition metals.\n The lighter three Group 5 element occur naturally and share similar properties; all three are hard refarctory metals under standard conditions.\n The fourth element, dubnium, has been syntheiszed in laboratories, but it has not been found occuring in nature, with halflife of the most stable isotope, dubnium-268, being only 29 hours, and other isoptopeseven more radioactive. \nTo date, no experiments in supercollider have been conducted to synthesize the nest member of the group.\n Element Vanadium \t No. of electrons 2,8,11,2\n Element Niobium \t No. of electrons/shell 2,8,18,12,1\n Element Tantalum \t No. of electron/shell 2,8,18,32,11,2 \n Element Dubnium \t No. of electrons/shell 2,8,18,32,32,11,2\n");
            break;
            case 6: printf("\033[1;36m\n Group 6: This group contains chromium (Cr), molybdenum (Mo), tungsten (WO), and seaborgium(Sg). \n These are all transition metals and chromium, molybdenum and tungsten are refractory metals.\n The period 8 elements of group 6 are likely to be either unpenthexium(Uph) or unpentoctium (Upo).\n This may not be possible ; drip instability may imply that the periodic table ends around unbihexium.\n Neither unpenthexium nor unpentoctium have been synthesized and it is unlikely that this will happen in the near future.\n The electron configuration of these elements do not follow a unified trend, though the outermost shells do correlate with trends in chemical behaviour.\n Elements Chromium \t No. of elctrons/shell=2,8,13,1\n Elements Molybdenum \t No. of elctron/shell 2,8, 18,13,1\n Element Tungsten \t No. of electrons/shell 2,8,18,32,12,2\n Element Seaborgium \t No. of electron/shell 2,8,18,32,32,12,2\n");
            break;
            case 7: printf ("\033[1;36m\n Group 7: This group contains manganese(Mn), techetium(Tc), rhenium(Re) and bohrium(Bh).\n All known elements of group 7 are transition metals.\n Like other groups, the members of this family show patterns in their electron configurations especially the outermost shells resulting in trends in chemical behaviour.\n Element Manganese \t No. of electrons/shell 2, 8, 13, 2 \n Element Technetium \t No. of electrons/shell 2,8,18,13,2 \n Element Rhenium \t No. of electron/shell  2,8,18,32,13,2 \n Element Bohrium \t No. of electrons/shell 2,8,18,32,32,13,2 \n");
            break;
            case 8: printf("\033[1;36m\n Group 8: This group consist of iron(Fe), ruthenium(Ru), osmium(os) and hassium(Hs).\n They are all transition metals.\n Like other groups, the members of this family show patterns in elctronconfiguration, especially in the outermost shells, resulting in trends in chemical behaviour. \n In the older group naming systems, this group was combined with groups 9 and 10 and called group VIIIB in the Chemical Abstract Service(CAS)\n Element Iron\t No. of electrons/shell 2,8,14,2\n Element Ruthenium \t No. of electron/shell 2,8,18,15,1 \n Element Osmium \t No. of electron/shell 2,8,18,32,14,2\n Element Hassium \t No. of elctrons/shell 2,8,18,32,32,14,2 \n");
            break;
            case 9: printf( "\033[1;36m\n Group 9: This group consist of cobalt(Co), rhodium(Rh), iridium(Ir) and meitnerium(Mt).\n These are all transition metals in the d-block.\n  Like other groups, the members of this family show patterns in electron configuration, especially in the outermost shells, resulting in trends in chemical behaviour; however, rhodium deviates from the pattern.\n  Element Cobalt \t No. of electrons/shell 2,8,15,2\n Element Rhodium \t No. of electron/shell 2,8,18,16,1 \n Element Iridium \t No. of electron/shell 2,8,18,32,15,2 \n Element Meitnerium \t No. of electron/shell 2, 8, 18,32, 32, 15,2\n");
            break;
            case 10: printf("\033[1;36m\nGroup 10: This group consist of Nickel(Ni), palladium(Pd), platinum(Pt), and perhaps also the chemically uncharacterized darmstadtium(Ds).\n All are d-block transition metals.\n All known isotopes of darmstadium are radioactive with short half-lives, and are not known to occur in natur; only minute quantities have been synthesized in laboratories.\nLike other groups, the member of this group show patterns in elctron configuration, especially in the outermost shells, although for this group they are particularly weak, with palladium being an exceptional case.\n The realtivistic stabilization of  the 7s orbital is explanation to the predicted electron configuration of darmstadtium, which unusually for this group conforms to that predicted by the Aufbau principle \n Element Nickel \t No.of elctrons/shell 2,8,16,2 \n Element Palladium \t No. of electrons per shell 2,8,18,18\n Element Platinum \t No. of electrons/shell 2,8,18,32,17,1\n Element Darmstadtium \t No. of electrons/shell 2,8,18,32,32,16,2\n ");
            break;
            case 11: printf ("\033[1;36m\nGroup 11: This group consist of copper(Cu), silver(Ag), and gold (Au).\n Roentgenium(Rg) is also placed in this group in the periodic table, although no chemical experiments have yet been carried out to confirm that it behaves like the heavier homologue to gold .\n Group 11 is also  known as the coinage metals, due to their former usage.\n They were most likely the first three elements discovered.\n Copper,silver and gold all occur naturally in elemental form.\n All the elements of the group except roentgenium have been known since prehistoric times, as all of them occur in metallic form in nature and no extraction metallurgy is necessary to produce them.\n Element Copper \t No. of electrons/shell 2, 8,18,1 \n Element Silver \t No. of electorns/shell 2,8,18,18,1 \n Element Gold \t No. of electrons/shell 2,8,18,32,18,1 \n Element Roentgenium \t No. of electron/shell 2,8,18,32,32,18,1 \n");
            break;
            case 12: printf("\033[1;36m\nGroup 12: This group consist of zinc(Zn), cadmium(Cd), and mercury(Hg).\n The further inclusion of copernicium(Cn) in group 12 is supported by recent experiment on individual copernicium atoms. \n Formerly this group was named IIB(pronounced as 'group two B as the ll is a roman numeral by CAS and old IUPAC system.\n The three group 12 elements that occur naturally are zinc, cadmium and mercury .\n They are all widely used in electric and electronic applications, as well as in various alloys.\n The first two members of the group share similar properties as they are solid metals under standard conditions.\n Mercury is the only  metal that is a liquid at room temperature.\n  While zinc is very important in the biochemistry of living organisms, cadmium and mercury are both highly toxic.\n As copernicium does not occur in nature, it has to be synthesized in the laboratory.\n Element Zinc \t No. of electron/shell 2,8,18,2 \n Element Cadmium \t No. of electrons/shell 2,8,18,18,2 \n Element Mercury \t No. of elctorn/shell 2,8,18,32,18,2 \n Element Copernicium \t No. of electrons/shell 2, 8 ,18 ,32 , 18,2 \n");
            break;
            case 13: printf("\033[1;36m\nGroup 13: This group consist of Boron(B), aluminium(Al), gallium(Ga),indium(In),thallium(Ti) and perhaps also the chemically uncharacterized nihonium(Nh).\n The elements in the boron group are characterized by having three valence electrons.\n These elements have also been referred to as triels.\n Boron is commonly classified as a (metalloid) while the rest with the possible exception of nihonium are considered post- transition metals.\n Boron occurs sparsely, probably because bombardment by the subatomic particles produced from natural radioactivity disrupts its nuclei.\n Aluminium occurs widely on earth, and indeed is the third most abundant element in the earth's crust (8.3 percent).\n Gallium is found in the earth with an abundance of 13ppm.\n Indium is the 61st most abundant element in the earths's crust and thallium is found in moderate amounts throughout the planet.\n Nihonium is not known to occur in nature and therefore is termed as a synthetic element. \n Several group 13 elements have biological roles in the ecosystem.\n Boron is a trace element in humans and is essential for some plants.\n Lack of boron can lead to stunted plant growth,while an excess can also cause harm by inhibiting growth.\n Alumunium has neither a biological role nor significant toxicity and is considered safe.\n Indium  and gallium can stimulate metabolism; gallium is credited with the ability to bind itself to iron proteins.\n Thallium is highly toxic, interfering with the function of numerous vital enzymes, and has seen use as a pesticide.\n Element Boron \t No. of electron/shell 2,3 \n Element Aluminium \t No. of electrons/shell 2,8,3 \n Element Gallium \t No. of electrons/shell 2, 8, 18,3 \n Element Indium \t No. of electorn/shell 2,8,18,18,3 \n Element Thallium \t No. of electron/shell 2,8,18,32,18,3 \n Element Nihonium \t No. of elctron/shell  2,8,18,32,32,18,3 \n ");
            break;
            case 14: printf("\033[1;36m\nGroup 14: This group consist of carbon(C), silicon(Si), germanium(Ge), tin(Sn), lead(Pb) and flerovium (Fi).\n It lies within p-block.\n In modern IUPAC notation, it is called Group lV. \n The group was once also known as  the tetrels (from the Greek word tetra, which means four), stemming from the Roman numeral lV in the group names or from the fact that these elements have four valence electrons. \n They are also known as the crystallogens or adamantogens.\n Element Carbon \t No. of electron/shell 2,4 \n Element Silicon \t No. of electron/shell 2,8,4 \n Element Germanium \t No. of electron/shell 2,8,18,4 \n Element Tin \t No. of electron/shell 2,8,18,18,4 \n Element Lead \t No. of electron/shell 2,8,18,32,18,4 \n Element Flerovium \t No.of electron/shell 2,8,18,32,32,18,4 \n");
            break;
            case 15: printf("\033[1;36m\nGroup 15: This group consist of nitrogen(N), phosphorus(P), arsenic( As), antimony(Sb), bismuth(Bi) and perhaps the chemically uncharacterized synthetic element moscovium(Mc).\n Like other  groups, the members of this family show similar patterns in electron configuration, especially in the outermost shells, resulting in trends in chemical behaviour.\n This group has defining characteristics that all the component elements have 5 electrons in their outermost shell, that is 2 electrons in the p subshell. \n They  are therefore  3 electrons short of filling their outermost electron shell in their non- ionized state.\n The most important elements of this group are nitorgen( N), which in its diatomic form is the principal  component of air, and phosphorus(P) which, like nitrogen, is essential to all known forms of life.\n Element Nitrogen \t Electron / shell 2,5 \n Element Phosphorus \t  Electron/shell 2,8,5 \n Element Arsenic \t Electron/shell 2,8, 18,5\n Element Antimony \t Electorn/shell 2,8,18,18,5 \n Element Bismuth \t Electron/shell 2,8,18,32,18,5\n Element Moscovium \t Electron/shell 2,8,18,32,32,18,5\n ");
            break;
            case 16: printf( "\033[1;36m\nGroup 16: This group consist of oxygen(O), sulfur(S), selenium(Se), tellurium(Te), and the radioactive elemnet  polonium(Po).\n The chemically uncharacterized synthetic element livermorium(Lv) is predicted to be a chalcogen as well. \n Often, oxygen is treated separately from  the other chalcogens, sometimes even excluded from the other scope of the term 'chalcogens' altogether, due to its very different chemical behaviour from sulfur,  selenium, tellurium, and polonium.\n The word 'chalcogen' is derived from a combination of the Greek word Khalkos principally meaning copper(the term was also used for bronze/brass , any metal the poetic sense,ore or coin), and the latinised Greek word genes, meaning born or produced.\n Sulfur has been known since antiquity and oxygen was recognized as an element in the 18th century.\n Selenium,tellarium and polonium were discovered in the 19t century and livermorium in 2000.\n All of the chalcogens have six valence electrons, leaving them two electron short of a full outer shell.\n Their most common oxidation states are -2, +2, +4< +6.\n They have relatively low atomic radii, especially the lighter ones.\n Element Oxygen \t Electron/shell 2,6 \n Element Sulfur \t Electron/shell 2,8,6 \n Element Selenium \t Electorn/shell 2,8,18,6 \n Element Tellurium \t electron/shell 2,8,18,18,6 \n Element Polonium \t Electron/shell 2,8,18,32, 18, 6 \n Element Livermorium \t Electorn/shell 2,8,18,32,32,18,6 \n");
            break;
            case 17: printf("\033[1;36m\nGroup 17; This group consist of flourin(F), chlorine(Cl), bromine(Br), iodine(I), and astatine(At).\n The artificially created element 117, tennessine(Ts), may also be a halogen. \n In the moder IUPAC nomenclature, this group is known as group 17.\n  The name halogen means salt- producing.\n When halogen react with metals, they procuce a wide rannge of salts including calcium fluride, sodium chloride, silver bromide and potassium iodide.\n The group of halogen is th eonly periodic table group that contains elements in three of hte main states of matter at standard temperature and pressure.\n All of the halogen form acids whn bonded to hydrogen .\n Most halogens are typically produced form minerals or salts.\n The middle halogens- chlorine, bromine and iodine are often used as disinfectants.\n Organobromides are the most important class of flame retardants,while elemental halogen are dangerous and can lethaly toxic.\n ");
            break;
            case 18: printf("\033[1;36m\nGroup 18: This group consist of helium(He),neon(Ne), argon(Ar), krypton(Kr), xenon(Xe) and the radioactive radon(Rn).\n Oganesson(Og) is variously predicted to be a noble gas as well or to break the trend due to relativistic effects; its chemistry has not yet been investigated.\n For the first six periods of the periodic table, the noble gases are exactly the members of group 18.\n Noble gases are typically highly unreactive except when under particular extreme conditions.\n The inertness of noble gases makes them very suitable in application where reactions are not wanted.\n For example, argon is used in incandescent lamps to prevent the ht tungsten filament from oxidizing; also helium is used in breathing gas by deep-sea divers to prevent oxygen, nitrogen and carbon dioxide toxicity.\n");
            break;
             default: printf("\033[1;31m\n Invalid choice\n");}}
 else if (choice == 2) {
     printf("\033[1;32m\n You have entered 2 to know about periods \n");
     int number;
     printf("enter the number of period to know about it ");
     scanf("%d",&number);
     switch (number)
     {
         case 1: printf("\033[1;36m\nPeriod 1: this contains the least elements than any other, with only two, Hydrogen and Helium.\n They therefore do not follow the octed rule but rather a duplet rule.\n Chemially, helium behaves like a noble gas, and thus is taken to be part of the group 18 elements.\n In terms of its nuclear structure it belongs to the s-block , and is therefore sometimes classified as a group 2 element or simultaneously both 2 and 18.\n hydrogen readily loses and gains an elctron and so behaves chemically as both a group 1 and a group 17 element.\n Hydrogen(H) is the most abundant of the elements constituting 75percent of the universe's elemental mass.\n Helium(He) exists only as a gas except in extreme conditions. \n It is the second-lightest element and is the second most abundant in the universe.\n");
         break;
         case 2: printf("\033[1;36m\nPeriod 2: In this elements involve the 2s and 2p orbitals.\n they include the biologically most essential elements besides hydrogen: carbon, nitrogen and oxygen .\n Lithium(Li) s the smallest lightest metal and the least dense solid element.\n In its non- ionized state it is one of the most reactive elements and so is only ever found naturally in compounds.\n Beryllium(Be) has one of the highest melting points of all the light metals.\n Small amounts of beryllium were synthesized during the Big Bang, although most of it decayed  or reacted further within stars to create larger nuclei, like carbon , nitrogen or oxygen.\n Boron(B) does not occur naturally as a free element but in compounds such as borates. \n It is an essential plant micronutrient, required for cell wall strength and development, cell division, seed and fruit development, cell divison, seed and fruit development, sugar transport etc.\nCarbon(C) is the fourth- most abundant element in the unverse by mass after hydrogen, helium and oxygen and is the second most  abundant element in the human body by mass after oxygen, the third most abundant by number of atoms.\n Nitrogen( N) is found mainly as mostly inert diatomic gas, N2 which makes up 78percent of the Earth's atmosphere by volume.\n It is an essential component of proteins and therefore of life.\n Oxygen(O) comprising 21percent of the atmosphere by volume and is required for respiration by all animals as well as being the principal componentof water. \n Oxygen is the third-most abundant element in the universe and oxygen compounds dominate the Earth's crust.\n Flourine(F) is the most reactive element in its non-ionized state and so is never found that way in nature.\n");
         break;
         case 3: printf("\033[1;36m\nPeriod 3: All period 3 elements occur in nature and have at least one stable isotope.\n All but the noble gas argon are essential to basic geology and biology.\n Sodium(Na) is an alkali metal.\n It is present in Earth's oceans in large quantities in the form of sodium choride(table salt).\n Magnesium (Mg) is an alkaline earth metal.\n Magnesium ions are found in chlorophyll.\n Aluminium(Al) is a post-transition metal. \n It is most abundant metal in eaeth's crust.\n Silicon (Si) is a metalloid.\n It is a semiconductor, making it  the principal component in many integrated circuits.\n Silicon dioxide is the principal constituent of sand.\n Phosphorus(P) is nonmetal essential to DNA.\n It is highly reactive, and as such is never found in nature as a free element .\nSulfur(S) is a ninmetal.\n It is found in two amino acids:cysteine and mehione.\n Chlorine(Cl) is a halogen. It is used as a disinfectant, especially in swimming pools.\n Argon(Ar) is noble gas, making it almost entirely non reactive. Incandescent lamps are often filled wit noble gases such as argon in order to preserve the filament at high temperatures.\n");
         break;
         case 4: printf("\033[1;36m\nPeriod 4: It includes the biologically essential elements potassium and calcium, and is the first period in ht d-block with the lighter transition metals.\n These include iron, the heaviest element forged in main sequence stars and a principal componenet of the Earth, as well as other important metals such as cobalt, nickel, and copper.\n Almost all have biological roles.\nCompletitng the fourth period are the post transition metals zinc and gallium the metalloids germanium and arsenic and non metals selenium, bromine and krypton.\n");
         break;
         case 5: printf("\033[1;36m\nPeriod 5: It has the same number of elements as period 4 and follows the same general structure but with one more post transition metal and one fewer nonmetal.\n Of the three heaviest elements with biological roles, two(molybdenum and iodine) are in this period;tungsten, in period 6 is heavier along with several of the early lanthanides.\n Period 5 also inlcudes technetium, the lightest exclusively radioactive element.\n");
         break;
         case 6: printf("\033[1;36m\n Period 6: It is the first period to include the f-block, with the lanthanides(also known as the rare earth elements), and includes the heaviest stable elements.\n Many of these heavy metals toxic  and some are radioactive, but platinum and gold are largely inert.\n");
         break;
         case 7: printf("\033[1;36m\n Period 7:  All elemnent of period 7 are radioactive.\n This period contains the heaviest element which occurs naturally on Earth, plutonium. \n All of the subsequent elements in  the period have been synthesized artificially.\n Whilst five of these are now available  in macroscopic  quantities, most are rare, having only been preopared in microgram amounts or less.\n Some of the later elements have only ever been identified in laboratories in quantiities of a few atoms at a time.\n Periodic and group trends are not  very  extensive, periodic and group trends in behaviour appear to be less well defined for period 7 than forother periods.\n Whilst Francium and radium do show typical properties of groups 1 and 2 repesctively the actinides display a much greater variety of behaviour and oxidation states than the lanthanides.\n These peuliarities of period 7 may be due to a variety of factors  including  a large degree of spin-orbit coupling and relativistic  effects, ultimaltely caused by the very high positvie electrical charge from their massive atomic nuclei.\n");
         break;
         case 8: printf(" \033[1;36m\nPeriod 8: No element of the eighth period has yet been synthesized. \nA gblock is predicted.\n it is not clear if all elements predicted for the eighth period are in fact physically possible .\n there may therefore be no eight period.\n");
         break;
         default: printf(" \033[1;36m\nYou have entered wrong period number.\n");}}
     else
         printf("\033[1;31m wrong choice \n");}
    else if(num1==4)
    {
        printf("\033[1;34mThe Modern Periodic Table is a simple console application\nbuilt without using grapics. It is developed using the C programming\nlanguage for the purpose of storing atomic number, name of the\nelement,symbol,atomic weight and many other properties as well as\nto display them as per the requirement of the user\n     The source code of this project is complete and totally error\nfree, and we welcome any feedback and suggestions. The C source\ncode is simple and easily uderstandable, and consist of around 300\nlines of code.\n");
    }
    else if(num1==5)
    {
        char ch[100];
        printf("\033[1;32mPLEASE GIVE YOUR FEEDBACK :\n\033[0m");
        scanf("%s[\n]",&ch[100]);
        printf("\033[01;33mTHANK YOU FOR YOUR FEEDBACK\nHAVE CHEERFUL DAY\n");
    }
    else if(num1==6)
    {
        printf("\033[1;36mThank you for using 'MODERN PERIODIC TABLE digital..");
        break;
    }
    else
    {
        printf("\033[1;31minvalid input\n\tTry again..");
    }
}
    return 0;}
