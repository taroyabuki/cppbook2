#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/graph_utility.hpp>
using namespace std;
using namespace boost;

int main() {
  using Graph = adjacency_list<listS, vecS, directedS, no_property,
    property<edge_weight_t, int >> ;
  using Vertex = graph_traits<Graph>::vertex_descriptor;
  using Edge = pair<int, int>;

  enum vertices { S, A, B, C, D, E, F, Z };//頂点の名前（整数）
  const int lastIndex = Z;                 //最後の数
  string names = "SABCDEFZ";               //頂点の表示ラベル
  vector<Edge> edges{                      //辺の定義
    { S, A },{ S, B },
    { A, B },{ A, C },{ A, D },
    { B, A },{ B, C },{ B, D },
    { C, D },{ C, E },{ C, F },
    { D, A },{ D, B },{ D, F },
    { E, D },{ E, Z },    //最短経路あり
    { F, E },{ F, Z } };  //最短経路あり
    //{ E, D }, { Z, E }, //最短経路なし
    //{ F, E },{ Z, F } };//最短経路なし
  vector<int> weights{//重みの定義
    3, 5,
    1, 10, 11,
    3, 2, 3,
    2, 7, 12,
    15, 7, 2,
    11, 2,
    3, 2 };
  if (edges.size() != weights.size()) throw runtime_error("辺の数と重みの数が合わない");

  Graph g(edges.cbegin(), edges.cend(), weights.cbegin(), lastIndex);//グラフの構築
  print_graph(g, names.c_str());//グラフの表示
  cout << endl;

  Vertex start = S;//スタート地点
  vector<Vertex> parents(num_vertices(g));//最短経路を格納するvector
  dijkstra_shortest_paths(g, start, predecessor_map(&parents[0]));//最短経路を求める

  Vertex goal = Z;//ゴール地点
  if (parents[goal] == goal) {
    cout << "最短経路なし\n";
    return 1;
  }

  for (Vertex v = goal; v != start; v = parents[v]) {//経路の表示
    cout << names[v] << " <- ";

  }
  cout << names[start] << endl;
}//出力値：Z <- F <- D <- B <- A <- S