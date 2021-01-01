/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	BOOL _builtInMicrophoneStereoAudioCaptureEnabled;
	int _builtInMicrophonePosition;

}

@property (assign,nonatomic) BOOL builtInMicrophoneStereoAudioCaptureEnabled;              //@synthesize builtInMicrophoneStereoAudioCaptureEnabled=_builtInMicrophoneStereoAudioCaptureEnabled - In the implementation block
@property (assign,nonatomic) int builtInMicrophonePosition;                                //@synthesize builtInMicrophonePosition=_builtInMicrophonePosition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)builtInMicrophonePosition;
-(BOOL)builtInMicrophoneStereoAudioCaptureEnabled;
-(void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(void)setBuiltInMicrophonePosition:(int)arg1 ;
@end

