/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class VCAudioPayloadConfig;

@interface VCAudioPayload : NSObject {

	SoundDec_t* _encoder;
	VCAudioPayloadConfig* _config;
	unsigned _bitrate;
	BOOL _shouldReset;

}

@property (nonatomic,readonly) VCAudioPayloadConfig * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) unsigned bitrate;                           //@synthesize bitrate=_bitrate - In the implementation block
-(id)description;
-(void)dealloc;
-(VCAudioPayloadConfig *)config;
-(id)initWithConfig:(id)arg1 ;
-(unsigned)bitrate;
-(void)setCurrentDTXEnable:(BOOL)arg1 ;
-(BOOL)setBitrate:(unsigned)arg1 ;
-(BOOL)getMagicCookie:(char*)arg1 withLength:(unsigned*)arg2 ;
-(BOOL)createEncoderWithInputFormat:(AudioStreamBasicDescription*)arg1 ;
-(int)encodeAudio:(opaqueVCAudioBufferListRef)arg1 numInputSamples:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 ;
-(BOOL)isDTXEmptyPacket:(unsigned)arg1 ;
-(void)resetEncoder;
-(void)resetEncoderWithSampleBuffer:(char*)arg1 numBytes:(int)arg2 ;
@end

