/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BWFormatRequirements;

@interface BWNodeInputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	int _passthroughMode;
	BOOL _conversionToPassthroughModeNeverAllowed;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;                 //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                       //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) BOOL conversionToPassthroughModeNeverAllowed;              //@synthesize conversionToPassthroughModeNeverAllowed=_conversionToPassthroughModeNeverAllowed - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                   //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                                    //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                           //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)setPassthroughMode:(int)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(int)passthroughMode;
-(void)setConversionToPassthroughModeNeverAllowed:(BOOL)arg1 ;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)retainedBufferCount;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(BOOL)conversionToPassthroughModeNeverAllowed;
@end

