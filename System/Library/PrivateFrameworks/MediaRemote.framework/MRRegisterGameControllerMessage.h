/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRRegisterGameControllerMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRGameControllerPropertiesProtobuf * properties; 
-(unsigned long long)type;
-(id)initWithProperties:(id)arg1 ;
-(_MRGameControllerPropertiesProtobuf *)properties;
@end

