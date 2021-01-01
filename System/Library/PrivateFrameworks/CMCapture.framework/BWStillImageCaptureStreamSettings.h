/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BWAdaptiveBracketingParameters;
@class NSString, BWBracketSettings, NSArray, NSDictionary, NSMutableArray;

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {

	NSString* _portType;
	NSString* _sensorIDString;
	int _captureType;
	unsigned long long _captureFlags;
	BWBracketSettings* _bracketSettings;
	NSArray* _validBracketedCaptureSequenceNumbers;
	SCD_Struct_BW7 _preferredTimeMachinePTS;
	int _timeMachineFrameCount;
	int _referenceFrameIndex;
	NSArray* _timeMachineBracketedCaptureParams;
	NSDictionary* _preBracketFrameCaptureParams;
	NSArray* _unifiedBracketedCaptureParams;
	BOOL _lensStabilizationEnabledForClientBracket;
	os_unfair_lock_s _adaptiveBracketingLock;
	id<BWAdaptiveBracketingParameters> _adaptiveBracketingParameters;
	NSMutableArray* _adaptivePreBracketFrameCaptureParams;
	NSMutableArray* _adaptiveUnifiedBracketedCaptureParams;
	BOOL _reachedEndOfAdaptiveBracketing;
	SCD_Struct_BW7 _adaptiveBracketingLastFramePTS;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,retain) NSString * sensorIDString;                                     //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) int captureType;                                             //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) unsigned long long captureFlags;                             //@synthesize captureFlags=_captureFlags - In the implementation block
@property (nonatomic,readonly) int timeMachineFrameCount;                                   //@synthesize timeMachineFrameCount=_timeMachineFrameCount - In the implementation block
@property (nonatomic,readonly) BWBracketSettings * bracketSettings;                         //@synthesize bracketSettings=_bracketSettings - In the implementation block
@property (nonatomic,readonly) NSArray * validBracketedCaptureSequenceNumbers;              //@synthesize validBracketedCaptureSequenceNumbers=_validBracketedCaptureSequenceNumbers - In the implementation block
@property (nonatomic,readonly) BOOL hasValidFrames; 
@property (nonatomic,readonly) int expectedFrameCount; 
@property (nonatomic,readonly) int expectedFrameCaptureCount; 
@property (assign,nonatomic) SCD_Struct_BW7 preferredTimeMachinePTS;                        //@synthesize preferredTimeMachinePTS=_preferredTimeMachinePTS - In the implementation block
@property (nonatomic,readonly) int expectedTimeMachineFrameCaptureCount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)portType;
-(unsigned long long)captureFlags;
-(BWBracketSettings *)bracketSettings;
-(int)captureType;
-(NSString *)sensorIDString;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(SCD_Struct_BW7)preferredTimeMachinePTS;
-(int)timeMachineFrameCount;
-(int)referenceFrameIndex;
-(id)timeMachineBracketedCaptureParams;
-(id)preBracketFrameCaptureParams;
-(id)unifiedBracketedCaptureParams;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(int)expectedTimeMachineFrameCaptureCount;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 validBracketedCaptureSequenceNumbers:(id)arg8 ;
-(BOOL)hasValidFrames;
-(int)expectedFrameCount;
-(int)expectedFrameCaptureCount;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1 ;
-(BOOL)isUnifiedBracketingErrorRecoveryFrame:(opaqueCMSampleBufferRef)arg1 isReferenceFrame:(BOOL)arg2 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 adaptiveBracketingParameters:(id)arg5 ;
-(id)adaptiveBracketingParameters;
-(id)adaptivePreBracketFrameCaptureParams;
-(id)adaptiveUnifiedBracketedCaptureParams;
-(int)adaptiveBracketingGroupCaptureCount;
-(int)currentExpectedAdaptiveBracketedFrameCaptureCount;
-(int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg1 ;
-(BOOL)reachedEndOfAdaptiveBracketing;
-(void)setReachedEndOfAdaptiveBracketing:(BOOL)arg1 ;
-(SCD_Struct_BW7)adaptiveBracketingLastFramePTS;
-(void)setAdaptiveBracketingLastFramePTS:(SCD_Struct_BW7)arg1 ;
-(void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg1 preBracketFrameCaptureParams:(id)arg2 ;
-(void)setSensorIDString:(NSString *)arg1 ;
-(void)setPreferredTimeMachinePTS:(SCD_Struct_BW7)arg1 ;
@end

