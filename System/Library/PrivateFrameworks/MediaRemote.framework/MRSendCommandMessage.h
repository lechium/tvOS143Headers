/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSDictionary, NSDate, MRPlayerPath;

@interface MRSendCommandMessage : MRProtocolMessage {

	NSDictionary* _options;
	NSDate* _serializationDate;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSDate * serializationDate;              //@synthesize serializationDate=_serializationDate - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) unsigned appOptions; 
-(unsigned long long)type;
-(NSDictionary *)options;
-(unsigned)command;
-(MRPlayerPath *)playerPath;
-(unsigned)appOptions;
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 ;
-(NSDate *)serializationDate;
@end

