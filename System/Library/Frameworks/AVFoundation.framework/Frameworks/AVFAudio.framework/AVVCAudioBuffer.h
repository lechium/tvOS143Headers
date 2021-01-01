/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVVCAudioBuffer : NSObject {

	void* _impl;

}

@property (readonly) int channels; 
@property (readonly) int bytesCapacity; 
@property (assign) int bytesDataSize; 
@property (readonly) void* data; 
@property (readonly) int packetDescriptionCapacity; 
@property (readonly) int packetDescriptionCount; 
@property (readonly) AudioStreamPacketDescription* packetDescriptions; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) AudioStreamBasicDescription* streamDescription; 
@property (readonly) BOOL upsamplingSourceAudio; 
@property (readonly) BOOL remoteVoiceActivityAvailable; 
@property (readonly) unsigned char remoteVoiceActivityRMS; 
@property (readonly) unsigned char remoteVoiceActivityVAD; 
-(void)dealloc;
-(void)finalize;
-(void*)data;
-(int)channels;
-(AudioStreamPacketDescription*)packetDescriptions;
-(AudioStreamBasicDescription*)streamDescription;
-(int)bytesCapacity;
-(int)bytesDataSize;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(int)packetDescriptionCount;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
-(unsigned long long)timeStamp;
-(unsigned char)remoteVoiceActivityRMS;
-(unsigned char)remoteVoiceActivityVAD;
-(BOOL)remoteVoiceActivityAvailable;
-(BOOL)upsamplingSourceAudio;
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3 ;
@end

