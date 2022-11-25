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
//int x, y, k;//행,열, k번 kight 이동 가능
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> k >> y >> x;// k번 kight 이동, 가로, 세로 입력
//    for (int i = 0; i < x; i++)
//        for (int j = 0; j < y; j++)
//            cin >> board[i][j];//보드 판 입력
//    Q.push({ 0, 0, 0 });// 큐의 초기값 대입. 
//    vis[0][0][0] = 1;//'방문 기록한 보드판'의 초기값 대입
//    while (!Q.empty())
//    {
//        int qk, qx, qy;//큐에 들어간 튜플 순서쌍을 각각 담을 변수
//        tie(qk, qx, qy) = Q.front();//Q.front()를 순서쌍 값을 qk, qx, qy에 담는다.
//        Q.pop();//순서쌍을 뽑아내고 큐에서 out
//        if (qk < k)// 입력받은 k(kight 이동가능 횟수)보다 qk가 작은 동안 kight이동방식 쓴다.
//        {
//            for (int i = 0; i < 8; i++)//8가지 이동방향
//            {
//                int nx = qx + dkx[i];
//                int ny = qy + dky[i];//변화한 행좌표와 열좌표.
//                if (nx < 0 || ny < 0 || x <= nx || y <= ny)// 변화한(행좌표 열좌표)가 음수일 경우 + 입력받은 보드 범위 넘어갈경우
//                    continue;
//                if (board[nx][ny]==1)// 변화한 (행좌표, 열좌표)가 장애물에 걸린다면
//                    continue;
//                if (vis[qk + 1][nx][ny]> 0 )// 안 쓰면 메모리 초과??
//                    continue;
//                vis[qk + 1][nx][ny] = vis[qk][qx][qy] + 1;//나이트 이동방식 이동 횟수
//                Q.push({ qk + 1, nx, ny });
//            }
//        }
//        for (int i = 0; i < 4; i++)//인접한 방향 이동 4가지
//        {
//            int nx = qx + dmx[i], ny = qy + dmy[i];//변화한 행, 열 좌표
//            if (nx < 0 || ny < 0 || x <= nx || y <= ny)
//                continue;
//            if (board[nx][ny])
//                continue;
//            if (vis[qk][nx][ny]) // 이미 방문한 곳 -> 이미 연산됐다.
//                continue;
//            vis[qk][nx][ny] = vis[qk][qx][qy] + 1;// 인접 이동 횟수
//            Q.push({ qk, nx, ny });//변화한 kight이동 회수, 행좌표, 열좌표 queue에 push
//        }
//    }
//    int ans = 0x7f7f7f7f;//int 범위에서 가장 큰 값에 가까운 값.
//    for (int i = 0; i < k + 1; i++)
//        if (vis[i][x - 1][y - 1])//맨끝 꼭지점
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