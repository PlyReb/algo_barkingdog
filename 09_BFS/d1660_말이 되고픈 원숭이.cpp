//#include <iostream>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//int board[202][202];
//int vis[32][202][202];
//int dmx[4] = { 0, 0, 1, -1 };
//int dmy[4] = { 1, -1, 0, 0 };
//int dkx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
//int dky[8] = { 1, -1, 2, -2, 2, -2, 1, -1 };
//queue<tuple<int, int, int>> Q;
//int x, y, k;//��,��, k�� kight �̵� ����
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> k >> y >> x;// k�� kight �̵�, ����, ���� �Է�
//    for (int i = 0; i < x; i++)
//        for (int j = 0; j < y; j++)
//            cin >> board[i][j];//���� �� �Է�
//    Q.push({ 0, 0, 0 });// ť�� �ʱⰪ ����. 
//    vis[0][0][0] = 1;//'�湮 ����� ������'�� �ʱⰪ ����
//    while (!Q.empty())
//    {
//        int qk, qx, qy;//ť�� �� Ʃ�� �������� ���� ���� ����
//        tie(qk, qx, qy) = Q.front();//Q.front()�� ������ ���� qk, qx, qy�� ��´�.
//        Q.pop();//�������� �̾Ƴ��� ť���� out
//        if (qk < k)// �Է¹��� k(kight �̵����� Ƚ��)���� qk�� ���� ���� kight�̵���� ����.
//        {
//            for (int i = 0; i < 8; i++)//8���� �̵�����
//            {
//                int nx = qx + dkx[i];
//                int ny = qy + dky[i];//��ȭ�� ����ǥ�� ����ǥ.
//                if (nx < 0 || ny < 0 || x <= nx || y <= ny)// ��ȭ��(����ǥ ����ǥ)�� ������ ��� + �Է¹��� ���� ���� �Ѿ���
//                    continue;
//                if (board[nx][ny]==1)// ��ȭ�� (����ǥ, ����ǥ)�� ��ֹ��� �ɸ��ٸ�
//                    continue;
//                if (vis[qk + 1][nx][ny]> 0 )// �� ���� �޸� �ʰ�??
//                    continue;
//                vis[qk + 1][nx][ny] = vis[qk][qx][qy] + 1;//����Ʈ �̵���� �̵� Ƚ��
//                Q.push({ qk + 1, nx, ny });
//            }
//        }
//        for (int i = 0; i < 4; i++)//������ ���� �̵� 4����
//        {
//            int nx = qx + dmx[i], ny = qy + dmy[i];//��ȭ�� ��, �� ��ǥ
//            if (nx < 0 || ny < 0 || x <= nx || y <= ny)
//                continue;
//            if (board[nx][ny])
//                continue;
//            if (vis[qk][nx][ny]) // �̹� �湮�� �� -> �̹� ����ƴ�.
//                continue;
//            vis[qk][nx][ny] = vis[qk][qx][qy] + 1;// ���� �̵� Ƚ��
//            Q.push({ qk, nx, ny });//��ȭ�� kight�̵� ȸ��, ����ǥ, ����ǥ queue�� push
//        }
//    }
//    int ans = 0x7f7f7f7f;//int �������� ���� ū ���� ����� ��.
//    for (int i = 0; i < k + 1; i++)
//        if (vis[i][x - 1][y - 1])//�ǳ� ������
//            ans = min(ans, vis[i][x - 1][y - 1]);
//    if (ans != 0x7f7f7f7f)
//        cout << ans - 1;
//	else cout << -1;
//}

#include <iostream>
#include <queue>
using namespace std;

int dx[12] = { 1,0,-1,0,2,2,1,1,-1,-1,-2,-2 };
int dy[12] = { 0,1,0,-1,-1,1,-2,2,-2,2,-1,1 };
int dist[201][201][31];
int board[201][201];

struct xyz
{
	int x, y, z;
};
queue<xyz> q;

int K, W, H;

int bfs()
{
	q.push({ 0, 0 ,0 });
	dist[0][0][0] = 0;
	while (!q.empty())
	{
		xyz cur = q.front();
		int x = cur.x;
		int y = cur.y;
		int z = cur.z;
		if (x == H - 1 && y == W - 1)
		{
			return dist[x][y][z];
		}
		q.pop();
		for (int i = 0; i < 12; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z;

			if (nx < 0 || nx >= H || ny < 0 || ny >= W)
				continue;
			if (dist[nx][ny][nz])
				continue;
			if (board[nx][ny] == 1)
				continue;
			if (i >= 4)
			{
				if (dist[nx][ny][nz + 1])
					continue;
				if (nz >= K)
					continue;
				dist[nx][ny][nz + 1] = dist[x][y][z] + 1;
				q.push({ nx,ny,nz + 1 });
			}
			else
			{
				dist[nx][ny][nz] = dist[x][y][z] + 1;
				q.push({ nx,ny,nz });
			}

		}
	}
	return -1;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> K >> W >> H;

	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++)
			cin >> board[i][j];

	cout << bfs();
}