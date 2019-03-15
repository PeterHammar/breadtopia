#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
class GameObject
{
  private:
    std::string type;
  public:
    std::string getInteractionType() {
      return this->type;
    }

    void setInteractionType(std::string type) {
      this->type = type;
    }
};
