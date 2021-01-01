/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol MTLCommandQueue;
@class NSString, FigMetalContext, FigMetalHistogram, NSDictionary;

@interface BWMeteorHeadroomNode : BWNode {

	NSString* _lastCaptureRequestIdentifier;
	float _lastMeteorHeadroom;
	float _gainMapMainImageDownscalingFactor;
	int _headroomProcessingType;
	FigMetalContext* _metalContext;
	id<MTLCommandQueue> _metalCommandQueue;
	FigMetalHistogram* _histogram;
	NSDictionary* _meteorHeadroomParametersByPortType;

}
+(void)initialize;
-(void)dealloc;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(float)gainMapMainImageDownscalingFactor;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setHeadroomProcessingType:(int)arg1 ;
-(int)headroomProcessingType;
@end
