#include <bits/stdc++.h>

using namespace std;

const long N = 1e5;

struct row {
  long pos[N];
  long elem[N];
  long bucket[N];
} *cur = new row(), *prv = new row();

string s;
long bucket_spot[N];

bool cmp(long a, long b) { return s[a] < s[b]; }

void bring_to_front(long e) {
  long bucket = prv->bucket[prv->pos[e]];
  cur->pos[e] = bucket_spot[bucket]++;
  cur->elem[cur->pos[e]] = e;
}

void calc_suffix_array() {
  long n = s.size();

  // Init
  for (long i = 0; i < n; ++i)
	cur->elem[i] = i;
  sort(cur->elem, cur->elem + n, cmp);
  for (long i = 0; i < n; ++i)
	cur->pos[cur->elem[i]] = i;
  cur->bucket[0] = prv->bucket[0] = 0;
  long buckets = 1;
  for (long i = 1; i < n; ++i)
	if (s[cur->elem[i]] == s[cur->elem[i - 1]])
	  cur->bucket[i] = buckets - 1;
	else
	  cur->bucket[i] = buckets++;

  for (long delta = 1; buckets < n; delta *= 2) {
	swap(cur, prv);
	for (long i = n - 1; i >= 0; --i)
	  bucket_spot[prv->bucket[i]] = i;
	for (long i = 0; i < delta; ++i)
	  bring_to_front(n - i - 1);
	// Sort elements
	  if (prv->elem[i] < delta) continue;
	  bring_to_front(prv->elem[i] - delta);
	}
	// Create new bucket boundaries
	for (long i = 1; i < n; ++i) {
	  cur->bucket[i] = prv->bucket[i];
	  if (cur->bucket[i] != cur->bucket[i - 1]) continue;
	  long suf1 = cur->elem[i - 1] + delta;
	  long suf2 = cur->elem[i] + delta;
	  if (suf1 >= n or suf2 >= n) continue;
	  if (prv->bucket[prv->pos[suf1]] == prv->bucket[prv->pos[suf2]]) continue;
	  for (long j = i - 1; j >= 0 and cur->bucket[j] == cur->bucket[i]; --j)
		cur->bucket[j] = buckets;
	  ++buckets;
	}
  }
}

int main() {
  cin >> s;
  s.append(1, 'a' - 1); // Sentinel
  calc_suffix_array();
  long n = s.size();
  for (long i = 0; i < n; ++i)
	cout << cur->elem[i] << " ";
}