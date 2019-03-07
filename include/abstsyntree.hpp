#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>

struct Tree;
typedef std::shared_ptr<Tree> TreePtr;

struct Tree{
    Tree(std::string _type, std::string _value, const std::vector<TreePtr> &_branches): type(_type), value(_value), branches(_branches){}

		Tree(std::string _type, std::string _value): type(_type), value(_value){}

    template<class ...TArgs>
    Tree(std::string _type, TArgs ...args): type(_type), branches{args...}{}

    std::string type;
    std::string value;
    std::vector<TreePtr> branches;
};

inline TreePtr Nfumber(int32_t x){ return std::make_shared<Tree>(std::to_string(x)); }
inline TreePtr Variable(std::string id){ return std::make_shared<Tree>(id); }


void Translate(

);
void Compile(
    TreePtr program
);

extern const Expression *parseAST();

#endif
