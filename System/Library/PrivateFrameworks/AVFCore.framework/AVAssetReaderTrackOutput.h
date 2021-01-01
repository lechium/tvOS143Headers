/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(AVAssetTrack *)track;
-(id)mediaType;
-(id)_asset;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(NSString *)audioTimePitchAlgorithm;
-(NSDictionary *)outputSettings;
-(BOOL)appliesPreferredTrackTransform;
-(BOOL)_isAttachedToAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)_formatDescriptions;
-(unsigned)_getUniformMediaSubtypeIfExists;
-(id)_attachedAdaptor;
@end

