import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.io.BufferedWriter;
import java.util.InputMismatchException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.io.Writer;
import java.io.OutputStreamWriter;
import java.io.InputStream;

public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        OutputWriter out = new OutputWriter(outputStream);
        ALinkCutCentroids solver = new ALinkCutCentroids();
        int testCount = Integer.parseInt(in.next());
        for (int i = 1; i <= testCount; i++)
            solver.solve(i, in, out);
        out.close();
    }
 
    static class ALinkCutCentroids {
        public void solve(int testNumber, InputReader in, OutputWriter out) {
            int n = in.nextInt();
            ALinkCutCentroids.Vertex[] vertices = new ALinkCutCentroids.Vertex[n];
            for (int i = 0; i < n; i++) {
                vertices[i] = new ALinkCutCentroids.Vertex();
                vertices[i].label = i + 1;
            }
 
            for (int i = 1; i < n; i++) {
                ALinkCutCentroids.Vertex u = vertices[in.nextInt() - 1];
                ALinkCutCentroids.Vertex v = vertices[in.nextInt() - 1];
                u.adj.add(v);
                v.adj.add(u);
            }
 
            vertices[0].dfs(null, n);
            for (ALinkCutCentroids.Vertex c1 : vertices)
                if (c1.isCentroid) {
                    for (ALinkCutCentroids.Vertex c2 : c1.adj)
                        if (c2.isCentroid) {
                            ALinkCutCentroids.Vertex v1 = c1.adj.get(0) == c2 ? c1.adj.get(1) : c1.adj.get(0);
                            out.println(c1.label + " " + v1.label);
                            out.println(c2.label + " " + v1.label);
                            return;
                        }
                }
 
            out.println("1 " + vertices[0].adj.get(0).label);
            out.println("1 " + vertices[0].adj.get(0).label);
        }
 
        static class Vertex {
            List<ALinkCutCentroids.Vertex> adj = new ArrayList<>();
            boolean isCentroid = true;
            int label;
            int size;
 
            void dfs(ALinkCutCentroids.Vertex parent, int n) {
                size = 1;
                for (ALinkCutCentroids.Vertex v : adj)
                    if (v != parent) {
                        v.dfs(this, n);
                        size += v.size;
                        if (2 * v.size > n) {
                            isCentroid = false;
                        }
                    }
                if (2 * (n - size) > n) isCentroid = false;
            }
 
        }
 
    }
 
    static class OutputWriter {
        private final PrintWriter writer;
 
        public OutputWriter(OutputStream outputStream) {
            writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
        }
 
        public OutputWriter(Writer writer) {
            this.writer = new PrintWriter(writer);
        }
 
        public void print(Object... objects) {
            for (int i = 0; i < objects.length; i++) {
                if (i != 0) {
                    writer.print(' ');
                }
                writer.print(objects[i]);
            }
        }
 
        public void println(Object... objects) {
            print(objects);
            writer.println();
        }
 
        public void close() {
            writer.close();
        }
 
    }
 
    static class InputReader {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
        private InputReader.SpaceCharFilter filter;
 
        public InputReader(InputStream stream) {
            this.stream = stream;
        }
 
        public int read() {
            if (numChars == -1) {
                throw new InputMismatchException();
            }
            if (curChar >= numChars) {
                curChar = 0;
                try {
                    numChars = stream.read(buf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (numChars <= 0) {
                    return -1;
                }
            }
            return buf[curChar++];
        }
 
        public int nextInt() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public String nextString() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            StringBuilder res = new StringBuilder();
            do {
                if (Character.isValidCodePoint(c)) {
                    res.appendCodePoint(c);
                }
                c = read();
            } while (!isSpaceChar(c));
            return res.toString();
        }
 
        public boolean isSpaceChar(int c) {
            if (filter != null) {
                return filter.isSpaceChar(c);
            }
            return isWhitespace(c);
        }
 
        public static boolean isWhitespace(int c) {
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public String next() {
            return nextString();
        }
 
        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);
 
        }
 
    }
}