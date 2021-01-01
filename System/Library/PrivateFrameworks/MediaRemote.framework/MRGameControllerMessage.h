/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage {

	unsigned long long _priority;

}

@property (nonatomic,readonly) _MRGameControllerMessageProtobuf * event; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(_MRGameControllerMessageProtobuf *)event;
-(BOOL)shouldLog;
-(id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2 ;
-(unsigned long long)controllerID;
@end

