/*************************************************************************
**			Projecte 1: "¡¡Hello Word!!"								**
**																		**
**			En aquest projecte ens comunicarem amb el arduino			**
**			perque ens mostri per pantalla ¡¡Hello Word!!               **
**                    							                        **
**                                                                      **
*************************************************************************/

//******  Ineludes  ******************************************************

//******  Variables ******************************************************

//******  Setup **********************************************************

void setup()		// inicialitzar el procés a continuació

{
	Serial.begin(9600);	// velocitat a la que ens respondra el arduino
	


}
//******  Loop  **********************************************************

void loop ()		//Executar el procés en bucle

{
	Serial.println("¡¡Hello Word!!");		// mostra per pantalla del arduino ''Hello Word!!
	delay(100);

}
