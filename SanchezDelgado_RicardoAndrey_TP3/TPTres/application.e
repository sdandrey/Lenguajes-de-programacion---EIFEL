class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- FLUJO PRINCIPAL DEL PROGRAMA
	make
		local
			flag: BOOLEAN
			parser:PARSER
			listaPolinomios:ARRAY[POLINOMIO]
			i:INTEGER
			j:INTEGER
			x:INTEGER
			temp:STRING
			y:INTEGER
			oper:OPERACION
			pila:ARRAYED_STACK[POLINOMIO]
			pilaTemp:ARRAYED_STACK[POLINOMIO]
			poli1:POLINOMIO
			poli2:POLINOMIO
			arrayEval:ARRAY[STRING]
			separador:STRING
		do
			from create parser.make
			create listaPolinomios.make_empty
			create pila.make(0);
			create pilaTemp.make (0)
			create poli1.make
			create poli2.make
			create arrayEval.make_empty
			create temp.make (0)
			separador:=" "
			until flag
			loop
				print(">> ")
				io.read_line
				create parser.make
				if(io.last_string ~ "d" or io.last_string ~ "dup")then
					if(pila.count=0)
					then
						print(">> ")
						print("No hay elementos que duplicar%N")
					else
						pila.put (pila.item.deep_twin)
					end
				elseif(io.last_string ~ "s" or io.last_string ~ "salir")
				then
					flag:=true
				elseif(io.last_string ~ "i" or io.last_string ~ "inter")then
					if(pila.count <= 1)
					then
						print(">> ")
						print("Debe existir al menos 2 elementos%N")
					else
							poli1:=pila.item.deep_twin
							pila.remove
							poli2:=pila.item.deep_twin
							pila.remove
							pila.put (poli1)
							pila.put (poli2)
					end
				elseif(io.last_string ~ "p" or io.last_string ~ "pop")
				then
					if(pila.count=0)
					then
						print(">> ")
						print("No hay elementos en la pila%N")
					else
						pila.remove
					end
				elseif(io.last_string ~ "b" or io.last_string ~ "borrar")
				then
					pila.wipe_out
				elseif(io.last_string ~ "l" or io.last_string ~ "listar")
				then
					from
					until
						pila.is_empty
					loop
						pila.item.show
						pilaTemp.put(pila.item.deep_twin)
						pila.remove
					end
					from
					until
						pilaTemp.is_empty
					loop
						pila.put(pilaTemp.item.deep_twin)
						pilaTemp.remove
					end
				elseif(io.last_string.item (1).out ~ "e")
				then
					--io.last_string
					from
						i:=3
						create temp.make (0)
					until
						i>io.last_string.count
					loop
						if(io.last_string.item (i).out ~ " ")
						then
							x:=temp.out.deep_twin.to_integer
							create temp.make (0)
							temp:=""
						else
							temp:= temp + io.last_string.item (i).out
						end
						i:= i + 1
					end
					y:=temp.out.deep_twin.to_integer
					pila.item.eval (x , y)
					print(">> ")
					print(pila.item.resultt)
					print(" 0 0")
					print("%N")
				elseif io.last_string ~ "+" or io.last_string ~ "-" or io.last_string ~ "*" then
					if(pila.count = 1)
					then
						print("%N")
						print(">> ")
						print("Deben de existir al menos 2 polinomios en la pila%N")
					else
						create oper.make
						oper.setP2(pila.item.deep_twin)
						pila.remove
						oper.setP1(pila.item.deep_twin)
						pila.remove
						if(io.last_string ~ "+")
						then
							oper.sumar
						elseif(io.last_string ~ "-")
						then
							oper.restar
						elseif(io.last_string ~ "*")
						then
							oper.multiplicar
						end
						pila.put (oper.poli1.deep_twin)
						pila.item.show

					from
						j:= 1
					until
						j > oper.poli1.elements.count
					loop
						from
							i:= 1
						until
							i > oper.poli1.elements[j].list.count
						loop
							i := i+1
						end
						j := j+1
					end
				end
				else
					--print (io.last_string+"%N")
					parser.parse (io.last_string)
					parser.poli.simplificar()
					pila.put (parser.poli)
					from
						j:= 1
					until
						j > parser.poli.elements.count
					loop
						from
							i:= 1
						until
							i > parser.poli.elements[j].list.count
						loop
							i := i+1
						end
						j := j+1
					end
				end
			end
end
end
