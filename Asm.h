#pragma once

class Asm
{
public:
	float negativo(float a)
	{
		__asm
		{
			finit 
			fld a
			fchs
			fst a
		}
		return a;
	}
	float soma(float a, float b)
	{
		__asm
		{
			finit
			fld a
			fld b
			faddp st(1), st(0)
			fstp a
		}
		return a;
	}

	float subtracao(float a, float b)
	{
		__asm
		{
			finit 
			fld a
			fld b
			fsubp st(1), st(0)
			fstp a
		}
		return a;
	}

	float divisao(float a, float b)
	{
		__asm
		{
			finit
			fld a
			fld b
			fdivp st(1), st(0)
			fstp a
		}
		return a;
	}

	float multiplicacao(float a, float b)
	{
		__asm
		{
			finit 
			fld a
			fld b
			fmulp st(1), st(0)
			fstp a
		}
		return a;
	}

	float sqrt(float a)
	{
		__asm
		{
			finit 
			fld a
			fsqrt
			fstp a
		}
		return a;
	}
	
	float xElevado2(float x, float y)
	{
		__asm
		{
			finit
			fld x
			fld x
			fmulp st(1), st(0)
			fstp x
		}
		return x;
		 

	}

	float xElevadoy(float x, float y)
	{
		__asm
		{
			finit
			fld y
			fld1
			fld x
			fyl2x
			fmul
			fld st
			frndint
			fsub st(1), st
			fxch
			f2xm1
			fld1
			fadd
			fscale
			fstp x
		}
		return x;
	}

	float fatorial(int x)
	{
		float result;
		__asm
		{
			finit 
			fld1
			fldz
			mov ecx, x
			_loop:
			fld1
			faddp st(1), st(0)
			fmul st(1), st(0)
			dec ecx
			jnz _loop	
			fstp x
			fstp result
		}
		return result;
	}

	float log(float x, float a)
	{
		__asm
		{
			finit 
			fld1
			fld a
			fyl2x
			fld1
			fdiv st, st(1)
			fld1
			fld x
			fyl2x
			fmul
			fst x
		}
		return x;
	}

	float NRaiz(float a, float b) {
		__asm
		{
			finit
			fld1
			fld b
			fdiv
			fstp b
		}
		a = xElevadoy(a, b);
		return a;
	}

	float sen(float a, bool Grau)
	{
		if (Grau == true) a = (a * _pi) / 180;
		__asm
		{
			finit
			fld a
			fsin
			fst a
		}
		return a;
	}

	float cos(float a, bool Grau)
	{
		if (Grau == true) a = (a * _pi) / 180;
		__asm
		{
			finit
			fld a
			fcos
			fst a
		}
		return a;
	}

	float tg(float a, bool Grau)
	{
		if (Grau == true) a = (a * _pi) / 180;
		__asm
		{
			finit 
			fld a
			fsincos
			fdiv
			fst a
		}
		return a;
	}

	float arctg(float a, bool Grau)
	{
		if (Grau == true) a = (a * _pi) / 180;
		__asm
		{
			finit
			fld a
			fld1
			fpatan
			fst a
		}
		return a;
	}

	float arccos(float a, bool Grau)
	{
		if (Grau == true) a = (a + _pi) / 180;
		a = acos(a);
		return a;
	}

	float arcsen(float a, bool Grau)
	{
		if (Grau == true) a = (a + _pi) / 180;
		a - asin(a);
		return a;
	}
};
