/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class AVAssetImageGenerator, VideoMovie, NSMutableDictionary, NSLock;

@interface FrameGenerator : NSObject {

	AVAssetImageGenerator* m_imageGenerator;
	VideoMovie* m_movie;
	NSMutableDictionary* m_fetchNotificationList;
	NSLock* m_fetchLock;
	SCD_Struct_TV3 m_timeToleranceBefore;
	SCD_Struct_TV3 m_timeToleranceAfter;
	BOOL m_requestedTimeTolerance;
	BOOL m_disablePosterFrame;
	BOOL m_cropImage;
	CGRect m_cropRect;
	float m_rotation;
	long long _maximumCacheSize;
	CGSize m_maximumSize;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) BOOL isQueueEmpty; 
@property (assign,nonatomic) BOOL disablePosterFrame; 
@property (assign,nonatomic) float rotation; 
@property (nonatomic,readonly) long long maximumCacheSize;              //@synthesize maximumCacheSize=_maximumCacheSize - In the implementation block
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(id)cachedFrameForMovie:(id)arg1 atTime:(SCD_Struct_TV3)arg2 nearby:(BOOL)arg3 actualTime:(SCD_Struct_TV3*)arg4 size:(CGSize)arg5 withRotation:(double)arg6 ;
+(id)posterCacheKeyForMovie:(id)arg1 ;
+(id)posterCacheDirectory;
+(void)ensureCacheDirectoryExists;
+(void)setupCaches;
+(id)posterFrameForMovie:(id)arg1 ;
+(id)imageKeyForTime:(int)arg1 size:(CGSize)arg2 withRotation:(float)arg3 ;
+(void)queueOne:(id)arg1 times:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)queueNextItem;
+(void)setCachedFrame:(id)arg1 forMovie:(id)arg2 atTime:(SCD_Struct_TV3)arg3 canPoster:(BOOL)arg4 size:(CGSize)arg5 withRotation:(double)arg6 maximumCacheSize:(long long)arg7 ;
+(void)queueGenerator:(id)arg1 forTimes:(id)arg2 highPriority:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)removeQueueEntriesForGenerator:(id)arg1 ;
+(void)changeTimesToHighPriority:(id)arg1 forGenerator:(id)arg2 ;
+(void)pauseFetching;
+(void)resumeFetching;
+(BOOL)isAnythingFetching;
+(void)logAllQueuedTimes;
-(void)dealloc;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(CGSize)naturalSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(CGSize)maximumSize;
-(VideoMovie *)movie;
-(void)setMovie:(VideoMovie *)arg1 ;
-(id)imageGenerator;
-(id)initWithMovie:(id)arg1 maximumCacheSize:(long long)arg2 ;
-(id)imageAtTime:(SCD_Struct_TV3)arg1 ;
-(void)clearImageGenerator;
-(id)imageFrom:(CGImageRef)arg1 ;
-(void)cropImage:(CGRect)arg1 ;
-(id)applyRotation:(id)arg1 ;
-(id)applyCrop:(id)arg1 ;
-(BOOL)disablePosterFrame;
-(long long)maximumCacheSize;
-(void)requestedTimeTolerance:(SCD_Struct_TV3)arg1 after:(SCD_Struct_TV3)arg2 ;
-(void)fetchTime:(SCD_Struct_TV3)arg1 highPriority:(BOOL)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)cancelAllFetching;
-(void)cancelFetchingOutsideActiveSegment:(SCD_Struct_TV3)arg1 until:(SCD_Struct_TV3)arg2 maxRequestInFlight:(long long)arg3 ;
-(BOOL)isFetching:(SCD_Struct_TV3)arg1 ;
-(BOOL)isQueueEmpty;
-(void)logQueuedTimes;
-(BOOL)fetchTimeInQueue:(SCD_Struct_TV3)arg1 ;
-(void)changeTimesToHighPriority:(id)arg1 ;
-(void)setDisablePosterFrame:(BOOL)arg1 ;
@end

