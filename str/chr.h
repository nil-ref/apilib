#ifndef chr_h__
#define chr_h__

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace apilib
{
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

  /**
   * �������� �� ������ ������ ��� ������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isalnum_ea(char c);
  int isalnum_ew(wchar_t c);

  /**
   * �������� �� ������ ������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isalpha_ea(char c);
  int isalpha_ew(wchar_t c);

  /**
   * �������� �� ������ �������� ��� ������ ��������� (' ' ��� '\t').
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isblank_ea(char c);
  int isblank_ew(wchar_t c);

  /**
   * �������� �� ������ ������ �������� ������� ��� �������� ������ ('\r' ��� '\n').
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isbreak_ea(char c);
  int isbreak_ew(wchar_t c);

  /**
   * �������� �� ������ ������������ ����������� ������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int iscntrl_ea(char c);
  int iscntrl_ew(wchar_t c);

  /**
   * �������� �� ������ ������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isdigit_ea(char c);
  int isdigit_ew(wchar_t c);

  /**
   * �������� �� ������ ����������� (��� ���������� ������� ����� �������).
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isgraph_ea(char c);
  int isgraph_ew(wchar_t c);

  /**
   * �������� �� ������ ������ � ������ ��������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int islower_ea(char c);
  int islower_ew(wchar_t c);

  /**
   * �������� �� ������ ���������� (��� ���������� ������� ������� ������).
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isprint_ea(char c);
  int isprint_ew(wchar_t c);

  /**
   * �������� �� ������ ������ ���������� (����������� ������� ����� ���� � ����).
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int ispunct_ea(char c);
  int ispunct_ew(wchar_t c);

  /**
   * �������� �� ������ ����� �� ������������ �������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isspace_ea(char c);
  int isspace_ew(wchar_t c);

  /**
   * �������� �� ������ ������ � ������� ��������.
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isupper_ea(char c);
  int isupper_ew(wchar_t c);

  /**
   * �������� �� ������ ����������������� ������ (����� � ����� �� 'A' �� 'F' � ������ ���������).
   *
   * @param c  ������.
   *
   * @return  1 - ������������� ���������,
   *          0 - ������������� ���������.
  */
  int isxdigit_ea(char c);
  int isxdigit_ew(wchar_t c);

  /**
   * ����������� ����������� ������� � ������ �������.
   *
   * @param c  ������.
   *
   * @return   ������ � ������ �������� ��� ������ ��� ���������.
  */
  char tolower_ea(char c);
  wchar_t tolower_ew(wchar_t c);

  /**
   * ����������� ����������� ������� � ������� �������.
   *
   * @param c  ������.
   *
   * @return   ������ � ������� �������� ��� ������ ��� ���������.
  */
  char toupper_ea(char c);
  wchar_t toupper_ew(wchar_t c);

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
};

///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // chr_h__