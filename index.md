---
marp: true
theme: custom
paginate: true
math: mathjax
---

<!--_class: lead-->

# Złożoność obliczeniowa

Ignacy Białobrzewski

---

# Czym jest złożoność obliczeniowa?

Złożoność obliczeniowa algorytmu to ilość zasobów potrzebnych do wykonania obliczenia przy użyciu danego algorytmu. Wyróżnia się dwa rodzaje złożoności; **czasowa** oraz **pamięciowa**.

<hr>

#### Złożoność czasowa

Określa ile czasu (kroków) zajmuje wykonanie algorytmu.

#### Złożoność pamięciowa

Określa ile pamięci potrzeba do wykonania algorytmu.

---

# Notacja "Duże O"

Notacja "Duże O" to miara wydajności algorytmów. Pozwala ona oszacować czas pracy i efektywność algorytmu pod względem ilości danych wejściowych niezależnie od maszyny testującej.

---

# Złożoność stała

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/5kywtiygim?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>
<div style="flex: 1">

```hs
pow2 :: Int -> Int
pow2 n = n * n
```

Złożoność stała oznacza że, jesteśmy w stanie wykonać algorytm w stałym czasie, niezależnie od wielkości danych wejściowych.

Oznacza się ją: $O(1)$

</div>
</div>

---

<h1>Złożoność logarytmiczna</h1>

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/ahqzcjzksi?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

<div style="flex: 1">

```hs
euclidean :: Int -> Int -> Int
euclidean a 0 = a
euclidean a b = euclidean b r
    where r = a `mod` b
```

Czas wykonania algorytmu jest zależny od wyniku logarytmu.

Oznacza się ją: $O(\log{n})$

</div>

</div>

---

# Złożoność liniowa

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/wrwrcg3ccg?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

<div style="flex: 1">

```hs
filter :: (a -> Bool) -> [a] -> [a]
filter f xs = [x | x <- xs, f x]
```

Złożoność liniowa. Czas pracy algorytmu jest wprost proporcjonalny do wielkośći danych wejściowych.

Oznacza się ją: $O(n)$

</div>
</div>

---

# Złożoność liniowo-logarytmiczna

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/etaxwakhmw?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

<div style="flex: 1">

```hs
quickSort :: [Int] -> [Int]
quickSort [] = []
quickSort (p:xs) = left ++ [p] ++ right
 where
    left = quickSort [x | x <- xs, x < p]
    right = quickSort [x | x <- xs, x > p]
```

Złożoność liniowo-logarytmiczna znaczy że czas pracy wynosi iloczyn logarytmu i wielkości danych wejściowych.

Oznacza się ją: $O(n\log{n})$

</div>
</div>

---

# Złożoność kwadratowa

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/hitulhpljd?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

<div style="flex: 1">

```hs
filter2D :: (a -> Bool) -> [[a]] -> [[a]]
filter2D f xxs =
    [[x | x <- xs, f x] | xs <- xxs]
```

Złożoność kwadratowa; czas pracy wynosi wielkość danych wejściowych do potęgi drugiej.

Oznacza się ją: $O(n^2)$

</div>
</div>

---

# Złożoność wykładnicza

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/5ghsfjuzk0?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

<div style="flex: 1">

```hs
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)
```

Złożoność wykładnicza, czas pracy jest równy $x^n$.

Oznacza się ją: $O(x^n)$

</div>
</div>

---

# Złożoność typu silnia

<div style="display: flex; gap: 2em;">
<iframe src="https://www.desmos.com/calculator/83eeenwmi6?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

<div style="flex: 1">

```hs
evenFac :: Int -> [Int]
evenFac n = [j | j <- [1..fac n], even j]
  where
    fac 0 = 1
    fac x = fac (x-1) * x
```

Złożoność typu silnia posiada szczególnie wolny czas wykonania ze względu na jej dynamiczny wzrost kroków.

Oznacza się ją: $O(n!)$

</div>
</div>

---

<iframe src="https://www.desmos.com/calculator/q0pnfkrqjo?embed" width="100%" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

---

<table>
  <tr>
    <th></th>
    <th>N=10</th>
    <th>N=20</th>
    <th>N=30</th>
    <th>N=40</th>
    <th>N=50</th>
    <th>N=60</th>
  </tr>
  <tr>
    <td>N</td>
    <td>0.00001s</td>
    <td>0.00002s</td>
    <td>0.00003s</td>
    <td>0.00004s</td>
    <td>0.00005s</td>
    <td>0.00006s</td>
  </tr>
  <tr>
    <td>N^2</td>
    <td>0.0001s</td>
    <td>0.0001s</td>
    <td>0.0004s</td>
    <td>0.0009s</td>
    <td>0.0016s</td>
    <td>0.0036s</td>
  </tr>
  <tr>
    <td>2^N</td>
    <td>0.001s</td>
    <td>1s</td>
    <td>17.9 min</td>
    <td>12.7 dni</td>
    <td>35.7 lat</td>
    <td>366 w.</td>
  </tr>
  <tr>
    <td>N!</td>
    <td>3.6s</td>
    <td>768 w.</td>
    <td>8.4*10^16 w.</td>
    <td>2.6*10^32 w.</td>
    <td>9.6*10^48 w.</td>
    <td>2.6*10^66 w.</td>
  </tr>
</table>

Przyjmując że czas wykonania jednej operacji elementarnej wynosi $1 * 10^{-5}s$ dla $2^{10} = 1024 * 1 * 10^{-6}$, czas wykonania $1024$ operacji wynosi $0.001s.$

---

# Dziękuję za uwage

<span style="opacity: 0.1">TND</span>
