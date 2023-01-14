#ifndef ID
#define ID
class AutoId
{
          static int idClass;
          int id;

public:
          AutoId()
          {
                    idClass++;
                    id = idClass;
          }
          AutoId(AutoId &obj)
          {
                    id = obj.id;
          };
          int getId() const { return id; };
          virtual ~AutoId(){};
};
#endif