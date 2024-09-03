#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<string> elements = {"Vety H", "Helium He", "Litium Li", "Beryllium Be", "Boori B", "Hiili C", "Typpi N", "Happi O", "Fluori F", "Neon Ne", 
"Natrium Na", "Magnesium Mg", "Alumiini Al", "Pii Si", "Fosfori P", "Rikki S", "Kloori Cl", "Argon Ar", 
"Kalium K", "Kalsium Ca", "Skandium Sc", "Titaani Ti", "Vanadiini V", "Kromi Cr", "Mangaani Mn", "Rauta Fe", 
"Koboltti Co", "Nikkeli Ni", "Kupari Cu", "Sinkki Zn", "Gallium Ga", "Germanium Ge", "Arseeni As", "Seleeni Se", 
"Bromi Br", "Krypton Kr", "Rubidium Rb", "Strontium Sr", "Yttrium Y", "Zirkonium Zr", "Niobium Nb", "Molybdeeni Mo", 
"Teknetium Tc", "Rutenium Ru", "Rodium Rh", "Palladium Pd", "Hopea Ag", "Kadmium Cd", "Indium In", "Tina Sn", 
"Antimoni Sb", "Telluuri Te", "Jodi I", "Xenon Xe", "Cesium Cs", "Barium Ba", "Lantaani La", "Cerium Ce", 
"Praseodyymi Pr", "Neodyymi Nd", "Prometium Pm", "Samarium Sm", "Europium Eu", "Gadolinium Gd", "Terbium Tb", 
"Dysprosium Dy", "Holmium Ho", "Erbium Er", "Tulium Tm", "Ytterbium Yb", "Lutetium Lu", "Hafnium Hf", "Tantaali Ta", 
"Volframi W", "Renium Re", "Osmium Os", "Iridium Ir", "Platina Pt", "Kulta Au", "Elohopea Hg", "Tallium Tl", 
"Lyijy Pb", "Vismutti Bi", "Polonium Po", "Astaatti At", "Radon Rn", "Fransium Fr", "Radium Ra", "Aktinium Ac", 
"Torium Th", "Protaktinium Pa", "Uraani U", "Neptunium Np", "Plutonium Pu", "Amerikium Am", "Curium Cm", 
"Berkelium Bk", "Californium Cf", "Einsteinium Es", "Fermium Fm", "Mendelevium Md", "Nobelium No", "Lawrencium Lr", 
"Rutherfordium Rf", "Dubnium Db", "Seaborgium Sg", "Bohrium Bh", "Hassium Hs", "Meitnerium Mt", "Darmstadtium Ds", 
"Roentgenium Rg", "Kopernikium Cn", "Nihonium Nh", "Flerovium Fl", "Moskovium Mc", "Livermorium Lv", "Tennessine Ts", 
"Oganesson Og"}; 
  cout << "<Alkuaineen nimi> <Kemiallinen merkki>" << endl;
  for (int i = 0; i < (int) elements.size(); i++) {
    string input;
    cout << i+1 << " ";
    getline(cin,input);
    if (input == elements[i]) {
      cout << "Oikein!" << endl;
    }
    else {
      cout << "Väärin!" << endl;
      cout << elements[i] << endl;
      i--;
    }

  }
}

