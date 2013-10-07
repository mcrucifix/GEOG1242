GEOG1242.pdf : GEOG1242.tex \
	Figures/figure1.pdf  Figures/figure2.pdf \
	Figures/figure3.pdf  Figures/figure4.pdf Figures/figure5.pdf \
	Figures/figure6.pdf \
	Figures/figure7.pdf  Figures/figure8.pdf Figures/figure9.pdf \
	Figures/figure10.pdf \
	Figures/figure11.pdf Figures/figure12.pdf \
	Figures/figure13.pdf Figures/figure14.pdf Figures/figure15.pdf \
	Figures/figure16.pdf \
	Figures/figure17.pdf Figures/figure18.pdf Figures/figure19.pdf \
	Figures/figure20.pdf \
	Figures/figure21.pdf \
	GEOG1242.toc GEOG1242.aux 
	latexmk -pdf -pdflatex="pdflatex -interactive=nonstopmode" -use-make GEOG1242.tex


%.pdf: %.cpp
	cd Figures; elaps -pdf `basename $<` ; cd ..

make clean: 
	rm -f *.pdf *.aux 

all: PHY2371.pdf
