/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXGIndexSetArray : NSObject {

	long long _capacity;
	long long _count;
	void* _indexSetReferences;

}

@property (assign,nonatomic) long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) void* indexSetReferences;              //@synthesize indexSetReferences=_indexSetReferences - In the implementation block
-(id)description;
-(void)dealloc;
-(long long)count;
-(void)removeAllIndexes;
-(void)setCount:(long long)arg1 ;
-(void*)indexSetReferences;
@end

