#include <iostream>
using namespace std;

// MyClass�N���X�̒�`�Ǝ���
class MyClass {
  private:
    int data;	// �����o�ϐ�
  public:
    // �����o�ϐ�data�̒l��Ԃ������o�֐�
    int getData() {
      return this->data;
    }
    // �����o�ϐ�data�̒l�������郁���o�֐�
    int setData(int data) {
        return this->data=data;
    }

    // �R���X�g���N�^
    MyClass(int data) {
      cout << "�R���X�g���N�^���Ăяo����܂����B" << endl;
      this->data = data;
    }

    // �f�X�g���N�^
    ~MyClass() {
      cout << "�f�X�g���N�^���Ăяo����܂����B" << endl;
    }
};

// main�֐�
int main() {
  // MyClass�N���X�̃I�u�W�F�N�gobj1�𐶐�����
  MyClass obj1(123);

  // obj1���R�s�[����obj2�𐶐�����
  MyClass obj2 = obj1;     // �R�s�[�R���X�g���N�^
  MyClass& obj3 = obj1; //�@�Q�Ƃ���
  MyClass* obj4 = &obj1;    //�|�C���^�ɃA�h���X����


  // �����o�ϐ��̒l��\������
  cout << "obj1�̃����o�ϐ�data�̒l�F" << obj1.getData() << endl;
  cout << "obj2�̃����o�ϐ�data�̒l�F" << obj2.getData() << endl;
  cout << "obj3�̃����o�ϐ�data�̒l�F" << obj3.getData() << endl;
  cout << "obj4�̃����o�ϐ�data�̒l�F" << obj4->getData() << endl;
  obj1.setData(456);
  cout << "obj1�̃����o�ϐ�data�̒l�F" << obj1.getData() << endl;
  cout << "obj2�̃����o�ϐ�data�̒l�F" << obj2.getData() << endl;
  cout << "obj3�̃����o�ϐ�data�̒l�F" << obj3.getData() << endl;
  cout << "obj4�̃����o�ϐ�data�̒l�F" << obj4->getData() << endl;


  return 0;
}