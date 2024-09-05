#include <bits/stdc++.h>

using namespace std;


bool askBoolQuestion(string question, string accept, string reject) {
  while (true) {
    string answer;
    cout << question << endl;
    cout << "<" << accept << "> or <" << reject << "> ";
    cin >> answer;    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (answer == accept) {
      return true;
    }
    else if (answer == reject){
      return false;
    }
    else {
      cout << "Incorrect input, please try again." << endl;
    }
  }
}



int askIntegerQuestion(string question, int min, int max) {
  while (true) {
    int answer;
    cout << question << endl;
    cout << "<" << min << " to " << max << ">";

    cin >> answer;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (min <= answer && answer <= max) {
      return answer;
    }
    else {
      cout << "Incorrect input, please try again." << endl;
    }
  }
}



int main() {
  random_device rd;
  mt19937 rand(rd());
  
  vector<string> elements = {
        "Vety H", "Helium He", "Litium Li", "Beryllium Be", "Boori B",
        "Hiili C", "Typpi N", "Happi O", "Fluori F", "Neon Ne",
        "Natrium Na", "Magnesium Mg", "Alumiini Al", "Pii Si", "Fosfori P",
        "Rikki S", "Kloori Cl", "Argon Ar", "Kalium K", "Kalsium Ca",
        "Skandium Sc", "Titaani Ti", "Vanadiini V", "Kromi Cr", "Mangaani Mn",
        "Rauta Fe", "Koboltti Co", "Nikkeli Ni", "Kupari Cu", "Sinkki Zn",
        "Gallium Ga", "Germanium Ge", "Arseeni As", "Seleeni Se", "Bromi Br",
        "Krypton Kr", "Rubidium Rb", "Strontium Sr", "Yttrium Y", "Zirkonium Zr",
        "Niobium Nb", "Molybdeeni Mo", "Teknetium Tc", "Rutenium Ru", "Rodium Rh",
        "Palladium Pd", "Hopea Ag", "Kadmium Cd", "Indium In", "Tina Sn",
        "Antimoni Sb", "Telluuri Te", "Jodi I", "Ksenon Xe", "Cesium Cs",
        "Barium Ba", "Lantaani La", "Cerium Ce", "Praseodyymi Pr", "Neodyymi Nd",
        "Prometium Pm", "Samarium Sm", "Europium Eu", "Gadolinium Gd", "Terbium Tb",
        "Dysprosium Dy", "Holmium Ho", "Erbium Er", "Tulium Tm", "Ytterbium Yb",
        "Lutetium Lu", "Hafnium Hf", "Tantaali Ta", "Volframi W", "Renium Re",
        "Osmium Os", "Iridium Ir", "Platina Pt", "Kulta Au", "Elohopea Hg",
        "Tallium Tl", "Lyijy Pb", "Vismutti Bi", "Polonium Po", "Astaatti At",
        "Radon Rn", "Frankium Fr", "Radium Ra", "Aktinium Ac", "Torium Th",
        "Protaktinium Pa", "Uraani U", "Neptunium Np", "Plutonium Pu", "Amerikium Am",
        "Kuri Cm", "Berkelium Bk", "Kalifornium Cf", "Einsteinium Es", "Fermium Fm",
        "Mendelevium Md", "Nobeli No", "Lawrencium Lr", "Rutherfordium Rf", "Dubnium Db",
        "Seaborgium Sg", "Bohrium Bh", "Hassium Hs", "Meitnerium Mt", "Darmstadtium Ds",
        "Roentgenium Rg", "Kopernicium Cn", "Nihonium Nh", "Flerovium Fl", "Moskovi Mc",
        "Livermorium Lv", "Tenessiini Ts", "Oganesson Og"
    };
  //Indexes from 1 to 118
  vector<int> indexes;
  for(int i = 1; i <= 118; i++) {
    indexes.push_back(i);
  }
  //TODO: Satunnainen booli
  //TODO: Väli, jakso tai ryhmä
  bool random = askBoolQuestion("Haluatko laittaa päälle satunnaisjärjestyksen?", "y", "n");
  if (random == true) {
    shuffle(indexes.begin(), indexes.end(), rand);
  }
  cout << "<- Jaksollisen järjestelmän harjoituspeli ->" << endl;
  cout << "<Alkuaineen nimi> <Kemiallinen merkki>" << endl;
  for (int i = 0; i < (int) indexes.size(); i++)  {
    string input;

    cout << indexes[i] << " ";
    getline(cin,input);
    if (input == elements[indexes[i]-1]) {
      cout << "Oikein!" << endl;
    }
    else {
      cout << "Väärin!" << endl;
      cout << elements[indexes[i]-1] << endl;
      i--;
    }

  }
}


