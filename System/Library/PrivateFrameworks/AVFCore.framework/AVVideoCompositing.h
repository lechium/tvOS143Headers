/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol AVVideoCompositing <NSObject>
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
@optional
-(void)cancelAllPendingVideoCompositionRequests;
-(void)anticipateRenderingUsingHint:(id)arg1;
-(void)prerollForRenderingUsingHint:(id)arg1;
-(BOOL)supportsWideColorSourceFrames;
-(BOOL)supportsHDRSourceFrames;

@required
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)renderContextChanged:(id)arg1;
-(void)startVideoCompositionRequest:(id)arg1;
-(NSDictionary *)sourcePixelBufferAttributes;

@end

