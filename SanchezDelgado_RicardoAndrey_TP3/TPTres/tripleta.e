class
	TRIPLETA

create
	make
feature
	make
	do
		create list.make_empty
	end

FEATURE --Se definen los atributos
	list:ARRAY[INTEGER]
	resultt:DOUBLE

FEATURE --Se definen operaciones relacionadas a la estructura de datos lista
	add_element(elem:INTEGER)
	require
		list.count>=0
	do
		list.force(elem,list.count + 1)
		ensure
			list.count<4
	end

FEATURE --Se operacion necesaria para evaluar el polinomio
	eval(x:INTEGER; y:INTEGER)
	require
	 	x>=0
	 	y>=0
	do
		resultt:= (x^list[2])*(list[1])*(y^list[3])
	end

invariant
	list.count<4
end
