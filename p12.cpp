using namespace std;
void p12()
{
	cout<<"Enter a Character:";
	char ch;
	start:
		ch=getche();
		switch(ch){
		case 'A':	case 'a':	case 'E':
		case 'e':	case 'I':	case 'i':
		case 'O':	case 'o':	case 'U':	case 'u':
		cout <<" is a " <<"Vowels";
		break;
		default:
		cout <<"is a" <<"Consonent";
					
		}
		goto start;
}

int main()
{
p12();
}
