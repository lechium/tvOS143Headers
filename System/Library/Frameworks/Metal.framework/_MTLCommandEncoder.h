/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/_MTLObjectWithLabel.h>

@protocol MTLDevice, MTLCommandBuffer, MTLFence;
@class _MTLCommandBuffer, NSMutableArray, NSString;

@interface _MTLCommandEncoder : _MTLObjectWithLabel {

	id<MTLDevice> _device;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	unsigned long long _numThisEncoder;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	id<MTLFence> _progressFence;
	BOOL _needsFrameworkAssistedErrorTracking;
	BOOL _isProgressTrackingEncoder;
	NSMutableArray* _debugSignposts;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (nonatomic,readonly) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long numThisEncoder;                     //@synthesize numThisEncoder=_numThisEncoder - In the implementation block
@property (readonly) unsigned long long dispatchType; 
-(id)description;
-(void)dealloc;
-(unsigned long long)globalTraceObjectID;
-(id<MTLDevice>)device;
-(unsigned long long)getType;
-(unsigned long long)dispatchType;
-(void)memoryBarrierNotificationWithScope:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)endEncoding;
-(id)commandBuffer;
-(unsigned long long)getDriverUniqueID;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)preEndEncoding;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)memoryBarrierNotificationWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)numThisEncoder;
-(void)setNumThisEncoder:(unsigned long long)arg1 ;
@end

