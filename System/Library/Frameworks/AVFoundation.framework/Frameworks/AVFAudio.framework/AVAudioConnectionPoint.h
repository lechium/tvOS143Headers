/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {

	AVAudioNode* _node;
	unsigned long long _bus;
	void* _reserved;

}

@property (nonatomic,__weak,readonly) AVAudioNode * node;              //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned long long bus;                 //@synthesize bus=_bus - In the implementation block
+(id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(AVAudioNode *)node;
-(unsigned long long)bus;
-(id)initWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
@end

