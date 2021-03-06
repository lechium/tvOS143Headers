/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > {
	BitsetPtr __value_;
} compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> >;

typedef struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > {
	BitsetPtr __begin_;
	BitsetPtr __end_;
	compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > __end_cap_;
} vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> >;

typedef struct Bitmap {
	unsigned long long _bitCount;
	unsigned long long _lastOffsetFoundAt;
	vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > _bitSets;
	BOOL _dirty;
} Bitmap;

