/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FigMetalAllocatorImpl;
#import <CMCapture/CMCapture-Structs.h>
@class FigMetalUtils, FigMetalTextureDescriptor, NSString;

@interface FigMetalAllocator : NSObject {

	id<FigMetalAllocatorImpl> _storage;
	MTLRangeAllocator* _rangeAllocator;
	FigMetalUtils* _utils;
	FigMetalTextureDescriptor* _texDesc;
	BOOL _isExternalMemory;
	FigMetalAllocator* subAllocator[5];
	NSString* _label;
	BOOL _dryRun;
	int _allocatorType;
	unsigned long long usedSize;
	unsigned long long _memSize;
	unsigned long long _largestOccupiedOffset;
	unsigned long long _resourceOptions;

}

@property (nonatomic,readonly) unsigned long long memSize;                            //@synthesize memSize=_memSize - In the implementation block
@property (nonatomic,readonly) unsigned long long usedSize; 
@property (nonatomic,readonly) unsigned long long largestOccupiedOffset;              //@synthesize largestOccupiedOffset=_largestOccupiedOffset - In the implementation block
@property (nonatomic,readonly) BOOL dryRun;                                           //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,readonly) int allocatorType;                                     //@synthesize allocatorType=_allocatorType - In the implementation block
@property (nonatomic,readonly) unsigned long long resourceOptions;                    //@synthesize resourceOptions=_resourceOptions - In the implementation block
-(id)description;
-(void)dealloc;
-(void)reset;
-(void)reset:(unsigned)arg1 ;
-(unsigned long long)resourceOptions;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(unsigned long long)usedSize;
-(BOOL)dryRun;
-(void)purgeResources:(unsigned)arg1 ;
-(void)purgeResources;
-(void)makeTextureAliasable:(id*)arg1 ;
-(unsigned long long)memSize;
-(int)setupWithDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg1 allocatorType:(int)arg2 ;
-(unsigned long long)largestOccupiedOffset;
-(int)addExternalMetalBuffer:(id)arg1 atSubAllocatorID:(unsigned)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 subAllocatorID:(unsigned)arg2 ;
-(unsigned long long)usedSize:(unsigned)arg1 ;
-(unsigned long long)largestOccupiedOffset:(unsigned)arg1 ;
-(unsigned long long)memSize:(unsigned)arg1 ;
-(unsigned long long)usedSizeAll;
-(int)allocatorType;
@end

