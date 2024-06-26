#pragma once

#include <iostream>
#include <cstdint>

#define BYTE_LENGTH 8

class BitSet
{
private:
	uint8_t* buckets = nullptr;
	size_t N = 0;
	size_t bucketsCount = 0;

	void copyFrom(const BitSet& other);
	void moveFrom(BitSet&& other) noexcept;
	void free();

	const size_t getBucketIndex(size_t num) const;

public:
	BitSet(size_t N);

	BitSet(const BitSet& other);
	BitSet& operator=(const BitSet& other);

	BitSet(BitSet&& other) noexcept;
	BitSet& operator=(BitSet&& other) noexcept;

	const size_t getN() const;

	void add(size_t num);

	void invert(size_t num);

	void remove(size_t num);

	const bool contains(size_t num) const;

	friend BitSet getUnionSets(const BitSet& lhs, const BitSet& rhs);
	friend BitSet getIntersectionSets(const BitSet& lhs, const BitSet& rhs);

	void clear();

	void print() const;

	~BitSet() noexcept;
};