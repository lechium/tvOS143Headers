/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class CMMotionManager, NSObject;

@interface BWCoreMotionMetadataSourceNode : BWSourceNode {

	CMMotionManager* _motionManager;
	int _bufferGenerationRate;
	int _samplesPerBuffer;
	BOOL _running;
	BWCoreMotionMetadataSampleData* _sampleDataForBuffer;
	int _numSamplesInBuffer;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	unsigned _localIDOfCoreMotionMetadata_BE;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	opaqueCMFormatDescriptionRef _formatDescription;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
+(int)extractBWCoreMotionMetadataFromBlockBuffer:(OpaqueCMBlockBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
+(int)extractBWCoreMotionMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
-(void)dealloc;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)nodeSubType;
-(void)_emitMetadataSampleBuffer;
-(id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2 ;
@end

