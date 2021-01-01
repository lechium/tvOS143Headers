/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

@interface AUV2BridgeBus : AUAudioUnitBus {

	AUAudioUnitV2Bridge* _owner;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _scope;
	unsigned _element;

}
-(void)setEnabled:(BOOL)arg1 ;
-(id)format;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(id)initWithOwner:(id)arg1 au:(OpaqueAudioComponentInstanceRef)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
@end

