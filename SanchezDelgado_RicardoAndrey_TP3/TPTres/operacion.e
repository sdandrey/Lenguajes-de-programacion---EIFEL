class
	OPERACION
create make

feature
	resultado:POLINOMIO
	poli1:POLINOMIO
	poli2:POLINOMIO

feature
	make
	do
		create resultado.make
		create poli1.make
		create poli2.make
	end

feature
	multiplicar
		local
			i:INTEGER
			j:INTEGER
			k:INTEGER
			mul:INTEGER
			x:INTEGER
			y:INTEGER
			poliTemp:ARRAY[TRIPLETA]
			tripletaTemp1:TRIPLETA
			tripletaTemp2:TRIPLETA
			temp:TRIPLETA
		do
			from
				i:=1
				create poliTemp.make_empty
				create temp.make
			until
				i>poli1.elements.count
			loop
				tripletaTemp1:=poli1.elements[i]
				temp:=tripletaTemp1
				from
					j:=1
					x:=poli1.elements[i].list[2]
					y:=poli1.elements[i].list[3]
					mul:=poli1.elements[i].list[1]
				until
					j>poli2.elements.count
				loop
					create tripletaTemp2.make
					tripletaTemp2:=poli2.elements[j]
					tripletaTemp1.list[1] := tripletaTemp1.list[1] * tripletaTemp2.list[1]
					tripletaTemp1.list[2] := tripletaTemp1.list[2] + tripletaTemp2.list[2]
					tripletaTemp1.list[3] := tripletaTemp1.list[3] + tripletaTemp2.list[3]
					poliTemp.force(tripletaTemp1.deep_twin, poliTemp.count + 1)
					tripletaTemp1.list[1] := mul
					tripletaTemp1.list[2] := x
					tripletaTemp1.list[3] := y
					j:= j + 1
				end
				create tripletaTemp1.make
				i:= i + 1
			end
				from
					k:=1
					poli1.elements.make_empty
				until
					k>poliTemp.count
				loop
					poli1.elements.force (poliTemp[k], poli1.elements.count + 1)
					k:= k + 1
				end
				poli1.simplificar
		end

	setP1(T:POLINOMIO)
		require
			T.elements.count>0
		do
			poli1:=T
			ensure
				poli1.elements.count>0
		end
	setP2(C:POLINOMIO)
		require
			C.elements.count>0
		do
			poli2:=C
			ensure
				poli2.elements.count>0
		end
	concatenarR
		local
			i:INTEGER
			tripletaTemp:TRIPLETA
		do
			from
				i:=1
			until
				i> poli2.elements.count
			loop
				tripletaTemp:=poli2.elements[i]
				tripletaTemp.list[1]:=tripletaTemp.list[1]* -1
				poli1.elements.force(tripletaTemp, poli1.elements.count + 1)
				i:=i+1
			end
		end
	concatenarS
		local
			i:INTEGER
		do
			from
				i:=1
			until
				i> poli2.elements.count
			loop
				poli1.elements.force(poli2.elements[i], poli1.elements.count + 1)
				i:=i+1
			end
		end

feature -- Se realizan operaciones con lo polinomios
	sumar
		do
			concatenarS
			poli1.simplificar
		end
	restar
		do
			concatenarR
			poli1.simplificar
		end

invariant
	poli1.elements.count>=0
	poli2.elements.count>=0

end
