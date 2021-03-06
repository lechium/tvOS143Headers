/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSData;

@interface SFSSAudioData : NSObject {

	NSData* _audioData;
	long long _packetCount;
	NSData* _packetDescriptions;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSData * audioData;                            //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) long long packetCount;                         //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,retain) NSData * packetDescriptions;                   //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
-(double)duration;
-(long long)packetCount;
-(NSData *)packetDescriptions;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 rawData:(id)arg2 ;
-(BOOL)populateWithPCMData:(id)arg1 ;
-(BOOL)populateWithOpusData:(id)arg1 ;
-(void)setPacketDescriptions:(NSData *)arg1 ;
@end

