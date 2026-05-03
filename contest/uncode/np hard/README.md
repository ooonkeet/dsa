To build the string for a given N, simply loop from 1 to N.

If the current number is prime, append ’P’. If it is not prime, append ’NP’.

Since N can go up to 200,000 and there are multiple test cases, precompute the prime numbers using the Sieve of Eratosthenes
before answering the queries to avoid a TLE verdict.
