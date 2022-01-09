//--------------------------------------------------------------------------------------//
//----------------------------------------enecho----------------------------------------//
//
//-----------------------FAUST CODE FOR THE PRESERVATION OF EN ECHO---------------------//
//-----------------FOR SOPRANO AND LIVE ELECTRONICS BY PHILIPPE MANOOURY----------------//
//
//----------------------------------BY ALAIN BONARDI - 2022-----------------------------//
//---------------------CICM - MUSIDANSE LABORATORY - PARIS 8 UNIVERSITY-----------------//
//--------------------------------------------------------------------------------------//
//
declare author "Alain Bonardi";
declare licence "GPL-2.0";
declare name "zeroCross";
//
import("stdfaust.lib");
clear = nentry("clear", 1, 0, 1, 1);
process=((_, ma.zc) : +) ~ (*(1-clear));