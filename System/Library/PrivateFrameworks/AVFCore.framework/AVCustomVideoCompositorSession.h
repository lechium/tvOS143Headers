/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AVVideoCompositing;
#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary, AVWeakReference, NSObject, AVVideoComposition, NSError, AVVideoCompositionRenderContext;

@interface AVCustomVideoCompositorSession : NSObject {

	OpaqueFigVideoCompositorRef _figCustomCompositor;
	BOOL _hasRegisteredFigCustomCompositorCallbacks;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	AVWeakReference* _weakSelf;
	void* _callbackContextToken;
	NSObject*<OS_dispatch_queue> _videoCompositionQ;
	AVVideoComposition* _videoComposition;
	BOOL _videoCompositionDidChange;
	NSObject*<OS_dispatch_queue> _clientCustomCompositorQ;
	id<AVVideoCompositing> _clientCustomCompositor;
	NSObject*<OS_dispatch_queue> _clientErrorQ;
	NSError* _clientError;
	NSObject*<OS_dispatch_queue> _renderContextQ;
	AVVideoCompositionRenderContext* _renderContext;
	NSObject*<OS_dispatch_queue> _finishedRequestQ;

}

@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
+(id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2 ;
+(BOOL)_colorPropertiesAreSetInVideoComposition:(id)arg1 ;
-(void)dealloc;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(BOOL)supportsWideColorSourceFrames;
-(BOOL)supportsHDRSourceFrames;
-(BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(id*)arg1 ;
-(void)detachVideoComposition;
-(id)getAndClearClientError;
-(OpaqueFigVideoCompositorRef)_copyFigVideoCompositor;
-(void)_willDeallocOrFinalize;
-(id)initWithVideoComposition:(id)arg1 ;
-(int)_setupFigCallbacks;
-(BOOL)_validateSourcePixelBufferAttributes:(id)arg1 andReturnException:(id*)arg2 ;
-(BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)arg1 andReturnException:(id*)arg2 ;
-(void)_cleanupFigCallbacks;
-(void)compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 didFinishWithComposedPixelBuffer:(CVBufferRef)arg2 ;
-(void)compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 didFinishWithError:(id)arg2 ;
-(void)compositionFrameDidCancel:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(int)_compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 atTime:(SCD_Struct_AV6)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4 ;
-(int)_customCompositorShouldAnticipateRenderingFromTime:(SCD_Struct_AV6)arg1 toTime:(SCD_Struct_AV6)arg2 andThenFromTime:(SCD_Struct_AV6)arg3 toTime:(SCD_Struct_AV6)arg4 ;
-(int)_customCompositorShouldPrerollForRenderingFromTime:(SCD_Struct_AV6)arg1 toTime:(SCD_Struct_AV6)arg2 andThenFromTime:(SCD_Struct_AV6)arg3 toTime:(SCD_Struct_AV6)arg4 requestID:(long long)arg5 ;
-(int)_customCompositorShouldCancelPendingFrames;
-(void)_customCompositorFigPropertyDidChange;
@end
