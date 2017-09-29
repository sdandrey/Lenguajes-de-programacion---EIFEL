class
	PARSER

create
	make
feature
	make
	do
		stringTemp:=""
		create poli.make
	end

feature
	stringTemp: STRING
	poli: POLINOMIO

feature
	set_string(T:STRING)
		do
			stringTemp:=T
		end
	parse(str:STRING)
		require
			str.count>=0
		local
			finish:BOOLEAN
			next:BOOLEAN
			counter:INTEGER
			tripletaTemp:TRIPLETA
			temp:STRING
			polin:POLINOMIO
		do
			from
			create tripletaTemp.make
			counter:=1
			until finish
			loop
				temp := str.item (counter).out
				from
				until counter>=str.count  or str.item (counter + 1).out ~ " "

				loop
					temp:= temp + str.item (counter + 1).out
					counter:= counter + 1
				end
				if temp ~ "#"
				then
					poli.add_element (tripletaTemp)
					create tripletaTemp.make
				else
					tripletaTemp.add_element( temp.to_integer )
				end
				counter:=counter + 2
				if counter>str.count
				then
					finish := True
					poli.add_element (tripletaTemp)
				end
			end
			ensure
			str.count>=0
		end
invariant
	stringTemp.count>=0

end
