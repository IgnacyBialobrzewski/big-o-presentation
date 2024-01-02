-- O(1)
pow2 :: Int -> Int
pow2 n = n * n 

-- O(log n)
euclidean :: Int -> Int -> Int
euclidean a 0 = a
euclidean a b = euclidean b r
    where r = a `mod` b

-- O(n)
filterList :: (a -> Bool) -> [a] -> [a]
filterList f xs = [x | x <- xs, f x]

-- O(n log n)
quickSort :: [Int] -> [Int]
quickSort [] = []
quickSort (pivot:xs) = left ++ [pivot] ++ right
    where
        left = quickSort [x | x <- xs, x < pivot]
        right = quickSort [x | x <- xs, x > pivot]

-- O(n^2)
filterList2D :: (a -> Bool) -> [[a]] -> [[a]]
filterList2D f xxs = [[x | x <- xs, f x] | xs <- xxs]

-- O(2^n)
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)

-- O(n!)
evenFac :: Int -> [Int]
evenFac n = [j | j <- [1..fac n], even j]
    where
        fac 0 = 1
        fac x = fac (x-1) * x

main :: IO()
main = print $ evenFac 10