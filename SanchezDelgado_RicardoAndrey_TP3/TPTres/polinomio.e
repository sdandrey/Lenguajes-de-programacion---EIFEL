class
	POLINOMIO

create
	make

feature
	make
		do
			create elements.make_empty
		end

FEATURE
	elements: ARRAY[TRIPLETA]
	resultt:DOUBLE

feature
	quitarCeros
	require
	elements.count>=0
		local
			temp:ARRAY[TRIPLETA]
			i:INTEGER

			do


			from
				i:=1
				temp := elements.deep_twin
				elements.make_empty
			until
				i>temp.count
			loop
				if(temp[i].list[1]~0)
				then

				else
					elements.force (temp[i], elements.count + 1)
				end
				i:=i+1
			end
			ensure
				elements.count>=0
		end

feature -- Se encuentran los metodos o cualidades que le dan capacidad al polinomio de imprimir todos sus valores
	show
	local
		i:INTEGER
		temp:STRING
		do
			from
				i:=1
				temp:=""
				sort
				quitarCeros
			until
				i+1>elements.count
			loop
				temp:=temp + elements[i].list[1].out +" "+ elements[i].list[2].out + " " + elements[i].list[3].out +" # "
				i:=i + 1
			end
			--quitarCeros
			temp:=temp + elements[elements.count].list[1].out +" "+ elements[elements.count].list[2].out + " " + elements[elements.count].list[3].out
			print(">> ")
			print(temp+"%N")
		end

feature --Ordenamiento
	sort
	local
		i:INTEGER
		j:INTEGER
		o:INTEGER
		maxx:INTEGER
		maxy:INTEGER
		tripletaTemp1:ARRAY[TRIPLETA]
		tripletaTemp2:ARRAY[TRIPLETA]
		tripletaTemp3:ARRAY[TRIPLETA]
		temp:TRIPLETA
	do
		-------------------------------------------------------------------
		from
			o:=1
			create tripletaTemp1.make_empty
			create tripletaTemp2.make_empty
			create tripletaTemp3.make_empty
		until
			o>elements.count
		loop
			------------------------------------------
			from
				i:=1
				maxx:=0
		--		print("111")
			until
				i>elements.count
			loop

				if(maxx<elements[i].list[2] and not(elements[i].list[1]~0))
				then
					maxx:= elements[i].list[2]
				end
				i:= i + 1
			end

			-------------Se crea una tupla temporal con lo x's
			from
				i:=1
				create tripletaTemp1.make_empty
			until
				i>elements.count
			loop
				if(maxx~elements[i].list[2])
				then
					tripletaTemp1.force (elements[i].deep_twin, tripletaTemp1.count + 1)
					elements[i].list[1]:= 0
				end
				i:= i + 1
			end
			from
				i:=1
			until
				i>tripletaTemp1.count
			loop
				from
					j:=1
				until
					j+1>tripletaTemp1.count
				loop
					if(tripletaTemp1[j].list[3]<tripletaTemp1[j+1].list[3])
					then
						temp:=tripletaTemp1[j+1].deep_twin
						tripletaTemp1[j+1]:=tripletaTemp1[j].deep_twin
						tripletaTemp1[j]:=temp
					end
					j:= j + 1
				end
				i:= i + 1
			end
			from
				i:=1
			until
				i>tripletaTemp1.count
			loop
				tripletaTemp2.force (tripletaTemp1[i].deep_twin, tripletaTemp2.count + 1)
				i:= i + 1
			end
		o:= o + 1
		end
		elements:=tripletaTemp2
		end

feature --Se evalua cada una de las tripletas y brinda el resultado acumulado de ellas
	eval(x:INTEGER;y:INTEGER)
	local
		i:INTEGER
		res:DOUBLE
		temp:DOUBLE
	do
		from
			i:=1
			resultt:=0
			temp:=0
		until
			i>elements.count
		loop
			elements[i].eval (x, y)
			temp:=temp + elements[i].resultt
			i:= i + 1
		end
		resultt:=temp.floor
	end

feature --Se añaden tripletas
	add_element(T:TRIPLETA)
		do
			elements.force (T,elements.count + 1)
			ensure
				elements.count>0
		end

feature --Quita las tripletas con 0 en su multiplicador
	normalizar(T:ARRAY[TRIPLETA])
		local
			i:INTEGER
			elementsTemp:ARRAY[TRIPLETA]
			do
				from
					create elementsTemp.make_empty
					i:=1
				until
					i>elements.count
				loop
					if(T[i].list[1] ~ 0)
					then

					else
						elementsTemp.force (T[i], elementsTemp.count + 1)
					end
					i:= i + 1
				end
				elements:=elementsTemp

			end
	--Se simplifican los elementos que tienen mismos exponentes
	simplificar()
		local
			i:INTEGER
			j:INTEGER
			f1:BOOLEAN
			f2:BOOLEAN
			tripletaTemp1:TRIPLETA
			tripletaTemp2:TRIPLETA
			elementsTemp:ARRAY[TRIPLETA]
			do
				from
					i:=1
					create tripletaTemp1.make
					create elementsTemp.make_empty
				until
					i>elements.count
				loop
					tripletaTemp1:=elements[i]

					from
						j:=i + 1
						create tripletaTemp2.make
						f2:=false
					until
						j>elements.count
					loop
						tripletaTemp2:=elements[j]
						--Se comparan que tengan mismo exponente para poder realizar la suma
						if( tripletaTemp1.list[2].is_equal (tripletaTemp2.list[2]) and tripletaTemp1.list[3].is_equal (tripletaTemp2.list[3]) )
						then
							tripletaTemp1.list[1]:=	tripletaTemp1.list[1] + tripletaTemp2.list[1]
							tripletaTemp2.list[1]:=0
							elements.put (tripletaTemp2, j)
						end
						j:=j+1
					end
					elementsTemp.force (tripletaTemp1, elementsTemp.count + 1)
					create tripletaTemp1.make
					i:=i+1
				end
				normalizar(elementsTemp)
			end
invariant
	elements.count>=0

end
