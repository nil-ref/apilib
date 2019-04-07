#ifndef splicebridge64_h__
#define splicebridge64_h__

///////////////////////////////////////////////////////////////////////////////////////////////////

#if(APILIB_64 != 0)

namespace apilib
{
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

  /**
   * ��������� ������� ����������� �����.
  */
  enum
  {
    splicebridge_instructions_size = 64, // ���������� ���������� � ������.
    splicebridge_addresstable_size = 8,  // ���������� ���������� � ������� �������.
  };

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

  /**
   * �������� ����� ��� ������ ������������ ���������.
  */
  struct splicebridge_t
  {
    unsigned char instructions[splicebridge_instructions_size]; // ������ ����������.
    size_t        instructions_size;                            // ������ ����������.
    void*         addresstable[splicebridge_addresstable_size]; // ������ ������� �������.
    size_t        addresstable_size;                            // ������ ������� �������.
  };

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

  /**
   * �������� ��������� �����.
   *
   * ���������� �� ���������� ������ ��������������� ����������� �� ����� �����.
   * ���������� ����������� �� ������������ ������������ ������� ������ � ������.
   * ���������� ��������� �� ������ ������������ �������������� ��� ���������� ������.
   * � ����� ����������� ������ �� ������ ���������� �� ��������� �������������� �������.
   *
   * @param bridge �������� �����.
   * @param target ����� ����������� ����������.
   * @oaram needed ���������� ������ ���������� � ������.
   *
   * @return true � ������ ������, false � ������ ������.
  */
  bool splicebridge_create(splicebridge_t* bridge, const void* target, size_t needed);

  /**
   * ���������� ��������� �����.
   *
   * @param bridge �������� �����.
   *
   * @return true � ������ ������, false � ������ ������.
  */
  bool splicebridge_destroy(splicebridge_t* bridge);

  /**
   * �������� ���������� � ���������� ��������� �����.
   *
   * @param bridge �������� �����.
   *
   * @return true �������� ����� � ����������, false �� ����� � ���������� ��� � ������ ������.
  */
  bool splicebridge_destroy_available(splicebridge_t* bridge);

  /**
   * ��������� ������������ �����.
   *
   * @param bridge �������� �����.
   *
   * @return ������������ ����� � ������ ������, NULL � ������ ������.
  */
  void* splicebridge_get_location(splicebridge_t* bridge);

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
};

#endif // #if(APILIB_64 != 0)

///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // splicebridge64_h__