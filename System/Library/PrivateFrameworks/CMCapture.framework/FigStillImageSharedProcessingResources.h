/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@class FigWiredMemory;

@interface FigStillImageSharedProcessingResources : NSObject {

	unsigned long long _sharedMetalBufferLengthInMB;
	unsigned long long _sharedRegWarpBufferLengthInMB;
	BOOL _resourcesAllocated;
	int _resourceAllocationError;
	id<MTLBuffer> _sharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;

}

@property (nonatomic,readonly) unsigned long long sharedMetalBufferLengthInMB;                //@synthesize sharedMetalBufferLengthInMB=_sharedMetalBufferLengthInMB - In the implementation block
@property (nonatomic,readonly) unsigned long long sharedRegWarpBufferLengthInMB;              //@synthesize sharedRegWarpBufferLengthInMB=_sharedRegWarpBufferLengthInMB - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> sharedMetalBuffer; 
@property (nonatomic,readonly) FigWiredMemory * sharedRegWarpBuffer; 
+(void)initialize;
-(id)description;
-(void)dealloc;
-(int)_allocateSharedMetalBufferWithSizeInMB:(unsigned long long)arg1 ;
-(id)initWithSharedMetalBufferLengthInMB:(unsigned long long)arg1 sharedRegWarpBufferLengthInMB:(unsigned long long)arg2 ;
-(int)ensureAllocatedSync;
-(id<MTLBuffer>)sharedMetalBuffer;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(unsigned long long)sharedMetalBufferLengthInMB;
-(unsigned long long)sharedRegWarpBufferLengthInMB;
@end

