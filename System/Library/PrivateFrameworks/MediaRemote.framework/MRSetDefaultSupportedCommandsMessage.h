/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRNowPlayingState, NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {

	MRNowPlayingState* _state;

}

@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) NSString * bundleID; 
-(unsigned long long)type;
-(NSString *)bundleID;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(NSArray *)supportedCommands;
-(id)initWithDefaultSupportedCommands:(id)arg1 forPlayerPath:(id)arg2 ;
@end
