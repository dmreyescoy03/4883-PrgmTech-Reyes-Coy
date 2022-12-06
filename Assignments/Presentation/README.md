# Network Flow
### What is Network flow:
> Also known as transportation network. Is a Directed Graph where each edge has a capacity and each edge recieves a flow. The amount of flow on an edge cannot exceed the capacity of the edge. A flow must satisfy the restriction that the amount of flow into a node equals the amount of flow out of it, unless it is a source, which has only outgoing flow, or sink, which has only incoming flow.
> - Edges are also known as arcs.
> - There are two important vertecies Source(s), and Sink(t).

### network flow graph:
![image](https://upload.wikimedia.org/wikipedia/commons/thumb/d/df/Network_Flow_SVG.svg/1024px-Network_Flow_SVG.svg.png)
## Alogirthms:
> - Ford Fulkersons: Maximum flow of a network. O(∣E∣⋅f^∗)
> - Edmonds-Karp: Uses a BFS as a method of finding augmenting paths. O(E^2V)
> - Capacity Scaling: Adds a heuristic on top of Ford-Fulkerson to pick larger paths first. O(E^2log(U))
> - Dinic's algorithm: Uses combination of BFS + DFS to find augmenting paths. O(E^2V)
> - Push Relable: Uses a concept of maintaining a "preflow" instead of finding augmenting paths to achieve a max-flow solution. O(V^2E) or O(V^2√E)


# Problem 1104:
> [ChipsChallenge](https://onlinejudge.org/external/11/1104.pdf)

### Break Down:
> - Chip Design (Given a grid (NxN) and a set number of components(Widgets)).
> - One slot can hold a single component.
> Restrictions: '.'-> Open, '/' -> Disabled, 'C' -> Occupied.
> - As such, there must be exactly as many components in
> the first row as in the first column, exactly as many in the second row as in the second column, and so on.
> Component counts include both the components already specified on the chip and the
> added widgets.
> - To avoid hot spots, any given row or column must have no more than A/B of the total components on the chip for a
> given A and B.

### Additional Information:
> - I used the following alg:
>- 0-9 indicates different computers
>- 10-35 indicates applications
>- 36 is source,37 destination
>- 1)I constructed network with above conventions and the weights of edges between source and applications is the no of     users bringing that application and all the othere edges weights are 1.
>- 2)I used maxflow with bfs strategy...
>- whenever i find augmentation path...i saved the matching ...
>- it took around 0.033sec since it is only 38*38 size matrix only

### Other Problems:
- [11045](https://onlinejudge.org/external/110/11045.pdf)
- [11418](https://onlinejudge.org/external/114/11418.pdf)