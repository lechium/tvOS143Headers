/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _compressed_pair<udif::header *, std::__1::default_delete<udif::header> > {
	header __value_;
} compressed_pair<udif::header *, std::__1::default_delete<udif::header> >;

typedef struct unique_ptr<udif::header, std::__1::default_delete<udif::header> > {
	compressed_pair<udif::header *, std::__1::default_delete<udif::header> > __ptr_;
} unique_ptr<udif::header, std::__1::default_delete<udif::header> >;

typedef struct _compressed_pair<crypto::header *, std::__1::default_delete<crypto::header> > {
	header __value_;
} compressed_pair<crypto::header *, std::__1::default_delete<crypto::header> >;

typedef struct unique_ptr<crypto::header, std::__1::default_delete<crypto::header> > {
	compressed_pair<crypto::header *, std::__1::default_delete<crypto::header> > __ptr_;
} unique_ptr<crypto::header, std::__1::default_delete<crypto::header> >;

typedef struct shared_ptr<Backend> {
	Backend __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Backend>;

typedef struct shared_ptr<crypto::format> {
	format __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<crypto::format>;

