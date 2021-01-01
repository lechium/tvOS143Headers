/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BWNodeOutput, BWFormat, BWPixelBufferPool, BWDataBufferPool, BWVideoFormat, BWPointCloudFormat;

@interface BWNodeOutputMediaProperties : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWNodeOutput* _owningNodeOutput;
	BWFormat* _resolvedFormat;
	BWFormat* _liveFormat;
	BWPixelBufferPool* _preparedPixelBufferPool;
	BWPixelBufferPool* _livePixelBufferPool;
	int _preparedPixelBufferPoolSize;
	int _livePixelBufferPoolSize;
	BWDataBufferPool* _preparedDataBufferPool;
	BWDataBufferPool* _liveDataBufferPool;
	int _preparedDataBufferPoolSize;
	int _liveDataBufferPoolSize;
	int _resolvedRetainedBufferCount;
	unsigned _mediaType;

}

@property (nonatomic,retain) BWFormat * liveFormat;                                        //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) BWFormat * resolvedFormat; 
@property (nonatomic,retain) BWPixelBufferPool * preparedPixelBufferPool;                  //@synthesize preparedPixelBufferPool=_preparedPixelBufferPool - In the implementation block
@property (assign,nonatomic) int preparedPixelBufferPoolSize;                              //@synthesize preparedPixelBufferPoolSize=_preparedPixelBufferPoolSize - In the implementation block
@property (nonatomic,retain) BWPixelBufferPool * livePixelBufferPool; 
@property (assign,nonatomic) int livePixelBufferPoolSize;                                  //@synthesize livePixelBufferPoolSize=_livePixelBufferPoolSize - In the implementation block
@property (nonatomic,retain) BWDataBufferPool * preparedDataBufferPool;                    //@synthesize preparedDataBufferPool=_preparedDataBufferPool - In the implementation block
@property (assign,nonatomic) int preparedDataBufferPoolSize;                               //@synthesize preparedDataBufferPoolSize=_preparedDataBufferPoolSize - In the implementation block
@property (nonatomic,retain) BWDataBufferPool * liveDataBufferPool; 
@property (assign,nonatomic) int liveDataBufferPoolSize;                                   //@synthesize liveDataBufferPoolSize=_liveDataBufferPoolSize - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * resolvedVideoFormat; 
@property (nonatomic,readonly) BWPointCloudFormat * resolvedPointCloudFormat; 
@property (assign,nonatomic) int resolvedRetainedBufferCount;                              //@synthesize resolvedRetainedBufferCount=_resolvedRetainedBufferCount - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * liveVideoFormat; 
-(void)dealloc;
-(unsigned)mediaType;
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(BWPixelBufferPool *)livePixelBufferPool;
-(BWFormat *)liveFormat;
-(int)resolvedRetainedBufferCount;
-(BWVideoFormat *)resolvedVideoFormat;
-(BWPixelBufferPool *)preparedPixelBufferPool;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormat *)resolvedFormat;
-(BWPointCloudFormat *)resolvedPointCloudFormat;
-(BWVideoFormat *)liveVideoFormat;
-(void)setPreparedPixelBufferPool:(BWPixelBufferPool *)arg1 ;
-(void)setPreparedDataBufferPool:(BWDataBufferPool *)arg1 ;
-(void)setPreparedPixelBufferPoolSize:(int)arg1 ;
-(int)preparedPixelBufferPoolSize;
-(void)setLivePixelBufferPool:(BWPixelBufferPool *)arg1 ;
-(void)setLivePixelBufferPoolSize:(int)arg1 ;
-(BWDataBufferPool *)preparedDataBufferPool;
-(void)setLiveDataBufferPool:(BWDataBufferPool *)arg1 ;
-(int)preparedDataBufferPoolSize;
-(void)setLiveDataBufferPoolSize:(int)arg1 ;
-(void)setPreparedDataBufferPoolSize:(int)arg1 ;
-(void)_setOwningNodeOutput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(void)setNodePreparedPixelBufferPool:(id)arg1 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg1 ;
-(void)setNodePreparedDataBufferPool:(id)arg1 ;
-(void)setPreparedSharedDataBufferPool:(id)arg1 ;
-(BWDataBufferPool *)liveDataBufferPool;
-(void)setResolvedRetainedBufferCount:(int)arg1 ;
-(int)livePixelBufferPoolSize;
-(int)liveDataBufferPoolSize;
@end

