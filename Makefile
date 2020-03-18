LIBS	   = -Llib -loutils
INCLUDE	   = -I share/include -I include
CXXFLAGS   = -Wall $(INCLUDE) -ggdb
#-std=c++11

.PHONY : all mixage

all     : mixage

#------------------------------------------------------------------------
# les fichiers et règles du TP mixage
#------------------------------------------------------------------------
mixage  : bin/mixage

# les fichiers sources
SOURCES	= $(wildcard src/*.cpp)

# les objets correspondant
OBJETS	= $(patsubst src/%.cpp,obj/%.o,$(SOURCES))

obj/%.o : src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

obj/%.o : src/%.cpp include/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

bin/mixage : $(OBJETS)
	$(CXX) $(OBJETS) $(LIBS) -o $@

raz clean :
	-rm $(OBJETS) bin/mixage
