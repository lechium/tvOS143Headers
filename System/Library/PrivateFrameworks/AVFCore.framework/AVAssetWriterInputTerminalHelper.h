/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterInputHelper.h>
#import <AVFCore/AVAssetWriterInputMediaDataRequesterDelegate.h>

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	long long _terminalStatus;
	BOOL _didRequestMediaDataOnce;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)status;
-(void)markAsFinished;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(void)markCurrentPassAsFinished;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(void)stopRequestingMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(BOOL)mediaDataRequesterShouldRequestMediaData;
@end
