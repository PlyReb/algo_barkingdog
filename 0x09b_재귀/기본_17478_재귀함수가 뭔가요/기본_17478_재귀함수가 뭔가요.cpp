#include <bits/stdc++.h> 
using namespace std;

int n;

void sentence(const char* str, int i)//"____"�� i�� ��� ���� ����ϴ� �Լ�
{
	for (int j = 0; j < i; ++j)
		cout << "____";
	cout << str;
}

void paragraph(int cnt)
{
	sentence("\"����Լ��� ������?\"\n", cnt);//base_condition �̳� �ƴ� ���� �� ���´�.
	if (cnt == n)
		sentence("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n", cnt);
	else
	{
		sentence("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n", cnt);
		sentence("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n", cnt);
		sentence("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n", cnt);
		paragraph(cnt + 1);
	}
	sentence("��� �亯�Ͽ���.\n", cnt);//������ ��� �ƴϰ� ��� �ذ�??
	return;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";//�ѹ��� ����
  paragraph(0);
}
